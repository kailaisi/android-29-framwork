// Generated from instance_normalization.mod.py
// DO NOT EDIT
// clang-format off
#include "TestHarness.h"
using namespace test_helper;

namespace generated_tests::instance_normalization {

const TestModel& get_test_model_nhwc() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f, 1.0f, 0.0f, 2.0f, 0.0f, 2.0f, 0.0f, 4.0f, 1.0f, -1.0f, -1.0f, 2.0f, -1.0f, -2.0f, 1.0f, 4.0f}),
                            .dimensions = {2, 2, 2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
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
                            .data = TestBuffer::createFromVector<float>({0.0f}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::FLOAT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0001f}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::FLOAT32,
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
                            .data = TestBuffer::createFromVector<float>({0.0f, -1.1470304f, 0.0f, -0.22940612f, 0.0f, -0.22940612f, 0.0f, 1.6058424f, 0.99995005f, -0.7337929f, -0.99995005f, 0.52413774f, -0.99995005f, -1.1531031f, 0.99995005f, 1.3627582f}),
                            .dimensions = {2, 2, 2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {0, 1, 2, 3, 4},
                            .outputs = {5},
                            .type = TestOperationType::INSTANCE_NORMALIZATION
                        }},
                .outputIndexes = {5}
            },
        .minSupportedVersion = TestHalVersion::V1_2,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_nhwc = TestModelManager::get().add("instance_normalization_nhwc", get_test_model_nhwc());

}  // namespace generated_tests::instance_normalization

namespace generated_tests::instance_normalization {

const TestModel& get_test_model_nhwc_all_inputs_as_internal() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {6},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {2, 2, 2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
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
                            .data = TestBuffer::createFromVector<float>({0.0f}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::FLOAT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0001f}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::FLOAT32,
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
                            .data = TestBuffer::createFromVector<float>({0.0f, -1.1470304f, 0.0f, -0.22940612f, 0.0f, -0.22940612f, 0.0f, 1.6058424f, 0.99995005f, -0.7337929f, -0.99995005f, 0.52413774f, -0.99995005f, -1.1531031f, 0.99995005f, 1.3627582f}),
                            .dimensions = {2, 2, 2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f, 1.0f, 0.0f, 2.0f, 0.0f, 2.0f, 0.0f, 4.0f, 1.0f, -1.0f, -1.0f, 2.0f, -1.0f, -2.0f, 1.0f, 4.0f}),
                            .dimensions = {2, 2, 2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
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
                        }},
                .operations = {{
                            .inputs = {6, 7, 8},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2, 3, 4},
                            .outputs = {5},
                            .type = TestOperationType::INSTANCE_NORMALIZATION
                        }},
                .outputIndexes = {5}
            },
        .minSupportedVersion = TestHalVersion::V1_2,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_nhwc_all_inputs_as_internal = TestModelManager::get().add("instance_normalization_nhwc_all_inputs_as_internal", get_test_model_nhwc_all_inputs_as_internal());

}  // namespace generated_tests::instance_normalization

namespace generated_tests::instance_normalization {

const TestModel& get_test_model_nhwc_relaxed() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = true,
        .main = {
                .inputIndexes = {0},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f, 1.0f, 0.0f, 2.0f, 0.0f, 2.0f, 0.0f, 4.0f, 1.0f, -1.0f, -1.0f, 2.0f, -1.0f, -2.0f, 1.0f, 4.0f}),
                            .dimensions = {2, 2, 2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
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
                            .data = TestBuffer::createFromVector<float>({0.0f}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::FLOAT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0001f}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::FLOAT32,
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
                            .data = TestBuffer::createFromVector<float>({0.0f, -1.1470304f, 0.0f, -0.22940612f, 0.0f, -0.22940612f, 0.0f, 1.6058424f, 0.99995005f, -0.7337929f, -0.99995005f, 0.52413774f, -0.99995005f, -1.1531031f, 0.99995005f, 1.3627582f}),
                            .dimensions = {2, 2, 2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {0, 1, 2, 3, 4},
                            .outputs = {5},
                            .type = TestOperationType::INSTANCE_NORMALIZATION
                        }},
                .outputIndexes = {5}
            },
        .minSupportedVersion = TestHalVersion::UNKNOWN,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_nhwc_relaxed = TestModelManager::get().add("instance_normalization_nhwc_relaxed", get_test_model_nhwc_relaxed());

}  // namespace generated_tests::instance_normalization

