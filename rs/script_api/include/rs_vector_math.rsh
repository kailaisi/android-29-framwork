/*
 * Copyright (C) 2016 The Android Open Source Project
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

// Don't edit this file!  It is auto-generated by frameworks/rs/api/generate.sh.

/*
 * rs_vector_math.rsh: Vector Math Functions
 *
 * These functions interpret the input arguments as representation of vectors in
 * n-dimensional space.
 *
 * The precision of the mathematical operations on 32 bit floats is affected by the pragmas
 * rs_fp_relaxed and rs_fp_full.  See Mathematical Constants and Functions for details.
 *
 * Different precision/speed tradeoffs can be achieved by using variants of the common math
 * functions.  Functions with a name starting with
 * - native_: May have custom hardware implementations with weaker precision.  Additionally,
 *   subnormal values may be flushed to zero, rounding towards zero may be used, and NaN and
 *   infinity input may not be handled correctly.
 * - fast_: May perform internal computations using 16 bit floats.  Additionally, subnormal
 *   values may be flushed to zero, and rounding towards zero may be used.
 *
 */

#ifndef RENDERSCRIPT_RS_VECTOR_MATH_RSH
#define RENDERSCRIPT_RS_VECTOR_MATH_RSH

/*
 * cross: Cross product of two vectors
 *
 * Computes the cross product of two vectors.
 */
extern float3 __attribute__((const, overloadable))
    cross(float3 left_vector, float3 right_vector);

extern float4 __attribute__((const, overloadable))
    cross(float4 left_vector, float4 right_vector);

#if (defined(RS_VERSION) && (RS_VERSION >= 24))
extern half3 __attribute__((const, overloadable))
    cross(half3 left_vector, half3 right_vector);
#endif

#if (defined(RS_VERSION) && (RS_VERSION >= 24))
extern half4 __attribute__((const, overloadable))
    cross(half4 left_vector, half4 right_vector);
#endif

/*
 * distance: Distance between two points
 *
 * Compute the distance between two points.
 *
 * See also fast_distance(), native_distance().
 */
extern float __attribute__((const, overloadable))
    distance(float left_vector, float right_vector);

extern float __attribute__((const, overloadable))
    distance(float2 left_vector, float2 right_vector);

extern float __attribute__((const, overloadable))
    distance(float3 left_vector, float3 right_vector);

extern float __attribute__((const, overloadable))
    distance(float4 left_vector, float4 right_vector);

#if (defined(RS_VERSION) && (RS_VERSION >= 24))
extern half __attribute__((const, overloadable))
    distance(half left_vector, half right_vector);
#endif

#if (defined(RS_VERSION) && (RS_VERSION >= 24))
extern half __attribute__((const, overloadable))
    distance(half2 left_vector, half2 right_vector);
#endif

#if (defined(RS_VERSION) && (RS_VERSION >= 24))
extern half __attribute__((const, overloadable))
    distance(half3 left_vector, half3 right_vector);
#endif

#if (defined(RS_VERSION) && (RS_VERSION >= 24))
extern half __attribute__((const, overloadable))
    distance(half4 left_vector, half4 right_vector);
#endif

/*
 * dot: Dot product of two vectors
 *
 * Computes the dot product of two vectors.
 */
extern float __attribute__((const, overloadable))
    dot(float left_vector, float right_vector);

extern float __attribute__((const, overloadable))
    dot(float2 left_vector, float2 right_vector);

extern float __attribute__((const, overloadable))
    dot(float3 left_vector, float3 right_vector);

extern float __attribute__((const, overloadable))
    dot(float4 left_vector, float4 right_vector);

#if (defined(RS_VERSION) && (RS_VERSION >= 24))
extern half __attribute__((const, overloadable))
    dot(half left_vector, half right_vector);
#endif

#if (defined(RS_VERSION) && (RS_VERSION >= 24))
extern half __attribute__((const, overloadable))
    dot(half2 left_vector, half2 right_vector);
#endif

#if (defined(RS_VERSION) && (RS_VERSION >= 24))
extern half __attribute__((const, overloadable))
    dot(half3 left_vector, half3 right_vector);
#endif

#if (defined(RS_VERSION) && (RS_VERSION >= 24))
extern half __attribute__((const, overloadable))
    dot(half4 left_vector, half4 right_vector);
#endif

/*
 * fast_distance: Approximate distance between two points
 *
 * Computes the approximate distance between two points.
 *
 * The precision is what would be expected from doing the computation using 16 bit floating
 * point values.
 *
 * See also distance(), native_distance().
 */
