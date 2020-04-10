// Generated from depthwise_conv_relaxed.mod.py
// DO NOT EDIT
// clang-format off
#include "TestHarness.h"
using namespace test_helper;

namespace generated_tests::depthwise_conv_relaxed {

const TestModel& get_test_model() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = true,
        .main = {
                .inputIndexes = {0},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({-0.869931f, 0.644628f, -0.918393f, 0.153672f, 0.868562f, -0.358177f, -0.134931f, -0.247565f, 0.22174f, -0.259157f, -0.284296f, -0.538065f, 0.765559f, 0.41986f, -0.556241f, 0.658494f, 0.214355f, -0.850169f, -0.252893f, -0.478935f, 0.530526f, -0.0700663f, -0.988729f, -0.303061f, 0.150845f, 0.829915f, 0.476349f, 0.406537f, -0.355343f, 0.757145f, -0.356362f, 0.800482f, -0.713861f, 0.210483f, -0.634303f, 0.718236f, -0.752038f, 0.457547f, -0.550769f, -0.551178f, 0.446766f, -0.227462f, 0.216348f, -0.852806f, -0.351486f, 0.55906f, -0.668493f, -0.303493f, -0.363763f, -0.162837f, 0.0701012f, 0.756097f, -0.142269f, 0.329724f, -0.656317f, -0.998086f, -0.652949f, -0.40316f, -0.893682f, 0.432744f, 0.612362f, -0.869588f, -0.71327f, -0.398092f, -0.0423559f, 0.436576f, -0.925272f, 0.176549f, 0.822904f, 0.096833f, -0.296802f, -0.427195f, 0.031654f, -0.254479f, 0.244905f, 0.0948254f, 0.643769f, -0.90391f, 0.352665f, -0.901179f, 0.266159f, -0.968068f, -0.615401f, -0.388975f, 0.939052f, -0.116289f, 0.107523f, -0.0582711f, 0.435172f, 0.334675f, 0.459711f, 0.717436f, 0.496627f, -0.680175f, -0.415066f, 0.339848f, 0.506004f, -0.337808f, -0.107218f, -0.172496f, 0.870638f, 0.931872f, -0.953884f, 0.903042f, 0.760078f, 0.209727f, -0.285384f, -0.45514f, 0.113194f, 0.0756611f, 0.0924435f, -0.472863f, 0.960609f, -0.160385f, -0.839445f, 0.457097f, 0.163348f, 0.344867f, -0.131619f, 0.688715f, -0.540827f, 0.571259f, -0.95587f, 0.506164f, -0.155839f, 0.0789621f, 0.756772f, -0.662069f, 0.242908f, 0.460821f, 0.177872f, -0.289839f, -0.640603f, 0.702598f, -0.506406f, -0.568262f, -0.0713716f, 0.413792f, 0.159673f, -0.305208f, 0.133816f, -0.160254f, 0.787323f, -0.753244f, 0.600721f, 0.263186f, -0.162387f, 0.477962f, -0.702951f, -0.731036f, -0.939481f, -0.524519f, 0.934072f, -0.511637f, -0.503499f, 0.106236f, -0.323684f, 0.534444f, -0.843745f, 0.364171f, 0.0370358f, -0.168801f, -0.404559f, -0.814178f, 0.91745f, -0.334276f, 0.66925f, -0.801201f, 0.156511f, -0.427949f, 0.379153f, 0.818597f, -0.649902f, 0.427087f, -0.586015f, -0.559789f, -0.833923f, 0.0892409f, -0.621251f, 0.213826f, 0.465509f, 0.4704f, 0.380261f, 0.413067f, 0.180822f, 0.172866f, 0.59614f, 0.825575f, 0.662916f, -0.704381f, -0.297631f, 0.697778f}),
                            .dimensions = {1, 8, 8, 3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({-0.966213f, -0.467474f, -0.82203f}),
                            .dimensions = {1, 1, 1, 3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f, 0.0f, 0.0f}),
                            .dimensions = {3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
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
                            .data = TestBuffer::createFromVector<float>({0.840539f, -0.301347f, 0.754947f, -0.14848f, -0.40603f, 0.294432f, 0.130372f, 0.11573f, -0.182277f, 0.2504f, 0.132901f, 0.442306f, -0.739693f, -0.196274f, 0.457246f, -0.636246f, -0.100205f, 0.698864f, 0.244348f, 0.22389f, -0.436108f, 0.067699f, 0.462205f, 0.249125f, -0.145748f, -0.387964f, -0.391573f, -0.392801f, 0.166114f, -0.622396f, 0.344322f, -0.374205f, 0.586815f, -0.203372f, 0.29652f, -0.590411f, 0.726629f, -0.213891f, 0.452749f, 0.532555f, -0.208851f, 0.186981f, -0.209039f, 0.398664f, 0.288932f, -0.540171f, 0.312503f, 0.24948f, 0.351473f, 0.076122f, -0.0576253f, -0.73055f, 0.0665069f, -0.271043f, 0.634142f, 0.466579f, 0.536743f, 0.389538f, 0.417773f, -0.355728f, -0.591672f, 0.40651f, 0.586329f, 0.384641f, 0.0198003f, -0.358878f, 0.894009f, -0.0825318f, -0.676451f, -0.0935613f, 0.138747f, 0.351167f, -0.0305845f, 0.118962f, -0.201319f, -0.0916215f, -0.300945f, 0.743041f, -0.34075f, 0.421278f, -0.218791f, 0.935359f, 0.287684f, 0.319749f, -0.907324f, 0.054362f, -0.0883874f, 0.0563023f, -0.203432f, -0.275113f, -0.444178f, -0.335382f, -0.408242f, 0.657194f, 0.194033f, -0.279365f, -0.488907f, 0.157917f, 0.0881365f, 0.166668f, -0.407001f, -0.766027f, 0.921655f, -0.422149f, -0.624807f, -0.202641f, 0.13341f, 0.374139f, -0.109369f, -0.0353696f, -0.0759913f, 0.456887f, -0.44906f, 0.131841f, 0.811082f, -0.213681f, -0.134277f, -0.333215f, 0.0615286f, -0.566144f, 0.522554f, -0.267049f, 0.785754f, -0.489062f, 0.0728509f, -0.0649092f, -0.731203f, 0.3095f, -0.199677f, -0.445251f, -0.0831503f, 0.238257f, 0.618959f, -0.328446f, 0.416281f, 0.549062f, 0.0333644f, -0.340149f, -0.154278f, 0.142677f, -0.110001f, 0.15484f, -0.368053f, 0.619189f, -0.580424f, -0.123033f, 0.133487f, -0.461813f, 0.328611f, 0.600933f, 0.907739f, 0.245199f, -0.767835f, 0.49435f, 0.235373f, -0.0873295f, 0.312748f, -0.249839f, 0.693584f, -0.351866f, -0.0173133f, 0.13876f, 0.39089f, 0.380607f, -0.754171f, 0.322982f, -0.312857f, 0.658611f, -0.151223f, 0.200055f, -0.311675f, -0.790939f, 0.303812f, -0.351079f, 0.566216f, 0.261687f, 0.68551f, -0.0862257f, 0.290419f, -0.175771f, -0.449781f, -0.2199f, -0.312586f, -0.399111f, -0.0845297f, -0.142101f, -0.575998f, -0.385935f, -0.544937f, 0.680582f, 0.139135f, -0.573594f}),
                            .dimensions = {1, 8, 8, 3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {0, 1, 2, 3, 4, 5, 6, 7},
                            .outputs = {8},
                            .type = TestOperationType::DEPTHWISE_CONV_2D
                        }},
                .outputIndexes = {8}
            },
        .minSupportedVersion = TestHalVersion::UNKNOWN,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model = TestModelManager::get().add("depthwise_conv_relaxed", get_test_model());

}  // namespace generated_tests::depthwise_conv_relaxed

