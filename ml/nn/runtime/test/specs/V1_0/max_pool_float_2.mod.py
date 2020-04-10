#
# Copyright (C) 2017 The Android Open Source Project
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

# model
model = Model()

bat = 5
row = 50
col = 70
chn = 3

i0 = Input("i0", "TENSOR_FLOAT32", "{%d, %d, %d, %d}" % (bat, row, col, chn))

std = 20
flt = 20
pad = 0

stride = Int32Scalar("stride", std)
filt = Int32Scalar("filter", flt)
padding = Int32Scalar("padding", pad)
act0 = Int32Scalar("activation", 0)
output_row = (row + 2 * pad - flt + std) // std
output_col = (col + 2 * pad - flt + std) // std

output = Output("output", "TENSOR_FLOAT32",
                "{%d, %d, %d, %d}" % (bat, output_row, output_col, chn))

model = model.Operation(
    "MAX_POOL_2D", i0, padding, padding, padding, padding, stride, stride, filt, filt, act0).To(output)

# Example 1. Input in operand 0
input_range = bat * row * col * chn
input_values = (lambda s = std, r = input_range: [x % s + 1 for x in range(r)])()
input0 = {i0: input_values}
output_range = bat * output_row * output_col * chn
output_values = (lambda s = std, r = output_range: [ s for _ in range(r)])()
output0 = {output: output_values}

# Instantiate an example
Example((input0, output0))
