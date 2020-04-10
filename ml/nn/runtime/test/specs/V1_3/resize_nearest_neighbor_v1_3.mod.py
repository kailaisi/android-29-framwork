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
def test(name, input0, output_width, output_height, layout, align_corners,
         half_pixel_centers, output0, input0_data, output_data):
  model = Model().Operation("RESIZE_NEAREST_NEIGHBOR", input0, output_width,
                            output_height, layout, align_corners,
                            half_pixel_centers).To(output0)
  quant8 = DataTypeConverter().Identify({
      input0: ["TENSOR_QUANT8_ASYMM", 0.5, 128],
      output0: ["TENSOR_QUANT8_ASYMM", 0.5, 128],
  })
  quant8_signed = DataTypeConverter().Identify({
      input0: ["TENSOR_QUANT8_ASYMM_SIGNED", 0.5, 0],
      output0: ["TENSOR_QUANT8_ASYMM_SIGNED", 0.5, 0],
  })
  example = Example({
      input0: input0_data,
      output0: output_data,
  },
                    model=model,
                    name=name).AddVariations("float16", "relaxed", quant8)


test(
    name="half_pixel_centers_5x2_to_2x2",
    input0=Input("input0", "TENSOR_FLOAT32", "{1, 2, 5, 1}"),
    output_width=Int32Scalar("output_width", 2),
    output_height=Int32Scalar("output_height", 2),
    layout=BoolScalar("layout", False),
    align_corners=BoolScalar("align_corners", False),
    half_pixel_centers=BoolScalar("half_pixel_centers", True),
    output0=Output("output0", "TENSOR_FLOAT32", "{1, 2, 2, 1}"),
    input0_data=[1, 2, 3, 4, 5, 1, 2, 3, 4, 5],
    output_data=[2, 4, 2, 4],
)

test(
    name="half_pixel_centers_2x2_to_1x1",
    input0=Input("input0", "TENSOR_FLOAT32", "{1, 2, 2, 1}"),
    output_width=Int32Scalar("output_width", 1),
    output_height=Int32Scalar("output_height", 1),
    layout=BoolScalar("layout", False),
    align_corners=BoolScalar("align_corners", False),
    half_pixel_centers=BoolScalar("half_pixel_centers", True),
    output0=Output("output0", "TENSOR_FLOAT32", "{1, 1, 1, 1}"),
    input0_data=[1, 2, 3, 4],
    output_data=[4],
)

test(
    name="half_pixel_centers_2x2_to_3x3",
    input0=Input("input0", "TENSOR_FLOAT32", "{1, 2, 2, 1}"),
    output_width=Int32Scalar("output_width", 3),
    output_height=Int32Scalar("output_height", 3),
    layout=BoolScalar("layout", False),
    align_corners=BoolScalar("align_corners", False),
    half_pixel_centers=BoolScalar("half_pixel_centers", True),
    output0=Output("output0", "TENSOR_FLOAT32", "{1, 3, 3, 1}"),
    input0_data=[1, 2, 3, 4],
    output_data=[1, 2, 2, 3, 4, 4, 3, 4, 4],
)

test(
    name="half_pixel_centers_2x2_to_2x5",
    input0=Input("input0", "TENSOR_FLOAT32", "{1, 2, 2, 1}"),
    output_width=Int32Scalar("output_width", 5),
    output_height=Int32Scalar("output_height", 2),
    layout=BoolScalar("layout", False),
    align_corners=BoolScalar("align_corners", False),
    half_pixel_centers=BoolScalar("half_pixel_centers", True),
    output0=Output("output0", "TENSOR_FLOAT32", "{1, 2, 5, 1}"),
    input0_data=[1, 2, 3, 4],
    output_data=[1, 1, 2, 2, 2, 3, 3, 4, 4, 4],
)

test(
    name="half_pixel_centers_4x4_to_3x3",
    input0=Input("input0", "TENSOR_FLOAT32", "{1, 4, 4, 1}"),
    output_width=Int32Scalar("output_width", 3),
    output_height=Int32Scalar("output_height", 3),
    layout=BoolScalar("layout", False),
    align_corners=BoolScalar("align_corners", False),
    half_pixel_centers=BoolScalar("half_pixel_centers", True),
    output0=Output("output0", "TENSOR_FLOAT32", "{1, 3, 3, 1}"),
    input0_data=[1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16],
    output_data=[1, 3, 4, 9, 11, 12, 13, 15, 16],
)

test(
    name="half_pixel_centers_2x2_to_5x2",
    input0=Input("input0", "TENSOR_FLOAT32", "{1, 2, 2, 1}"),
    output_width=Int32Scalar("output_width", 2),
    output_height=Int32Scalar("output_height", 5),
    layout=BoolScalar("layout", False),
    align_corners=BoolScalar("align_corners", False),
    half_pixel_centers=BoolScalar("half_pixel_centers", True),
    output0=Output("output0", "TENSOR_FLOAT32", "{1, 5, 2, 1}"),
    input0_data=[1, 2, 3, 4],
    output_data=[1, 2, 1, 2, 3, 4, 3, 4, 3, 4],
)

