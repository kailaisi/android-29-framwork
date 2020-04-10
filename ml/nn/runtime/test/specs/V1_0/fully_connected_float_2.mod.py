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

model = Model()
in0 = Input("op1", "TENSOR_FLOAT32", "{2, 8}")
weights = Parameter("op2", "TENSOR_FLOAT32", "{16, 8}",
      [0.091327,  0.103366,  -0.316505, -0.083120, 0.149366,  -0.196636,
       -0.123672, 0.062800,  0.063031,  0.191670,  -0.062001, -0.061504,
       -0.275581, 0.059388,  -0.118497, -0.079224, 0.109758,  0.008307,
       -0.062657, -0.060962, -0.049782, -0.106719, -0.319482, -0.103650,
       0.266455,  0.051517,  -0.123448, 0.322464,  0.043282,  -0.173782,
       -0.190381, 0.002013,  0.096086,  0.131157,  0.031164,  0.100638,
       -0.312191, -0.080923, -0.101318, -0.116614, 0.142238,  0.086540,
       -0.139154, 0.174268,  -0.073161, 0.080072,  0.006874,  0.229382,
       -0.104321, -0.176035, -0.208587, -0.001019, -0.162032, 0.080824,
       -0.025021, 0.074460,  -0.252595, -0.161750, -0.136403, 0.008308,
       0.005710,  0.096600,  0.289839,  0.218816,  -0.304651, -0.070958,
       0.054598,  0.147113,  -0.139112, -0.072798, -0.163335, -0.167863,
       -0.128762, -0.035780, 0.117262,  0.017177,  0.263335,  -0.176612,
       0.262961,  -0.093654, -0.339283, 0.333071,  0.180827,  0.287583,
       0.066350,  -0.197947, -0.114449, -0.236035, 0.103532,  -0.034284,
       0.093299,  -0.145361, 0.054001,  0.250570,  0.157010,  -0.143480,
       -0.139061, -0.048873, 0.067557,  0.139038,  0.324106,  0.227041,
       0.037793,  -0.225747, -0.241619, 0.357835,  0.135762,  -0.306764,
       -0.125982, 0.091916,  0.266587,  0.030135,  0.265148,  0.141627,
       0.020120,  0.083815,  -0.124556, -0.100124, -0.048159, 0.181172,
       0.302309,  -0.041084, 0.146334,  -0.061511, -0.232605, 0.281324,
       0.145408,  -0.221897])
bias = Parameter("b0", "TENSOR_FLOAT32", "{16}",
     [-0.160594, 0.205770, -0.078307, -0.077984, 0.001937, 0.015860,
      0.036810, 0.012346, 0.001028, 0.038551, 0.075415, 0.020804,
      0.048478, -0.032270, 0.175688, -0.085662])
out0 = Output("op3", "TENSOR_FLOAT32", "{2, 16}")
act_relu = Int32Scalar("act_relu", 1)
model = model.Operation("FULLY_CONNECTED", in0, weights, bias, act_relu).To(out0)

# Example 1. Input in operand 0,
input0 = {in0: # input 0
          [0.503691, 0.196961, 0.521017, 0.554248, 0.288678, 0.792476, 0.561653, 0.462230,
           0.650736, 0.163132, 0.029658, 0.411544, 0.470539, 0.572390, 0.538755, 0.212030]}
output0 = {out0: # output 0
           [0,        0.0732134,   0,        0,          0,         0.280859,  0,        0.128927,
            0,        0.0777251,   0,        0.270268,   0.271435,  0.0173503, 0.335465, 0.235562,
            0,        0.0745866,   0,        0.051611,   0,         0.253876,  0,        0.0814873,
            0,        0.104104,    0,        0.248529,   0.264194,  0,         0.302973, 0.166252,]}

# Instantiate an example
Example((input0, output0))