namespace generated_tests::instance_normalization {

const TestModel& get_test_model_nhwc_relaxed_all_inputs_as_internal() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = true,
        .main = {
                .inputIndexes = {6},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {2, 2, 2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
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
                            .data = TestBuffer::createFromVector<float>({0.0f}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::FLOAT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0001f}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::FLOAT32,
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
                            .data = TestBuffer::createFromVector<float>({0.0f, -1.1470304f, 0.0f, -0.22940612f, 0.0f, -0.22940612f, 0.0f, 1.6058424f, 0.99995005f, -0.7337929f, -0.99995005f, 0.52413774f, -0.99995005f, -1.1531031f, 0.99995005f, 1.3627582f}),
                            .dimensions = {2, 2, 2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f, 1.0f, 0.0f, 2.0f, 0.0f, 2.0f, 0.0f, 4.0f, 1.0f, -1.0f, -1.0f, 2.0f, -1.0f, -2.0f, 1.0f, 4.0f}),
                            .dimensions = {2, 2, 2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
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
                        }},
                .operations = {{
                            .inputs = {6, 7, 8},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2, 3, 4},
                            .outputs = {5},
                            .type = TestOperationType::INSTANCE_NORMALIZATION
                        }},
                .outputIndexes = {5}
            },
        .minSupportedVersion = TestHalVersion::UNKNOWN,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_nhwc_relaxed_all_inputs_as_internal = TestModelManager::get().add("instance_normalization_nhwc_relaxed_all_inputs_as_internal", get_test_model_nhwc_relaxed_all_inputs_as_internal());

}  // namespace generated_tests::instance_normalization