namespace generated_tests::depthwise_conv_relaxed {

const TestModel& get_test_model_all_inputs_as_internal() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = true,
        .main = {
                .inputIndexes = {9},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {1, 8, 8, 3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({-0.966213f, -0.467474f, -0.82203f}),
                            .dimensions = {1, 1, 1, 3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f, 0.0f, 0.0f}),
                            .dimensions = {3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
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
                            .data = TestBuffer::createFromVector<float>({0.840539f, -0.301347f, 0.754947f, -0.14848f, -0.40603f, 0.294432f, 0.130372f, 0.11573f, -0.182277f, 0.2504f, 0.132901f, 0.442306f, -0.739693f, -0.196274f, 0.457246f, -0.636246f, -0.100205f, 0.698864f, 0.244348f, 0.22389f, -0.436108f, 0.067699f, 0.462205f, 0.249125f, -0.145748f, -0.387964f, -0.391573f, -0.392801f, 0.166114f, -0.622396f, 0.344322f, -0.374205f, 0.586815f, -0.203372f, 0.29652f, -0.590411f, 0.726629f, -0.213891f, 0.452749f, 0.532555f, -0.208851f, 0.186981f, -0.209039f, 0.398664f, 0.288932f, -0.540171f, 0.312503f, 0.24948f, 0.351473f, 0.076122f, -0.0576253f, -0.73055f, 0.0665069f, -0.271043f, 0.634142f, 0.466579f, 0.536743f, 0.389538f, 0.417773f, -0.355728f, -0.591672f, 0.40651f, 0.586329f, 0.384641f, 0.0198003f, -0.358878f, 0.894009f, -0.0825318f, -0.676451f, -0.0935613f, 0.138747f, 0.351167f, -0.0305845f, 0.118962f, -0.201319f, -0.0916215f, -0.300945f, 0.743041f, -0.34075f, 0.421278f, -0.218791f, 0.935359f, 0.287684f, 0.319749f, -0.907324f, 0.054362f, -0.0883874f, 0.0563023f, -0.203432f, -0.275113f, -0.444178f, -0.335382f, -0.408242f, 0.657194f, 0.194033f, -0.279365f, -0.488907f, 0.157917f, 0.0881365f, 0.166668f, -0.407001f, -0.766027f, 0.921655f, -0.422149f, -0.624807f, -0.202641f, 0.13341f, 0.374139f, -0.109369f, -0.0353696f, -0.0759913f, 0.456887f, -0.44906f, 0.131841f, 0.811082f, -0.213681f, -0.134277f, -0.333215f, 0.0615286f, -0.566144f, 0.522554f, -0.267049f, 0.785754f, -0.489062f, 0.0728509f, -0.0649092f, -0.731203f, 0.3095f, -0.199677f, -0.445251f, -0.0831503f, 0.238257f, 0.618959f, -0.328446f, 0.416281f, 0.549062f, 0.0333644f, -0.340149f, -0.154278f, 0.142677f, -0.110001f, 0.15484f, -0.368053f, 0.619189f, -0.580424f, -0.123033f, 0.133487f, -0.461813f, 0.328611f, 0.600933f, 0.907739f, 0.245199f, -0.767835f, 0.49435f, 0.235373f, -0.0873295f, 0.312748f, -0.249839f, 0.693584f, -0.351866f, -0.0173133f, 0.13876f, 0.39089f, 0.380607f, -0.754171f, 0.322982f, -0.312857f, 0.658611f, -0.151223f, 0.200055f, -0.311675f, -0.790939f, 0.303812f, -0.351079f, 0.566216f, 0.261687f, 0.68551f, -0.0862257f, 0.290419f, -0.175771f, -0.449781f, -0.2199f, -0.312586f, -0.399111f, -0.0845297f, -0.142101f, -0.575998f, -0.385935f, -0.544937f, 0.680582f, 0.139135f, -0.573594f}),
                            .dimensions = {1, 8, 8, 3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({-0.869931f, 0.644628f, -0.918393f, 0.153672f, 0.868562f, -0.358177f, -0.134931f, -0.247565f, 0.22174f, -0.259157f, -0.284296f, -0.538065f, 0.765559f, 0.41986f, -0.556241f, 0.658494f, 0.214355f, -0.850169f, -0.252893f, -0.478935f, 0.530526f, -0.0700663f, -0.988729f, -0.303061f, 0.150845f, 0.829915f, 0.476349f, 0.406537f, -0.355343f, 0.757145f, -0.356362f, 0.800482f, -0.713861f, 0.210483f, -0.634303f, 0.718236f, -0.752038f, 0.457547f, -0.550769f, -0.551178f, 0.446766f, -0.227462f, 0.216348f, -0.852806f, -0.351486f, 0.55906f, -0.668493f, -0.303493f, -0.363763f, -0.162837f, 0.0701012f, 0.756097f, -0.142269f, 0.329724f, -0.656317f, -0.998086f, -0.652949f, -0.40316f, -0.893682f, 0.432744f, 0.612362f, -0.869588f, -0.71327f, -0.398092f, -0.0423559f, 0.436576f, -0.925272f, 0.176549f, 0.822904f, 0.096833f, -0.296802f, -0.427195f, 0.031654f, -0.254479f, 0.244905f, 0.0948254f, 0.643769f, -0.90391f, 0.352665f, -0.901179f, 0.266159f, -0.968068f, -0.615401f, -0.388975f, 0.939052f, -0.116289f, 0.107523f, -0.0582711f, 0.435172f, 0.334675f, 0.459711f, 0.717436f, 0.496627f, -0.680175f, -0.415066f, 0.339848f, 0.506004f, -0.337808f, -0.107218f, -0.172496f, 0.870638f, 0.931872f, -0.953884f, 0.903042f, 0.760078f, 0.209727f, -0.285384f, -0.45514f, 0.113194f, 0.0756611f, 0.0924435f, -0.472863f, 0.960609f, -0.160385f, -0.839445f, 0.457097f, 0.163348f, 0.344867f, -0.131619f, 0.688715f, -0.540827f, 0.571259f, -0.95587f, 0.506164f, -0.155839f, 0.0789621f, 0.756772f, -0.662069f, 0.242908f, 0.460821f, 0.177872f, -0.289839f, -0.640603f, 0.702598f, -0.506406f, -0.568262f, -0.0713716f, 0.413792f, 0.159673f, -0.305208f, 0.133816f, -0.160254f, 0.787323f, -0.753244f, 0.600721f, 0.263186f, -0.162387f, 0.477962f, -0.702951f, -0.731036f, -0.939481f, -0.524519f, 0.934072f, -0.511637f, -0.503499f, 0.106236f, -0.323684f, 0.534444f, -0.843745f, 0.364171f, 0.0370358f, -0.168801f, -0.404559f, -0.814178f, 0.91745f, -0.334276f, 0.66925f, -0.801201f, 0.156511f, -0.427949f, 0.379153f, 0.818597f, -0.649902f, 0.427087f, -0.586015f, -0.559789f, -0.833923f, 0.0892409f, -0.621251f, 0.213826f, 0.465509f, 0.4704f, 0.380261f, 0.413067f, 0.180822f, 0.172866f, 0.59614f, 0.825575f, 0.662916f, -0.704381f, -0.297631f, 0.697778f}),
                            .dimensions = {1, 8, 8, 3},
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
                            .inputs = {9, 10, 11},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2, 3, 4, 5, 6, 7},
                            .outputs = {8},
                            .type = TestOperationType::DEPTHWISE_CONV_2D
                        }},
                .outputIndexes = {8}
            },
        .minSupportedVersion = TestHalVersion::UNKNOWN,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_all_inputs_as_internal = TestModelManager::get().add("depthwise_conv_relaxed_all_inputs_as_internal", get_test_model_all_inputs_as_internal());

}  // namespace generated_tests::depthwise_conv_relaxed

