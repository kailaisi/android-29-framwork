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

#define LOG_TAG "ModelArgumentInfo"

#include "ModelArgumentInfo.h"

#include <algorithm>
#include <vector>

#include "HalInterfaces.h"
#include "NeuralNetworks.h"
#include "TypeManager.h"
#include "Utils.h"

namespace android {
namespace nn {

using namespace hal;

int ModelArgumentInfo::setFromPointer(const Operand& operand,
                                      const ANeuralNetworksOperandType* type, void* data,
                                      uint32_t length) {
    if ((data == nullptr) != (length == 0)) {
        const char* dataPtrMsg = data ? "NOT_NULLPTR" : "NULLPTR";
        LOG(ERROR) << "Data pointer must be nullptr if and only if length is zero (data = "
                   << dataPtrMsg << ", length = " << length << ")";
        return ANEURALNETWORKS_BAD_DATA;
    }
    if (data == nullptr) {
        state = ModelArgumentInfo::HAS_NO_VALUE;
    } else {
        NN_RETURN_IF_ERROR(updateDimensionInfo(operand, type));
        if (operand.type != OperandType::OEM) {
            uint32_t neededLength = TypeManager::get()->getSizeOfData(operand.type, dimensions);
            if (neededLength != length && neededLength != 0) {
                LOG(ERROR) << "Setting argument with invalid length: " << length
                           << ", expected length: " << neededLength;
                return ANEURALNETWORKS_BAD_DATA;
            }
        }
        state = ModelArgumentInfo::POINTER;
    }
    buffer = data;
    locationAndLength = {.poolIndex = 0, .offset = 0, .length = length};
    return ANEURALNETWORKS_NO_ERROR;
}

int ModelArgumentInfo::setFromMemory(const Operand& operand, const ANeuralNetworksOperandType* type,
                                     uint32_t poolIndex, uint32_t offset, uint32_t length) {
    NN_RETURN_IF_ERROR(updateDimensionInfo(operand, type));
    const bool isMemorySizeKnown = offset != 0 || length != 0;
    if (isMemorySizeKnown && operand.type != OperandType::OEM) {
        const uint32_t neededLength = TypeManager::get()->getSizeOfData(operand.type, dimensions);
        if (neededLength != length && neededLength != 0) {
            LOG(ERROR) << "Setting argument with invalid length: " << length
                       << " (offset: " << offset << "), expected length: " << neededLength;
            return ANEURALNETWORKS_BAD_DATA;
        }
    }

    state = ModelArgumentInfo::MEMORY;
    locationAndLength = {.poolIndex = poolIndex, .offset = offset, .length = length};
    buffer = nullptr;
    return ANEURALNETWORKS_NO_ERROR;
}

int ModelArgumentInfo::updateDimensionInfo(const Operand& operand,
                                           const ANeuralNetworksOperandType* newType) {
    if (newType == nullptr) {
        dimensions = operand.dimensions;
    } else {
        const uint32_t count = newType->dimensionCount;
        dimensions = hidl_vec<uint32_t>(count);
        std::copy(&newType->dimensions[0], &newType->dimensions[count], dimensions.begin());
    }
    return ANEURALNETWORKS_NO_ERROR;
}

hidl_vec<RequestArgument> createRequestArguments(
        const std::vector<ModelArgumentInfo>& argumentInfos,
        const std::vector<DataLocation>& ptrArgsLocations) {
    const size_t count = argumentInfos.size();
    hidl_vec<RequestArgument> ioInfos(count);
    uint32_t ptrArgsIndex = 0;
    for (size_t i = 0; i < count; i++) {
        const auto& info = argumentInfos[i];
        ioInfos[i] = {
                .hasNoValue = info.state == ModelArgumentInfo::HAS_NO_VALUE,
                .location = info.state == ModelArgumentInfo::POINTER
                                    ? ptrArgsLocations[ptrArgsIndex++]
                                    : info.locationAndLength,
                .dimensions = info.dimensions,
        };
    }
    return ioInfos;
}

}  // namespace nn
}  // namespace android