test(
    name="half_pixel_centers_2x2_to_4x4",
    input0=Input("input0", "TENSOR_FLOAT32", "{1, 2, 2, 1}"),
    output_width=Int32Scalar("output_width", 4),
    output_height=Int32Scalar("output_height", 4),
    layout=BoolScalar("layout", False),
    align_corners=BoolScalar("align_corners", False),
    half_pixel_centers=BoolScalar("half_pixel_centers", True),
    output0=Output("output0", "TENSOR_FLOAT32", "{1, 4, 4, 1}"),
    input0_data=[1, 2, 3, 4],
    output_data=[1, 1, 2, 2, 1, 1, 2, 2, 3, 3, 4, 4, 3, 3, 4, 4],
)

test(
    name="half_pixel_centers_2x2x2x2_to_2x3x3x2",
    input0=Input("input0", "TENSOR_FLOAT32", "{2, 2, 2, 2}"),
    output_width=Int32Scalar("output_width", 3),
    output_height=Int32Scalar("output_height", 3),
    layout=BoolScalar("layout", False),
    align_corners=BoolScalar("align_corners", False),
    half_pixel_centers=BoolScalar("half_pixel_centers", True),
    output0=Output("output0", "TENSOR_FLOAT32", "{2, 3, 3, 2}"),
    input0_data=[1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8],
    output_data=[
        1, 1, 2, 2, 2, 2, 3, 3, 4, 4, 4, 4, 3, 3, 4, 4, 4, 4, 5, 5, 6, 6, 6, 6,
        7, 7, 8, 8, 8, 8, 7, 7, 8, 8, 8, 8
    ],
)

test(
    name="align_corners_2x2_to_1x1",
    input0=Input("input0", "TENSOR_FLOAT32", "{1, 2, 2, 1}"),
    output_width=Int32Scalar("output_width", 1),
    output_height=Int32Scalar("output_height", 1),
    layout=BoolScalar("layout", False),
    align_corners=BoolScalar("align_corners", True),
    half_pixel_centers=BoolScalar("half_pixel_centers", False),
    output0=Output("output0", "TENSOR_FLOAT32", "{1, 1, 1, 1}"),
    input0_data=[1, 2, 3, 4],
    output_data=[1],
)

test(
    name="align_corners_2x2_to_3x3",
    input0=Input("input0", "TENSOR_FLOAT32", "{1, 2, 2, 1}"),
    output_width=Int32Scalar("output_width", 3),
    output_height=Int32Scalar("output_height", 3),
    layout=BoolScalar("layout", False),
    align_corners=BoolScalar("align_corners", True),
    half_pixel_centers=BoolScalar("half_pixel_centers", False),
    output0=Output("output0", "TENSOR_FLOAT32", "{1, 3, 3, 1}"),
    input0_data=[1, 2, 3, 4],
    output_data=[1, 2, 2, 3, 4, 4, 3, 4, 4],
)

test(
    name="align_corners_3x3_to_2x2",
    input0=Input("input0", "TENSOR_FLOAT32", "{1, 3, 3, 1}"),
    output_width=Int32Scalar("output_width", 2),
    output_height=Int32Scalar("output_height", 2),
    layout=BoolScalar("layout", False),
    align_corners=BoolScalar("align_corners", True),
    half_pixel_centers=BoolScalar("half_pixel_centers", False),
    output0=Output("output0", "TENSOR_FLOAT32", "{1, 2, 2, 1}"),
    input0_data=[1, 2, 3, 4, 5, 6, 7, 8, 9],
    output_data=[1, 3, 7, 9],
)

test(
    name="align_corners_4x4_to_3x3",
    input0=Input("input0", "TENSOR_FLOAT32", "{1, 4, 4, 1}"),
    output_width=Int32Scalar("output_width", 3),
    output_height=Int32Scalar("output_height", 3),
    layout=BoolScalar("layout", False),
    align_corners=BoolScalar("align_corners", True),
    half_pixel_centers=BoolScalar("half_pixel_centers", False),
    output0=Output("output0", "TENSOR_FLOAT32", "{1, 3, 3, 1}"),
    input0_data=[1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16],
    output_data=[1,  3,  4, 9, 11, 12, 13, 15, 16],
)

test(
    name="align_corners_2x2_to_1x1",
    input0=Input("input0", "TENSOR_FLOAT32", "{1, 2, 2, 1}"),
    output_width=Int32Scalar("output_width", 1),
    output_height=Int32Scalar("output_height", 1),
    layout=BoolScalar("layout", False),
    align_corners=BoolScalar("align_corners", True),
    half_pixel_centers=BoolScalar("half_pixel_centers", False),
    output0=Output("output0", "TENSOR_FLOAT32", "{1, 1, 1, 1}"),
    input0_data=[1, 2, 3, 4],
    output_data=[1],
)