namespace generated_tests::depthwise_conv_relaxed {

const TestModel& get_test_model_all_tensors_as_inputs() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = true,
        .main = {
                .inputIndexes = {0, 1, 2},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({-0.869931f, 0.644628f, -0.918393f, 0.153672f, 0.868562f, -0.358177f, -0.134931f, -0.247565f, 0.22174f, -0.259157f, -0.284296f, -0.538065f, 0.765559f, 0.41986f, -0.556241f, 0.658494f, 0.214355f, -0.850169f, -0.252893f, -0.478935f, 0.530526f, -0.0700663f, -0.988729f, -0.303061f, 0.150845f, 0.829915f, 0.476349f, 0.406537f, -0.355343f, 0.757145f, -0.356362f, 0.800482f, -0.713861f, 0.210483f, -0.634303f, 0.718236f, -0.752038f, 0.457547f, -0.550769f, -0.551178f, 0.446766f, -0.227462f, 0.216348f, -0.852806f, -0.351486f, 0.55906f, -0.668493f, -0.303493f, -0.363763f, -0.162837f, 0.0701012f, 0.756097f, -0.142269f, 0.329724f, -0.656317f, -0.998086f, -0.652949f, -0.40316f, -0.893682f, 0.432744f, 0.612362f, -0.869588f, -0.71327f, -0.398092f, -0.0423559f, 0.436576f, -0.925272f, 0.176549f, 0.822904f, 0.096833f, -0.296802f, -0.427195f, 0.031654f, -0.254479f, 0.244905f, 0.0948254f, 0.643769f, -0.90391f, 0.352665f, -0.901179f, 0.266159f, -0.968068f, -0.615401f, -0.388975f, 0.939052f, -0.116289f, 0.107523f, -0.0582711f, 0.435172f, 0.334675f, 0.459711f, 0.717436f, 0.496627f, -0.680175f, -0.415066f, 0.339848f, 0.506004f, -0.337808f, -0.107218f, -0.172496f, 0.870638f, 0.931872f, -0.953884f, 0.903042f, 0.760078f, 0.209727f, -0.285384f, -0.45514f, 0.113194f, 0.0756611f, 0.0924435f, -0.472863f, 0.960609f, -0.160385f, -0.839445f, 0.457097f, 0.163348f, 0.344867f, -0.131619f, 0.688715f, -0.540827f, 0.571259f, -0.95587f, 0.506164f, -0.155839f, 0.0789621f, 0.756772f, -0.662069f, 0.242908f, 0.460821f, 0.177872f, -0.289839f, -0.640603f, 0.702598f, -0.506406f, -0.568262f, -0.0713716f, 0.413792f, 0.159673f, -0.305208f, 0.133816f, -0.160254f, 0.787323f, -0.753244f, 0.600721f, 0.263186f, -0.162387f, 0.477962f, -0.702951f, -0.731036f, -0.939481f, -0.524519f, 0.934072f, -0.511637f, -0.503499f, 0.106236f, -0.323684f, 0.534444f, -0.843745f, 0.364171f, 0.0370358f, -0.168801f, -0.404559f, -0.814178f, 0.91745f, -0.334276f, 0.66925f, -0.801201f, 0.156511f, -0.427949f, 0.379153f, 0.818597f, -0.649902f, 0.427087f, -0.586015f, -0.559789f, -0.833923f, 0.0892409f, -0.621251f, 0.213826f, 0.465509f, 0.4704f, 0.380261f, 0.413067f, 0.180822f, 0.172866f, 0.59614f, 0.825575f, 0.662916f, -0.704381f, -0.297631f, 0.697778f}),
                            .dimensions = {1, 8, 8, 3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({-0.966213f, -0.467474f, -0.82203f}),
                            .dimensions = {1, 1, 1, 3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f, 0.0f, 0.0f}),
                            .dimensions = {3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
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
                            .data = TestBuffer::createFromVector<float>({0.840539f, -0.301347f, 0.754947f, -0.14848f, -0.40603f, 0.294432f, 0.130372f, 0.11573f, -0.182277f, 0.2504f, 0.132901f, 0.442306f, -0.739693f, -0.196274f, 0.457246f, -0.636246f, -0.100205f, 0.698864f, 0.244348f, 0.22389f, -0.436108f, 0.067699f, 0.462205f, 0.249125f, -0.145748f, -0.387964f, -0.391573f, -0.392801f, 0.166114f, -0.622396f, 0.344322f, -0.374205f, 0.586815f, -0.203372f, 0.29652f, -0.590411f, 0.726629f, -0.213891f, 0.452749f, 0.532555f, -0.208851f, 0.186981f, -0.209039f, 0.398664f, 0.288932f, -0.540171f, 0.312503f, 0.24948f, 0.351473f, 0.076122f, -0.0576253f, -0.73055f, 0.0665069f, -0.271043f, 0.634142f, 0.466579f, 0.536743f, 0.389538f, 0.417773f, -0.355728f, -0.591672f, 0.40651f, 0.586329f, 0.384641f, 0.0198003f, -0.358878f, 0.894009f, -0.0825318f, -0.676451f, -0.0935613f, 0.138747f, 0.351167f, -0.0305845f, 0.118962f, -0.201319f, -0.0916215f, -0.300945f, 0.743041f, -0.34075f, 0.421278f, -0.218791f, 0.935359f, 0.287684f, 0.319749f, -0.907324f, 0.054362f, -0.0883874f, 0.0563023f, -0.203432f, -0.275113f, -0.444178f, -0.335382f, -0.408242f, 0.657194f, 0.194033f, -0.279365f, -0.488907f, 0.157917f, 0.0881365f, 0.166668f, -0.407001f, -0.766027f, 0.921655f, -0.422149f, -0.624807f, -0.202641f, 0.13341f, 0.374139f, -0.109369f, -0.0353696f, -0.0759913f, 0.456887f, -0.44906f, 0.131841f, 0.811082f, -0.213681f, -0.134277f, -0.333215f, 0.0615286f, -0.566144f, 0.522554f, -0.267049f, 0.785754f, -0.489062f, 0.0728509f, -0.0649092f, -0.731203f, 0.3095f, -0.199677f, -0.445251f, -0.0831503f, 0.238257f, 0.618959f, -0.328446f, 0.416281f, 0.549062f, 0.0333644f, -0.340149f, -0.154278f, 0.142677f, -0.110001f, 0.15484f, -0.368053f, 0.619189f, -0.580424f, -0.123033f, 0.133487f, -0.461813f, 0.328611f, 0.600933f, 0.907739f, 0.245199f, -0.767835f, 0.49435f, 0.235373f, -0.0873295f, 0.312748f, -0.249839f, 0.693584f, -0.351866f, -0.0173133f, 0.13876f, 0.39089f, 0.380607f, -0.754171f, 0.322982f, -0.312857f, 0.658611f, -0.151223f, 0.200055f, -0.311675f, -0.790939f, 0.303812f, -0.351079f, 0.566216f, 0.261687f, 0.68551f, -0.0862257f, 0.290419f, -0.175771f, -0.449781f, -0.2199f, -0.312586f, -0.399111f, -0.0845297f, -0.142101f, -0.575998f, -0.385935f, -0.544937f, 0.680582f, 0.139135f, -0.573594f}),
                            .dimensions = {1, 8, 8, 3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {0, 1, 2, 3, 4, 5, 6, 7},
                            .outputs = {8},
                            .type = TestOperationType::DEPTHWISE_CONV_2D
                        }},
                .outputIndexes = {8}
            },
        .minSupportedVersion = TestHalVersion::UNKNOWN,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_all_tensors_as_inputs = TestModelManager::get().add("depthwise_conv_relaxed_all_tensors_as_inputs", get_test_model_all_tensors_as_inputs());

}  // namespace generated_tests::depthwise_conv_relaxed