namespace generated_tests::instance_normalization {

const TestModel& get_test_model_nhwc_float16() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({0.0f, 1.0f, 0.0f, 2.0f, 0.0f, 2.0f, 0.0f, 4.0f, 1.0f, -1.0f, -1.0f, 2.0f, -1.0f, -2.0f, 1.0f, 4.0f}),
                            .dimensions = {2, 2, 2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({1.0f}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::FLOAT16,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({0.0f}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::FLOAT16,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({9.999999747378752e-05f}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::FLOAT16,
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
                            .data = TestBuffer::createFromVector<_Float16>({0.0f, -1.1470303535461426f, 0.0f, -0.22940611839294434f, 0.0f, -0.22940611839294434f, 0.0f, 1.6058423519134521f, 0.9999500513076782f, -0.7337929010391235f, -0.9999500513076782f, 0.5241377353668213f, -0.9999500513076782f, -1.1531031131744385f, 0.9999500513076782f, 1.3627581596374512f}),
                            .dimensions = {2, 2, 2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {0, 1, 2, 3, 4},
                            .outputs = {5},
                            .type = TestOperationType::INSTANCE_NORMALIZATION
                        }},
                .outputIndexes = {5}
            },
        .minSupportedVersion = TestHalVersion::V1_2,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_nhwc_float16 = TestModelManager::get().add("instance_normalization_nhwc_float16", get_test_model_nhwc_float16());

}  // namespace generated_tests::instance_normalization

namespace generated_tests::instance_normalization {

const TestModel& get_test_model_nhwc_float16_all_inputs_as_internal() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {6},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({}),
                            .dimensions = {2, 2, 2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({1.0f}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::FLOAT16,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({0.0f}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::FLOAT16,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({9.999999747378752e-05f}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::FLOAT16,
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
                            .data = TestBuffer::createFromVector<_Float16>({0.0f, -1.1470303535461426f, 0.0f, -0.22940611839294434f, 0.0f, -0.22940611839294434f, 0.0f, 1.6058423519134521f, 0.9999500513076782f, -0.7337929010391235f, -0.9999500513076782f, 0.5241377353668213f, -0.9999500513076782f, -1.1531031131744385f, 0.9999500513076782f, 1.3627581596374512f}),
                            .dimensions = {2, 2, 2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({0.0f, 1.0f, 0.0f, 2.0f, 0.0f, 2.0f, 0.0f, 4.0f, 1.0f, -1.0f, -1.0f, 2.0f, -1.0f, -2.0f, 1.0f, 4.0f}),
                            .dimensions = {2, 2, 2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({0.0f}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT16,
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
                        }},
                .operations = {{
                            .inputs = {6, 7, 8},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2, 3, 4},
                            .outputs = {5},
                            .type = TestOperationType::INSTANCE_NORMALIZATION
                        }},
                .outputIndexes = {5}
            },
        .minSupportedVersion = TestHalVersion::V1_2,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_nhwc_float16_all_inputs_as_internal = TestModelManager::get().add("instance_normalization_nhwc_float16_all_inputs_as_internal", get_test_model_nhwc_float16_all_inputs_as_internal());

}  // namespace generated_tests::instance_normalization

namespace generated_tests::instance_normalization {

const TestModel& get_test_model_nchw() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 2.0f, 2.0f, 4.0f, 1.0f, -1.0f, -1.0f, 1.0f, -1.0f, 2.0f, -2.0f, 4.0f}),
                            .dimensions = {2, 2, 2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
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
                            .data = TestBuffer::createFromVector<float>({0.0f}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::FLOAT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0001f}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::FLOAT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<bool8>({true}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::BOOL,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f, 0.0f, 0.0f, 0.0f, -1.1470304f, -0.22940612f, -0.22940612f, 1.6058424f, 0.99995005f, -0.99995005f, -0.99995005f, 0.99995005f, -0.7337929f, 0.52413774f, -1.1531031f, 1.3627582f}),
                            .dimensions = {2, 2, 2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {0, 1, 2, 3, 4},
                            .outputs = {5},
                            .type = TestOperationType::INSTANCE_NORMALIZATION
                        }},
                .outputIndexes = {5}
            },
        .minSupportedVersion = TestHalVersion::V1_2,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_nchw = TestModelManager::get().add("instance_normalization_nchw", get_test_model_nchw());

}  // namespace generated_tests::instance_normalization

namespace generated_tests::instance_normalization {

const TestModel& get_test_model_nchw_all_inputs_as_internal() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {6},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {2, 2, 2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
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
                            .data = TestBuffer::createFromVector<float>({0.0f}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::FLOAT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0001f}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::FLOAT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<bool8>({true}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::BOOL,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f, 0.0f, 0.0f, 0.0f, -1.1470304f, -0.22940612f, -0.22940612f, 1.6058424f, 0.99995005f, -0.99995005f, -0.99995005f, 0.99995005f, -0.7337929f, 0.52413774f, -1.1531031f, 1.3627582f}),
                            .dimensions = {2, 2, 2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 2.0f, 2.0f, 4.0f, 1.0f, -1.0f, -1.0f, 1.0f, -1.0f, 2.0f, -2.0f, 4.0f}),
                            .dimensions = {2, 2, 2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
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
                        }},
                .operations = {{
                            .inputs = {6, 7, 8},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2, 3, 4},
                            .outputs = {5},
                            .type = TestOperationType::INSTANCE_NORMALIZATION
                        }},
                .outputIndexes = {5}
            },
        .minSupportedVersion = TestHalVersion::V1_2,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_nchw_all_inputs_as_internal = TestModelManager::get().add("instance_normalization_nchw_all_inputs_as_internal", get_test_model_nchw_all_inputs_as_internal());

}  // namespace generated_tests::instance_normalization

namespace generated_tests::instance_normalization {

const TestModel& get_test_model_nchw_relaxed() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = true,
        .main = {
                .inputIndexes = {0},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 2.0f, 2.0f, 4.0f, 1.0f, -1.0f, -1.0f, 1.0f, -1.0f, 2.0f, -2.0f, 4.0f}),
                            .dimensions = {2, 2, 2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
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
                            .data = TestBuffer::createFromVector<float>({0.0f}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::FLOAT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0001f}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::FLOAT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<bool8>({true}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::BOOL,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f, 0.0f, 0.0f, 0.0f, -1.1470304f, -0.22940612f, -0.22940612f, 1.6058424f, 0.99995005f, -0.99995005f, -0.99995005f, 0.99995005f, -0.7337929f, 0.52413774f, -1.1531031f, 1.3627582f}),
                            .dimensions = {2, 2, 2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {0, 1, 2, 3, 4},
                            .outputs = {5},
                            .type = TestOperationType::INSTANCE_NORMALIZATION
                        }},
                .outputIndexes = {5}
            },
        .minSupportedVersion = TestHalVersion::UNKNOWN,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_nchw_relaxed = TestModelManager::get().add("instance_normalization_nchw_relaxed", get_test_model_nchw_relaxed());

}  // namespace generated_tests::instance_normalization

