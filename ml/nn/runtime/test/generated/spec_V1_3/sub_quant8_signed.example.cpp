// Generated from sub_quant8_signed.mod.py
// DO NOT EDIT
// clang-format off
#include "TestHarness.h"
using namespace test_helper;

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -125, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -124, -125, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -123, -124, -125, -126, -127, -128, -128, -128, -128, -128, -128, -128, 122, 121, 120, 119, 118, 117, -128, -128, -128, -128, -128, -128, 123, 122, 121, 120, 119, 118, -127, -128, -128, -128, -128, -128, 124, 123, 122, 121, 120, 119, -126, -127, -128, -128, -128, -128, 125, 124, 123, 122, 121, 120, -125, -126, -127, -128, -128, -128, 126, 125, 124, 123, 122, 121, -124, -125, -126, -127, -128, -128, 127, 126, 125, 124, 123, 122, -123, -124, -125, -126, -127, -128}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model = TestModelManager::get().add("sub_quant8_signed", get_test_model());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_all_inputs_as_internal() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {4, 7},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -125, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -124, -125, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -123, -124, -125, -126, -127, -128, -128, -128, -128, -128, -128, -128, 122, 121, 120, 119, 118, 117, -128, -128, -128, -128, -128, -128, 123, 122, 121, 120, 119, 118, -127, -128, -128, -128, -128, -128, 124, 123, 122, 121, 120, 119, -126, -127, -128, -128, -128, -128, 125, 124, 123, 122, 121, 120, -125, -126, -127, -128, -128, -128, 126, 125, 124, 123, 122, 121, -124, -125, -126, -127, -128, -128, 127, 126, 125, 124, 123, 122, -123, -124, -125, -126, -127, -128}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {4, 5, 6},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {7, 8, 9},
                            .outputs = {1},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_all_inputs_as_internal = TestModelManager::get().add("sub_quant8_signed_all_inputs_as_internal", get_test_model_all_inputs_as_internal());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_2() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -125, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -124, -125, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -123, -124, -125, -126, -127, -128, -128, -128, -128, -128, -128, -128, -122, -123, -124, -125, -126, -127, -128, -128, -128, -128, -128, -128, 123, 122, 121, 120, 119, 118, -127, -128, -128, -128, -128, -128, 124, 123, 122, 121, 120, 119, -126, -127, -128, -128, -128, -128, 125, 124, 123, 122, 121, 120, -125, -126, -127, -128, -128, -128, 126, 125, 124, 123, 122, 121, -124, -125, -126, -127, -128, -128, 127, 126, 125, 124, 123, 122, -123, -124, -125, -126, -127, -128, 127, 127, 126, 125, 124, 123, -122, -123, -124, -125, -126, -127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_2 = TestModelManager::get().add("sub_quant8_signed_2", get_test_model_2());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_all_inputs_as_internal_2() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {4, 7},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -125, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -124, -125, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -123, -124, -125, -126, -127, -128, -128, -128, -128, -128, -128, -128, -122, -123, -124, -125, -126, -127, -128, -128, -128, -128, -128, -128, 123, 122, 121, 120, 119, 118, -127, -128, -128, -128, -128, -128, 124, 123, 122, 121, 120, 119, -126, -127, -128, -128, -128, -128, 125, 124, 123, 122, 121, 120, -125, -126, -127, -128, -128, -128, 126, 125, 124, 123, 122, 121, -124, -125, -126, -127, -128, -128, 127, 126, 125, 124, 123, 122, -123, -124, -125, -126, -127, -128, 127, 127, 126, 125, 124, 123, -122, -123, -124, -125, -126, -127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {4, 5, 6},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {7, 8, 9},
                            .outputs = {1},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_all_inputs_as_internal_2 = TestModelManager::get().add("sub_quant8_signed_all_inputs_as_internal_2", get_test_model_all_inputs_as_internal_2());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_3() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8, -108, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 92, -8, -108, -128, -128, -128, -128, -128, -128, -128, -128, -128, 127, 92, -8, -108, -128, -128, -128, -128, -128, -128, -128, -128, 127, 127, 92, -8, -108, -128, -128, -128, -128, -128, -128, -128, 127, 127, 127, 92, -8, -108, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 92, -8, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -8, -108, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, 92, -8, -108, -128, -128, -128, 127, 127, 127, 127, 127, 127, 127, 92, -8, -108, -128, -128, 127, 127, 127, 127, 127, 127, 127, 127, 92, -8, -108, -128, 127, 127, 127, 127, 127, 127, 127, 127, 127, 92, -8, -108, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 92, -8}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_3 = TestModelManager::get().add("sub_quant8_signed_3", get_test_model_3());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_all_inputs_as_internal_3() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {4, 7},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8, -108, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 92, -8, -108, -128, -128, -128, -128, -128, -128, -128, -128, -128, 127, 92, -8, -108, -128, -128, -128, -128, -128, -128, -128, -128, 127, 127, 92, -8, -108, -128, -128, -128, -128, -128, -128, -128, 127, 127, 127, 92, -8, -108, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 92, -8, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -8, -108, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, 92, -8, -108, -128, -128, -128, 127, 127, 127, 127, 127, 127, 127, 92, -8, -108, -128, -128, 127, 127, 127, 127, 127, 127, 127, 127, 92, -8, -108, -128, 127, 127, 127, 127, 127, 127, 127, 127, 127, 92, -8, -108, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 92, -8}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {4, 5, 6},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {7, 8, 9},
                            .outputs = {1},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_all_inputs_as_internal_3 = TestModelManager::get().add("sub_quant8_signed_all_inputs_as_internal_3", get_test_model_all_inputs_as_internal_3());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_4() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8, -8, -8, -8, -8, -8, -33, -33, -33, -33, -33, -34, -8, -8, -8, -8, -8, -8, -33, -33, -33, -33, -33, -33, -8, -8, -8, -8, -8, -8, -33, -33, -33, -33, -33, -33, -8, -8, -8, -8, -8, -8, -33, -33, -33, -33, -33, -33, -8, -8, -8, -8, -8, -8, -33, -33, -33, -33, -33, -33, -8, -8, -8, -8, -8, -8, -32, -33, -33, -33, -33, -33, 17, 17, 17, 17, 17, 16, -8, -8, -8, -8, -8, -8, 17, 17, 17, 17, 17, 17, -8, -8, -8, -8, -8, -8, 17, 17, 17, 17, 17, 17, -8, -8, -8, -8, -8, -8, 17, 17, 17, 17, 17, 17, -8, -8, -8, -8, -8, -8, 17, 17, 17, 17, 17, 17, -8, -8, -8, -8, -8, -8, 18, 17, 17, 17, 17, 17, -8, -8, -8, -8, -8, -8}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_4 = TestModelManager::get().add("sub_quant8_signed_4", get_test_model_4());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_all_inputs_as_internal_4() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {4, 7},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8, -8, -8, -8, -8, -8, -33, -33, -33, -33, -33, -34, -8, -8, -8, -8, -8, -8, -33, -33, -33, -33, -33, -33, -8, -8, -8, -8, -8, -8, -33, -33, -33, -33, -33, -33, -8, -8, -8, -8, -8, -8, -33, -33, -33, -33, -33, -33, -8, -8, -8, -8, -8, -8, -33, -33, -33, -33, -33, -33, -8, -8, -8, -8, -8, -8, -32, -33, -33, -33, -33, -33, 17, 17, 17, 17, 17, 16, -8, -8, -8, -8, -8, -8, 17, 17, 17, 17, 17, 17, -8, -8, -8, -8, -8, -8, 17, 17, 17, 17, 17, 17, -8, -8, -8, -8, -8, -8, 17, 17, 17, 17, 17, 17, -8, -8, -8, -8, -8, -8, 17, 17, 17, 17, 17, 17, -8, -8, -8, -8, -8, -8, 18, 17, 17, 17, 17, 17, -8, -8, -8, -8, -8, -8}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {4, 5, 6},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {7, 8, 9},
                            .outputs = {1},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_all_inputs_as_internal_4 = TestModelManager::get().add("sub_quant8_signed_all_inputs_as_internal_4", get_test_model_all_inputs_as_internal_4());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_5() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -125, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -124, -125, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -123, -124, -125, -126, -127, -128, -128, -128, -128, -128, -128, -128, -122, -123, -124, -125, -126, -127, -128, -128, -128, -128, -128, -128, 123, 122, 121, 120, 119, 118, -127, -128, -128, -128, -128, -128, 124, 123, 122, 121, 120, 119, -126, -127, -128, -128, -128, -128, 125, 124, 123, 122, 121, 120, -125, -126, -127, -128, -128, -128, 126, 125, 124, 123, 122, 121, -124, -125, -126, -127, -128, -128, 127, 126, 125, 124, 123, 122, -123, -124, -125, -126, -127, -128, 127, 127, 126, 125, 124, 123, -122, -123, -124, -125, -126, -127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_5 = TestModelManager::get().add("sub_quant8_signed_5", get_test_model_5());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_all_inputs_as_internal_5() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {4, 7},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -125, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -124, -125, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -123, -124, -125, -126, -127, -128, -128, -128, -128, -128, -128, -128, -122, -123, -124, -125, -126, -127, -128, -128, -128, -128, -128, -128, 123, 122, 121, 120, 119, 118, -127, -128, -128, -128, -128, -128, 124, 123, 122, 121, 120, 119, -126, -127, -128, -128, -128, -128, 125, 124, 123, 122, 121, 120, -125, -126, -127, -128, -128, -128, 126, 125, 124, 123, 122, 121, -124, -125, -126, -127, -128, -128, 127, 126, 125, 124, 123, 122, -123, -124, -125, -126, -127, -128, 127, 127, 126, 125, 124, 123, -122, -123, -124, -125, -126, -127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-127}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {4, 5, 6},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {7, 8, 9},
                            .outputs = {1},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_all_inputs_as_internal_5 = TestModelManager::get().add("sub_quant8_signed_all_inputs_as_internal_5", get_test_model_all_inputs_as_internal_5());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_6() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -125, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -124, -125, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -123, -124, -125, -126, -127, -128, -128, -128, -128, -128, -128, -128, -122, -123, -124, -125, -126, -127, -128, -128, -128, -128, -128, -128, -121, -122, -123, -124, -125, -126, -128, -128, -128, -128, -128, -128, 124, 123, 122, 121, 120, 119, -126, -127, -128, -128, -128, -128, 125, 124, 123, 122, 121, 120, -125, -126, -127, -128, -128, -128, 126, 125, 124, 123, 122, 121, -124, -125, -126, -127, -128, -128, 127, 126, 125, 124, 123, 122, -123, -124, -125, -126, -127, -128, 127, 127, 126, 125, 124, 123, -122, -123, -124, -125, -126, -127, 127, 127, 127, 126, 125, 124, -121, -122, -123, -124, -125, -126}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_6 = TestModelManager::get().add("sub_quant8_signed_6", get_test_model_6());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_all_inputs_as_internal_6() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {4, 7},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -125, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -124, -125, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -123, -124, -125, -126, -127, -128, -128, -128, -128, -128, -128, -128, -122, -123, -124, -125, -126, -127, -128, -128, -128, -128, -128, -128, -121, -122, -123, -124, -125, -126, -128, -128, -128, -128, -128, -128, 124, 123, 122, 121, 120, 119, -126, -127, -128, -128, -128, -128, 125, 124, 123, 122, 121, 120, -125, -126, -127, -128, -128, -128, 126, 125, 124, 123, 122, 121, -124, -125, -126, -127, -128, -128, 127, 126, 125, 124, 123, 122, -123, -124, -125, -126, -127, -128, 127, 127, 126, 125, 124, 123, -122, -123, -124, -125, -126, -127, 127, 127, 127, 126, 125, 124, -121, -122, -123, -124, -125, -126}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-127}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {4, 5, 6},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {7, 8, 9},
                            .outputs = {1},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_all_inputs_as_internal_6 = TestModelManager::get().add("sub_quant8_signed_all_inputs_as_internal_6", get_test_model_all_inputs_as_internal_6());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_7() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({92, -8, -108, -128, -128, -128, -128, -128, -128, -128, -128, -128, 127, 92, -8, -108, -128, -128, -128, -128, -128, -128, -128, -128, 127, 127, 92, -8, -108, -128, -128, -128, -128, -128, -128, -128, 127, 127, 127, 92, -8, -108, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 92, -8, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 92, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, 92, -8, -108, -128, -128, -128, 127, 127, 127, 127, 127, 127, 127, 92, -8, -108, -128, -128, 127, 127, 127, 127, 127, 127, 127, 127, 92, -8, -108, -128, 127, 127, 127, 127, 127, 127, 127, 127, 127, 92, -8, -108, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 92, -8, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 92}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_7 = TestModelManager::get().add("sub_quant8_signed_7", get_test_model_7());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_all_inputs_as_internal_7() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {4, 7},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({92, -8, -108, -128, -128, -128, -128, -128, -128, -128, -128, -128, 127, 92, -8, -108, -128, -128, -128, -128, -128, -128, -128, -128, 127, 127, 92, -8, -108, -128, -128, -128, -128, -128, -128, -128, 127, 127, 127, 92, -8, -108, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 92, -8, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 92, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, 92, -8, -108, -128, -128, -128, 127, 127, 127, 127, 127, 127, 127, 92, -8, -108, -128, -128, 127, 127, 127, 127, 127, 127, 127, 127, 92, -8, -108, -128, 127, 127, 127, 127, 127, 127, 127, 127, 127, 92, -8, -108, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 92, -8, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 92}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-127}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {4, 5, 6},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {7, 8, 9},
                            .outputs = {1},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_all_inputs_as_internal_7 = TestModelManager::get().add("sub_quant8_signed_all_inputs_as_internal_7", get_test_model_all_inputs_as_internal_7());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_8() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8, -8, -8, -8, -8, -8, -33, -33, -33, -33, -33, -33, -8, -8, -8, -8, -8, -8, -33, -33, -33, -33, -33, -33, -8, -8, -8, -8, -8, -8, -33, -33, -33, -33, -33, -33, -8, -8, -8, -8, -8, -8, -33, -33, -33, -33, -33, -33, -8, -8, -8, -8, -8, -8, -32, -33, -33, -33, -33, -33, -7, -8, -8, -8, -8, -8, -32, -32, -33, -33, -33, -33, 17, 17, 17, 17, 17, 17, -8, -8, -8, -8, -8, -8, 17, 17, 17, 17, 17, 17, -8, -8, -8, -8, -8, -8, 17, 17, 17, 17, 17, 17, -8, -8, -8, -8, -8, -8, 17, 17, 17, 17, 17, 17, -8, -8, -8, -8, -8, -8, 18, 17, 17, 17, 17, 17, -8, -8, -8, -8, -8, -8, 18, 18, 17, 17, 17, 17, -7, -8, -8, -8, -8, -8}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_8 = TestModelManager::get().add("sub_quant8_signed_8", get_test_model_8());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_all_inputs_as_internal_8() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {4, 7},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8, -8, -8, -8, -8, -8, -33, -33, -33, -33, -33, -33, -8, -8, -8, -8, -8, -8, -33, -33, -33, -33, -33, -33, -8, -8, -8, -8, -8, -8, -33, -33, -33, -33, -33, -33, -8, -8, -8, -8, -8, -8, -33, -33, -33, -33, -33, -33, -8, -8, -8, -8, -8, -8, -32, -33, -33, -33, -33, -33, -7, -8, -8, -8, -8, -8, -32, -32, -33, -33, -33, -33, 17, 17, 17, 17, 17, 17, -8, -8, -8, -8, -8, -8, 17, 17, 17, 17, 17, 17, -8, -8, -8, -8, -8, -8, 17, 17, 17, 17, 17, 17, -8, -8, -8, -8, -8, -8, 17, 17, 17, 17, 17, 17, -8, -8, -8, -8, -8, -8, 18, 17, 17, 17, 17, 17, -8, -8, -8, -8, -8, -8, 18, 18, 17, 17, 17, 17, -7, -8, -8, -8, -8, -8}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-127}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {4, 5, 6},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {7, 8, 9},
                            .outputs = {1},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_all_inputs_as_internal_8 = TestModelManager::get().add("sub_quant8_signed_all_inputs_as_internal_8", get_test_model_all_inputs_as_internal_8());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_9() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-127, -127, -127, -127, -127, -127, -128, -128, -128, -128, -128, -128, -126, -126, -126, -126, -126, -126, -128, -128, -128, -128, -128, -128, -125, -125, -125, -125, -125, -125, -127, -127, -127, -127, -127, -127, -124, -124, -124, -124, -124, -124, -126, -126, -126, -126, -126, -126, -123, -123, -123, -123, -123, -123, -125, -125, -125, -125, -125, -125, -122, -122, -122, -122, -122, -122, -124, -124, -124, -124, -124, -124, 123, 123, 123, 123, 123, 123, 121, 121, 121, 121, 121, 121, 124, 124, 124, 124, 124, 124, 122, 122, 122, 122, 122, 122, 125, 125, 125, 125, 125, 125, 123, 123, 123, 123, 123, 123, 126, 126, 126, 126, 126, 126, 124, 124, 124, 124, 124, 124, 127, 127, 127, 127, 127, 127, 125, 125, 125, 125, 125, 125, 127, 127, 127, 127, 127, 127, 126, 126, 126, 126, 126, 126}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_9 = TestModelManager::get().add("sub_quant8_signed_9", get_test_model_9());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_all_inputs_as_internal_9() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {4, 7},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-127, -127, -127, -127, -127, -127, -128, -128, -128, -128, -128, -128, -126, -126, -126, -126, -126, -126, -128, -128, -128, -128, -128, -128, -125, -125, -125, -125, -125, -125, -127, -127, -127, -127, -127, -127, -124, -124, -124, -124, -124, -124, -126, -126, -126, -126, -126, -126, -123, -123, -123, -123, -123, -123, -125, -125, -125, -125, -125, -125, -122, -122, -122, -122, -122, -122, -124, -124, -124, -124, -124, -124, 123, 123, 123, 123, 123, 123, 121, 121, 121, 121, 121, 121, 124, 124, 124, 124, 124, 124, 122, 122, 122, 122, 122, 122, 125, 125, 125, 125, 125, 125, 123, 123, 123, 123, 123, 123, 126, 126, 126, 126, 126, 126, 124, 124, 124, 124, 124, 124, 127, 127, 127, 127, 127, 127, 125, 125, 125, 125, 125, 125, 127, 127, 127, 127, 127, 127, 126, 126, 126, 126, 126, 126}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {4, 5, 6},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {7, 8, 9},
                            .outputs = {1},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_all_inputs_as_internal_9 = TestModelManager::get().add("sub_quant8_signed_all_inputs_as_internal_9", get_test_model_all_inputs_as_internal_9());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_10() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-126, -126, -126, -126, -126, -126, -128, -128, -128, -128, -128, -128, -125, -125, -125, -125, -125, -125, -127, -127, -127, -127, -127, -127, -124, -124, -124, -124, -124, -124, -126, -126, -126, -126, -126, -126, -123, -123, -123, -123, -123, -123, -125, -125, -125, -125, -125, -125, -122, -122, -122, -122, -122, -122, -124, -124, -124, -124, -124, -124, -121, -121, -121, -121, -121, -121, -123, -123, -123, -123, -123, -123, 124, 124, 124, 124, 124, 124, 122, 122, 122, 122, 122, 122, 125, 125, 125, 125, 125, 125, 123, 123, 123, 123, 123, 123, 126, 126, 126, 126, 126, 126, 124, 124, 124, 124, 124, 124, 127, 127, 127, 127, 127, 127, 125, 125, 125, 125, 125, 125, 127, 127, 127, 127, 127, 127, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_10 = TestModelManager::get().add("sub_quant8_signed_10", get_test_model_10());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_all_inputs_as_internal_10() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {4, 7},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-126, -126, -126, -126, -126, -126, -128, -128, -128, -128, -128, -128, -125, -125, -125, -125, -125, -125, -127, -127, -127, -127, -127, -127, -124, -124, -124, -124, -124, -124, -126, -126, -126, -126, -126, -126, -123, -123, -123, -123, -123, -123, -125, -125, -125, -125, -125, -125, -122, -122, -122, -122, -122, -122, -124, -124, -124, -124, -124, -124, -121, -121, -121, -121, -121, -121, -123, -123, -123, -123, -123, -123, 124, 124, 124, 124, 124, 124, 122, 122, 122, 122, 122, 122, 125, 125, 125, 125, 125, 125, 123, 123, 123, 123, 123, 123, 126, 126, 126, 126, 126, 126, 124, 124, 124, 124, 124, 124, 127, 127, 127, 127, 127, 127, 125, 125, 125, 125, 125, 125, 127, 127, 127, 127, 127, 127, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {4, 5, 6},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {7, 8, 9},
                            .outputs = {1},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_all_inputs_as_internal_10 = TestModelManager::get().add("sub_quant8_signed_all_inputs_as_internal_10", get_test_model_all_inputs_as_internal_10());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_11() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({112, 111, 110, 109, 108, 107, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -38, -39, -40, -41, -42, -43, 127, 127, 127, 127, 127, 127, 62, 61, 60, 59, 58, 57, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_11 = TestModelManager::get().add("sub_quant8_signed_11", get_test_model_11());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_all_inputs_as_internal_11() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {4, 7},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({112, 111, 110, 109, 108, 107, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -38, -39, -40, -41, -42, -43, 127, 127, 127, 127, 127, 127, 62, 61, 60, 59, 58, 57, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {4, 5, 6},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {7, 8, 9},
                            .outputs = {1},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_all_inputs_as_internal_11 = TestModelManager::get().add("sub_quant8_signed_all_inputs_as_internal_11", get_test_model_all_inputs_as_internal_11());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_12() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -7, -7, -7, -7, -7, -7, -8, -8, -8, -8, -8, -8, -7, -7, -7, -7, -7, -7, -8, -8, -8, -8, -8, -8, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 18, 18, 18, 18, 18, 18, 17, 17, 17, 17, 17, 17, 18, 18, 18, 18, 18, 18, 17, 17, 17, 17, 17, 17}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_12 = TestModelManager::get().add("sub_quant8_signed_12", get_test_model_12());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_all_inputs_as_internal_12() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {4, 7},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -7, -7, -7, -7, -7, -7, -8, -8, -8, -8, -8, -8, -7, -7, -7, -7, -7, -7, -8, -8, -8, -8, -8, -8, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 18, 18, 18, 18, 18, 18, 17, 17, 17, 17, 17, 17, 18, 18, 18, 18, 18, 18, 17, 17, 17, 17, 17, 17}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {4, 5, 6},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {7, 8, 9},
                            .outputs = {1},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_all_inputs_as_internal_12 = TestModelManager::get().add("sub_quant8_signed_all_inputs_as_internal_12", get_test_model_all_inputs_as_internal_12());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_13() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_13 = TestModelManager::get().add("sub_quant8_signed_13", get_test_model_13());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_all_inputs_as_internal_13() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {4, 7},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {4, 5, 6},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {7, 8, 9},
                            .outputs = {1},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_all_inputs_as_internal_13 = TestModelManager::get().add("sub_quant8_signed_all_inputs_as_internal_13", get_test_model_all_inputs_as_internal_13());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_14() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_14 = TestModelManager::get().add("sub_quant8_signed_14", get_test_model_14());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_all_inputs_as_internal_14() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {4, 7},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {4, 5, 6},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {7, 8, 9},
                            .outputs = {1},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_all_inputs_as_internal_14 = TestModelManager::get().add("sub_quant8_signed_all_inputs_as_internal_14", get_test_model_all_inputs_as_internal_14());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_15() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_15 = TestModelManager::get().add("sub_quant8_signed_15", get_test_model_15());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_all_inputs_as_internal_15() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {4, 7},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {4, 5, 6},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {7, 8, 9},
                            .outputs = {1},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_all_inputs_as_internal_15 = TestModelManager::get().add("sub_quant8_signed_all_inputs_as_internal_15", get_test_model_all_inputs_as_internal_15());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_16() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({112, 111, 110, 109, 108, 107, -128, -128, -128, -128, -128, -128, 112, 111, 110, 109, 108, 107, -128, -128, -128, -128, -128, -128, 112, 111, 110, 109, 108, 107, -128, -128, -128, -128, -128, -128, 112, 111, 110, 109, 108, 107, -128, -128, -128, -128, -128, -128, 112, 111, 110, 109, 108, 107, -128, -128, -128, -128, -128, -128, 112, 112, 110, 110, 108, 108, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -113, -114, -115, -116, -117, -118, 127, 127, 127, 127, 127, 127, -113, -114, -115, -116, -117, -118, 127, 127, 127, 127, 127, 127, -113, -114, -115, -116, -117, -118, 127, 127, 127, 127, 127, 127, -113, -114, -115, -116, -117, -118, 127, 127, 127, 127, 127, 127, -113, -114, -115, -116, -117, -118, 127, 127, 127, 127, 127, 127, -112, -114, -114, -116, -116, -118}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_16 = TestModelManager::get().add("sub_quant8_signed_16", get_test_model_16());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_all_inputs_as_internal_16() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {4, 7},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({112, 111, 110, 109, 108, 107, -128, -128, -128, -128, -128, -128, 112, 111, 110, 109, 108, 107, -128, -128, -128, -128, -128, -128, 112, 111, 110, 109, 108, 107, -128, -128, -128, -128, -128, -128, 112, 111, 110, 109, 108, 107, -128, -128, -128, -128, -128, -128, 112, 111, 110, 109, 108, 107, -128, -128, -128, -128, -128, -128, 112, 112, 110, 110, 108, 108, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -113, -114, -115, -116, -117, -118, 127, 127, 127, 127, 127, 127, -113, -114, -115, -116, -117, -118, 127, 127, 127, 127, 127, 127, -113, -114, -115, -116, -117, -118, 127, 127, 127, 127, 127, 127, -113, -114, -115, -116, -117, -118, 127, 127, 127, 127, 127, 127, -113, -114, -115, -116, -117, -118, 127, 127, 127, 127, 127, 127, -112, -114, -114, -116, -116, -118}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {4, 5, 6},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {7, 8, 9},
                            .outputs = {1},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_all_inputs_as_internal_16 = TestModelManager::get().add("sub_quant8_signed_all_inputs_as_internal_16", get_test_model_all_inputs_as_internal_16());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_17() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -125, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -124, -125, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, 121, 120, 119, 118, 117, 116, -128, -128, -128, -128, -128, -128, 122, 121, 120, 119, 118, 117, -128, -128, -128, -128, -128, -128, 123, 122, 121, 120, 119, 118, -127, -128, -128, -128, -128, -128, 124, 123, 122, 121, 120, 119, -126, -127, -128, -128, -128, -128, 125, 124, 123, 122, 121, 120, -125, -126, -127, -128, -128, -128, 126, 125, 124, 123, 122, 121, -124, -125, -126, -127, -128, -128}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_17 = TestModelManager::get().add("sub_quant8_signed_17", get_test_model_17());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_all_inputs_as_internal_17() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {4, 7},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -125, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -124, -125, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, 121, 120, 119, 118, 117, 116, -128, -128, -128, -128, -128, -128, 122, 121, 120, 119, 118, 117, -128, -128, -128, -128, -128, -128, 123, 122, 121, 120, 119, 118, -127, -128, -128, -128, -128, -128, 124, 123, 122, 121, 120, 119, -126, -127, -128, -128, -128, -128, 125, 124, 123, 122, 121, 120, -125, -126, -127, -128, -128, -128, 126, 125, 124, 123, 122, 121, -124, -125, -126, -127, -128, -128}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-127}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {4, 5, 6},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {7, 8, 9},
                            .outputs = {1},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_all_inputs_as_internal_17 = TestModelManager::get().add("sub_quant8_signed_all_inputs_as_internal_17", get_test_model_all_inputs_as_internal_17());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_18() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -125, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -124, -125, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -123, -124, -125, -126, -127, -128, -128, -128, -128, -128, -128, -128, 122, 121, 120, 119, 118, 117, -128, -128, -128, -128, -128, -128, 123, 122, 121, 120, 119, 118, -127, -128, -128, -128, -128, -128, 124, 123, 122, 121, 120, 119, -126, -127, -128, -128, -128, -128, 125, 124, 123, 122, 121, 120, -125, -126, -127, -128, -128, -128, 126, 125, 124, 123, 122, 121, -124, -125, -126, -127, -128, -128, 127, 126, 125, 124, 123, 122, -123, -124, -125, -126, -127, -128}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_18 = TestModelManager::get().add("sub_quant8_signed_18", get_test_model_18());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_all_inputs_as_internal_18() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {4, 7},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -125, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -124, -125, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -123, -124, -125, -126, -127, -128, -128, -128, -128, -128, -128, -128, 122, 121, 120, 119, 118, 117, -128, -128, -128, -128, -128, -128, 123, 122, 121, 120, 119, 118, -127, -128, -128, -128, -128, -128, 124, 123, 122, 121, 120, 119, -126, -127, -128, -128, -128, -128, 125, 124, 123, 122, 121, 120, -125, -126, -127, -128, -128, -128, 126, 125, 124, 123, 122, 121, -124, -125, -126, -127, -128, -128, 127, 126, 125, 124, 123, 122, -123, -124, -125, -126, -127, -128}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-127}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {4, 5, 6},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {7, 8, 9},
                            .outputs = {1},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_all_inputs_as_internal_18 = TestModelManager::get().add("sub_quant8_signed_all_inputs_as_internal_18", get_test_model_all_inputs_as_internal_18());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_19() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-108, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -8, -108, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 92, -8, -108, -128, -128, -128, -128, -128, -128, -128, -128, -128, 127, 92, -8, -108, -128, -128, -128, -128, -128, -128, -128, -128, 127, 127, 92, -8, -108, -128, -128, -128, -128, -128, -128, -128, 127, 127, 127, 92, -8, -108, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -108, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -8, -108, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, 92, -8, -108, -128, -128, -128, 127, 127, 127, 127, 127, 127, 127, 92, -8, -108, -128, -128, 127, 127, 127, 127, 127, 127, 127, 127, 92, -8, -108, -128, 127, 127, 127, 127, 127, 127, 127, 127, 127, 92, -8, -108}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_19 = TestModelManager::get().add("sub_quant8_signed_19", get_test_model_19());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_all_inputs_as_internal_19() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {4, 7},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-108, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -8, -108, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 92, -8, -108, -128, -128, -128, -128, -128, -128, -128, -128, -128, 127, 92, -8, -108, -128, -128, -128, -128, -128, -128, -128, -128, 127, 127, 92, -8, -108, -128, -128, -128, -128, -128, -128, -128, 127, 127, 127, 92, -8, -108, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -108, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -8, -108, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, 92, -8, -108, -128, -128, -128, 127, 127, 127, 127, 127, 127, 127, 92, -8, -108, -128, -128, 127, 127, 127, 127, 127, 127, 127, 127, 92, -8, -108, -128, 127, 127, 127, 127, 127, 127, 127, 127, 127, 92, -8, -108}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-127}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {4, 5, 6},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {7, 8, 9},
                            .outputs = {1},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_all_inputs_as_internal_19 = TestModelManager::get().add("sub_quant8_signed_all_inputs_as_internal_19", get_test_model_all_inputs_as_internal_19());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_20() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8, -8, -8, -8, -8, -9, -33, -33, -33, -33, -34, -34, -8, -8, -8, -8, -8, -8, -33, -33, -33, -33, -33, -34, -8, -8, -8, -8, -8, -8, -33, -33, -33, -33, -33, -33, -8, -8, -8, -8, -8, -8, -33, -33, -33, -33, -33, -33, -8, -8, -8, -8, -8, -8, -33, -33, -33, -33, -33, -33, -8, -8, -8, -8, -8, -8, -33, -33, -33, -33, -33, -33, 17, 17, 17, 17, 16, 16, -8, -8, -8, -8, -8, -9, 17, 17, 17, 17, 17, 16, -8, -8, -8, -8, -8, -8, 17, 17, 17, 17, 17, 17, -8, -8, -8, -8, -8, -8, 17, 17, 17, 17, 17, 17, -8, -8, -8, -8, -8, -8, 17, 17, 17, 17, 17, 17, -8, -8, -8, -8, -8, -8, 17, 17, 17, 17, 17, 17, -8, -8, -8, -8, -8, -8}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_20 = TestModelManager::get().add("sub_quant8_signed_20", get_test_model_20());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_all_inputs_as_internal_20() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {4, 7},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8, -8, -8, -8, -8, -9, -33, -33, -33, -33, -34, -34, -8, -8, -8, -8, -8, -8, -33, -33, -33, -33, -33, -34, -8, -8, -8, -8, -8, -8, -33, -33, -33, -33, -33, -33, -8, -8, -8, -8, -8, -8, -33, -33, -33, -33, -33, -33, -8, -8, -8, -8, -8, -8, -33, -33, -33, -33, -33, -33, -8, -8, -8, -8, -8, -8, -33, -33, -33, -33, -33, -33, 17, 17, 17, 17, 16, 16, -8, -8, -8, -8, -8, -9, 17, 17, 17, 17, 17, 16, -8, -8, -8, -8, -8, -8, 17, 17, 17, 17, 17, 17, -8, -8, -8, -8, -8, -8, 17, 17, 17, 17, 17, 17, -8, -8, -8, -8, -8, -8, 17, 17, 17, 17, 17, 17, -8, -8, -8, -8, -8, -8, 17, 17, 17, 17, 17, 17, -8, -8, -8, -8, -8, -8}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-127}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {4, 5, 6},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {7, 8, 9},
                            .outputs = {1},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_all_inputs_as_internal_20 = TestModelManager::get().add("sub_quant8_signed_all_inputs_as_internal_20", get_test_model_all_inputs_as_internal_20());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_21() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -125, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -124, -125, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -123, -124, -125, -126, -127, -128, -128, -128, -128, -128, -128, -128, 122, 121, 120, 119, 118, 117, -128, -128, -128, -128, -128, -128, 123, 122, 121, 120, 119, 118, -127, -128, -128, -128, -128, -128, 124, 123, 122, 121, 120, 119, -126, -127, -128, -128, -128, -128, 125, 124, 123, 122, 121, 120, -125, -126, -127, -128, -128, -128, 126, 125, 124, 123, 122, 121, -124, -125, -126, -127, -128, -128, 127, 126, 125, 124, 123, 122, -123, -124, -125, -126, -127, -128}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_21 = TestModelManager::get().add("sub_quant8_signed_21", get_test_model_21());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_all_inputs_as_internal_21() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {4, 7},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -125, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -124, -125, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -123, -124, -125, -126, -127, -128, -128, -128, -128, -128, -128, -128, 122, 121, 120, 119, 118, 117, -128, -128, -128, -128, -128, -128, 123, 122, 121, 120, 119, 118, -127, -128, -128, -128, -128, -128, 124, 123, 122, 121, 120, 119, -126, -127, -128, -128, -128, -128, 125, 124, 123, 122, 121, 120, -125, -126, -127, -128, -128, -128, 126, 125, 124, 123, 122, 121, -124, -125, -126, -127, -128, -128, 127, 126, 125, 124, 123, 122, -123, -124, -125, -126, -127, -128}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-127}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-127}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {4, 5, 6},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {7, 8, 9},
                            .outputs = {1},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_all_inputs_as_internal_21 = TestModelManager::get().add("sub_quant8_signed_all_inputs_as_internal_21", get_test_model_all_inputs_as_internal_21());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_22() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -125, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -124, -125, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -123, -124, -125, -126, -127, -128, -128, -128, -128, -128, -128, -128, -122, -123, -124, -125, -126, -127, -128, -128, -128, -128, -128, -128, 123, 122, 121, 120, 119, 118, -127, -128, -128, -128, -128, -128, 124, 123, 122, 121, 120, 119, -126, -127, -128, -128, -128, -128, 125, 124, 123, 122, 121, 120, -125, -126, -127, -128, -128, -128, 126, 125, 124, 123, 122, 121, -124, -125, -126, -127, -128, -128, 127, 126, 125, 124, 123, 122, -123, -124, -125, -126, -127, -128, 127, 127, 126, 125, 124, 123, -122, -123, -124, -125, -126, -127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_22 = TestModelManager::get().add("sub_quant8_signed_22", get_test_model_22());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_all_inputs_as_internal_22() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {4, 7},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -125, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -124, -125, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -123, -124, -125, -126, -127, -128, -128, -128, -128, -128, -128, -128, -122, -123, -124, -125, -126, -127, -128, -128, -128, -128, -128, -128, 123, 122, 121, 120, 119, 118, -127, -128, -128, -128, -128, -128, 124, 123, 122, 121, 120, 119, -126, -127, -128, -128, -128, -128, 125, 124, 123, 122, 121, 120, -125, -126, -127, -128, -128, -128, 126, 125, 124, 123, 122, 121, -124, -125, -126, -127, -128, -128, 127, 126, 125, 124, 123, 122, -123, -124, -125, -126, -127, -128, 127, 127, 126, 125, 124, 123, -122, -123, -124, -125, -126, -127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-127}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-127}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {4, 5, 6},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {7, 8, 9},
                            .outputs = {1},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_all_inputs_as_internal_22 = TestModelManager::get().add("sub_quant8_signed_all_inputs_as_internal_22", get_test_model_all_inputs_as_internal_22());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_23() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8, -108, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 92, -8, -108, -128, -128, -128, -128, -128, -128, -128, -128, -128, 127, 92, -8, -108, -128, -128, -128, -128, -128, -128, -128, -128, 127, 127, 92, -8, -108, -128, -128, -128, -128, -128, -128, -128, 127, 127, 127, 92, -8, -108, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 92, -8, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -8, -108, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, 92, -8, -108, -128, -128, -128, 127, 127, 127, 127, 127, 127, 127, 92, -8, -108, -128, -128, 127, 127, 127, 127, 127, 127, 127, 127, 92, -8, -108, -128, 127, 127, 127, 127, 127, 127, 127, 127, 127, 92, -8, -108, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 92, -8}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_23 = TestModelManager::get().add("sub_quant8_signed_23", get_test_model_23());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_all_inputs_as_internal_23() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {4, 7},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8, -108, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 92, -8, -108, -128, -128, -128, -128, -128, -128, -128, -128, -128, 127, 92, -8, -108, -128, -128, -128, -128, -128, -128, -128, -128, 127, 127, 92, -8, -108, -128, -128, -128, -128, -128, -128, -128, 127, 127, 127, 92, -8, -108, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 92, -8, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -8, -108, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, 92, -8, -108, -128, -128, -128, 127, 127, 127, 127, 127, 127, 127, 92, -8, -108, -128, -128, 127, 127, 127, 127, 127, 127, 127, 127, 92, -8, -108, -128, 127, 127, 127, 127, 127, 127, 127, 127, 127, 92, -8, -108, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 92, -8}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-127}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-127}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {4, 5, 6},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {7, 8, 9},
                            .outputs = {1},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_all_inputs_as_internal_23 = TestModelManager::get().add("sub_quant8_signed_all_inputs_as_internal_23", get_test_model_all_inputs_as_internal_23());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_24() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8, -8, -8, -8, -8, -8, -33, -33, -33, -33, -33, -34, -8, -8, -8, -8, -8, -8, -33, -33, -33, -33, -33, -33, -8, -8, -8, -8, -8, -8, -33, -33, -33, -33, -33, -33, -8, -8, -8, -8, -8, -8, -33, -33, -33, -33, -33, -33, -8, -8, -8, -8, -8, -8, -33, -33, -33, -33, -33, -33, -8, -8, -8, -8, -8, -8, -32, -33, -33, -33, -33, -33, 17, 17, 17, 17, 17, 16, -8, -8, -8, -8, -8, -8, 17, 17, 17, 17, 17, 17, -8, -8, -8, -8, -8, -8, 17, 17, 17, 17, 17, 17, -8, -8, -8, -8, -8, -8, 17, 17, 17, 17, 17, 17, -8, -8, -8, -8, -8, -8, 17, 17, 17, 17, 17, 17, -8, -8, -8, -8, -8, -8, 18, 17, 17, 17, 17, 17, -8, -8, -8, -8, -8, -8}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_24 = TestModelManager::get().add("sub_quant8_signed_24", get_test_model_24());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_all_inputs_as_internal_24() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {4, 7},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8, -8, -8, -8, -8, -8, -33, -33, -33, -33, -33, -34, -8, -8, -8, -8, -8, -8, -33, -33, -33, -33, -33, -33, -8, -8, -8, -8, -8, -8, -33, -33, -33, -33, -33, -33, -8, -8, -8, -8, -8, -8, -33, -33, -33, -33, -33, -33, -8, -8, -8, -8, -8, -8, -33, -33, -33, -33, -33, -33, -8, -8, -8, -8, -8, -8, -32, -33, -33, -33, -33, -33, 17, 17, 17, 17, 17, 16, -8, -8, -8, -8, -8, -8, 17, 17, 17, 17, 17, 17, -8, -8, -8, -8, -8, -8, 17, 17, 17, 17, 17, 17, -8, -8, -8, -8, -8, -8, 17, 17, 17, 17, 17, 17, -8, -8, -8, -8, -8, -8, 17, 17, 17, 17, 17, 17, -8, -8, -8, -8, -8, -8, 18, 17, 17, 17, 17, 17, -8, -8, -8, -8, -8, -8}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-127}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-127}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {4, 5, 6},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {7, 8, 9},
                            .outputs = {1},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_all_inputs_as_internal_24 = TestModelManager::get().add("sub_quant8_signed_all_inputs_as_internal_24", get_test_model_all_inputs_as_internal_24());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_25() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -128, -128, -128, -128, -128, -128, -126, -126, -126, -126, -126, -126, -128, -128, -128, -128, -128, -128, -125, -125, -125, -125, -125, -125, -127, -127, -127, -127, -127, -127, -124, -124, -124, -124, -124, -124, -126, -126, -126, -126, -126, -126, -123, -123, -123, -123, -123, -123, -125, -125, -125, -125, -125, -125, 122, 122, 122, 122, 122, 122, 120, 120, 120, 120, 120, 120, 123, 123, 123, 123, 123, 123, 121, 121, 121, 121, 121, 121, 124, 124, 124, 124, 124, 124, 122, 122, 122, 122, 122, 122, 125, 125, 125, 125, 125, 125, 123, 123, 123, 123, 123, 123, 126, 126, 126, 126, 126, 126, 124, 124, 124, 124, 124, 124, 127, 127, 127, 127, 127, 127, 125, 125, 125, 125, 125, 125}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_25 = TestModelManager::get().add("sub_quant8_signed_25", get_test_model_25());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_all_inputs_as_internal_25() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {4, 7},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -128, -128, -128, -128, -128, -128, -126, -126, -126, -126, -126, -126, -128, -128, -128, -128, -128, -128, -125, -125, -125, -125, -125, -125, -127, -127, -127, -127, -127, -127, -124, -124, -124, -124, -124, -124, -126, -126, -126, -126, -126, -126, -123, -123, -123, -123, -123, -123, -125, -125, -125, -125, -125, -125, 122, 122, 122, 122, 122, 122, 120, 120, 120, 120, 120, 120, 123, 123, 123, 123, 123, 123, 121, 121, 121, 121, 121, 121, 124, 124, 124, 124, 124, 124, 122, 122, 122, 122, 122, 122, 125, 125, 125, 125, 125, 125, 123, 123, 123, 123, 123, 123, 126, 126, 126, 126, 126, 126, 124, 124, 124, 124, 124, 124, 127, 127, 127, 127, 127, 127, 125, 125, 125, 125, 125, 125}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-127}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {4, 5, 6},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {7, 8, 9},
                            .outputs = {1},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_all_inputs_as_internal_25 = TestModelManager::get().add("sub_quant8_signed_all_inputs_as_internal_25", get_test_model_all_inputs_as_internal_25());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_26() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-127, -127, -127, -127, -127, -127, -128, -128, -128, -128, -128, -128, -126, -126, -126, -126, -126, -126, -128, -128, -128, -128, -128, -128, -125, -125, -125, -125, -125, -125, -127, -127, -127, -127, -127, -127, -124, -124, -124, -124, -124, -124, -126, -126, -126, -126, -126, -126, -123, -123, -123, -123, -123, -123, -125, -125, -125, -125, -125, -125, -122, -122, -122, -122, -122, -122, -124, -124, -124, -124, -124, -124, 123, 123, 123, 123, 123, 123, 121, 121, 121, 121, 121, 121, 124, 124, 124, 124, 124, 124, 122, 122, 122, 122, 122, 122, 125, 125, 125, 125, 125, 125, 123, 123, 123, 123, 123, 123, 126, 126, 126, 126, 126, 126, 124, 124, 124, 124, 124, 124, 127, 127, 127, 127, 127, 127, 125, 125, 125, 125, 125, 125, 127, 127, 127, 127, 127, 127, 126, 126, 126, 126, 126, 126}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_26 = TestModelManager::get().add("sub_quant8_signed_26", get_test_model_26());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_all_inputs_as_internal_26() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {4, 7},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-127, -127, -127, -127, -127, -127, -128, -128, -128, -128, -128, -128, -126, -126, -126, -126, -126, -126, -128, -128, -128, -128, -128, -128, -125, -125, -125, -125, -125, -125, -127, -127, -127, -127, -127, -127, -124, -124, -124, -124, -124, -124, -126, -126, -126, -126, -126, -126, -123, -123, -123, -123, -123, -123, -125, -125, -125, -125, -125, -125, -122, -122, -122, -122, -122, -122, -124, -124, -124, -124, -124, -124, 123, 123, 123, 123, 123, 123, 121, 121, 121, 121, 121, 121, 124, 124, 124, 124, 124, 124, 122, 122, 122, 122, 122, 122, 125, 125, 125, 125, 125, 125, 123, 123, 123, 123, 123, 123, 126, 126, 126, 126, 126, 126, 124, 124, 124, 124, 124, 124, 127, 127, 127, 127, 127, 127, 125, 125, 125, 125, 125, 125, 127, 127, 127, 127, 127, 127, 126, 126, 126, 126, 126, 126}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-127}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {4, 5, 6},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {7, 8, 9},
                            .outputs = {1},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_all_inputs_as_internal_26 = TestModelManager::get().add("sub_quant8_signed_all_inputs_as_internal_26", get_test_model_all_inputs_as_internal_26());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_27() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({12, 11, 10, 9, 8, 7, -128, -128, -128, -128, -128, -128, 112, 111, 110, 109, 108, 107, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -38, -39, -40, -41, -42, -43, 127, 127, 127, 127, 127, 127, 62, 61, 60, 59, 58, 57, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_27 = TestModelManager::get().add("sub_quant8_signed_27", get_test_model_27());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_all_inputs_as_internal_27() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {4, 7},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({12, 11, 10, 9, 8, 7, -128, -128, -128, -128, -128, -128, 112, 111, 110, 109, 108, 107, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -38, -39, -40, -41, -42, -43, 127, 127, 127, 127, 127, 127, 62, 61, 60, 59, 58, 57, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-127}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {4, 5, 6},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {7, 8, 9},
                            .outputs = {1},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_all_inputs_as_internal_27 = TestModelManager::get().add("sub_quant8_signed_all_inputs_as_internal_27", get_test_model_all_inputs_as_internal_27());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_28() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -7, -7, -7, -7, -7, -7, -8, -8, -8, -8, -8, -8, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 18, 18, 18, 18, 18, 18, 17, 17, 17, 17, 17, 17}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_28 = TestModelManager::get().add("sub_quant8_signed_28", get_test_model_28());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_all_inputs_as_internal_28() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {4, 7},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -7, -7, -7, -7, -7, -7, -8, -8, -8, -8, -8, -8, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 18, 18, 18, 18, 18, 18, 17, 17, 17, 17, 17, 17}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-127}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {4, 5, 6},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {7, 8, 9},
                            .outputs = {1},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_all_inputs_as_internal_28 = TestModelManager::get().add("sub_quant8_signed_all_inputs_as_internal_28", get_test_model_all_inputs_as_internal_28());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_29() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_29 = TestModelManager::get().add("sub_quant8_signed_29", get_test_model_29());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_all_inputs_as_internal_29() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {4, 7},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-127}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {4, 5, 6},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {7, 8, 9},
                            .outputs = {1},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_all_inputs_as_internal_29 = TestModelManager::get().add("sub_quant8_signed_all_inputs_as_internal_29", get_test_model_all_inputs_as_internal_29());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_30() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_30 = TestModelManager::get().add("sub_quant8_signed_30", get_test_model_30());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_all_inputs_as_internal_30() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {4, 7},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-127}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {4, 5, 6},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {7, 8, 9},
                            .outputs = {1},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_all_inputs_as_internal_30 = TestModelManager::get().add("sub_quant8_signed_all_inputs_as_internal_30", get_test_model_all_inputs_as_internal_30());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_31() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_31 = TestModelManager::get().add("sub_quant8_signed_31", get_test_model_31());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_all_inputs_as_internal_31() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {4, 7},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-127}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {4, 5, 6},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {7, 8, 9},
                            .outputs = {1},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_all_inputs_as_internal_31 = TestModelManager::get().add("sub_quant8_signed_all_inputs_as_internal_31", get_test_model_all_inputs_as_internal_31());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_32() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({112, 111, 110, 109, 108, 107, -128, -128, -128, -128, -128, -128, 112, 111, 110, 109, 108, 107, -128, -128, -128, -128, -128, -128, 112, 111, 110, 109, 108, 107, -128, -128, -128, -128, -128, -128, 112, 111, 110, 109, 108, 107, -128, -128, -128, -128, -128, -128, 112, 111, 110, 109, 108, 107, -128, -128, -128, -128, -128, -128, 112, 111, 110, 109, 108, 107, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -113, -114, -115, -116, -117, -118, 127, 127, 127, 127, 127, 127, -113, -114, -115, -116, -117, -118, 127, 127, 127, 127, 127, 127, -113, -114, -115, -116, -117, -118, 127, 127, 127, 127, 127, 127, -113, -114, -115, -116, -117, -118, 127, 127, 127, 127, 127, 127, -113, -114, -115, -116, -117, -118, 127, 127, 127, 127, 127, 127, -113, -114, -115, -116, -117, -118}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_32 = TestModelManager::get().add("sub_quant8_signed_32", get_test_model_32());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_all_inputs_as_internal_32() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {4, 7},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({112, 111, 110, 109, 108, 107, -128, -128, -128, -128, -128, -128, 112, 111, 110, 109, 108, 107, -128, -128, -128, -128, -128, -128, 112, 111, 110, 109, 108, 107, -128, -128, -128, -128, -128, -128, 112, 111, 110, 109, 108, 107, -128, -128, -128, -128, -128, -128, 112, 111, 110, 109, 108, 107, -128, -128, -128, -128, -128, -128, 112, 111, 110, 109, 108, 107, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -113, -114, -115, -116, -117, -118, 127, 127, 127, 127, 127, 127, -113, -114, -115, -116, -117, -118, 127, 127, 127, 127, 127, 127, -113, -114, -115, -116, -117, -118, 127, 127, 127, 127, 127, 127, -113, -114, -115, -116, -117, -118, 127, 127, 127, 127, 127, 127, -113, -114, -115, -116, -117, -118, 127, 127, 127, 127, 127, 127, -113, -114, -115, -116, -117, -118}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-127}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {4, 5, 6},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {7, 8, 9},
                            .outputs = {1},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_all_inputs_as_internal_32 = TestModelManager::get().add("sub_quant8_signed_all_inputs_as_internal_32", get_test_model_all_inputs_as_internal_32());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_33() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_33 = TestModelManager::get().add("sub_quant8_signed_33", get_test_model_33());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_all_inputs_as_internal_33() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {4, 7},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {4, 5, 6},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {7, 8, 9},
                            .outputs = {1},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_all_inputs_as_internal_33 = TestModelManager::get().add("sub_quant8_signed_all_inputs_as_internal_33", get_test_model_all_inputs_as_internal_33());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_34() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_34 = TestModelManager::get().add("sub_quant8_signed_34", get_test_model_34());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_all_inputs_as_internal_34() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {4, 7},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {4, 5, 6},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {7, 8, 9},
                            .outputs = {1},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_all_inputs_as_internal_34 = TestModelManager::get().add("sub_quant8_signed_all_inputs_as_internal_34", get_test_model_all_inputs_as_internal_34());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_35() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -126, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -125, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -124, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -123, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 122, 22, -78, -128, -128, -128, -128, -128, -128, -128, -128, -128, 123, 23, -77, -128, -128, -128, -128, -128, -128, -128, -128, -128, 124, 24, -76, -128, -128, -128, -128, -128, -128, -128, -128, -128, 125, 25, -75, -128, -128, -128, -128, -128, -128, -128, -128, -128, 126, 26, -74, -128, -128, -128, -128, -128, -128, -128, -128, -128, 127, 27, -73, -128, -128, -128, -128, -128, -128, -128, -128, -128}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_35 = TestModelManager::get().add("sub_quant8_signed_35", get_test_model_35());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_all_inputs_as_internal_35() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {4, 7},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -126, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -125, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -124, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -123, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 122, 22, -78, -128, -128, -128, -128, -128, -128, -128, -128, -128, 123, 23, -77, -128, -128, -128, -128, -128, -128, -128, -128, -128, 124, 24, -76, -128, -128, -128, -128, -128, -128, -128, -128, -128, 125, 25, -75, -128, -128, -128, -128, -128, -128, -128, -128, -128, 126, 26, -74, -128, -128, -128, -128, -128, -128, -128, -128, -128, 127, 27, -73, -128, -128, -128, -128, -128, -128, -128, -128, -128}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {4, 5, 6},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {7, 8, 9},
                            .outputs = {1},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_all_inputs_as_internal_35 = TestModelManager::get().add("sub_quant8_signed_all_inputs_as_internal_35", get_test_model_all_inputs_as_internal_35());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_36() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8, -8, -8, -8, -9, -9, -33, -33, -33, -33, -34, -34, -8, -8, -8, -8, -9, -9, -33, -33, -33, -33, -34, -34, -8, -8, -8, -8, -9, -9, -33, -33, -33, -33, -34, -34, -8, -8, -8, -8, -9, -9, -33, -33, -33, -33, -34, -34, -8, -8, -8, -8, -9, -9, -33, -33, -33, -33, -34, -34, -8, -8, -8, -8, -9, -9, -33, -33, -33, -33, -34, -34, -8, -8, -8, -8, -8, -8, -33, -33, -33, -33, -33, -33, -8, -8, -8, -8, -8, -8, -33, -33, -33, -33, -33, -33, -8, -8, -8, -8, -8, -8, -33, -33, -33, -33, -33, -33, -8, -8, -8, -8, -8, -8, -33, -33, -33, -33, -33, -33, -8, -8, -8, -8, -8, -8, -33, -33, -33, -33, -33, -33, -8, -8, -8, -8, -8, -8, -33, -33, -33, -33, -33, -33}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_36 = TestModelManager::get().add("sub_quant8_signed_36", get_test_model_36());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_all_inputs_as_internal_36() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {4, 7},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8, -8, -8, -8, -9, -9, -33, -33, -33, -33, -34, -34, -8, -8, -8, -8, -9, -9, -33, -33, -33, -33, -34, -34, -8, -8, -8, -8, -9, -9, -33, -33, -33, -33, -34, -34, -8, -8, -8, -8, -9, -9, -33, -33, -33, -33, -34, -34, -8, -8, -8, -8, -9, -9, -33, -33, -33, -33, -34, -34, -8, -8, -8, -8, -9, -9, -33, -33, -33, -33, -34, -34, -8, -8, -8, -8, -8, -8, -33, -33, -33, -33, -33, -33, -8, -8, -8, -8, -8, -8, -33, -33, -33, -33, -33, -33, -8, -8, -8, -8, -8, -8, -33, -33, -33, -33, -33, -33, -8, -8, -8, -8, -8, -8, -33, -33, -33, -33, -33, -33, -8, -8, -8, -8, -8, -8, -33, -33, -33, -33, -33, -33, -8, -8, -8, -8, -8, -8, -33, -33, -33, -33, -33, -33}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {4, 5, 6},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {7, 8, 9},
                            .outputs = {1},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_all_inputs_as_internal_36 = TestModelManager::get().add("sub_quant8_signed_all_inputs_as_internal_36", get_test_model_all_inputs_as_internal_36());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_37() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_37 = TestModelManager::get().add("sub_quant8_signed_37", get_test_model_37());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_all_inputs_as_internal_37() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {4, 7},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-127}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {4, 5, 6},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {7, 8, 9},
                            .outputs = {1},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_all_inputs_as_internal_37 = TestModelManager::get().add("sub_quant8_signed_all_inputs_as_internal_37", get_test_model_all_inputs_as_internal_37());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_38() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -125, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -125, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -125, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -125, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -125, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -125, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_38 = TestModelManager::get().add("sub_quant8_signed_38", get_test_model_38());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_all_inputs_as_internal_38() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {4, 7},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -125, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -125, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -125, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -125, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -125, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -125, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-127}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {4, 5, 6},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {7, 8, 9},
                            .outputs = {1},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_all_inputs_as_internal_38 = TestModelManager::get().add("sub_quant8_signed_all_inputs_as_internal_38", get_test_model_all_inputs_as_internal_38());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_39() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-28, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -27, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -26, -126, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -25, -125, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -24, -124, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -23, -123, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 127, 122, 22, -78, -128, -128, -128, -128, -128, -128, -128, -128, 127, 123, 23, -77, -128, -128, -128, -128, -128, -128, -128, -128, 127, 124, 24, -76, -128, -128, -128, -128, -128, -128, -128, -128, 127, 125, 25, -75, -128, -128, -128, -128, -128, -128, -128, -128, 127, 126, 26, -74, -128, -128, -128, -128, -128, -128, -128, -128, 127, 127, 27, -73, -128, -128, -128, -128, -128, -128, -128, -128}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_39 = TestModelManager::get().add("sub_quant8_signed_39", get_test_model_39());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_all_inputs_as_internal_39() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {4, 7},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-28, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -27, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -26, -126, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -25, -125, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -24, -124, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -23, -123, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 127, 122, 22, -78, -128, -128, -128, -128, -128, -128, -128, -128, 127, 123, 23, -77, -128, -128, -128, -128, -128, -128, -128, -128, 127, 124, 24, -76, -128, -128, -128, -128, -128, -128, -128, -128, 127, 125, 25, -75, -128, -128, -128, -128, -128, -128, -128, -128, 127, 126, 26, -74, -128, -128, -128, -128, -128, -128, -128, -128, 127, 127, 27, -73, -128, -128, -128, -128, -128, -128, -128, -128}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-127}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {4, 5, 6},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {7, 8, 9},
                            .outputs = {1},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_all_inputs_as_internal_39 = TestModelManager::get().add("sub_quant8_signed_all_inputs_as_internal_39", get_test_model_all_inputs_as_internal_39());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_40() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8, -8, -8, -8, -8, -9, -33, -33, -33, -33, -33, -34, -8, -8, -8, -8, -8, -9, -33, -33, -33, -33, -33, -34, -8, -8, -8, -8, -8, -9, -33, -33, -33, -33, -33, -34, -8, -8, -8, -8, -8, -9, -33, -33, -33, -33, -33, -34, -8, -8, -8, -8, -8, -9, -33, -33, -33, -33, -33, -34, -8, -8, -8, -8, -8, -9, -33, -33, -33, -33, -33, -34, -8, -8, -8, -8, -8, -8, -33, -33, -33, -33, -33, -33, -8, -8, -8, -8, -8, -8, -33, -33, -33, -33, -33, -33, -8, -8, -8, -8, -8, -8, -33, -33, -33, -33, -33, -33, -8, -8, -8, -8, -8, -8, -33, -33, -33, -33, -33, -33, -8, -8, -8, -8, -8, -8, -33, -33, -33, -33, -33, -33, -8, -8, -8, -8, -8, -8, -33, -33, -33, -33, -33, -33}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_40 = TestModelManager::get().add("sub_quant8_signed_40", get_test_model_40());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_all_inputs_as_internal_40() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {4, 7},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8, -8, -8, -8, -8, -9, -33, -33, -33, -33, -33, -34, -8, -8, -8, -8, -8, -9, -33, -33, -33, -33, -33, -34, -8, -8, -8, -8, -8, -9, -33, -33, -33, -33, -33, -34, -8, -8, -8, -8, -8, -9, -33, -33, -33, -33, -33, -34, -8, -8, -8, -8, -8, -9, -33, -33, -33, -33, -33, -34, -8, -8, -8, -8, -8, -9, -33, -33, -33, -33, -33, -34, -8, -8, -8, -8, -8, -8, -33, -33, -33, -33, -33, -33, -8, -8, -8, -8, -8, -8, -33, -33, -33, -33, -33, -33, -8, -8, -8, -8, -8, -8, -33, -33, -33, -33, -33, -33, -8, -8, -8, -8, -8, -8, -33, -33, -33, -33, -33, -33, -8, -8, -8, -8, -8, -8, -33, -33, -33, -33, -33, -33, -8, -8, -8, -8, -8, -8, -33, -33, -33, -33, -33, -33}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-127}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {4, 5, 6},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {7, 8, 9},
                            .outputs = {1},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_all_inputs_as_internal_40 = TestModelManager::get().add("sub_quant8_signed_all_inputs_as_internal_40", get_test_model_all_inputs_as_internal_40());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_41() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -126, -126, -126, -126, -126, -126, -128, -128, -128, -128, -128, -128, -125, -126, -126, -126, -126, -126, -128, -128, -128, -128, -128, -128, -125, -125, -126, -126, -126, -126, -128, -128, -128, -128, -128, -128, -125, -125, -125, -126, -126, -126, -128, -128, -128, -128, -128, -128, -125, -125, -125, -125, -126, -126, -128, -128, -128, -128, -128, -128, -125, -125, -125, -125, -125, -126, -128, -128, -128, -128, -128, -128}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_41 = TestModelManager::get().add("sub_quant8_signed_41", get_test_model_41());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_all_inputs_as_internal_41() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {4, 7},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -126, -126, -126, -126, -126, -126, -128, -128, -128, -128, -128, -128, -125, -126, -126, -126, -126, -126, -128, -128, -128, -128, -128, -128, -125, -125, -126, -126, -126, -126, -128, -128, -128, -128, -128, -128, -125, -125, -125, -126, -126, -126, -128, -128, -128, -128, -128, -128, -125, -125, -125, -125, -126, -126, -128, -128, -128, -128, -128, -128, -125, -125, -125, -125, -125, -126, -128, -128, -128, -128, -128, -128}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {4, 5, 6},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {7, 8, 9},
                            .outputs = {1},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_all_inputs_as_internal_41 = TestModelManager::get().add("sub_quant8_signed_all_inputs_as_internal_41", get_test_model_all_inputs_as_internal_41());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_42() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-127, -127, -127, -127, -127, -127, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -128, -128, -128, -128, -128, -128, -125, -125, -125, -125, -125, -125, -127, -127, -127, -127, -127, -127, -124, -125, -125, -125, -125, -125, -127, -127, -127, -127, -127, -127, -124, -124, -125, -125, -125, -125, -127, -127, -127, -127, -127, -127, -124, -124, -124, -125, -125, -125, -127, -127, -127, -127, -127, -127, -124, -124, -124, -124, -125, -125, -127, -127, -127, -127, -127, -127, -124, -124, -124, -124, -124, -125, -127, -127, -127, -127, -127, -127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_42 = TestModelManager::get().add("sub_quant8_signed_42", get_test_model_42());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_all_inputs_as_internal_42() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {4, 7},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-127, -127, -127, -127, -127, -127, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -128, -128, -128, -128, -128, -128, -125, -125, -125, -125, -125, -125, -127, -127, -127, -127, -127, -127, -124, -125, -125, -125, -125, -125, -127, -127, -127, -127, -127, -127, -124, -124, -125, -125, -125, -125, -127, -127, -127, -127, -127, -127, -124, -124, -124, -125, -125, -125, -127, -127, -127, -127, -127, -127, -124, -124, -124, -124, -125, -125, -127, -127, -127, -127, -127, -127, -124, -124, -124, -124, -124, -125, -127, -127, -127, -127, -127, -127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {4, 5, 6},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {7, 8, 9},
                            .outputs = {1},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_all_inputs_as_internal_42 = TestModelManager::get().add("sub_quant8_signed_all_inputs_as_internal_42", get_test_model_all_inputs_as_internal_42());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_43() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8, -9, -10, -11, -12, -13, -128, -128, -128, -128, -128, -128, -7, -8, -9, -10, -11, -12, -128, -128, -128, -128, -128, -128, -6, -7, -8, -9, -10, -11, -128, -128, -128, -128, -128, -128, -5, -6, -7, -8, -9, -10, -128, -128, -128, -128, -128, -128, -4, -5, -6, -7, -8, -9, -128, -128, -128, -128, -128, -128, -3, -4, -5, -6, -7, -8, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -8, -9, -10, -11, -12, -13, 127, 127, 127, 127, 127, 127, -7, -8, -9, -10, -11, -12, 127, 127, 127, 127, 127, 127, -6, -7, -8, -9, -10, -11, 127, 127, 127, 127, 127, 127, -5, -6, -7, -8, -9, -10, 127, 127, 127, 127, 127, 127, -4, -5, -6, -7, -8, -9, 127, 127, 127, 127, 127, 127, -3, -4, -5, -6, -7, -8}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_43 = TestModelManager::get().add("sub_quant8_signed_43", get_test_model_43());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_all_inputs_as_internal_43() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {4, 7},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8, -9, -10, -11, -12, -13, -128, -128, -128, -128, -128, -128, -7, -8, -9, -10, -11, -12, -128, -128, -128, -128, -128, -128, -6, -7, -8, -9, -10, -11, -128, -128, -128, -128, -128, -128, -5, -6, -7, -8, -9, -10, -128, -128, -128, -128, -128, -128, -4, -5, -6, -7, -8, -9, -128, -128, -128, -128, -128, -128, -3, -4, -5, -6, -7, -8, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -8, -9, -10, -11, -12, -13, 127, 127, 127, 127, 127, 127, -7, -8, -9, -10, -11, -12, 127, 127, 127, 127, 127, 127, -6, -7, -8, -9, -10, -11, 127, 127, 127, 127, 127, 127, -5, -6, -7, -8, -9, -10, 127, 127, 127, 127, 127, 127, -4, -5, -6, -7, -8, -9, 127, 127, 127, 127, 127, 127, -3, -4, -5, -6, -7, -8}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {4, 5, 6},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {7, 8, 9},
                            .outputs = {1},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_all_inputs_as_internal_43 = TestModelManager::get().add("sub_quant8_signed_all_inputs_as_internal_43", get_test_model_all_inputs_as_internal_43());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_44() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_44 = TestModelManager::get().add("sub_quant8_signed_44", get_test_model_44());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_all_inputs_as_internal_44() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {4, 7},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {4, 5, 6},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {7, 8, 9},
                            .outputs = {1},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_all_inputs_as_internal_44 = TestModelManager::get().add("sub_quant8_signed_all_inputs_as_internal_44", get_test_model_all_inputs_as_internal_44());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_45() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_45 = TestModelManager::get().add("sub_quant8_signed_45", get_test_model_45());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_all_inputs_as_internal_45() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {4, 7},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {4, 5, 6},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {7, 8, 9},
                            .outputs = {1},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_all_inputs_as_internal_45 = TestModelManager::get().add("sub_quant8_signed_all_inputs_as_internal_45", get_test_model_all_inputs_as_internal_45());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_46() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_46 = TestModelManager::get().add("sub_quant8_signed_46", get_test_model_46());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_all_inputs_as_internal_46() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {4, 7},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {4, 5, 6},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {7, 8, 9},
                            .outputs = {1},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_all_inputs_as_internal_46 = TestModelManager::get().add("sub_quant8_signed_all_inputs_as_internal_46", get_test_model_all_inputs_as_internal_46());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_47() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_47 = TestModelManager::get().add("sub_quant8_signed_47", get_test_model_47());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_all_inputs_as_internal_47() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {4, 7},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {4, 5, 6},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {7, 8, 9},
                            .outputs = {1},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_all_inputs_as_internal_47 = TestModelManager::get().add("sub_quant8_signed_all_inputs_as_internal_47", get_test_model_all_inputs_as_internal_47());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_48() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({112, 111, 110, 109, 108, 107, -128, -128, -128, -128, -128, -128, 112, 111, 110, 109, 108, 107, -128, -128, -128, -128, -128, -128, 112, 111, 110, 109, 108, 107, -128, -128, -128, -128, -128, -128, 112, 111, 110, 109, 108, 107, -128, -128, -128, -128, -128, -128, 112, 111, 110, 109, 108, 107, -128, -128, -128, -128, -128, -128, 112, 111, 110, 109, 108, 107, -128, -128, -128, -128, -128, -128, 112, 111, 110, 109, 108, 107, -128, -128, -128, -128, -128, -128, 112, 111, 110, 109, 108, 107, -128, -128, -128, -128, -128, -128, 112, 111, 110, 109, 108, 107, -128, -128, -128, -128, -128, -128, 112, 111, 110, 109, 108, 107, -128, -128, -128, -128, -128, -128, 112, 111, 110, 109, 108, 107, -128, -128, -128, -128, -128, -128, 112, 111, 110, 109, 108, 107, -128, -128, -128, -128, -128, -128}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_48 = TestModelManager::get().add("sub_quant8_signed_48", get_test_model_48());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_all_inputs_as_internal_48() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {4, 7},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({112, 111, 110, 109, 108, 107, -128, -128, -128, -128, -128, -128, 112, 111, 110, 109, 108, 107, -128, -128, -128, -128, -128, -128, 112, 111, 110, 109, 108, 107, -128, -128, -128, -128, -128, -128, 112, 111, 110, 109, 108, 107, -128, -128, -128, -128, -128, -128, 112, 111, 110, 109, 108, 107, -128, -128, -128, -128, -128, -128, 112, 111, 110, 109, 108, 107, -128, -128, -128, -128, -128, -128, 112, 111, 110, 109, 108, 107, -128, -128, -128, -128, -128, -128, 112, 111, 110, 109, 108, 107, -128, -128, -128, -128, -128, -128, 112, 111, 110, 109, 108, 107, -128, -128, -128, -128, -128, -128, 112, 111, 110, 109, 108, 107, -128, -128, -128, -128, -128, -128, 112, 111, 110, 109, 108, 107, -128, -128, -128, -128, -128, -128, 112, 111, 110, 109, 108, 107, -128, -128, -128, -128, -128, -128}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {4, 5, 6},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {7, 8, 9},
                            .outputs = {1},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_all_inputs_as_internal_48 = TestModelManager::get().add("sub_quant8_signed_all_inputs_as_internal_48", get_test_model_all_inputs_as_internal_48());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_49() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_49 = TestModelManager::get().add("sub_quant8_signed_49", get_test_model_49());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_all_inputs_as_internal_49() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {4, 7},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {4, 5, 6},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {7, 8, 9},
                            .outputs = {1},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_all_inputs_as_internal_49 = TestModelManager::get().add("sub_quant8_signed_all_inputs_as_internal_49", get_test_model_all_inputs_as_internal_49());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_50() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_50 = TestModelManager::get().add("sub_quant8_signed_50", get_test_model_50());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_all_inputs_as_internal_50() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {4, 7},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {4, 5, 6},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {7, 8, 9},
                            .outputs = {1},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_all_inputs_as_internal_50 = TestModelManager::get().add("sub_quant8_signed_all_inputs_as_internal_50", get_test_model_all_inputs_as_internal_50());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_51() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_51 = TestModelManager::get().add("sub_quant8_signed_51", get_test_model_51());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_all_inputs_as_internal_51() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {4, 7},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {4, 5, 6},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {7, 8, 9},
                            .outputs = {1},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_all_inputs_as_internal_51 = TestModelManager::get().add("sub_quant8_signed_all_inputs_as_internal_51", get_test_model_all_inputs_as_internal_51());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_52() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -128, -128, -128, -128, -128, -128, -128, -126, -126, -126, -126, -126, -126, -128, -128, -128, -128, -128, -128, -125, -125, -125, -125, -125, -126, -128, -128, -128, -128, -128, -128, -124, -124, -124, -124, -124, -124, -128, -128, -128, -128, -128, -128, -123, -123, -123, -123, -123, -124, -128, -128, -128, -128, -128, -128, 122, 122, 122, 122, 122, 122, 97, 97, 97, 97, 97, 96, 123, 123, 123, 123, 123, 122, 98, 98, 98, 98, 98, 98, 124, 124, 124, 124, 124, 124, 99, 99, 99, 99, 99, 98, 125, 125, 125, 125, 125, 124, 100, 100, 100, 100, 100, 100, 126, 126, 126, 126, 126, 126, 101, 101, 101, 101, 101, 100, 127, 127, 127, 127, 127, 126, 102, 102, 102, 102, 102, 102}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_52 = TestModelManager::get().add("sub_quant8_signed_52", get_test_model_52());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_all_inputs_as_internal_52() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {4, 7},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -128, -128, -128, -128, -128, -128, -128, -126, -126, -126, -126, -126, -126, -128, -128, -128, -128, -128, -128, -125, -125, -125, -125, -125, -126, -128, -128, -128, -128, -128, -128, -124, -124, -124, -124, -124, -124, -128, -128, -128, -128, -128, -128, -123, -123, -123, -123, -123, -124, -128, -128, -128, -128, -128, -128, 122, 122, 122, 122, 122, 122, 97, 97, 97, 97, 97, 96, 123, 123, 123, 123, 123, 122, 98, 98, 98, 98, 98, 98, 124, 124, 124, 124, 124, 124, 99, 99, 99, 99, 99, 98, 125, 125, 125, 125, 125, 124, 100, 100, 100, 100, 100, 100, 126, 126, 126, 126, 126, 126, 101, 101, 101, 101, 101, 100, 127, 127, 127, 127, 127, 126, 102, 102, 102, 102, 102, 102}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {4, 5, 6},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {7, 8, 9},
                            .outputs = {1},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_all_inputs_as_internal_52 = TestModelManager::get().add("sub_quant8_signed_all_inputs_as_internal_52", get_test_model_all_inputs_as_internal_52());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_53() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_53 = TestModelManager::get().add("sub_quant8_signed_53", get_test_model_53());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_all_inputs_as_internal_53() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {4, 7},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-127}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {4, 5, 6},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {7, 8, 9},
                            .outputs = {1},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_all_inputs_as_internal_53 = TestModelManager::get().add("sub_quant8_signed_all_inputs_as_internal_53", get_test_model_all_inputs_as_internal_53());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_54() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_54 = TestModelManager::get().add("sub_quant8_signed_54", get_test_model_54());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_all_inputs_as_internal_54() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {4, 7},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-127}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {4, 5, 6},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {7, 8, 9},
                            .outputs = {1},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_all_inputs_as_internal_54 = TestModelManager::get().add("sub_quant8_signed_all_inputs_as_internal_54", get_test_model_all_inputs_as_internal_54());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_55() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_55 = TestModelManager::get().add("sub_quant8_signed_55", get_test_model_55());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_all_inputs_as_internal_55() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {4, 7},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-127}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {4, 5, 6},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {7, 8, 9},
                            .outputs = {1},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_all_inputs_as_internal_55 = TestModelManager::get().add("sub_quant8_signed_all_inputs_as_internal_55", get_test_model_all_inputs_as_internal_55());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_56() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -128, -128, -128, -128, -128, -128, -126, -126, -126, -126, -126, -126, -128, -128, -128, -128, -128, -128, -125, -125, -125, -125, -125, -125, -128, -128, -128, -128, -128, -128, -124, -124, -124, -124, -124, -124, -128, -128, -128, -128, -128, -128, -123, -123, -123, -123, -123, -123, -128, -128, -128, -128, -128, -128, 122, 122, 122, 122, 122, 122, 97, 97, 97, 97, 97, 97, 123, 123, 123, 123, 123, 123, 98, 98, 98, 98, 98, 98, 124, 124, 124, 124, 124, 124, 99, 99, 99, 99, 99, 99, 125, 125, 125, 125, 125, 125, 100, 100, 100, 100, 100, 100, 126, 126, 126, 126, 126, 126, 101, 101, 101, 101, 101, 101, 127, 127, 127, 127, 127, 127, 102, 102, 102, 102, 102, 102}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_56 = TestModelManager::get().add("sub_quant8_signed_56", get_test_model_56());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_all_inputs_as_internal_56() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {4, 7},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -128, -128, -128, -128, -128, -128, -126, -126, -126, -126, -126, -126, -128, -128, -128, -128, -128, -128, -125, -125, -125, -125, -125, -125, -128, -128, -128, -128, -128, -128, -124, -124, -124, -124, -124, -124, -128, -128, -128, -128, -128, -128, -123, -123, -123, -123, -123, -123, -128, -128, -128, -128, -128, -128, 122, 122, 122, 122, 122, 122, 97, 97, 97, 97, 97, 97, 123, 123, 123, 123, 123, 123, 98, 98, 98, 98, 98, 98, 124, 124, 124, 124, 124, 124, 99, 99, 99, 99, 99, 99, 125, 125, 125, 125, 125, 125, 100, 100, 100, 100, 100, 100, 126, 126, 126, 126, 126, 126, 101, 101, 101, 101, 101, 101, 127, 127, 127, 127, 127, 127, 102, 102, 102, 102, 102, 102}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-127}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {4, 5, 6},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {7, 8, 9},
                            .outputs = {1},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_all_inputs_as_internal_56 = TestModelManager::get().add("sub_quant8_signed_all_inputs_as_internal_56", get_test_model_all_inputs_as_internal_56());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_57() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_57 = TestModelManager::get().add("sub_quant8_signed_57", get_test_model_57());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_all_inputs_as_internal_57() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {4, 7},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {4, 5, 6},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {7, 8, 9},
                            .outputs = {1},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_all_inputs_as_internal_57 = TestModelManager::get().add("sub_quant8_signed_all_inputs_as_internal_57", get_test_model_all_inputs_as_internal_57());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_58() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_58 = TestModelManager::get().add("sub_quant8_signed_58", get_test_model_58());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_all_inputs_as_internal_58() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {4, 7},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {4, 5, 6},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {7, 8, 9},
                            .outputs = {1},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_all_inputs_as_internal_58 = TestModelManager::get().add("sub_quant8_signed_all_inputs_as_internal_58", get_test_model_all_inputs_as_internal_58());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_59() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_59 = TestModelManager::get().add("sub_quant8_signed_59", get_test_model_59());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_all_inputs_as_internal_59() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {4, 7},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {4, 5, 6},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {7, 8, 9},
                            .outputs = {1},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_all_inputs_as_internal_59 = TestModelManager::get().add("sub_quant8_signed_all_inputs_as_internal_59", get_test_model_all_inputs_as_internal_59());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_60() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_60 = TestModelManager::get().add("sub_quant8_signed_60", get_test_model_60());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_all_inputs_as_internal_60() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {4, 7},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {4, 5, 6},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {7, 8, 9},
                            .outputs = {1},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_all_inputs_as_internal_60 = TestModelManager::get().add("sub_quant8_signed_all_inputs_as_internal_60", get_test_model_all_inputs_as_internal_60());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_61() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -118, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -108, -118, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -98, -108, -118, -128, -128, -128, -128, -128, -128, -128, -128, -128, -88, -98, -108, -118, -128, -128, -128, -128, -128, -128, -128, -128, -78, -88, -98, -108, -118, -128, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -118, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -108, -118, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -98, -108, -118, -128, -128, -128, 127, 127, 127, 127, 127, 127, -88, -98, -108, -118, -128, -128, 127, 127, 127, 127, 127, 127, -78, -88, -98, -108, -118, -128}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_61 = TestModelManager::get().add("sub_quant8_signed_61", get_test_model_61());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_all_inputs_as_internal_61() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {4, 7},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -118, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -108, -118, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -98, -108, -118, -128, -128, -128, -128, -128, -128, -128, -128, -128, -88, -98, -108, -118, -128, -128, -128, -128, -128, -128, -128, -128, -78, -88, -98, -108, -118, -128, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -118, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -108, -118, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -98, -108, -118, -128, -128, -128, 127, 127, 127, 127, 127, 127, -88, -98, -108, -118, -128, -128, 127, 127, 127, 127, 127, 127, -78, -88, -98, -108, -118, -128}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {4, 5, 6},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {7, 8, 9},
                            .outputs = {1},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_all_inputs_as_internal_61 = TestModelManager::get().add("sub_quant8_signed_all_inputs_as_internal_61", get_test_model_all_inputs_as_internal_61());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_62() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -117, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -107, -117, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -97, -107, -117, -127, -128, -128, -128, -128, -128, -128, -128, -128, -87, -97, -107, -117, -127, -128, -128, -128, -128, -128, -128, -128, -77, -87, -97, -107, -117, -127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -127, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -117, -127, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -107, -117, -127, -128, -128, -128, 127, 127, 127, 127, 127, 127, -97, -107, -117, -127, -128, -128, 127, 127, 127, 127, 127, 127, -87, -97, -107, -117, -127, -128, 127, 127, 127, 127, 127, 127, -77, -87, -97, -107, -117, -127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_62 = TestModelManager::get().add("sub_quant8_signed_62", get_test_model_62());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_all_inputs_as_internal_62() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {4, 7},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -117, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -107, -117, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -97, -107, -117, -127, -128, -128, -128, -128, -128, -128, -128, -128, -87, -97, -107, -117, -127, -128, -128, -128, -128, -128, -128, -128, -77, -87, -97, -107, -117, -127, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -127, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -117, -127, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -107, -117, -127, -128, -128, -128, 127, 127, 127, 127, 127, 127, -97, -107, -117, -127, -128, -128, 127, 127, 127, 127, 127, 127, -87, -97, -107, -117, -127, -128, 127, 127, 127, 127, 127, 127, -77, -87, -97, -107, -117, -127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -127
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {4, 5, 6},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {7, 8, 9},
                            .outputs = {1},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_all_inputs_as_internal_62 = TestModelManager::get().add("sub_quant8_signed_all_inputs_as_internal_62", get_test_model_all_inputs_as_internal_62());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_63() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 127, -8, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 127, 127, -8, -128, -128, -128, -128, -128, -128, -128, -128, -128, 127, 127, 127, -8, -128, -128, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, -8, -128, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, -8, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -8, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, 127, -8, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, 127, 127, -8, -128, -128, -128, 127, 127, 127, 127, 127, 127, 127, 127, 127, -8, -128, -128, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, -8, -128, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, -8}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_63 = TestModelManager::get().add("sub_quant8_signed_63", get_test_model_63());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_all_inputs_as_internal_63() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {4, 7},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 127, -8, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 127, 127, -8, -128, -128, -128, -128, -128, -128, -128, -128, -128, 127, 127, 127, -8, -128, -128, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, -8, -128, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, -8, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -8, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, 127, -8, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, 127, 127, -8, -128, -128, -128, 127, 127, 127, 127, 127, 127, 127, 127, 127, -8, -128, -128, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, -8, -128, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, -8}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {4, 5, 6},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {7, 8, 9},
                            .outputs = {1},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_all_inputs_as_internal_63 = TestModelManager::get().add("sub_quant8_signed_all_inputs_as_internal_63", get_test_model_all_inputs_as_internal_63());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_64() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8, -9, -10, -11, -12, -13, -128, -128, -128, -128, -128, -128, -7, -8, -9, -10, -11, -12, -128, -128, -128, -128, -128, -128, -6, -7, -8, -9, -10, -11, -128, -128, -128, -128, -128, -128, -5, -6, -7, -8, -9, -10, -128, -128, -128, -128, -128, -128, -4, -5, -6, -7, -8, -9, -128, -128, -128, -128, -128, -128, -3, -4, -5, -6, -7, -8, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -8, -9, -10, -11, -12, -13, 127, 127, 127, 127, 127, 127, -7, -8, -9, -10, -11, -12, 127, 127, 127, 127, 127, 127, -6, -7, -8, -9, -10, -11, 127, 127, 127, 127, 127, 127, -5, -6, -7, -8, -9, -10, 127, 127, 127, 127, 127, 127, -4, -5, -6, -7, -8, -9, 127, 127, 127, 127, 127, 127, -3, -4, -5, -6, -7, -8}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_64 = TestModelManager::get().add("sub_quant8_signed_64", get_test_model_64());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_all_inputs_as_internal_64() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {4, 7},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8, -9, -10, -11, -12, -13, -128, -128, -128, -128, -128, -128, -7, -8, -9, -10, -11, -12, -128, -128, -128, -128, -128, -128, -6, -7, -8, -9, -10, -11, -128, -128, -128, -128, -128, -128, -5, -6, -7, -8, -9, -10, -128, -128, -128, -128, -128, -128, -4, -5, -6, -7, -8, -9, -128, -128, -128, -128, -128, -128, -3, -4, -5, -6, -7, -8, -128, -128, -128, -128, -128, -128, 127, 127, 127, 127, 127, 127, -8, -9, -10, -11, -12, -13, 127, 127, 127, 127, 127, 127, -7, -8, -9, -10, -11, -12, 127, 127, 127, 127, 127, 127, -6, -7, -8, -9, -10, -11, 127, 127, 127, 127, 127, 127, -5, -6, -7, -8, -9, -10, 127, 127, 127, 127, 127, 127, -4, -5, -6, -7, -8, -9, 127, 127, 127, 127, 127, 127, -3, -4, -5, -6, -7, -8}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, -123, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127, -128, -127, -126, -125, -124, -123, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {144},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-8}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 10.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -8
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {4, 5, 6},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {7, 8, 9},
                            .outputs = {1},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_all_inputs_as_internal_64 = TestModelManager::get().add("sub_quant8_signed_all_inputs_as_internal_64", get_test_model_all_inputs_as_internal_64());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_quant8() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-28, 72}),
                            .dimensions = {1, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-127, -126, -125, -124}),
                            .dimensions = {2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-29, 70, -31, 68}),
                            .dimensions = {2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_quant8 = TestModelManager::get().add("sub_quant8_signed_quant8", get_test_model_quant8());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_quant8_all_inputs_as_internal() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {4, 7},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {1, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-29, 70, -31, 68}),
                            .dimensions = {2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-28, 72}),
                            .dimensions = {1, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-127, -126, -125, -124}),
                            .dimensions = {2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 1.0f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {4, 5, 6},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {7, 8, 9},
                            .outputs = {1},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_quant8_all_inputs_as_internal = TestModelManager::get().add("sub_quant8_signed_quant8_all_inputs_as_internal", get_test_model_quant8_all_inputs_as_internal());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_quant8_2() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, -122, -121, -120, -119, -118, -117, -116, -115, -114, -113, -112, -111, -110, -109, -108, -107, -106, -105, -104, -103, -102, -101, -100, -99, -98, -97, -96, -95, -94, -93, -92, -91, -90, -89, -88, -87, -86, -85, -84, -83, -82, -81, -80, -79, -78, -77, -76, -75, -74, -73, -72, -71, -70, -69, -68, -67, -66, -65, -64, -63, -62, -61, -60, -59, -58, -57, -56, -55, -54, -53, -52, -51, -50, -49, -48, -47, -46, -45, -44, -43, -42, -41, -40, -39, -38, -37, -36, -35, -34, -33, -32, -31, -30, -29, -28, -27, -26, -25, -24, -23, -22, -21, -20, -19, -18, -17, -16, -15, -14, -13, -12, -11, -10, -9, -8, -7, -6, -5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {2, 4, 16, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.5f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-127, -40, 4, 105, 34, -89, 57, 109, 110, 31, 36, -52, -69, 16, -31, -34, 86, 68, 85, 93, -63, -12, -79, 94, 96, -65, -77, -10, 29, -22, -75, -83, 63, -70, 125, -57, 20, 126, 3, -88, -85, -71, -115, 0, 50, -98, -82, 98, 55, -61, 115, -84, -122, 64, 44, -99, -96, 82, -46, 42, 14, -109, 103, -1, 33, 18, 40, 67, -23, -59, 121, 118, -102, 23, 87, 62, -36, 117, -42, -124, -16, -19, -117, -78, -29, -32, 48, -11, -33, 116, 70, 49, -41, 41, -60, 25, 101, -123, -18, -39, 90, 9, -116, -121, -24, -74, -9, -107, -27, 27, -100, 83, -5, -94, -35, -126, 38, 102, -20, -86, 81, -53, 59, -114, -50, -87, 123, 112, 61, -13, 7, 124, 108, -68, 74, -58, 6, -28, 46, -119, -90, -95, -106, -111, -7, 73, -120, 111, 54, -81, 39, 51, 19, 45, -30, 24, 88, 75, -55, 22, 37, 95, 78, 10, 60, 71, -97, -54, 77, 114, -101, -3, 120, -47, -108, 127, -14, 11, -92, -67, -72, 17, -80, -112, 97, -45, 91, -66, -43, -2, 80, -128, 32, 43, 53, -26, 56, -105, -125, 12, -113, 122, 5, -15, 113, 13, -76, 35, 28, -48, -17, -38, 92, 15, -8, -44, 47, 89, -110, 58, -103, -49, -91, 26, 79, 52, 8, -64, 76, 30, -104, 65, 106, -56, -93, 1, -73, 104, 100, 21, -37, -6, -51, 84, 72, 107, -25, -4, 2, 119, -62, -118, -21, 99, 66, 69}),
                            .dimensions = {2, 4, 16, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.5f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -99, -128, -128, -113, -128, -128, -128, -128, -128, -121, -82, -128, -128, -102, -104, -128, -128, -128, -128, -86, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -82, -128, -128, -128, -128, -128, -128, -53, -128, -128, -57, -95, -128, -128, -128, -128, -128, -128, -128, -128, -123, -128, -102, -128, -128, -36, -128, -118, -128, -128, -38, -32, -128, -77, -128, -42, -121, -128, -46, -128, -128, -49, -107, -15, -128, -128, -118, -51, -128, -82, -128, -19, -82, -44, -128, -128, -128, -114, -128, -128, -128, -55, -128, -63, -126, -91, -128, 2, -26, -20, -8, -2, -105, -128, 10, -128, -128, -26, -128, -128, -123, -128, -72, -125, -128, -128, -43, -119, -128, -128, -128, -103, -128, -128, 7, -35, -128, -128, 15, -82, -128, -36, 26, -128, -66, -90, 14, -10, -4, -92, 6, 39, -128, -26, -128, -3, -25, -65, -128, 63, -96, -106, -115, -35, -116, 46, 67, -69, 57, -128, -59, -38, -128, -64, 26, -84, -76, 1, -29, -7, -128, -58, -34, 3, -87, -128, 72, -95, 67, 14, 57, -59, -111, -83, -38, 35, -104, -57, 78, -90, -128, 33, 71, -22, 53, -123, -118, -38, 21, -9, 37, -97, -84, -118, 15, -5, -10, -126, 56, 113, 17, -102, -68, -70}),
                            .dimensions = {2, 4, 16, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.5f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_quant8_2 = TestModelManager::get().add("sub_quant8_signed_quant8_2", get_test_model_quant8_2());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_quant8_all_inputs_as_internal_2() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {4, 7},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {2, 4, 16, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.5f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {2, 4, 16, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.5f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -99, -128, -128, -113, -128, -128, -128, -128, -128, -121, -82, -128, -128, -102, -104, -128, -128, -128, -128, -86, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -82, -128, -128, -128, -128, -128, -128, -53, -128, -128, -57, -95, -128, -128, -128, -128, -128, -128, -128, -128, -123, -128, -102, -128, -128, -36, -128, -118, -128, -128, -38, -32, -128, -77, -128, -42, -121, -128, -46, -128, -128, -49, -107, -15, -128, -128, -118, -51, -128, -82, -128, -19, -82, -44, -128, -128, -128, -114, -128, -128, -128, -55, -128, -63, -126, -91, -128, 2, -26, -20, -8, -2, -105, -128, 10, -128, -128, -26, -128, -128, -123, -128, -72, -125, -128, -128, -43, -119, -128, -128, -128, -103, -128, -128, 7, -35, -128, -128, 15, -82, -128, -36, 26, -128, -66, -90, 14, -10, -4, -92, 6, 39, -128, -26, -128, -3, -25, -65, -128, 63, -96, -106, -115, -35, -116, 46, 67, -69, 57, -128, -59, -38, -128, -64, 26, -84, -76, 1, -29, -7, -128, -58, -34, 3, -87, -128, 72, -95, 67, 14, 57, -59, -111, -83, -38, 35, -104, -57, 78, -90, -128, 33, 71, -22, 53, -123, -118, -38, 21, -9, 37, -97, -84, -118, 15, -5, -10, -126, 56, 113, 17, -102, -68, -70}),
                            .dimensions = {2, 4, 16, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.5f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128, -127, -126, -125, -124, -123, -122, -121, -120, -119, -118, -117, -116, -115, -114, -113, -112, -111, -110, -109, -108, -107, -106, -105, -104, -103, -102, -101, -100, -99, -98, -97, -96, -95, -94, -93, -92, -91, -90, -89, -88, -87, -86, -85, -84, -83, -82, -81, -80, -79, -78, -77, -76, -75, -74, -73, -72, -71, -70, -69, -68, -67, -66, -65, -64, -63, -62, -61, -60, -59, -58, -57, -56, -55, -54, -53, -52, -51, -50, -49, -48, -47, -46, -45, -44, -43, -42, -41, -40, -39, -38, -37, -36, -35, -34, -33, -32, -31, -30, -29, -28, -27, -26, -25, -24, -23, -22, -21, -20, -19, -18, -17, -16, -15, -14, -13, -12, -11, -10, -9, -8, -7, -6, -5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127}),
                            .dimensions = {2, 4, 16, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.5f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.5f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-127, -40, 4, 105, 34, -89, 57, 109, 110, 31, 36, -52, -69, 16, -31, -34, 86, 68, 85, 93, -63, -12, -79, 94, 96, -65, -77, -10, 29, -22, -75, -83, 63, -70, 125, -57, 20, 126, 3, -88, -85, -71, -115, 0, 50, -98, -82, 98, 55, -61, 115, -84, -122, 64, 44, -99, -96, 82, -46, 42, 14, -109, 103, -1, 33, 18, 40, 67, -23, -59, 121, 118, -102, 23, 87, 62, -36, 117, -42, -124, -16, -19, -117, -78, -29, -32, 48, -11, -33, 116, 70, 49, -41, 41, -60, 25, 101, -123, -18, -39, 90, 9, -116, -121, -24, -74, -9, -107, -27, 27, -100, 83, -5, -94, -35, -126, 38, 102, -20, -86, 81, -53, 59, -114, -50, -87, 123, 112, 61, -13, 7, 124, 108, -68, 74, -58, 6, -28, 46, -119, -90, -95, -106, -111, -7, 73, -120, 111, 54, -81, 39, 51, 19, 45, -30, 24, 88, 75, -55, 22, 37, 95, 78, 10, 60, 71, -97, -54, 77, 114, -101, -3, 120, -47, -108, 127, -14, 11, -92, -67, -72, 17, -80, -112, 97, -45, 91, -66, -43, -2, 80, -128, 32, 43, 53, -26, 56, -105, -125, 12, -113, 122, 5, -15, 113, 13, -76, 35, 28, -48, -17, -38, 92, 15, -8, -44, 47, 89, -110, 58, -103, -49, -91, 26, 79, 52, 8, -64, 76, 30, -104, 65, 106, -56, -93, 1, -73, 104, 100, 21, -37, -6, -51, 84, 72, 107, -25, -4, 2, 119, -62, -118, -21, 99, 66, 69}),
                            .dimensions = {2, 4, 16, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.5f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-128}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.5f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -128
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {4, 5, 6},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {7, 8, 9},
                            .outputs = {1},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_quant8_all_inputs_as_internal_2 = TestModelManager::get().add("sub_quant8_signed_quant8_all_inputs_as_internal_2", get_test_model_quant8_all_inputs_as_internal_2());

}  // namespace generated_tests::sub_quant8_signed