#if (defined(RS_VERSION) && (RS_VERSION >= 17))
extern float __attribute__((const, overloadable))
    fast_distance(float left_vector, float right_vector);
#endif

#if (defined(RS_VERSION) && (RS_VERSION >= 17))
extern float __attribute__((const, overloadable))
    fast_distance(float2 left_vector, float2 right_vector);
#endif

#if (defined(RS_VERSION) && (RS_VERSION >= 17))
extern float __attribute__((const, overloadable))
    fast_distance(float3 left_vector, float3 right_vector);
#endif

#if (defined(RS_VERSION) && (RS_VERSION >= 17))
extern float __attribute__((const, overloadable))
    fast_distance(float4 left_vector, float4 right_vector);
#endif

/*
 * fast_length: Approximate length of a vector
 *
 * Computes the approximate length of a vector.
 *
 * The precision is what would be expected from doing the computation using 16 bit floating
 * point values.
 *
 * See also length(), native_length().
 */
#if (defined(RS_VERSION) && (RS_VERSION >= 17))
extern float __attribute__((const, overloadable))
    fast_length(float v);
#endif

#if (defined(RS_VERSION) && (RS_VERSION >= 17))
extern float __attribute__((const, overloadable))
    fast_length(float2 v);
#endif

#if (defined(RS_VERSION) && (RS_VERSION >= 17))
extern float __attribute__((const, overloadable))
    fast_length(float3 v);
#endif

#if (defined(RS_VERSION) && (RS_VERSION >= 17))
extern float __attribute__((const, overloadable))
    fast_length(float4 v);
#endif

/*
 * fast_normalize: Approximate normalized vector
 *
 * Approximately normalizes a vector.
 *
 * For vectors of size 1, returns -1.f for negative values, 0.f for null values, and 1.f for
 * positive values.
 *
 * The precision is what would be expected from doing the computation using 16 bit floating
 * point values.
 *
 * See also normalize(), native_normalize().
 */
#if (defined(RS_VERSION) && (RS_VERSION >= 17))
extern float __attribute__((const, overloadable))
    fast_normalize(float v);
#endif

#if (defined(RS_VERSION) && (RS_VERSION >= 17))
extern float2 __attribute__((const, overloadable))
    fast_normalize(float2 v);
#endif

#if (defined(RS_VERSION) && (RS_VERSION >= 17))
extern float3 __attribute__((const, overloadable))
    fast_normalize(float3 v);
#endif

#if (defined(RS_VERSION) && (RS_VERSION >= 17))
extern float4 __attribute__((const, overloadable))
    fast_normalize(float4 v);
#endif

/*
 * length: Length of a vector
 *
 * Computes the length of a vector.
 *
 * See also fast_length(), native_length().
 */
extern float __attribute__((const, overloadable))
    length(float v);

extern float __attribute__((const, overloadable))
    length(float2 v);

extern float __attribute__((const, overloadable))
    length(float3 v);

extern float __attribute__((const, overloadable))
    length(float4 v);

#if (defined(RS_VERSION) && (RS_VERSION >= 24))
extern half __attribute__((const, overloadable))
    length(half v);
#endif

#if (defined(RS_VERSION) && (RS_VERSION >= 24))
extern half __attribute__((const, overloadable))
    length(half2 v);
#endif

#if (defined(RS_VERSION) && (RS_VERSION >= 24))
extern half __attribute__((const, overloadable))
    length(half3 v);
#endif

#if (defined(RS_VERSION) && (RS_VERSION >= 24))
extern half __attribute__((const, overloadable))
    length(half4 v);
#endif

/*
 * native_distance: Approximate distance between two points
 *
 * Computes the approximate distance between two points.
 *
 * See also distance(), fast_distance().
 */
#if (defined(RS_VERSION) && (RS_VERSION >= 21))
extern float __attribute__((const, overloadable))
    native_distance(float left_vector, float right_vector);
#endif

#if (defined(RS_VERSION) && (RS_VERSION >= 21))
extern float __attribute__((const, overloadable))
    native_distance(float2 left_vector, float2 right_vector);
#endif

#if (defined(RS_VERSION) && (RS_VERSION >= 21))
extern float __attribute__((const, overloadable))
    native_distance(float3 left_vector, float3 right_vector);
#endif

#if (defined(RS_VERSION) && (RS_VERSION >= 21))
extern float __attribute__((const, overloadable))
    native_distance(float4 left_vector, float4 right_vector);
#endif

#if (defined(RS_VERSION) && (RS_VERSION >= 24))
extern half __attribute__((const, overloadable))
    native_distance(half left_vector, half right_vector);
#endif

