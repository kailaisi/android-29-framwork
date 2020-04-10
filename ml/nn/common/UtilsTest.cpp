/*
 * Copyright (C) 2018 The Android Open Source Project
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
#include <gmock/gmock-matchers.h>
#include <gtest/gtest.h>

#include <vector>

#include "OperationsUtils.cpp"

namespace android {
namespace nn {
namespace wrapper {

namespace {
using ::testing::ElementsAreArray;
}  // namespace

TEST(CalculateBroadcastedShapeTest, Basic) {
    Shape shape1;
    Shape shape2;
    shape1.dimensions = {4, 3, 2, 1};
    shape2.dimensions = {3, 1, 5};

    Shape expectedOutputShape;
    expectedOutputShape.dimensions = {4, 3, 2, 5};

    Shape actualOutputShape;
    EXPECT_TRUE(calculateBroadcastedShape(shape1, shape2, &actualOutputShape));
    EXPECT_THAT(actualOutputShape.dimensions, ElementsAreArray(expectedOutputShape.dimensions));

    EXPECT_TRUE(calculateBroadcastedShape(shape2, shape1, &actualOutputShape));
    EXPECT_THAT(actualOutputShape.dimensions, ElementsAreArray(expectedOutputShape.dimensions));
}

TEST(CalculateBroadcastedShapeTest, FailsOnIncompatible) {
    Shape shape1;
    Shape shape2;
    shape1.dimensions = {5};
    shape2.dimensions = {3};

    Shape actualOutputShape;
    EXPECT_FALSE(calculateBroadcastedShape(shape1, shape2, &actualOutputShape));
    EXPECT_FALSE(calculateBroadcastedShape(shape2, shape1, &actualOutputShape));
}

static int32_t getExtensionType(uint16_t extensionPrefix, uint16_t typeWithinExtension) {
    constexpr uint8_t kLowBitsType = static_cast<uint8_t>(ExtensionTypeEncoding::LOW_BITS_TYPE);
    int32_t type = (extensionPrefix << kLowBitsType) | typeWithinExtension;
    EXPECT_TRUE(isExtensionOperandType(static_cast<OperandType>(type)));
    return type;
}

TEST(TensorHasUnspecifiedDimensionsTest, ExtensionTensorWithUnspecifiedRank) {
    // Regression test for b/124285861.
    EXPECT_TRUE(tensorHasUnspecifiedDimensions(getExtensionType(1, 0), /*dim=*/nullptr,
                                               /*dimCount=*/0));
}

TEST(ValidateOperandTypeTest, ExtensionTensorWithUnspecifiedRank) {
    // Regression test for b/124104123.
    constexpr uint16_t kExtensionPrefix = 1;
    constexpr uint16_t kTypeWithinExtension = 0;
    int32_t extensionType = getExtensionType(kExtensionPrefix, kTypeWithinExtension);
    ANeuralNetworksOperandType type = {
            .type = extensionType,
            .dimensionCount = 0,
            .dimensions = nullptr,
    };
    Extension::OperandTypeInformation info = {
            .type = kTypeWithinExtension,
            .isTensor = true,
            .byteSize = 4,
    };
    EXPECT_EQ(validateOperandType(type, &info, /*tag=*/"test", /*allowPartial=*/true),
              ANEURALNETWORKS_NO_ERROR);
    EXPECT_EQ(validateOperandType(type, &info, /*tag=*/"test", /*allowPartial=*/false),
              ANEURALNETWORKS_BAD_DATA);
}

class CombineDimensionsTest : public ::testing::Test {
   protected:
    void testCompatible(const std::vector<uint32_t>& lhs, const std::vector<uint32_t>& rhs,
                        const std::vector<uint32_t>& expected) {
        SCOPED_TRACE("lhs = " + toString(lhs) + ", rhs = " + toString(rhs));
        const auto res = combineDimensions(lhs, rhs);
        ASSERT_TRUE(res.has_value());
        EXPECT_EQ(res.value(), expected);
    }

    void testIncompatible(const std::vector<uint32_t>& lhs, const std::vector<uint32_t>& rhs) {
        SCOPED_TRACE("lhs = " + toString(lhs) + ", rhs = " + toString(rhs));
        const auto res = combineDimensions(lhs, rhs);
        EXPECT_FALSE(res.has_value());
    }
};

TEST_F(CombineDimensionsTest, Rank) {
    testCompatible({}, {1, 2, 3, 4}, {1, 2, 3, 4});
    testCompatible({1, 2, 3, 4}, {}, {1, 2, 3, 4});
    testCompatible({}, {}, {});
    testIncompatible({1, 2, 3}, {1, 2, 3, 4});
    testIncompatible({1, 2, 3, 4}, {1, 2, 3});
}

TEST_F(CombineDimensionsTest, Dimensions) {
    testCompatible({0, 0, 0, 0}, {1, 2, 3, 4}, {1, 2, 3, 4});
    testCompatible({1, 2, 3, 4}, {0, 0, 0, 0}, {1, 2, 3, 4});
    testCompatible({0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0});
    testIncompatible({1, 2, 3, 4}, {2, 2, 3, 4});
    testIncompatible({1, 2, 3, 4}, {1, 2, 3, 3});
}

}  // namespace wrapper
}  // namespace nn
}  // namespace android
