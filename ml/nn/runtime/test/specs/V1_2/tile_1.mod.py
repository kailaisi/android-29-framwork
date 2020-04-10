#
# Copyright (C) 2018 The Android Open Source Project
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

input0 = Input("input0", "TENSOR_FLOAT32", "{3}")
multipliers = Input("multipliers", "TENSOR_INT32", "{1}")
output0 = Output("output0", "TENSOR_FLOAT32", "{6}")

model = Model().Operation("TILE", input0, multipliers).To(output0)

input_values = [1.2, -3.4, 5.6]
multiplier_values = [2]
output_values = input_values + input_values

quant8 = DataTypeConverter().Identify({
    input0: ["TENSOR_QUANT8_ASYMM", 0.5, 127],
    output0: ["TENSOR_QUANT8_ASYMM", 0.5, 127],
})

float16 = DataTypeConverter().Identify({
    input0: ["TENSOR_FLOAT16"],
    output0: ["TENSOR_FLOAT16"],
})

Example({
    input0: input_values,
    multipliers: multiplier_values,
    output0: output_values,
}).AddVariations("relaxed", float16, quant8)
