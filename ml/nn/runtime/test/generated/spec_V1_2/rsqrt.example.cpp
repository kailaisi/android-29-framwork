// Generated from rsqrt.mod.py
// DO NOT EDIT
// clang-format off
#include "TestHarness.h"
using namespace test_helper;

namespace generated_tests::rsqrt {

const TestModel& get_test_model() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.1f, 0.2f, 0.3f, 0.4f, 0.5f, 0.6f, 0.7f, 0.8f, 0.9f, 1.0f, 1.1f, 1.2f, 1.3f, 1.4f, 1.5f, 1.6f, 1.7f, 1.8f, 1.9f, 2.0f, 2.1f, 2.2f, 2.3f, 2.4f, 2.5f, 2.6f, 2.7f, 2.8f, 2.9f, 3.0f, 3.1f, 3.2f, 3.3f, 3.4f, 3.5f, 3.6f, 3.7f, 3.8f, 3.9f, 4.0f, 4.1f, 4.2f, 4.3f, 4.4f, 4.5f, 4.6f, 4.7f, 4.8f, 4.9f, 5.0f, 5.1f, 5.2f, 5.3f, 5.4f, 5.5f, 5.6f, 5.7f, 5.8f, 5.9f, 6.0f, 6.1f, 6.2f, 6.3f, 6.4f, 6.5f, 6.6f, 6.7f, 6.8f, 6.9f, 7.0f, 7.1f, 7.2f, 7.3f, 7.4f, 7.5f, 7.6f, 7.7f, 7.8f, 7.9f, 8.0f, 8.1f, 8.2f, 8.3f, 8.4f, 8.5f, 8.6f, 8.7f, 8.8f, 8.9f, 9.0f, 9.1f, 9.2f, 9.3f, 9.4f, 9.5f, 9.6f, 9.7f, 9.8f, 9.9f, 10.0f, 10.1f, 10.2f, 10.3f, 10.4f, 10.5f, 10.6f, 10.7f, 10.8f, 10.9f, 11.0f, 11.1f, 11.2f, 11.3f, 11.4f, 11.5f, 11.6f, 11.7f, 11.8f, 11.9f, 12.0f}),
                            .dimensions = {1, 2, 3, 4, 5},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({3.162277660168379f, 2.23606797749979f, 1.8257418583505538f, 1.5811388300841895f, 1.414213562373095f, 1.2909944487358056f, 1.1952286093343936f, 1.118033988749895f, 1.0540925533894598f, 1.0f, 0.9534625892455922f, 0.9128709291752769f, 0.8770580193070292f, 0.8451542547285166f, 0.8164965809277261f, 0.7905694150420948f, 0.7669649888473704f, 0.7453559924999299f, 0.7254762501100117f, 0.7071067811865475f, 0.6900655593423541f, 0.674199862463242f, 0.6593804733957871f, 0.6454972243679028f, 0.6324555320336759f, 0.6201736729460422f, 0.6085806194501845f, 0.5976143046671968f, 0.5872202195147035f, 0.5773502691896258f, 0.5679618342470648f, 0.5590169943749475f, 0.5504818825631803f, 0.5423261445466404f, 0.5345224838248488f, 0.5270462766947299f, 0.5198752449100363f, 0.5129891760425771f, 0.5063696835418333f, 0.5f, 0.49386479832479485f, 0.48795003647426655f, 0.48224282217041214f, 0.4767312946227961f, 0.47140452079103173f, 0.4662524041201569f, 0.46126560401444255f, 0.45643546458763845f, 0.45175395145262565f, 0.4472135954999579f, 0.4428074427700477f, 0.4385290096535146f, 0.4343722427630694f, 0.4303314829119352f, 0.42640143271122083f, 0.4225771273642583f, 0.4188539082916955f, 0.41522739926869984f, 0.41169348479630913f, 0.4082482904638631f, 0.404888165089458f, 0.40160966445124946f, 0.3984095364447979f, 0.3952847075210474f, 0.3922322702763681f, 0.3892494720807615f, 0.3863337046431279f, 0.3834824944236852f, 0.3806934938134405f, 0.3779644730092272f, 0.37529331252040077f, 0.37267799624996495f, 0.3701166050988026f, 0.3676073110469039f, 0.3651483716701107f, 0.36273812505500586f, 0.3603749850782236f, 0.35805743701971643f, 0.35578403348241f, 0.35355339059327373f, 0.35136418446315326f, 0.34921514788478913f, 0.34710506725031165f, 0.34503277967117707f, 0.34299717028501764f, 0.34099716973523675f, 0.33903175181040524f, 0.337099931231621f, 0.33520076157699547f, 0.3333333333333333f, 0.33149677206589795f, 0.32969023669789355f, 0.32791291789197646f, 0.3261640365267211f, 0.3244428422615251f, 0.3227486121839514f, 0.3210806495339678f, 0.31943828249996997f, 0.3178208630818641f, 0.31622776601683794f, 0.3146583877637763f, 0.31311214554257477f, 0.3115884764248779f, 0.3100868364730211f, 0.3086066999241838f, 0.3071475584169756f, 0.30570892025787155f, 0.30429030972509225f, 0.3028912664076913f, 0.30151134457776363f, 0.3001501125938321f, 0.2988071523335984f, 0.2974820586543648f, 0.29617443887954614f, 0.29488391230979427f, 0.29361010975735174f, 0.2923526731023431f, 0.291111254869791f, 0.28988551782622424f, 0.2886751345948129f}),
                            .dimensions = {1, 2, 3, 4, 5},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {0},
                            .outputs = {1},
                            .type = TestOperationType::RSQRT
                        }},
                .outputIndexes = {1}
            },
        .minSupportedVersion = TestHalVersion::V1_2,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model = TestModelManager::get().add("rsqrt", get_test_model());

}  // namespace generated_tests::rsqrt