namespace generated_tests::depthwise_conv_relaxed {

const TestModel& get_test_model_all_tensors_as_inputs_all_inputs_as_internal() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = true,
        .main = {
                .inputIndexes = {9, 12, 15},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {1, 8, 8, 3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {1, 1, 1, 3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
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
                            .data = TestBuffer::createFromVector<float>({0.840539f, -0.301347f, 0.754947f, -0.14848f, -0.40603f, 0.294432f, 0.130372f, 0.11573f, -0.182277f, 0.2504f, 0.132901f, 0.442306f, -0.739693f, -0.196274f, 0.457246f, -0.636246f, -0.100205f, 0.698864f, 0.244348f, 0.22389f, -0.436108f, 0.067699f, 0.462205f, 0.249125f, -0.145748f, -0.387964f, -0.391573f, -0.392801f, 0.166114f, -0.622396f, 0.344322f, -0.374205f, 0.586815f, -0.203372f, 0.29652f, -0.590411f, 0.726629f, -0.213891f, 0.452749f, 0.532555f, -0.208851f, 0.186981f, -0.209039f, 0.398664f, 0.288932f, -0.540171f, 0.312503f, 0.24948f, 0.351473f, 0.076122f, -0.0576253f, -0.73055f, 0.0665069f, -0.271043f, 0.634142f, 0.466579f, 0.536743f, 0.389538f, 0.417773f, -0.355728f, -0.591672f, 0.40651f, 0.586329f, 0.384641f, 0.0198003f, -0.358878f, 0.894009f, -0.0825318f, -0.676451f, -0.0935613f, 0.138747f, 0.351167f, -0.0305845f, 0.118962f, -0.201319f, -0.0916215f, -0.300945f, 0.743041f, -0.34075f, 0.421278f, -0.218791f, 0.935359f, 0.287684f, 0.319749f, -0.907324f, 0.054362f, -0.0883874f, 0.0563023f, -0.203432f, -0.275113f, -0.444178f, -0.335382f, -0.408242f, 0.657194f, 0.194033f, -0.279365f, -0.488907f, 0.157917f, 0.0881365f, 0.166668f, -0.407001f, -0.766027f, 0.921655f, -0.422149f, -0.624807f, -0.202641f, 0.13341f, 0.374139f, -0.109369f, -0.0353696f, -0.0759913f, 0.456887f, -0.44906f, 0.131841f, 0.811082f, -0.213681f, -0.134277f, -0.333215f, 0.0615286f, -0.566144f, 0.522554f, -0.267049f, 0.785754f, -0.489062f, 0.0728509f, -0.0649092f, -0.731203f, 0.3095f, -0.199677f, -0.445251f, -0.0831503f, 0.238257f, 0.618959f, -0.328446f, 0.416281f, 0.549062f, 0.0333644f, -0.340149f, -0.154278f, 0.142677f, -0.110001f, 0.15484f, -0.368053f, 0.619189f, -0.580424f, -0.123033f, 0.133487f, -0.461813f, 0.328611f, 0.600933f, 0.907739f, 0.245199f, -0.767835f, 0.49435f, 0.235373f, -0.0873295f, 0.312748f, -0.249839f, 0.693584f, -0.351866f, -0.0173133f, 0.13876f, 0.39089f, 0.380607f, -0.754171f, 0.322982f, -0.312857f, 0.658611f, -0.151223f, 0.200055f, -0.311675f, -0.790939f, 0.303812f, -0.351079f, 0.566216f, 0.261687f, 0.68551f, -0.0862257f, 0.290419f, -0.175771f, -0.449781f, -0.2199f, -0.312586f, -0.399111f, -0.0845297f, -0.142101f, -0.575998f, -0.385935f, -0.544937f, 0.680582f, 0.139135f, -0.573594f}),
                            .dimensions = {1, 8, 8, 3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({-0.869931f, 0.644628f, -0.918393f, 0.153672f, 0.868562f, -0.358177f, -0.134931f, -0.247565f, 0.22174f, -0.259157f, -0.284296f, -0.538065f, 0.765559f, 0.41986f, -0.556241f, 0.658494f, 0.214355f, -0.850169f, -0.252893f, -0.478935f, 0.530526f, -0.0700663f, -0.988729f, -0.303061f, 0.150845f, 0.829915f, 0.476349f, 0.406537f, -0.355343f, 0.757145f, -0.356362f, 0.800482f, -0.713861f, 0.210483f, -0.634303f, 0.718236f, -0.752038f, 0.457547f, -0.550769f, -0.551178f, 0.446766f, -0.227462f, 0.216348f, -0.852806f, -0.351486f, 0.55906f, -0.668493f, -0.303493f, -0.363763f, -0.162837f, 0.0701012f, 0.756097f, -0.142269f, 0.329724f, -0.656317f, -0.998086f, -0.652949f, -0.40316f, -0.893682f, 0.432744f, 0.612362f, -0.869588f, -0.71327f, -0.398092f, -0.0423559f, 0.436576f, -0.925272f, 0.176549f, 0.822904f, 0.096833f, -0.296802f, -0.427195f, 0.031654f, -0.254479f, 0.244905f, 0.0948254f, 0.643769f, -0.90391f, 0.352665f, -0.901179f, 0.266159f, -0.968068f, -0.615401f, -0.388975f, 0.939052f, -0.116289f, 0.107523f, -0.0582711f, 0.435172f, 0.334675f, 0.459711f, 0.717436f, 0.496627f, -0.680175f, -0.415066f, 0.339848f, 0.506004f, -0.337808f, -0.107218f, -0.172496f, 0.870638f, 0.931872f, -0.953884f, 0.903042f, 0.760078f, 0.209727f, -0.285384f, -0.45514f, 0.113194f, 0.0756611f, 0.0924435f, -0.472863f, 0.960609f, -0.160385f, -0.839445f, 0.457097f, 0.163348f, 0.344867f, -0.131619f, 0.688715f, -0.540827f, 0.571259f, -0.95587f, 0.506164f, -0.155839f, 0.0789621f, 0.756772f, -0.662069f, 0.242908f, 0.460821f, 0.177872f, -0.289839f, -0.640603f, 0.702598f, -0.506406f, -0.568262f, -0.0713716f, 0.413792f, 0.159673f, -0.305208f, 0.133816f, -0.160254f, 0.787323f, -0.753244f, 0.600721f, 0.263186f, -0.162387f, 0.477962f, -0.702951f, -0.731036f, -0.939481f, -0.524519f, 0.934072f, -0.511637f, -0.503499f, 0.106236f, -0.323684f, 0.534444f, -0.843745f, 0.364171f, 0.0370358f, -0.168801f, -0.404559f, -0.814178f, 0.91745f, -0.334276f, 0.66925f, -0.801201f, 0.156511f, -0.427949f, 0.379153f, 0.818597f, -0.649902f, 0.427087f, -0.586015f, -0.559789f, -0.833923f, 0.0892409f, -0.621251f, 0.213826f, 0.465509f, 0.4704f, 0.380261f, 0.413067f, 0.180822f, 0.172866f, 0.59614f, 0.825575f, 0.662916f, -0.704381f, -0.297631f, 0.697778f}),
                            .dimensions = {1, 8, 8, 3},
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
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({-0.966213f, -0.467474f, -0.82203f}),
                            .dimensions = {1, 1, 1, 3},
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
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f, 0.0f, 0.0f}),
                            .dimensions = {3},
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
                            .inputs = {9, 10, 11},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {12, 13, 14},
                            .outputs = {1},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {15, 16, 17},
                            .outputs = {2},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2, 3, 4, 5, 6, 7},
                            .outputs = {8},
                            .type = TestOperationType::DEPTHWISE_CONV_2D
                        }},
                .outputIndexes = {8}
            },
        .minSupportedVersion = TestHalVersion::UNKNOWN,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_all_tensors_as_inputs_all_inputs_as_internal = TestModelManager::get().add("depthwise_conv_relaxed_all_tensors_as_inputs_all_inputs_as_internal", get_test_model_all_tensors_as_inputs_all_inputs_as_internal());

}  // namespace generated_tests::depthwise_conv_relaxed