#if (defined(RS_VERSION) && (RS_VERSION >= 24))
extern half __attribute__((const, overloadable))
    native_distance(half2 left_vector, half2 right_vector);
#endif

#if (defined(RS_VERSION) && (RS_VERSION >= 24))
extern half __attribute__((const, overloadable))
    native_distance(half3 left_vector, half3 right_vector);
#endif

#if (defined(RS_VERSION) && (RS_VERSION >= 24))
extern half __attribute__((const, overloadable))
    native_distance(half4 left_vector, half4 right_vector);
#endif

/*
 * native_length: Approximate length of a vector
 *
 * Compute the approximate length of a vector.
 *
 * See also length(), fast_length().
 */
#if (defined(RS_VERSION) && (RS_VERSION >= 21))
extern float __attribute__((const, overloadable))
    native_length(float v);
#endif

#if (defined(RS_VERSION) && (RS_VERSION >= 21))
extern float __attribute__((const, overloadable))
    native_length(float2 v);
#endif

#if (defined(RS_VERSION) && (RS_VERSION >= 21))
extern float __attribute__((const, overloadable))
    native_length(float3 v);
#endif

#if (defined(RS_VERSION) && (RS_VERSION >= 21))
extern float __attribute__((const, overloadable))
    native_length(float4 v);
#endif

#if (defined(RS_VERSION) && (RS_VERSION >= 24))
extern half __attribute__((const, overloadable))
    native_length(half v);
#endif

#if (defined(RS_VERSION) && (RS_VERSION >= 24))
extern half __attribute__((const, overloadable))
    native_length(half2 v);
#endif

#if (defined(RS_VERSION) && (RS_VERSION >= 24))
extern half __attribute__((const, overloadable))
    native_length(half3 v);
#endif

#if (defined(RS_VERSION) && (RS_VERSION >= 24))
extern half __attribute__((const, overloadable))
    native_length(half4 v);
#endif

/*
 * native_normalize: Approximately normalize a vector
 *
 * Approximately normalizes a vector.
 *
 * See also normalize(), fast_normalize().
 */
#if (defined(RS_VERSION) && (RS_VERSION >= 21))
extern float __attribute__((const, overloadable))
    native_normalize(float v);
#endif

#if (defined(RS_VERSION) && (RS_VERSION >= 21))
extern float2 __attribute__((const, overloadable))
    native_normalize(float2 v);
#endif

#if (defined(RS_VERSION) && (RS_VERSION >= 21))
extern float3 __attribute__((const, overloadable))
    native_normalize(float3 v);
#endif

#if (defined(RS_VERSION) && (RS_VERSION >= 21))
extern float4 __attribute__((const, overloadable))
    native_normalize(float4 v);
#endif

#if (defined(RS_VERSION) && (RS_VERSION >= 24))
extern half __attribute__((const, overloadable))
    native_normalize(half v);
#endif

#if (defined(RS_VERSION) && (RS_VERSION >= 24))
extern half2 __attribute__((const, overloadable))
    native_normalize(half2 v);
#endif

#if (defined(RS_VERSION) && (RS_VERSION >= 24))
extern half3 __attribute__((const, overloadable))
    native_normalize(half3 v);
#endif

#if (defined(RS_VERSION) && (RS_VERSION >= 24))
extern half4 __attribute__((const, overloadable))
    native_normalize(half4 v);
#endif

/*
 * normalize: Normalize a vector
 *
 * Normalize a vector.
 *
 * For vectors of size 1, returns -1.f for negative values, 0.f for null values, and 1.f for
 * positive values.
 *
 * See also fast_normalize(), native_normalize().
 */
extern float __attribute__((const, overloadable))
    normalize(float v);

extern float2 __attribute__((const, overloadable))
    normalize(float2 v);

extern float3 __attribute__((const, overloadable))
    normalize(float3 v);

extern float4 __attribute__((const, overloadable))
    normalize(float4 v);

#if (defined(RS_VERSION) && (RS_VERSION >= 24))
extern half __attribute__((const, overloadable))
    normalize(half v);
#endif

#if (defined(RS_VERSION) && (RS_VERSION >= 24))
extern half2 __attribute__((const, overloadable))
    normalize(half2 v);
#endif

#if (defined(RS_VERSION) && (RS_VERSION >= 24))
extern half3 __attribute__((const, overloadable))
    normalize(half3 v);
#endif

#if (defined(RS_VERSION) && (RS_VERSION >= 24))
extern half4 __attribute__((const, overloadable))
    normalize(half4 v);
#endif

#endif // RENDERSCRIPT_RS_VECTOR_MATH_RSH
