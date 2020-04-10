/*
 * Copyright (C) 2020 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "GeneratedTestUtils.h"

#include <android-base/logging.h>
#include <gtest/gtest.h>

#include <algorithm>
#include <memory>
#include <string>
#include <utility>
#include <vector>

#include "TestHarness.h"
#include "TestNeuralNetworksWrapper.h"

namespace android::nn::generated_tests {
using namespace test_wrapper;
using namespace test_helper;

static OperandType getOperandType(const TestOperand& op, bool testDynamicOutputShape) {
    auto dims = op.dimensions;
    if (testDynamicOutputShape && op.lifetime == TestOperandLifeTime::SUBGRAPH_OUTPUT) {
        dims.assign(dims.size(), 0);
    }
    if (op.type == TestOperandType::TENSOR_QUANT8_SYMM_PER_CHANNEL) {
        return OperandType(
                static_cast<Type>(op.type), dims,
                SymmPerChannelQuantParams(op.channelQuant.scales, op.channelQuant.channelDim));
    } else {
        return OperandType(static_cast<Type>(op.type), dims, op.scale, op.zeroPoint);
    }
}

static void createModelFromSubgraph(const TestSubgraph& subgraph, bool testDynamicOutputShape,
                                    const std::vector<TestSubgraph>& refSubgraphs, Model* model,
                                    Model* refModels) {
    // Operands.
    for (const auto& operand : subgraph.operands) {
        auto type = getOperandType(operand, testDynamicOutputShape);
        auto index = model->addOperand(&type);

        switch (operand.lifetime) {
            case TestOperandLifeTime::CONSTANT_COPY:
            case TestOperandLifeTime::CONSTANT_REFERENCE: {
                model->setOperandValue(index, operand.data.get<void>(), operand.data.size());
            } break;
            case TestOperandLifeTime::NO_VALUE: {
                model->setOperandValue(index, nullptr, 0);
            } break;
            case TestOperandLifeTime::SUBGRAPH: {
                uint32_t refIndex = *operand.data.get<uint32_t>();
                CHECK_LT(refIndex, refSubgraphs.size());
                const TestSubgraph& refSubgraph = refSubgraphs[refIndex];
                Model* refModel = &refModels[refIndex];
                if (!refModel->isFinished()) {
                    createModelFromSubgraph(refSubgraph, testDynamicOutputShape, refSubgraphs,
                                            refModel, refModels);
                    ASSERT_EQ(refModel->finish(), Result::NO_ERROR);
                    ASSERT_TRUE(refModel->isValid());
                }
                model->setOperandValueFromModel(index, refModel);
            } break;
            case TestOperandLifeTime::SUBGRAPH_INPUT:
            case TestOperandLifeTime::SUBGRAPH_OUTPUT:
            case TestOperandLifeTime::TEMPORARY_VARIABLE: {
                // Nothing to do here.
            } break;
        }
    }

    // Operations.
    for (const auto& operation : subgraph.operations) {
        model->addOperation(static_cast<int>(operation.type), operation.inputs, operation.outputs);
    }

    // Inputs and outputs.
    model->identifyInputsAndOutputs(subgraph.inputIndexes, subgraph.outputIndexes);
}

void createModel(const TestModel& testModel, bool testDynamicOutputShape, GeneratedModel* model) {
    ASSERT_NE(nullptr, model);

    std::vector<Model> refModels(testModel.referenced.size());
    createModelFromSubgraph(testModel.main, testDynamicOutputShape, testModel.referenced, model,
                            refModels.data());
    model->setRefModels(std::move(refModels));

    // Relaxed computation.
    model->relaxComputationFloat32toFloat16(testModel.isRelaxed);

    ASSERT_TRUE(model->isValid());
}

void createRequest(const TestModel& testModel, Execution* execution,
                   std::vector<TestBuffer>* outputs) {
    ASSERT_NE(nullptr, execution);
    ASSERT_NE(nullptr, outputs);

    // Model inputs.
    for (uint32_t i = 0; i < testModel.main.inputIndexes.size(); i++) {
        const auto& operand = testModel.main.operands[testModel.main.inputIndexes[i]];
        ASSERT_EQ(Result::NO_ERROR,
                  execution->setInput(i, operand.data.get<void>(), operand.data.size()));
    }

    // Model outputs.
    for (uint32_t i = 0; i < testModel.main.outputIndexes.size(); i++) {
        const auto& operand = testModel.main.operands[testModel.main.outputIndexes[i]];

        // In the case of zero-sized output, we should at least provide a one-byte buffer.
        // This is because zero-sized tensors are only supported internally to the runtime, or
        // reported in output shapes. It is illegal for the client to pre-specify a zero-sized
        // tensor as model output. Otherwise, we will have two semantic conflicts:
        // - "Zero dimension" conflicts with "unspecified dimension".
        // - "Omitted operand buffer" conflicts with "zero-sized operand buffer".
        const size_t bufferSize = std::max<size_t>(operand.data.size(), 1);

        outputs->emplace_back(bufferSize);
        ASSERT_EQ(Result::NO_ERROR,
                  execution->setOutput(i, outputs->back().getMutable<void>(), bufferSize));
    }
}

}  // namespace android::nn::generated_tests