namespace generated_tests::instance_normalization {

const TestModel& get_test_model_nchw_relaxed_all_inputs_as_internal() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = true,
        .main = {
                .inputIndexes = {6},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {2, 2, 2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
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
                            .data = TestBuffer::createFromVector<float>({0.0f}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::FLOAT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0001f}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::FLOAT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<bool8>({true}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::BOOL,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f, 0.0f, 0.0f, 0.0f, -1.1470304f, -0.22940612f, -0.22940612f, 1.6058424f, 0.99995005f, -0.99995005f, -0.99995005f, 0.99995005f, -0.7337929f, 0.52413774f, -1.1531031f, 1.3627582f}),
                            .dimensions = {2, 2, 2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 2.0f, 2.0f, 4.0f, 1.0f, -1.0f, -1.0f, 1.0f, -1.0f, 2.0f, -2.0f, 4.0f}),
                            .dimensions = {2, 2, 2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
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
                        }},
                .operations = {{
                            .inputs = {6, 7, 8},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2, 3, 4},
                            .outputs = {5},
                            .type = TestOperationType::INSTANCE_NORMALIZATION
                        }},
                .outputIndexes = {5}
            },
        .minSupportedVersion = TestHalVersion::UNKNOWN,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_nchw_relaxed_all_inputs_as_internal = TestModelManager::get().add("instance_normalization_nchw_relaxed_all_inputs_as_internal", get_test_model_nchw_relaxed_all_inputs_as_internal());

}  // namespace generated_tests::instance_normalization