namespace generated_tests::depthwise_conv_relaxed {

const TestModel& get_test_model_2() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = true,
        .main = {
                .inputIndexes = {0},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({-0.295335f, -0.00387601f, -0.552251f, 0.166084f, -0.28482f, -0.152143f, -0.719885f, -0.869386f, -0.745598f, 0.823947f, 0.473183f, -0.331337f, 0.187631f, 0.0426571f, -0.826897f, -0.755085f, -0.472453f, -0.0233656f, 0.0483436f, 0.933418f, -0.961974f, 0.0125783f, 0.219742f, 0.342604f, -0.15166f, 0.0934905f, 0.783221f, 0.129664f, 0.838844f, -0.271388f, 0.924519f, 0.342843f, 0.274418f, 0.350817f, 0.841638f, -0.543993f, -0.00283395f, -0.128467f, -0.682943f, -0.319117f, 0.84634f, 0.283003f, 0.32865f, 0.0293755f, -0.0335696f, 0.591266f, -0.0743476f, -0.741271f, 0.462056f, -0.583625f, -0.590183f, 0.6234f, 0.535269f, -0.670818f, -0.955642f, -0.770173f, 0.479986f, 0.664377f, 0.399445f, -0.968874f, -0.276263f, -0.901951f, 0.544104f, -0.958981f, 0.482658f, -0.807284f, 0.305369f, -0.947818f, 0.827498f, -0.382887f, -0.805741f, -0.796678f, -0.299804f, -0.229828f, 0.818783f, -0.103055f, -0.45568f, -0.227827f, 0.543743f, -0.96073f, 0.946747f, -0.857182f, -0.96426f, -0.292411f, -0.715614f, 0.765278f, -0.475043f, -0.590142f, -0.238507f, 0.673002f, -0.473357f, -0.319626f, 0.936014f, 0.486607f, 0.580844f, 0.425352f, -0.800994f, 0.290763f, -0.494953f, -0.441162f, 0.718677f, -0.828427f, 0.96965f, 7.53637e-05f, -0.699973f, -0.526886f, -0.352682f, 0.799466f, 0.332789f, 0.723389f, 0.407659f, -0.934084f, -0.284705f, 0.961484f, -0.700395f, -0.985808f, -0.595342f, -0.691721f, 0.49448f, -0.0842649f, 0.0390966f, 0.298938f, -0.128094f, -0.97158f, 0.86393f, 0.270606f, -0.468986f, -0.256605f, 0.47215f, -0.273117f, -0.590343f, -0.826529f, -0.725381f, -0.194821f, -0.259661f, -0.0949207f, -0.180302f, 0.0446834f, -0.222133f, -0.40393f, 0.295772f, -0.92949f, 0.580079f, -0.169856f, 0.330311f, 0.0173551f, -0.635823f, 0.475942f, 0.907175f, 0.242777f, -0.512208f, 0.362463f, 0.0496289f, 0.65171f, 0.990057f, 0.690733f, -0.469013f, -0.101311f, -0.68372f, -0.157841f, -0.677711f, -0.708224f, -0.659437f, -0.407607f, 0.677033f, 0.89032f, 0.228307f, -0.749514f, 0.772958f, 0.054701f, 0.551705f, 0.917052f, -0.895022f, -0.702397f, 0.484142f, 0.108648f, 0.833347f, 0.478872f, -0.984112f, 0.387176f, -0.73299f, 0.7526f, 0.443312f, -0.0987856f, 0.125415f, 0.10876f, -0.498108f, 0.43209f, 0.344609f, 0.928941f, -0.130732f, -0.0569167f}),
                            .dimensions = {1, 8, 8, 3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({-0.966213f, -0.467474f, -0.82203f}),
                            .dimensions = {1, 1, 1, 3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f, 0.0f, 0.0f}),
                            .dimensions = {3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
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
                            .data = TestBuffer::createFromVector<float>({0.285357f, 0.00181194f, 0.453967f, -0.160473f, 0.133146f, 0.125066f, 0.695562f, 0.406415f, 0.612903f, -0.796108f, -0.221201f, 0.272369f, -0.181291f, -0.0199411f, 0.679734f, 0.729573f, 0.22086f, 0.0192072f, -0.0467102f, -0.436349f, 0.790771f, -0.0121533f, -0.102724f, -0.281631f, 0.146536f, -0.0437044f, -0.643831f, -0.125283f, -0.392138f, 0.223089f, -0.893282f, -0.16027f, -0.22558f, -0.338964f, -0.393444f, 0.447179f, 0.0027382f, 0.0600548f, 0.5614f, 0.308335f, -0.395642f, -0.232637f, -0.317546f, -0.0137323f, 0.0275952f, -0.571289f, 0.0347555f, 0.609347f, -0.446445f, 0.27283f, 0.485148f, -0.602337f, -0.250224f, 0.551432f, 0.923353f, 0.360036f, -0.394563f, -0.64193f, -0.18673f, 0.796443f, 0.266929f, 0.421638f, -0.44727f, 0.926579f, -0.22563f, 0.663612f, -0.295051f, 0.44308f, -0.680228f, 0.36995f, 0.376663f, 0.654893f, 0.289675f, 0.107439f, -0.673064f, 0.0995729f, 0.213019f, 0.18728f, -0.525372f, 0.449116f, -0.778254f, 0.82822f, 0.450766f, 0.24037f, 0.691436f, -0.357748f, 0.3905f, 0.570203f, 0.111496f, -0.553228f, 0.457363f, 0.149417f, -0.769431f, -0.470166f, -0.271529f, -0.349652f, 0.773931f, -0.135924f, 0.406866f, 0.426256f, -0.335963f, 0.680992f, -0.936889f, -3.52306e-05f, 0.575398f, 0.509084f, 0.16487f, -0.657185f, -0.321545f, -0.338165f, -0.335108f, 0.902524f, 0.133092f, -0.790369f, 0.676731f, 0.46084f, 0.489389f, 0.66835f, -0.231156f, 0.0692682f, -0.0377757f, -0.139746f, 0.105297f, 0.938753f, -0.403865f, -0.222446f, 0.45314f, 0.119956f, -0.388121f, 0.26389f, 0.27597f, 0.679432f, 0.700873f, 0.0910737f, 0.213449f, 0.0917136f, 0.0842865f, -0.0367311f, 0.214628f, 0.188827f, -0.243133f, 0.898085f, -0.271172f, 0.139627f, -0.319151f, -0.00811307f, 0.522665f, -0.459861f, -0.424081f, -0.19957f, 0.494902f, -0.169442f, -0.0407964f, -0.629691f, -0.462826f, -0.567803f, 0.453167f, 0.0473601f, 0.562038f, 0.152508f, 0.316812f, 0.582181f, 0.637157f, 0.190546f, -0.556541f, -0.860239f, -0.106728f, 0.616123f, -0.746842f, -0.0255713f, -0.453518f, -0.886067f, 0.418399f, 0.577391f, -0.467784f, -0.05079f, -0.685036f, -0.462692f, 0.460047f, -0.318271f, 0.708224f, -0.351821f, -0.364416f, 0.0954479f, -0.0586282f, -0.0894044f, 0.481278f, -0.201991f, -0.283279f, -0.897555f, 0.0611137f, 0.0467872f}),
                            .dimensions = {1, 8, 8, 3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {0, 1, 2, 3, 4, 5, 6, 7},
                            .outputs = {8},
                            .type = TestOperationType::DEPTHWISE_CONV_2D
                        }},
                .outputIndexes = {8}
            },
        .minSupportedVersion = TestHalVersion::UNKNOWN,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_2 = TestModelManager::get().add("depthwise_conv_relaxed_2", get_test_model_2());

}  // namespace generated_tests::depthwise_conv_relaxed