namespace generated_tests::rsqrt {

const TestModel& get_test_model_relaxed() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = true,
        .main = {
                .inputIndexes = {0},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.1f, 0.2f, 0.3f, 0.4f, 0.5f, 0.6f, 0.7f, 0.8f, 0.9f, 1.0f, 1.1f, 1.2f, 1.3f, 1.4f, 1.5f, 1.6f, 1.7f, 1.8f, 1.9f, 2.0f, 2.1f, 2.2f, 2.3f, 2.4f, 2.5f, 2.6f, 2.7f, 2.8f, 2.9f, 3.0f, 3.1f, 3.2f, 3.3f, 3.4f, 3.5f, 3.6f, 3.7f, 3.8f, 3.9f, 4.0f, 4.1f, 4.2f, 4.3f, 4.4f, 4.5f, 4.6f, 4.7f, 4.8f, 4.9f, 5.0f, 5.1f, 5.2f, 5.3f, 5.4f, 5.5f, 5.6f, 5.7f, 5.8f, 5.9f, 6.0f, 6.1f, 6.2f, 6.3f, 6.4f, 6.5f, 6.6f, 6.7f, 6.8f, 6.9f, 7.0f, 7.1f, 7.2f, 7.3f, 7.4f, 7.5f, 7.6f, 7.7f, 7.8f, 7.9f, 8.0f, 8.1f, 8.2f, 8.3f, 8.4f, 8.5f, 8.6f, 8.7f, 8.8f, 8.9f, 9.0f, 9.1f, 9.2f, 9.3f, 9.4f, 9.5f, 9.6f, 9.7f, 9.8f, 9.9f, 10.0f, 10.1f, 10.2f, 10.3f, 10.4f, 10.5f, 10.6f, 10.7f, 10.8f, 10.9f, 11.0f, 11.1f, 11.2f, 11.3f, 11.4f, 11.5f, 11.6f, 11.7f, 11.8f, 11.9f, 12.0f}),
                            .dimensions = {1, 2, 3, 4, 5},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({3.162277660168379f, 2.23606797749979f, 1.8257418583505538f, 1.5811388300841895f, 1.414213562373095f, 1.2909944487358056f, 1.1952286093343936f, 1.118033988749895f, 1.0540925533894598f, 1.0f, 0.9534625892455922f, 0.9128709291752769f, 0.8770580193070292f, 0.8451542547285166f, 0.8164965809277261f, 0.7905694150420948f, 0.7669649888473704f, 0.7453559924999299f, 0.7254762501100117f, 0.7071067811865475f, 0.6900655593423541f, 0.674199862463242f, 0.6593804733957871f, 0.6454972243679028f, 0.6324555320336759f, 0.6201736729460422f, 0.6085806194501845f, 0.5976143046671968f, 0.5872202195147035f, 0.5773502691896258f, 0.5679618342470648f, 0.5590169943749475f, 0.5504818825631803f, 0.5423261445466404f, 0.5345224838248488f, 0.5270462766947299f, 0.5198752449100363f, 0.5129891760425771f, 0.5063696835418333f, 0.5f, 0.49386479832479485f, 0.48795003647426655f, 0.48224282217041214f, 0.4767312946227961f, 0.47140452079103173f, 0.4662524041201569f, 0.46126560401444255f, 0.45643546458763845f, 0.45175395145262565f, 0.4472135954999579f, 0.4428074427700477f, 0.4385290096535146f, 0.4343722427630694f, 0.4303314829119352f, 0.42640143271122083f, 0.4225771273642583f, 0.4188539082916955f, 0.41522739926869984f, 0.41169348479630913f, 0.4082482904638631f, 0.404888165089458f, 0.40160966445124946f, 0.3984095364447979f, 0.3952847075210474f, 0.3922322702763681f, 0.3892494720807615f, 0.3863337046431279f, 0.3834824944236852f, 0.3806934938134405f, 0.3779644730092272f, 0.37529331252040077f, 0.37267799624996495f, 0.3701166050988026f, 0.3676073110469039f, 0.3651483716701107f, 0.36273812505500586f, 0.3603749850782236f, 0.35805743701971643f, 0.35578403348241f, 0.35355339059327373f, 0.35136418446315326f, 0.34921514788478913f, 0.34710506725031165f, 0.34503277967117707f, 0.34299717028501764f, 0.34099716973523675f, 0.33903175181040524f, 0.337099931231621f, 0.33520076157699547f, 0.3333333333333333f, 0.33149677206589795f, 0.32969023669789355f, 0.32791291789197646f, 0.3261640365267211f, 0.3244428422615251f, 0.3227486121839514f, 0.3210806495339678f, 0.31943828249996997f, 0.3178208630818641f, 0.31622776601683794f, 0.3146583877637763f, 0.31311214554257477f, 0.3115884764248779f, 0.3100868364730211f, 0.3086066999241838f, 0.3071475584169756f, 0.30570892025787155f, 0.30429030972509225f, 0.3028912664076913f, 0.30151134457776363f, 0.3001501125938321f, 0.2988071523335984f, 0.2974820586543648f, 0.29617443887954614f, 0.29488391230979427f, 0.29361010975735174f, 0.2923526731023431f, 0.291111254869791f, 0.28988551782622424f, 0.2886751345948129f}),
                            .dimensions = {1, 2, 3, 4, 5},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {0},
                            .outputs = {1},
                            .type = TestOperationType::RSQRT
                        }},
                .outputIndexes = {1}
            },
        .minSupportedVersion = TestHalVersion::UNKNOWN,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_relaxed = TestModelManager::get().add("rsqrt_relaxed", get_test_model_relaxed());

}  // namespace generated_tests::rsqrt