namespace generated_tests::instance_normalization {

const TestModel& get_test_model_nchw_float16() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 2.0f, 2.0f, 4.0f, 1.0f, -1.0f, -1.0f, 1.0f, -1.0f, 2.0f, -2.0f, 4.0f}),
                            .dimensions = {2, 2, 2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({1.0f}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::FLOAT16,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({0.0f}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::FLOAT16,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({9.999999747378752e-05f}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::FLOAT16,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<bool8>({true}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::BOOL,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({0.0f, 0.0f, 0.0f, 0.0f, -1.1470303535461426f, -0.22940611839294434f, -0.22940611839294434f, 1.6058423519134521f, 0.9999500513076782f, -0.9999500513076782f, -0.9999500513076782f, 0.9999500513076782f, -0.7337929010391235f, 0.5241377353668213f, -1.1531031131744385f, 1.3627581596374512f}),
                            .dimensions = {2, 2, 2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {0, 1, 2, 3, 4},
                            .outputs = {5},
                            .type = TestOperationType::INSTANCE_NORMALIZATION
                        }},
                .outputIndexes = {5}
            },
        .minSupportedVersion = TestHalVersion::V1_2,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_nchw_float16 = TestModelManager::get().add("instance_normalization_nchw_float16", get_test_model_nchw_float16());

}  // namespace generated_tests::instance_normalization

namespace generated_tests::instance_normalization {

const TestModel& get_test_model_nchw_float16_all_inputs_as_internal() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {6},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({}),
                            .dimensions = {2, 2, 2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({1.0f}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::FLOAT16,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({0.0f}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::FLOAT16,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({9.999999747378752e-05f}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::FLOAT16,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<bool8>({true}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::BOOL,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({0.0f, 0.0f, 0.0f, 0.0f, -1.1470303535461426f, -0.22940611839294434f, -0.22940611839294434f, 1.6058423519134521f, 0.9999500513076782f, -0.9999500513076782f, -0.9999500513076782f, 0.9999500513076782f, -0.7337929010391235f, 0.5241377353668213f, -1.1531031131744385f, 1.3627581596374512f}),
                            .dimensions = {2, 2, 2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 2.0f, 2.0f, 4.0f, 1.0f, -1.0f, -1.0f, 1.0f, -1.0f, 2.0f, -2.0f, 4.0f}),
                            .dimensions = {2, 2, 2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({0.0f}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT16,
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
                        }},
                .operations = {{
                            .inputs = {6, 7, 8},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2, 3, 4},
                            .outputs = {5},
                            .type = TestOperationType::INSTANCE_NORMALIZATION
                        }},
                .outputIndexes = {5}
            },
        .minSupportedVersion = TestHalVersion::V1_2,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_nchw_float16_all_inputs_as_internal = TestModelManager::get().add("instance_normalization_nchw_float16_all_inputs_as_internal", get_test_model_nchw_float16_all_inputs_as_internal());

}  // namespace generated_tests::instance_normalization

namespace generated_tests::instance_normalization {

const TestModel& get_test_model_nhwc_2() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f, 1.0f, 0.0f, 2.0f, 0.0f, 2.0f, 0.0f, 4.0f, 1.0f, -1.0f, -1.0f, 2.0f, -1.0f, -2.0f, 1.0f, 4.0f}),
                            .dimensions = {2, 2, 2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
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
                            .data = TestBuffer::createFromVector<float>({10.0f}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::FLOAT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0001f}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::FLOAT32,
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
                            .data = TestBuffer::createFromVector<float>({10.0f, 7.7059393f, 10.0f, 9.541187f, 10.0f, 9.541187f, 10.0f, 13.211685f, 11.9999f, 8.532414f, 8.0001f, 11.048275f, 8.0001f, 7.693794f, 11.9999f, 12.725516f}),
                            .dimensions = {2, 2, 2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {0, 1, 2, 3, 4},
                            .outputs = {5},
                            .type = TestOperationType::INSTANCE_NORMALIZATION
                        }},
                .outputIndexes = {5}
            },
        .minSupportedVersion = TestHalVersion::V1_2,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_nhwc_2 = TestModelManager::get().add("instance_normalization_nhwc_2", get_test_model_nhwc_2());

}  // namespace generated_tests::instance_normalization

namespace generated_tests::instance_normalization {

const TestModel& get_test_model_nhwc_all_inputs_as_internal_2() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {6},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {2, 2, 2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
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
                            .data = TestBuffer::createFromVector<float>({10.0f}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::FLOAT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0001f}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::FLOAT32,
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
                            .data = TestBuffer::createFromVector<float>({10.0f, 7.7059393f, 10.0f, 9.541187f, 10.0f, 9.541187f, 10.0f, 13.211685f, 11.9999f, 8.532414f, 8.0001f, 11.048275f, 8.0001f, 7.693794f, 11.9999f, 12.725516f}),
                            .dimensions = {2, 2, 2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f, 1.0f, 0.0f, 2.0f, 0.0f, 2.0f, 0.0f, 4.0f, 1.0f, -1.0f, -1.0f, 2.0f, -1.0f, -2.0f, 1.0f, 4.0f}),
                            .dimensions = {2, 2, 2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
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
                        }},
                .operations = {{
                            .inputs = {6, 7, 8},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2, 3, 4},
                            .outputs = {5},
                            .type = TestOperationType::INSTANCE_NORMALIZATION
                        }},
                .outputIndexes = {5}
            },
        .minSupportedVersion = TestHalVersion::V1_2,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_nhwc_all_inputs_as_internal_2 = TestModelManager::get().add("instance_normalization_nhwc_all_inputs_as_internal_2", get_test_model_nhwc_all_inputs_as_internal_2());

}  // namespace generated_tests::instance_normalization

namespace generated_tests::instance_normalization {

const TestModel& get_test_model_nhwc_relaxed_2() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = true,
        .main = {
                .inputIndexes = {0},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f, 1.0f, 0.0f, 2.0f, 0.0f, 2.0f, 0.0f, 4.0f, 1.0f, -1.0f, -1.0f, 2.0f, -1.0f, -2.0f, 1.0f, 4.0f}),
                            .dimensions = {2, 2, 2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
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
                            .data = TestBuffer::createFromVector<float>({10.0f}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::FLOAT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0001f}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::FLOAT32,
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
                            .data = TestBuffer::createFromVector<float>({10.0f, 7.7059393f, 10.0f, 9.541187f, 10.0f, 9.541187f, 10.0f, 13.211685f, 11.9999f, 8.532414f, 8.0001f, 11.048275f, 8.0001f, 7.693794f, 11.9999f, 12.725516f}),
                            .dimensions = {2, 2, 2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {0, 1, 2, 3, 4},
                            .outputs = {5},
                            .type = TestOperationType::INSTANCE_NORMALIZATION
                        }},
                .outputIndexes = {5}
            },
        .minSupportedVersion = TestHalVersion::UNKNOWN,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_nhwc_relaxed_2 = TestModelManager::get().add("instance_normalization_nhwc_relaxed_2", get_test_model_nhwc_relaxed_2());

}  // namespace generated_tests::instance_normalization