namespace generated_tests::depthwise_conv_relaxed {

const TestModel& get_test_model_all_inputs_as_internal_2() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = true,
        .main = {
                .inputIndexes = {9},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {1, 8, 8, 3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({-0.966213f, -0.467474f, -0.82203f}),
                            .dimensions = {1, 1, 1, 3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f, 0.0f, 0.0f}),
                            .dimensions = {3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
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
                            .data = TestBuffer::createFromVector<float>({0.285357f, 0.00181194f, 0.453967f, -0.160473f, 0.133146f, 0.125066f, 0.695562f, 0.406415f, 0.612903f, -0.796108f, -0.221201f, 0.272369f, -0.181291f, -0.0199411f, 0.679734f, 0.729573f, 0.22086f, 0.0192072f, -0.0467102f, -0.436349f, 0.790771f, -0.0121533f, -0.102724f, -0.281631f, 0.146536f, -0.0437044f, -0.643831f, -0.125283f, -0.392138f, 0.223089f, -0.893282f, -0.16027f, -0.22558f, -0.338964f, -0.393444f, 0.447179f, 0.0027382f, 0.0600548f, 0.5614f, 0.308335f, -0.395642f, -0.232637f, -0.317546f, -0.0137323f, 0.0275952f, -0.571289f, 0.0347555f, 0.609347f, -0.446445f, 0.27283f, 0.485148f, -0.602337f, -0.250224f, 0.551432f, 0.923353f, 0.360036f, -0.394563f, -0.64193f, -0.18673f, 0.796443f, 0.266929f, 0.421638f, -0.44727f, 0.926579f, -0.22563f, 0.663612f, -0.295051f, 0.44308f, -0.680228f, 0.36995f, 0.376663f, 0.654893f, 0.289675f, 0.107439f, -0.673064f, 0.0995729f, 0.213019f, 0.18728f, -0.525372f, 0.449116f, -0.778254f, 0.82822f, 0.450766f, 0.24037f, 0.691436f, -0.357748f, 0.3905f, 0.570203f, 0.111496f, -0.553228f, 0.457363f, 0.149417f, -0.769431f, -0.470166f, -0.271529f, -0.349652f, 0.773931f, -0.135924f, 0.406866f, 0.426256f, -0.335963f, 0.680992f, -0.936889f, -3.52306e-05f, 0.575398f, 0.509084f, 0.16487f, -0.657185f, -0.321545f, -0.338165f, -0.335108f, 0.902524f, 0.133092f, -0.790369f, 0.676731f, 0.46084f, 0.489389f, 0.66835f, -0.231156f, 0.0692682f, -0.0377757f, -0.139746f, 0.105297f, 0.938753f, -0.403865f, -0.222446f, 0.45314f, 0.119956f, -0.388121f, 0.26389f, 0.27597f, 0.679432f, 0.700873f, 0.0910737f, 0.213449f, 0.0917136f, 0.0842865f, -0.0367311f, 0.214628f, 0.188827f, -0.243133f, 0.898085f, -0.271172f, 0.139627f, -0.319151f, -0.00811307f, 0.522665f, -0.459861f, -0.424081f, -0.19957f, 0.494902f, -0.169442f, -0.0407964f, -0.629691f, -0.462826f, -0.567803f, 0.453167f, 0.0473601f, 0.562038f, 0.152508f, 0.316812f, 0.582181f, 0.637157f, 0.190546f, -0.556541f, -0.860239f, -0.106728f, 0.616123f, -0.746842f, -0.0255713f, -0.453518f, -0.886067f, 0.418399f, 0.577391f, -0.467784f, -0.05079f, -0.685036f, -0.462692f, 0.460047f, -0.318271f, 0.708224f, -0.351821f, -0.364416f, 0.0954479f, -0.0586282f, -0.0894044f, 0.481278f, -0.201991f, -0.283279f, -0.897555f, 0.0611137f, 0.0467872f}),
                            .dimensions = {1, 8, 8, 3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({-0.295335f, -0.00387601f, -0.552251f, 0.166084f, -0.28482f, -0.152143f, -0.719885f, -0.869386f, -0.745598f, 0.823947f, 0.473183f, -0.331337f, 0.187631f, 0.0426571f, -0.826897f, -0.755085f, -0.472453f, -0.0233656f, 0.0483436f, 0.933418f, -0.961974f, 0.0125783f, 0.219742f, 0.342604f, -0.15166f, 0.0934905f, 0.783221f, 0.129664f, 0.838844f, -0.271388f, 0.924519f, 0.342843f, 0.274418f, 0.350817f, 0.841638f, -0.543993f, -0.00283395f, -0.128467f, -0.682943f, -0.319117f, 0.84634f, 0.283003f, 0.32865f, 0.0293755f, -0.0335696f, 0.591266f, -0.0743476f, -0.741271f, 0.462056f, -0.583625f, -0.590183f, 0.6234f, 0.535269f, -0.670818f, -0.955642f, -0.770173f, 0.479986f, 0.664377f, 0.399445f, -0.968874f, -0.276263f, -0.901951f, 0.544104f, -0.958981f, 0.482658f, -0.807284f, 0.305369f, -0.947818f, 0.827498f, -0.382887f, -0.805741f, -0.796678f, -0.299804f, -0.229828f, 0.818783f, -0.103055f, -0.45568f, -0.227827f, 0.543743f, -0.96073f, 0.946747f, -0.857182f, -0.96426f, -0.292411f, -0.715614f, 0.765278f, -0.475043f, -0.590142f, -0.238507f, 0.673002f, -0.473357f, -0.319626f, 0.936014f, 0.486607f, 0.580844f, 0.425352f, -0.800994f, 0.290763f, -0.494953f, -0.441162f, 0.718677f, -0.828427f, 0.96965f, 7.53637e-05f, -0.699973f, -0.526886f, -0.352682f, 0.799466f, 0.332789f, 0.723389f, 0.407659f, -0.934084f, -0.284705f, 0.961484f, -0.700395f, -0.985808f, -0.595342f, -0.691721f, 0.49448f, -0.0842649f, 0.0390966f, 0.298938f, -0.128094f, -0.97158f, 0.86393f, 0.270606f, -0.468986f, -0.256605f, 0.47215f, -0.273117f, -0.590343f, -0.826529f, -0.725381f, -0.194821f, -0.259661f, -0.0949207f, -0.180302f, 0.0446834f, -0.222133f, -0.40393f, 0.295772f, -0.92949f, 0.580079f, -0.169856f, 0.330311f, 0.0173551f, -0.635823f, 0.475942f, 0.907175f, 0.242777f, -0.512208f, 0.362463f, 0.0496289f, 0.65171f, 0.990057f, 0.690733f, -0.469013f, -0.101311f, -0.68372f, -0.157841f, -0.677711f, -0.708224f, -0.659437f, -0.407607f, 0.677033f, 0.89032f, 0.228307f, -0.749514f, 0.772958f, 0.054701f, 0.551705f, 0.917052f, -0.895022f, -0.702397f, 0.484142f, 0.108648f, 0.833347f, 0.478872f, -0.984112f, 0.387176f, -0.73299f, 0.7526f, 0.443312f, -0.0987856f, 0.125415f, 0.10876f, -0.498108f, 0.43209f, 0.344609f, 0.928941f, -0.130732f, -0.0569167f}),
                            .dimensions = {1, 8, 8, 3},
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
                            .inputs = {9, 10, 11},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2, 3, 4, 5, 6, 7},
                            .outputs = {8},
                            .type = TestOperationType::DEPTHWISE_CONV_2D
                        }},
                .outputIndexes = {8}
            },
        .minSupportedVersion = TestHalVersion::UNKNOWN,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_all_inputs_as_internal_2 = TestModelManager::get().add("depthwise_conv_relaxed_all_inputs_as_internal_2", get_test_model_all_inputs_as_internal_2());

}  // namespace generated_tests::depthwise_conv_relaxed

