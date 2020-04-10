#
# Copyright (C) 2020 The Android Open Source Project
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

# Model: given x = [x0, x1] and n, produces [sum(x0 ^ i), sum(x1 ^ i)] for i in [1, n].
#
# sum = [1, 1] // More generarlly, sum = ones_like(x).
# i = 1
# while i <= n:
#     xi = x  // x to the power of i (element-wise)
#     j = 1
#     while j < i:
#        xi = xi * x
#        j += 1
#     sum = sum + xi
#     i = i + 1

DataType = ["TENSOR_FLOAT32", [1, 2]]
CounterType = ["TENSOR_INT32", [1]]
BoolType = ["TENSOR_BOOL8", [1]]

def MakeInnerConditionModel():
  xi = Input("xi", DataType)
  j = Input("j", CounterType)
  i = Input("i", CounterType)
  x = Input("x", DataType)
  out = Output("out", BoolType)
  model = Model()
  model.IdentifyInputs(xi, j, i, x)
  model.IdentifyOutputs(out)
  model.Operation("LESS", j, i).To(out)
  return model

def MakeInnerBodyModel():
  xi = Input("xi", DataType)
  j = Input("j", CounterType)
  i = Input("i", CounterType)
  x = Input("x", DataType)
  xi_out = Output("xi_out", DataType)
  j_out = Output("j_out", CounterType)
  model = Model()
  model.IdentifyInputs(xi, j, i, x)
  model.IdentifyOutputs(xi_out, j_out)
  model.Operation("MUL", xi, x, 0).To(xi_out)
  model.Operation("ADD", j, [1], 0).To(j_out)
  return model

def MakeOuterConditionModel():
  sum = Input("sum", DataType)
  i = Input("i", CounterType)
  n = Input("n", CounterType)
  x = Input("x", DataType)
  out = Output("out", BoolType)
  model = Model()
  model.IdentifyInputs(sum, i, n, x)
  model.IdentifyOutputs(out)
  model.Operation("LESS_EQUAL", i, n).To(out)
  return model

def MakeOuterBodyModel():
  sum = Input("sum", DataType)
  i = Input("i", CounterType)
  n = Input("n", CounterType)
  x = Input("x", DataType)
  sum_out = Output("sum_out", DataType)
  i_out = Output("i_out", CounterType)
  xi_init = x
  j_init = [1]
  cond = MakeInnerConditionModel()
  body = MakeInnerBodyModel()
  xi = Internal("xi", DataType)
  model = Model()
  model.IdentifyInputs(sum, i, n, x)
  model.IdentifyOutputs(sum_out, i_out)
  model.Operation("WHILE", cond, body, xi_init, j_init, i, x).To(xi)
  model.Operation("ADD", i, [1], 0).To(i_out)
  model.Operation("ADD", sum, xi, 0).To(sum_out)
  return model

def Test(x, n, sum):
  x_data, n_data, sum_data = x, n, sum
  x = Input("x", DataType)
  n = Input("n", CounterType)
  sum = Output("sum", DataType)
  cond = MakeOuterConditionModel()
  body = MakeOuterBodyModel()
  sum_init = Parameter("sum_init", DataType, [1, 1])
  i_init = [1]
  model = Model().Operation("WHILE", cond, body, sum_init, i_init, n, x).To(sum)
  example = Example({x: x_data, n: [n_data], sum: sum_data}, name=str(n_data))
  example.AddVariations(AllOutputsAsInternalCoverter())

Test(x=[2, 3], n=1, sum=[1 + 2, 1 + 3])
Test(x=[2, 3], n=1, sum=[1 + 2, 1 + 3])
Test(x=[2, 3], n=2, sum=[1 + 2 + 4, 1 + 3 + 9])
Test(x=[2, 3], n=3, sum=[1 + 2 + 4 + 8, 1 + 3 + 9 + 27])
Test(x=[2, 3], n=4, sum=[1 + 2 + 4 + 8 + 16, 1 + 3 + 9 + 27 + 81])