namespace generated_tests::instance_normalization {

const TestModel& get_test_model_nhwc_relaxed_all_inputs_as_internal_2() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = true,
        .main = {
                .inputIndexes = {6},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {2, 2, 2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
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
                            .data = TestBuffer::createFromVector<float>({10.0f}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::FLOAT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0001f}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::FLOAT32,
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
                            .data = TestBuffer::createFromVector<float>({10.0f, 7.7059393f, 10.0f, 9.541187f, 10.0f, 9.541187f, 10.0f, 13.211685f, 11.9999f, 8.532414f, 8.0001f, 11.048275f, 8.0001f, 7.693794f, 11.9999f, 12.725516f}),
                            .dimensions = {2, 2, 2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f, 1.0f, 0.0f, 2.0f, 0.0f, 2.0f, 0.0f, 4.0f, 1.0f, -1.0f, -1.0f, 2.0f, -1.0f, -2.0f, 1.0f, 4.0f}),
                            .dimensions = {2, 2, 2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
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
                        }},
                .operations = {{
                            .inputs = {6, 7, 8},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2, 3, 4},
                            .outputs = {5},
                            .type = TestOperationType::INSTANCE_NORMALIZATION
                        }},
                .outputIndexes = {5}
            },
        .minSupportedVersion = TestHalVersion::UNKNOWN,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_nhwc_relaxed_all_inputs_as_internal_2 = TestModelManager::get().add("instance_normalization_nhwc_relaxed_all_inputs_as_internal_2", get_test_model_nhwc_relaxed_all_inputs_as_internal_2());

}  // namespace generated_tests::instance_normalization

