/*
 * Copyright (C) 2019 The Android Open Source Project
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

#ifndef ANDROID_FRAMEWORKS_ML_NN_RUNTIME_MODEL_ARGUMENT_INFO_H
#define ANDROID_FRAMEWORKS_ML_NN_RUNTIME_MODEL_ARGUMENT_INFO_H

#include <vector>

#include "HalInterfaces.h"
#include "NeuralNetworks.h"

namespace android {
namespace nn {

// TODO move length out of DataLocation
struct ModelArgumentInfo {
    // Whether the argument was specified as being in a Memory, as a pointer,
    // has no value, or has not been specified.
    // If POINTER then:
    //   locationAndLength.length is valid.
    //   dimensions is valid.
    //   buffer is valid
    // If MEMORY then:
    //   locationAndLength.{poolIndex, offset, length} is valid.
    //   dimensions is valid.
    enum { POINTER, MEMORY, HAS_NO_VALUE, UNSPECIFIED } state = UNSPECIFIED;
    hal::DataLocation locationAndLength;
    std::vector<uint32_t> dimensions;
    void* buffer;
    bool isSufficient = true;

    int setFromPointer(const hal::Operand& operand, const ANeuralNetworksOperandType* type,
                       void* buffer, uint32_t length);
    int setFromMemory(const hal::Operand& operand, const ANeuralNetworksOperandType* type,
                      uint32_t poolIndex, uint32_t offset, uint32_t length);
    int updateDimensionInfo(const hal::Operand& operand, const ANeuralNetworksOperandType* newType);
};

// Convert ModelArgumentInfo to HIDL RequestArgument. For pointer arguments, use the location
// information in ptrArgsLocations.
hal::hidl_vec<hal::RequestArgument> createRequestArguments(
        const std::vector<ModelArgumentInfo>& argumentInfos,
        const std::vector<hal::DataLocation>& ptrArgsLocations);

}  // namespace nn
}  // namespace android

#endif  // ANDROID_FRAMEWORKS_ML_NN_RUNTIME_MODEL_ARGUMENT_INFO_H