namespace generated_tests::rsqrt {

const TestModel& get_test_model_float16() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({0.10000000149011612f, 0.20000000298023224f, 0.30000001192092896f, 0.4000000059604645f, 0.5f, 0.6000000238418579f, 0.699999988079071f, 0.800000011920929f, 0.8999999761581421f, 1.0f, 1.100000023841858f, 1.2000000476837158f, 1.2999999523162842f, 1.399999976158142f, 1.5f, 1.600000023841858f, 1.7000000476837158f, 1.7999999523162842f, 1.899999976158142f, 2.0f, 2.0999999046325684f, 2.200000047683716f, 2.299999952316284f, 2.4000000953674316f, 2.5f, 2.5999999046325684f, 2.700000047683716f, 2.799999952316284f, 2.9000000953674316f, 3.0f, 3.0999999046325684f, 3.200000047683716f, 3.299999952316284f, 3.4000000953674316f, 3.5f, 3.5999999046325684f, 3.700000047683716f, 3.799999952316284f, 3.9000000953674316f, 4.0f, 4.099999904632568f, 4.199999809265137f, 4.300000190734863f, 4.400000095367432f, 4.5f, 4.599999904632568f, 4.699999809265137f, 4.800000190734863f, 4.900000095367432f, 5.0f, 5.099999904632568f, 5.199999809265137f, 5.300000190734863f, 5.400000095367432f, 5.5f, 5.599999904632568f, 5.699999809265137f, 5.800000190734863f, 5.900000095367432f, 6.0f, 6.099999904632568f, 6.199999809265137f, 6.300000190734863f, 6.400000095367432f, 6.5f, 6.599999904632568f, 6.699999809265137f, 6.800000190734863f, 6.900000095367432f, 7.0f, 7.099999904632568f, 7.199999809265137f, 7.300000190734863f, 7.400000095367432f, 7.5f, 7.599999904632568f, 7.699999809265137f, 7.800000190734863f, 7.900000095367432f, 8.0f, 8.100000381469727f, 8.199999809265137f, 8.300000190734863f, 8.399999618530273f, 8.5f, 8.600000381469727f, 8.699999809265137f, 8.800000190734863f, 8.899999618530273f, 9.0f, 9.100000381469727f, 9.199999809265137f, 9.300000190734863f, 9.399999618530273f, 9.5f, 9.600000381469727f, 9.699999809265137f, 9.800000190734863f, 9.899999618530273f, 10.0f, 10.100000381469727f, 10.199999809265137f, 10.300000190734863f, 10.399999618530273f, 10.5f, 10.600000381469727f, 10.699999809265137f, 10.800000190734863f, 10.899999618530273f, 11.0f, 11.100000381469727f, 11.199999809265137f, 11.300000190734863f, 11.399999618530273f, 11.5f, 11.600000381469727f, 11.699999809265137f, 11.800000190734863f, 11.899999618530273f, 12.0f}),
                            .dimensions = {1, 2, 3, 4, 5},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({3.1622776985168457f, 2.2360680103302f, 1.8257418870925903f, 1.5811388492584229f, 1.4142135381698608f, 1.29099440574646f, 1.1952285766601562f, 1.1180340051651f, 1.054092526435852f, 1.0f, 0.9534626007080078f, 0.9128709435462952f, 0.8770580291748047f, 0.8451542258262634f, 0.8164966106414795f, 0.7905694246292114f, 0.7669649720191956f, 0.7453559637069702f, 0.7254762649536133f, 0.7071067690849304f, 0.6900655627250671f, 0.6741998791694641f, 0.6593804955482483f, 0.64549720287323f, 0.6324555277824402f, 0.6201736927032471f, 0.6085806488990784f, 0.5976142883300781f, 0.5872201919555664f, 0.5773502588272095f, 0.5679618120193481f, 0.55901700258255f, 0.5504818558692932f, 0.5423261523246765f, 0.5345224738121033f, 0.527046263217926f, 0.5198752284049988f, 0.5129891633987427f, 0.5063697099685669f, 0.5f, 0.4938648045063019f, 0.48795002698898315f, 0.4822428226470947f, 0.4767313003540039f, 0.4714045226573944f, 0.4662524163722992f, 0.46126559376716614f, 0.4564354717731476f, 0.4517539441585541f, 0.4472135901451111f, 0.4428074359893799f, 0.43852901458740234f, 0.4343722462654114f, 0.4303314685821533f, 0.42640143632888794f, 0.4225771129131317f, 0.41885390877723694f, 0.41522741317749023f, 0.4116934835910797f, 0.40824830532073975f, 0.4048881530761719f, 0.4016096591949463f, 0.39840954542160034f, 0.3952847123146057f, 0.3922322690486908f, 0.3892494738101959f, 0.386333703994751f, 0.3834824860095978f, 0.3806934952735901f, 0.37796446681022644f, 0.3752933144569397f, 0.3726779818534851f, 0.37011659145355225f, 0.36760732531547546f, 0.3651483654975891f, 0.36273813247680664f, 0.36037498712539673f, 0.35805743932724f, 0.35578402876853943f, 0.3535533845424652f, 0.3513641953468323f, 0.34921514987945557f, 0.3471050560474396f, 0.34503278136253357f, 0.34299716353416443f, 0.3409971594810486f, 0.33903175592422485f, 0.33709993958473206f, 0.3352007567882538f, 0.3333333432674408f, 0.3314967751502991f, 0.32969024777412415f, 0.32791292667388916f, 0.32616403698921204f, 0.3244428336620331f, 0.322748601436615f, 0.32108065485954285f, 0.31943827867507935f, 0.31782087683677673f, 0.3162277638912201f, 0.31465837359428406f, 0.31311213970184326f, 0.31158846616744995f, 0.31008684635162354f, 0.30860671401023865f, 0.3071475625038147f, 0.3057089149951935f, 0.3042903244495392f, 0.30289125442504883f, 0.30151134729385376f, 0.3001501262187958f, 0.29880714416503906f, 0.29748207330703735f, 0.29617443680763245f, 0.2948839068412781f, 0.2936100959777832f, 0.29235267639160156f, 0.2911112606525421f, 0.2898855209350586f, 0.28867512941360474f}),
                            .dimensions = {1, 2, 3, 4, 5},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {0},
                            .outputs = {1},
                            .type = TestOperationType::RSQRT
                        }},
                .outputIndexes = {1}
            },
        .minSupportedVersion = TestHalVersion::V1_2,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_float16 = TestModelManager::get().add("rsqrt_float16", get_test_model_float16());

}  // namespace generated_tests::rsqrt