namespace generated_tests::instance_normalization {

const TestModel& get_test_model_nhwc_float16_2() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({0.0f, 1.0f, 0.0f, 2.0f, 0.0f, 2.0f, 0.0f, 4.0f, 1.0f, -1.0f, -1.0f, 2.0f, -1.0f, -2.0f, 1.0f, 4.0f}),
                            .dimensions = {2, 2, 2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({2.0f}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::FLOAT16,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({10.0f}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::FLOAT16,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({9.999999747378752e-05f}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::FLOAT16,
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
                            .data = TestBuffer::createFromVector<_Float16>({10.0f, 7.705939292907715f, 10.0f, 9.541187286376953f, 10.0f, 9.541187286376953f, 10.0f, 13.211685180664062f, 11.999899864196777f, 8.532414436340332f, 8.000100135803223f, 11.048274993896484f, 8.000100135803223f, 7.693793773651123f, 11.999899864196777f, 12.725516319274902f}),
                            .dimensions = {2, 2, 2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {0, 1, 2, 3, 4},
                            .outputs = {5},
                            .type = TestOperationType::INSTANCE_NORMALIZATION
                        }},
                .outputIndexes = {5}
            },
        .minSupportedVersion = TestHalVersion::V1_2,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_nhwc_float16_2 = TestModelManager::get().add("instance_normalization_nhwc_float16_2", get_test_model_nhwc_float16_2());

}  // namespace generated_tests::instance_normalization

namespace generated_tests::instance_normalization {

const TestModel& get_test_model_nhwc_float16_all_inputs_as_internal_2() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {6},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({}),
                            .dimensions = {2, 2, 2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({2.0f}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::FLOAT16,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({10.0f}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::FLOAT16,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({9.999999747378752e-05f}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::FLOAT16,
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
                            .data = TestBuffer::createFromVector<_Float16>({10.0f, 7.705939292907715f, 10.0f, 9.541187286376953f, 10.0f, 9.541187286376953f, 10.0f, 13.211685180664062f, 11.999899864196777f, 8.532414436340332f, 8.000100135803223f, 11.048274993896484f, 8.000100135803223f, 7.693793773651123f, 11.999899864196777f, 12.725516319274902f}),
                            .dimensions = {2, 2, 2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({0.0f, 1.0f, 0.0f, 2.0f, 0.0f, 2.0f, 0.0f, 4.0f, 1.0f, -1.0f, -1.0f, 2.0f, -1.0f, -2.0f, 1.0f, 4.0f}),
                            .dimensions = {2, 2, 2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({0.0f}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT16,
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
                        }},
                .operations = {{
                            .inputs = {6, 7, 8},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2, 3, 4},
                            .outputs = {5},
                            .type = TestOperationType::INSTANCE_NORMALIZATION
                        }},
                .outputIndexes = {5}
            },
        .minSupportedVersion = TestHalVersion::V1_2,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_nhwc_float16_all_inputs_as_internal_2 = TestModelManager::get().add("instance_normalization_nhwc_float16_all_inputs_as_internal_2", get_test_model_nhwc_float16_all_inputs_as_internal_2());

}  // namespace generated_tests::instance_normalization

namespace generated_tests::instance_normalization {

const TestModel& get_test_model_nchw_2() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 2.0f, 2.0f, 4.0f, 1.0f, -1.0f, -1.0f, 1.0f, -1.0f, 2.0f, -2.0f, 4.0f}),
                            .dimensions = {2, 2, 2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
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
                            .data = TestBuffer::createFromVector<float>({10.0f}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::FLOAT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0001f}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::FLOAT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<bool8>({true}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::BOOL,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({10.0f, 10.0f, 10.0f, 10.0f, 7.7059393f, 9.541187f, 9.541187f, 13.211685f, 11.9999f, 8.0001f, 8.0001f, 11.9999f, 8.532414f, 11.048275f, 7.693794f, 12.725516f}),
                            .dimensions = {2, 2, 2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {0, 1, 2, 3, 4},
                            .outputs = {5},
                            .type = TestOperationType::INSTANCE_NORMALIZATION
                        }},
                .outputIndexes = {5}
            },
        .minSupportedVersion = TestHalVersion::V1_2,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_nchw_2 = TestModelManager::get().add("instance_normalization_nchw_2", get_test_model_nchw_2());

}  // namespace generated_tests::instance_normalization

namespace generated_tests::instance_normalization {

const TestModel& get_test_model_nchw_all_inputs_as_internal_2() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {6},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {2, 2, 2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
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
                            .data = TestBuffer::createFromVector<float>({10.0f}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::FLOAT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0001f}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::FLOAT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<bool8>({true}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::BOOL,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({10.0f, 10.0f, 10.0f, 10.0f, 7.7059393f, 9.541187f, 9.541187f, 13.211685f, 11.9999f, 8.0001f, 8.0001f, 11.9999f, 8.532414f, 11.048275f, 7.693794f, 12.725516f}),
                            .dimensions = {2, 2, 2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 2.0f, 2.0f, 4.0f, 1.0f, -1.0f, -1.0f, 1.0f, -1.0f, 2.0f, -2.0f, 4.0f}),
                            .dimensions = {2, 2, 2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
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
                        }},
                .operations = {{
                            .inputs = {6, 7, 8},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2, 3, 4},
                            .outputs = {5},
                            .type = TestOperationType::INSTANCE_NORMALIZATION
                        }},
                .outputIndexes = {5}
            },
        .minSupportedVersion = TestHalVersion::V1_2,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_nchw_all_inputs_as_internal_2 = TestModelManager::get().add("instance_normalization_nchw_all_inputs_as_internal_2", get_test_model_nchw_all_inputs_as_internal_2());

}  // namespace generated_tests::instance_normalization

namespace generated_tests::instance_normalization {

const TestModel& get_test_model_nchw_relaxed_2() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = true,
        .main = {
                .inputIndexes = {0},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 2.0f, 2.0f, 4.0f, 1.0f, -1.0f, -1.0f, 1.0f, -1.0f, 2.0f, -2.0f, 4.0f}),
                            .dimensions = {2, 2, 2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
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
                            .data = TestBuffer::createFromVector<float>({10.0f}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::FLOAT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0001f}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::FLOAT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<bool8>({true}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::BOOL,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({10.0f, 10.0f, 10.0f, 10.0f, 7.7059393f, 9.541187f, 9.541187f, 13.211685f, 11.9999f, 8.0001f, 8.0001f, 11.9999f, 8.532414f, 11.048275f, 7.693794f, 12.725516f}),
                            .dimensions = {2, 2, 2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {0, 1, 2, 3, 4},
                            .outputs = {5},
                            .type = TestOperationType::INSTANCE_NORMALIZATION
                        }},
                .outputIndexes = {5}
            },
        .minSupportedVersion = TestHalVersion::UNKNOWN,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_nchw_relaxed_2 = TestModelManager::get().add("instance_normalization_nchw_relaxed_2", get_test_model_nchw_relaxed_2());

}  // namespace generated_tests::instance_normalization