namespace generated_tests::depthwise_conv_relaxed {

const TestModel& get_test_model_all_tensors_as_inputs_2() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = true,
        .main = {
                .inputIndexes = {0, 1, 2},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({-0.295335f, -0.00387601f, -0.552251f, 0.166084f, -0.28482f, -0.152143f, -0.719885f, -0.869386f, -0.745598f, 0.823947f, 0.473183f, -0.331337f, 0.187631f, 0.0426571f, -0.826897f, -0.755085f, -0.472453f, -0.0233656f, 0.0483436f, 0.933418f, -0.961974f, 0.0125783f, 0.219742f, 0.342604f, -0.15166f, 0.0934905f, 0.783221f, 0.129664f, 0.838844f, -0.271388f, 0.924519f, 0.342843f, 0.274418f, 0.350817f, 0.841638f, -0.543993f, -0.00283395f, -0.128467f, -0.682943f, -0.319117f, 0.84634f, 0.283003f, 0.32865f, 0.0293755f, -0.0335696f, 0.591266f, -0.0743476f, -0.741271f, 0.462056f, -0.583625f, -0.590183f, 0.6234f, 0.535269f, -0.670818f, -0.955642f, -0.770173f, 0.479986f, 0.664377f, 0.399445f, -0.968874f, -0.276263f, -0.901951f, 0.544104f, -0.958981f, 0.482658f, -0.807284f, 0.305369f, -0.947818f, 0.827498f, -0.382887f, -0.805741f, -0.796678f, -0.299804f, -0.229828f, 0.818783f, -0.103055f, -0.45568f, -0.227827f, 0.543743f, -0.96073f, 0.946747f, -0.857182f, -0.96426f, -0.292411f, -0.715614f, 0.765278f, -0.475043f, -0.590142f, -0.238507f, 0.673002f, -0.473357f, -0.319626f, 0.936014f, 0.486607f, 0.580844f, 0.425352f, -0.800994f, 0.290763f, -0.494953f, -0.441162f, 0.718677f, -0.828427f, 0.96965f, 7.53637e-05f, -0.699973f, -0.526886f, -0.352682f, 0.799466f, 0.332789f, 0.723389f, 0.407659f, -0.934084f, -0.284705f, 0.961484f, -0.700395f, -0.985808f, -0.595342f, -0.691721f, 0.49448f, -0.0842649f, 0.0390966f, 0.298938f, -0.128094f, -0.97158f, 0.86393f, 0.270606f, -0.468986f, -0.256605f, 0.47215f, -0.273117f, -0.590343f, -0.826529f, -0.725381f, -0.194821f, -0.259661f, -0.0949207f, -0.180302f, 0.0446834f, -0.222133f, -0.40393f, 0.295772f, -0.92949f, 0.580079f, -0.169856f, 0.330311f, 0.0173551f, -0.635823f, 0.475942f, 0.907175f, 0.242777f, -0.512208f, 0.362463f, 0.0496289f, 0.65171f, 0.990057f, 0.690733f, -0.469013f, -0.101311f, -0.68372f, -0.157841f, -0.677711f, -0.708224f, -0.659437f, -0.407607f, 0.677033f, 0.89032f, 0.228307f, -0.749514f, 0.772958f, 0.054701f, 0.551705f, 0.917052f, -0.895022f, -0.702397f, 0.484142f, 0.108648f, 0.833347f, 0.478872f, -0.984112f, 0.387176f, -0.73299f, 0.7526f, 0.443312f, -0.0987856f, 0.125415f, 0.10876f, -0.498108f, 0.43209f, 0.344609f, 0.928941f, -0.130732f, -0.0569167f}),
                            .dimensions = {1, 8, 8, 3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({-0.966213f, -0.467474f, -0.82203f}),
                            .dimensions = {1, 1, 1, 3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f, 0.0f, 0.0f}),
                            .dimensions = {3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
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
                            .data = TestBuffer::createFromVector<float>({0.285357f, 0.00181194f, 0.453967f, -0.160473f, 0.133146f, 0.125066f, 0.695562f, 0.406415f, 0.612903f, -0.796108f, -0.221201f, 0.272369f, -0.181291f, -0.0199411f, 0.679734f, 0.729573f, 0.22086f, 0.0192072f, -0.0467102f, -0.436349f, 0.790771f, -0.0121533f, -0.102724f, -0.281631f, 0.146536f, -0.0437044f, -0.643831f, -0.125283f, -0.392138f, 0.223089f, -0.893282f, -0.16027f, -0.22558f, -0.338964f, -0.393444f, 0.447179f, 0.0027382f, 0.0600548f, 0.5614f, 0.308335f, -0.395642f, -0.232637f, -0.317546f, -0.0137323f, 0.0275952f, -0.571289f, 0.0347555f, 0.609347f, -0.446445f, 0.27283f, 0.485148f, -0.602337f, -0.250224f, 0.551432f, 0.923353f, 0.360036f, -0.394563f, -0.64193f, -0.18673f, 0.796443f, 0.266929f, 0.421638f, -0.44727f, 0.926579f, -0.22563f, 0.663612f, -0.295051f, 0.44308f, -0.680228f, 0.36995f, 0.376663f, 0.654893f, 0.289675f, 0.107439f, -0.673064f, 0.0995729f, 0.213019f, 0.18728f, -0.525372f, 0.449116f, -0.778254f, 0.82822f, 0.450766f, 0.24037f, 0.691436f, -0.357748f, 0.3905f, 0.570203f, 0.111496f, -0.553228f, 0.457363f, 0.149417f, -0.769431f, -0.470166f, -0.271529f, -0.349652f, 0.773931f, -0.135924f, 0.406866f, 0.426256f, -0.335963f, 0.680992f, -0.936889f, -3.52306e-05f, 0.575398f, 0.509084f, 0.16487f, -0.657185f, -0.321545f, -0.338165f, -0.335108f, 0.902524f, 0.133092f, -0.790369f, 0.676731f, 0.46084f, 0.489389f, 0.66835f, -0.231156f, 0.0692682f, -0.0377757f, -0.139746f, 0.105297f, 0.938753f, -0.403865f, -0.222446f, 0.45314f, 0.119956f, -0.388121f, 0.26389f, 0.27597f, 0.679432f, 0.700873f, 0.0910737f, 0.213449f, 0.0917136f, 0.0842865f, -0.0367311f, 0.214628f, 0.188827f, -0.243133f, 0.898085f, -0.271172f, 0.139627f, -0.319151f, -0.00811307f, 0.522665f, -0.459861f, -0.424081f, -0.19957f, 0.494902f, -0.169442f, -0.0407964f, -0.629691f, -0.462826f, -0.567803f, 0.453167f, 0.0473601f, 0.562038f, 0.152508f, 0.316812f, 0.582181f, 0.637157f, 0.190546f, -0.556541f, -0.860239f, -0.106728f, 0.616123f, -0.746842f, -0.0255713f, -0.453518f, -0.886067f, 0.418399f, 0.577391f, -0.467784f, -0.05079f, -0.685036f, -0.462692f, 0.460047f, -0.318271f, 0.708224f, -0.351821f, -0.364416f, 0.0954479f, -0.0586282f, -0.0894044f, 0.481278f, -0.201991f, -0.283279f, -0.897555f, 0.0611137f, 0.0467872f}),
                            .dimensions = {1, 8, 8, 3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {0, 1, 2, 3, 4, 5, 6, 7},
                            .outputs = {8},
                            .type = TestOperationType::DEPTHWISE_CONV_2D
                        }},
                .outputIndexes = {8}
            },
        .minSupportedVersion = TestHalVersion::UNKNOWN,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_all_tensors_as_inputs_2 = TestModelManager::get().add("depthwise_conv_relaxed_all_tensors_as_inputs_2", get_test_model_all_tensors_as_inputs_2());

}  // namespace generated_tests::depthwise_conv_relaxed

