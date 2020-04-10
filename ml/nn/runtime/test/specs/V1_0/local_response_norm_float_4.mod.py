model = Model()
i1 = Input("input", "TENSOR_FLOAT32", "{1, 1, 1, 6}")
radius = Int32Scalar("radius", 2)
bias = Float32Scalar("bias", 9.)
alpha = Float32Scalar("alpha", 4.)
beta = Float32Scalar("beta", .5)
output = Output("output", "TENSOR_FLOAT32", "{1, 1, 1, 6}")

model = model.Operation("LOCAL_RESPONSE_NORMALIZATION", i1, radius, bias, alpha, beta).To(output)

# Example 1. Input in operand 0,
input0 = {i1: # input 0
          [-1.1, .6, .7, 1.2, -.7, .1]}

output0 = {output: # output 0
           [-.26492569, .12510864, .14011213, .26726127, -.16178755, .0244266]}

# Instantiate an example
Example((input0, output0))