namespace generated_tests::instance_normalization {

const TestModel& get_test_model_nchw_relaxed_all_inputs_as_internal_2() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = true,
        .main = {
                .inputIndexes = {6},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {2, 2, 2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
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
                            .data = TestBuffer::createFromVector<float>({10.0f}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::FLOAT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0001f}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::FLOAT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<bool8>({true}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::BOOL,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({10.0f, 10.0f, 10.0f, 10.0f, 7.7059393f, 9.541187f, 9.541187f, 13.211685f, 11.9999f, 8.0001f, 8.0001f, 11.9999f, 8.532414f, 11.048275f, 7.693794f, 12.725516f}),
                            .dimensions = {2, 2, 2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 2.0f, 2.0f, 4.0f, 1.0f, -1.0f, -1.0f, 1.0f, -1.0f, 2.0f, -2.0f, 4.0f}),
                            .dimensions = {2, 2, 2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
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
                        }},
                .operations = {{
                            .inputs = {6, 7, 8},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2, 3, 4},
                            .outputs = {5},
                            .type = TestOperationType::INSTANCE_NORMALIZATION
                        }},
                .outputIndexes = {5}
            },
        .minSupportedVersion = TestHalVersion::UNKNOWN,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_nchw_relaxed_all_inputs_as_internal_2 = TestModelManager::get().add("instance_normalization_nchw_relaxed_all_inputs_as_internal_2", get_test_model_nchw_relaxed_all_inputs_as_internal_2());

}  // namespace generated_tests::instance_normalization

namespace generated_tests::instance_normalization {

const TestModel& get_test_model_nchw_float16_2() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 2.0f, 2.0f, 4.0f, 1.0f, -1.0f, -1.0f, 1.0f, -1.0f, 2.0f, -2.0f, 4.0f}),
                            .dimensions = {2, 2, 2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({2.0f}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::FLOAT16,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({10.0f}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::FLOAT16,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({9.999999747378752e-05f}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::FLOAT16,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<bool8>({true}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::BOOL,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({10.0f, 10.0f, 10.0f, 10.0f, 7.705939292907715f, 9.541187286376953f, 9.541187286376953f, 13.211685180664062f, 11.999899864196777f, 8.000100135803223f, 8.000100135803223f, 11.999899864196777f, 8.532414436340332f, 11.048274993896484f, 7.693793773651123f, 12.725516319274902f}),
                            .dimensions = {2, 2, 2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {0, 1, 2, 3, 4},
                            .outputs = {5},
                            .type = TestOperationType::INSTANCE_NORMALIZATION
                        }},
                .outputIndexes = {5}
            },
        .minSupportedVersion = TestHalVersion::V1_2,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_nchw_float16_2 = TestModelManager::get().add("instance_normalization_nchw_float16_2", get_test_model_nchw_float16_2());

}  // namespace generated_tests::instance_normalization

namespace generated_tests::instance_normalization {

const TestModel& get_test_model_nchw_float16_all_inputs_as_internal_2() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {6},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({}),
                            .dimensions = {2, 2, 2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({2.0f}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::FLOAT16,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({10.0f}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::FLOAT16,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({9.999999747378752e-05f}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::FLOAT16,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<bool8>({true}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::BOOL,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({10.0f, 10.0f, 10.0f, 10.0f, 7.705939292907715f, 9.541187286376953f, 9.541187286376953f, 13.211685180664062f, 11.999899864196777f, 8.000100135803223f, 8.000100135803223f, 11.999899864196777f, 8.532414436340332f, 11.048274993896484f, 7.693793773651123f, 12.725516319274902f}),
                            .dimensions = {2, 2, 2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 2.0f, 2.0f, 4.0f, 1.0f, -1.0f, -1.0f, 1.0f, -1.0f, 2.0f, -2.0f, 4.0f}),
                            .dimensions = {2, 2, 2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({0.0f}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT16,
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
                        }},
                .operations = {{
                            .inputs = {6, 7, 8},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2, 3, 4},
                            .outputs = {5},
                            .type = TestOperationType::INSTANCE_NORMALIZATION
                        }},
                .outputIndexes = {5}
            },
        .minSupportedVersion = TestHalVersion::V1_2,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_nchw_float16_all_inputs_as_internal_2 = TestModelManager::get().add("instance_normalization_nchw_float16_all_inputs_as_internal_2", get_test_model_nchw_float16_all_inputs_as_internal_2());

}  // namespace generated_tests::instance_normalization