namespace generated_tests::sub_quant8_signed {

const TestModel& get_test_model_zero_sized_quant8_signed() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {13},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({9, 1}),
                            .dimensions = {1, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.1f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<uint16_t>({8, 8, 80, 80, 0, 0, 80, 80}),
                            .dimensions = {1, 8},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.125f,
                            .type = TestOperandType::TENSOR_QUANT16_ASYMM,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.3f}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::FLOAT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({-1}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.4f}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::FLOAT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({1.0f}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::FLOAT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.3f}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::FLOAT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {0},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.1f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<uint16_t>({}),
                            .dimensions = {0, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.125f,
                            .type = TestOperandType::TENSOR_QUANT16_ASYMM,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({}),
                            .dimensions = {0},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({}),
                            .dimensions = {0},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({10, 20}),
                            .dimensions = {1, 1, 1, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.1f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({2}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({2}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({2.0f}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::FLOAT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({2.0f}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::FLOAT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({4}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({4}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<bool8>({false}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::BOOL,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {0, 2, 2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.1f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({10, 20, 30, 40}),
                            .dimensions = {1, 2, 2, 1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.1f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {0, 2, 2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.1f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {0, 1, 2, 3, 4, 5, 6, 7, 8},
                            .outputs = {9, 10, 11, 12},
                            .type = TestOperationType::BOX_WITH_NMS_LIMIT
                        }, {
                            .inputs = {13, 10, 12, 14, 15, 16, 17, 18, 19, 20},
                            .outputs = {21},
                            .type = TestOperationType::ROI_ALIGN
                        }, {
                            .inputs = {21, 22, 23},
                            .outputs = {24},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {9, 11, 24}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_zero_sized_quant8_signed = TestModelManager::get().add("sub_quant8_signed_zero_sized_quant8_signed", get_test_model_zero_sized_quant8_signed());

}  // namespace generated_tests::sub_quant8_signed