namespace generated_tests::depthwise_conv_relaxed {

const TestModel& get_test_model_all_tensors_as_inputs_all_inputs_as_internal_2() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = true,
        .main = {
                .inputIndexes = {9, 12, 15},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {1, 8, 8, 3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {1, 1, 1, 3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
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
                            .data = TestBuffer::createFromVector<float>({0.285357f, 0.00181194f, 0.453967f, -0.160473f, 0.133146f, 0.125066f, 0.695562f, 0.406415f, 0.612903f, -0.796108f, -0.221201f, 0.272369f, -0.181291f, -0.0199411f, 0.679734f, 0.729573f, 0.22086f, 0.0192072f, -0.0467102f, -0.436349f, 0.790771f, -0.0121533f, -0.102724f, -0.281631f, 0.146536f, -0.0437044f, -0.643831f, -0.125283f, -0.392138f, 0.223089f, -0.893282f, -0.16027f, -0.22558f, -0.338964f, -0.393444f, 0.447179f, 0.0027382f, 0.0600548f, 0.5614f, 0.308335f, -0.395642f, -0.232637f, -0.317546f, -0.0137323f, 0.0275952f, -0.571289f, 0.0347555f, 0.609347f, -0.446445f, 0.27283f, 0.485148f, -0.602337f, -0.250224f, 0.551432f, 0.923353f, 0.360036f, -0.394563f, -0.64193f, -0.18673f, 0.796443f, 0.266929f, 0.421638f, -0.44727f, 0.926579f, -0.22563f, 0.663612f, -0.295051f, 0.44308f, -0.680228f, 0.36995f, 0.376663f, 0.654893f, 0.289675f, 0.107439f, -0.673064f, 0.0995729f, 0.213019f, 0.18728f, -0.525372f, 0.449116f, -0.778254f, 0.82822f, 0.450766f, 0.24037f, 0.691436f, -0.357748f, 0.3905f, 0.570203f, 0.111496f, -0.553228f, 0.457363f, 0.149417f, -0.769431f, -0.470166f, -0.271529f, -0.349652f, 0.773931f, -0.135924f, 0.406866f, 0.426256f, -0.335963f, 0.680992f, -0.936889f, -3.52306e-05f, 0.575398f, 0.509084f, 0.16487f, -0.657185f, -0.321545f, -0.338165f, -0.335108f, 0.902524f, 0.133092f, -0.790369f, 0.676731f, 0.46084f, 0.489389f, 0.66835f, -0.231156f, 0.0692682f, -0.0377757f, -0.139746f, 0.105297f, 0.938753f, -0.403865f, -0.222446f, 0.45314f, 0.119956f, -0.388121f, 0.26389f, 0.27597f, 0.679432f, 0.700873f, 0.0910737f, 0.213449f, 0.0917136f, 0.0842865f, -0.0367311f, 0.214628f, 0.188827f, -0.243133f, 0.898085f, -0.271172f, 0.139627f, -0.319151f, -0.00811307f, 0.522665f, -0.459861f, -0.424081f, -0.19957f, 0.494902f, -0.169442f, -0.0407964f, -0.629691f, -0.462826f, -0.567803f, 0.453167f, 0.0473601f, 0.562038f, 0.152508f, 0.316812f, 0.582181f, 0.637157f, 0.190546f, -0.556541f, -0.860239f, -0.106728f, 0.616123f, -0.746842f, -0.0255713f, -0.453518f, -0.886067f, 0.418399f, 0.577391f, -0.467784f, -0.05079f, -0.685036f, -0.462692f, 0.460047f, -0.318271f, 0.708224f, -0.351821f, -0.364416f, 0.0954479f, -0.0586282f, -0.0894044f, 0.481278f, -0.201991f, -0.283279f, -0.897555f, 0.0611137f, 0.0467872f}),
                            .dimensions = {1, 8, 8, 3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({-0.295335f, -0.00387601f, -0.552251f, 0.166084f, -0.28482f, -0.152143f, -0.719885f, -0.869386f, -0.745598f, 0.823947f, 0.473183f, -0.331337f, 0.187631f, 0.0426571f, -0.826897f, -0.755085f, -0.472453f, -0.0233656f, 0.0483436f, 0.933418f, -0.961974f, 0.0125783f, 0.219742f, 0.342604f, -0.15166f, 0.0934905f, 0.783221f, 0.129664f, 0.838844f, -0.271388f, 0.924519f, 0.342843f, 0.274418f, 0.350817f, 0.841638f, -0.543993f, -0.00283395f, -0.128467f, -0.682943f, -0.319117f, 0.84634f, 0.283003f, 0.32865f, 0.0293755f, -0.0335696f, 0.591266f, -0.0743476f, -0.741271f, 0.462056f, -0.583625f, -0.590183f, 0.6234f, 0.535269f, -0.670818f, -0.955642f, -0.770173f, 0.479986f, 0.664377f, 0.399445f, -0.968874f, -0.276263f, -0.901951f, 0.544104f, -0.958981f, 0.482658f, -0.807284f, 0.305369f, -0.947818f, 0.827498f, -0.382887f, -0.805741f, -0.796678f, -0.299804f, -0.229828f, 0.818783f, -0.103055f, -0.45568f, -0.227827f, 0.543743f, -0.96073f, 0.946747f, -0.857182f, -0.96426f, -0.292411f, -0.715614f, 0.765278f, -0.475043f, -0.590142f, -0.238507f, 0.673002f, -0.473357f, -0.319626f, 0.936014f, 0.486607f, 0.580844f, 0.425352f, -0.800994f, 0.290763f, -0.494953f, -0.441162f, 0.718677f, -0.828427f, 0.96965f, 7.53637e-05f, -0.699973f, -0.526886f, -0.352682f, 0.799466f, 0.332789f, 0.723389f, 0.407659f, -0.934084f, -0.284705f, 0.961484f, -0.700395f, -0.985808f, -0.595342f, -0.691721f, 0.49448f, -0.0842649f, 0.0390966f, 0.298938f, -0.128094f, -0.97158f, 0.86393f, 0.270606f, -0.468986f, -0.256605f, 0.47215f, -0.273117f, -0.590343f, -0.826529f, -0.725381f, -0.194821f, -0.259661f, -0.0949207f, -0.180302f, 0.0446834f, -0.222133f, -0.40393f, 0.295772f, -0.92949f, 0.580079f, -0.169856f, 0.330311f, 0.0173551f, -0.635823f, 0.475942f, 0.907175f, 0.242777f, -0.512208f, 0.362463f, 0.0496289f, 0.65171f, 0.990057f, 0.690733f, -0.469013f, -0.101311f, -0.68372f, -0.157841f, -0.677711f, -0.708224f, -0.659437f, -0.407607f, 0.677033f, 0.89032f, 0.228307f, -0.749514f, 0.772958f, 0.054701f, 0.551705f, 0.917052f, -0.895022f, -0.702397f, 0.484142f, 0.108648f, 0.833347f, 0.478872f, -0.984112f, 0.387176f, -0.73299f, 0.7526f, 0.443312f, -0.0987856f, 0.125415f, 0.10876f, -0.498108f, 0.43209f, 0.344609f, 0.928941f, -0.130732f, -0.0569167f}),
                            .dimensions = {1, 8, 8, 3},
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
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({-0.966213f, -0.467474f, -0.82203f}),
                            .dimensions = {1, 1, 1, 3},
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
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f, 0.0f, 0.0f}),
                            .dimensions = {3},
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
                            .inputs = {9, 10, 11},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {12, 13, 14},
                            .outputs = {1},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {15, 16, 17},
                            .outputs = {2},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2, 3, 4, 5, 6, 7},
                            .outputs = {8},
                            .type = TestOperationType::DEPTHWISE_CONV_2D
                        }},
                .outputIndexes = {8}
            },
        .minSupportedVersion = TestHalVersion::UNKNOWN,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_all_tensors_as_inputs_all_inputs_as_internal_2 = TestModelManager::get().add("depthwise_conv_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2", get_test_model_all_tensors_as_inputs_all_inputs_as_internal_2());

}  // namespace generated_tests::depthwise_conv_relaxed

