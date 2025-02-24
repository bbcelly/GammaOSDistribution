#ifndef HIDL_GENERATED_ANDROID_HARDWARE_NEURALNETWORKS_V1_2_TYPES_H
#define HIDL_GENERATED_ANDROID_HARDWARE_NEURALNETWORKS_V1_2_TYPES_H

#include <android/hardware/neuralnetworks/1.0/types.h>
#include <android/hardware/neuralnetworks/1.1/types.h>
#include <android/hidl/safe_union/1.0/types.h>

#include <hidl/HidlSupport.h>
#include <hidl/MQDescriptor.h>
#include <utils/NativeHandle.h>
#include <utils/misc.h>

namespace android {
namespace hardware {
namespace neuralnetworks {
namespace V1_2 {

// Forward declaration for forward reference support:
enum class Constant : uint32_t;
enum class OperandType : int32_t;
enum class OperandTypeRange : uint32_t;
enum class OperationType : int32_t;
enum class OperationTypeRange : uint32_t;
enum class DeviceType : int32_t;
struct Capabilities;
struct Operation;
struct SymmPerChannelQuantParams;
struct Operand;
struct Model;
struct OutputShape;
enum class MeasureTiming : int32_t;
struct Timing;
struct FmqRequestDatum;
struct FmqResultDatum;
struct Extension;

enum class Constant : uint32_t {
    /**
     * The byte size of the cache token.
     */
    BYTE_SIZE_OF_CACHE_TOKEN = 32u,
    /**
     * The maximum number of files for each type of cache in compilation caching.
     */
    MAX_NUMBER_OF_CACHE_FILES = 32u,
};

enum class OperandType : int32_t {
    /**
     * A 32 bit floating point scalar value.
     */
    FLOAT32 = 0,
    /**
     * A signed 32 bit integer scalar value.
     */
    INT32 = 1,
    /**
     * An unsigned 32 bit integer scalar value.
     */
    UINT32 = 2,
    /**
     * A tensor of 32 bit floating point values.
     */
    TENSOR_FLOAT32 = 3,
    /**
     * A tensor of 32 bit integer values.
     */
    TENSOR_INT32 = 4,
    /**
     * A tensor of 8 bit unsigned integers that represent real numbers.
     *
     * Attached to this tensor are two numbers that can be used to convert the
     * 8 bit integer to the real value and vice versa. These two numbers are:
     * - scale: a 32 bit floating point value greater than zero.
     * - zeroPoint: a 32 bit integer, in range [0, 255].
     *
     * The formula is:
     *   real_value = (integer_value - zeroPoint) * scale.
     */
    TENSOR_QUANT8_ASYMM = 5,
    /**
     * DEPRECATED. Since HAL version 1.2, extensions are the preferred
     * alternative to OEM operation and data types.
     *
     * OEM specific scalar value.
     */
    OEM = 10000,
    /**
     * DEPRECATED. Since HAL version 1.2, extensions are the preferred
     * alternative to OEM operation and data types.
     *
     * A tensor of OEM specific values.
     */
    TENSOR_OEM_BYTE = 10001,
    /**
     * An 8 bit boolean scalar value.
     *
     * Values of this operand type are either true or false. A zero value
     * represents false; any other value represents true.
     */
    BOOL = 6,
    /**
     * A tensor of 16 bit signed integers that represent real numbers.
     *
     * Attached to this tensor is a number representing real value scale that is
     * used to convert the 16 bit number to a real value in the following way:
     * realValue = integerValue * scale.
     *
     * scale is a 32 bit floating point with value greater than zero.
     */
    TENSOR_QUANT16_SYMM = 7,
    /**
     * A tensor of IEEE 754 16 bit floating point values.
     */
    TENSOR_FLOAT16 = 8,
    /**
     * A tensor of 8 bit boolean values.
     *
     * Values of this operand type are either true or false. A zero value
     * represents false; any other value represents true.
     */
    TENSOR_BOOL8 = 9,
    /**
     * An IEEE 754 16 bit floating point scalar value.
     */
    FLOAT16 = 10,
    /**
     * A tensor of 8 bit signed integers that represent real numbers.
     *
     * This tensor is associated with additional fields that can
     * be used to convert the 8 bit signed integer to the real value and vice versa.
     * These fields are:
     * - channelDim: a 32 bit unsigned integer indicating channel dimension.
     * - scales: an array of positive 32 bit floating point values.
     * The size of the scales array must be equal to dimensions[channelDim].
     *
     * {@link SymmPerChannelQuantParams} must hold the parameters for an Operand of this type.
     * The channel dimension of this tensor must not be unknown (dimensions[channelDim] != 0).
     *
     * The formula is:
     * realValue[..., C, ...] =
     *     integerValue[..., C, ...] * scales[C]
     * where C is an index in the Channel dimension.
     */
    TENSOR_QUANT8_SYMM_PER_CHANNEL = 11,
    /**
     * A tensor of 16 bit unsigned integers that represent real numbers.
     *
     * Attached to this tensor are two numbers that can be used to convert the
     * 16 bit integer to the real value and vice versa. These two numbers are:
     * - scale: a 32 bit floating point value greater than zero.
     * - zeroPoint: a 32 bit integer, in range [0, 65535].
     *
     * The formula is:
     * real_value = (integer_value - zeroPoint) * scale.
     */
    TENSOR_QUANT16_ASYMM = 12,
    /**
     * A tensor of 8 bit signed integers that represent real numbers.
     *
     * Attached to this tensor is a number representing real value scale that is
     * used to convert the 8 bit number to a real value in the following way:
     * realValue = integerValue * scale.
     *
     * scale is a 32 bit floating point with value greater than zero.
     */
    TENSOR_QUANT8_SYMM = 13,
};

/**
 * The range of operand values in the OperandType enum.
 */
enum class OperandTypeRange : uint32_t {
    BASE_MIN = 0u,
    FUNDAMENTAL_MIN = 0u,
    FUNDAMENTAL_MAX = 13u,
    OEM_MIN = 10000u,
    OEM_MAX = 10001u,
    BASE_MAX = 65535u /* 0xFFFF */,
};

/**
 * Operation types.
 *
 * The type of an operation in a model.
 */
enum class OperationType : int32_t {
    /**
     * Adds two tensors, element-wise.
     *
     * Takes two input tensors of identical {@link OperandType} and compatible
     * dimensions. The output is the sum of both input tensors, optionally
     * modified by an activation function.
     *
     * Two dimensions are compatible when:
     *     1. they are equal, or
     *     2. one of them is 1
     *
     * The size of the output is the maximum size along each dimension of the
     * input operands. It starts with the trailing dimensions, and works its
     * way forward.
     *
     * Example:
     *
     *     input1.dimension = {4, 1, 2}
     *     input2.dimension = {5, 4, 3, 1}
     *     output.dimension = {5, 4, 3, 2}
     *
     * Since HAL version 1.2, generic zero-sized input tensor is supported. Zero
     * dimension is only compatible with 0 or 1. The size of the output
     * dimension is zero if either of corresponding input dimension is zero.
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_FLOAT16} (since HAL version 1.2)
     * * {@link OperandType::TENSOR_FLOAT32}
     * * {@link OperandType::TENSOR_QUANT8_ASYMM}
     *
     * Supported tensor rank: up to 4
     *
     * Inputs:
     * * 0: A tensor.
     * * 1: A tensor of the same {@link OperandType}, and compatible dimensions
     *      as input0.
     *      For a {@link OperandType::TENSOR_QUANT8_ASYMM} tensor,
     *      the scales and zeroPoint can be different from input0 scale and zeroPoint.
     * * 2: An {@link OperandType::INT32} scalar, and has to be one of the
     *      {@link FusedActivationFunc} values. Specifies the activation to
     *      invoke on the result.
     *
     * Outputs:
     * * 0: The sum, a tensor of the same {@link OperandType} as input0.
     *      For a {@link OperandType::TENSOR_QUANT8_ASYMM} tensor,
     *      the scale and zeroPoint can be different from inputs' scale and zeroPoint.
     */
    ADD = 0 /* @1.1::OperationType:ADD */,
    /**
     * Performs a 2-D average pooling operation.
     *
     * The output dimensions are functions of the filter dimensions, stride, and
     * padding.
     *
     * The values in the output tensor are computed as:
     *
     *     output[b, i, j, channel] =
     *         sum_{di, dj}(
     *             input[b, strides[1] * i + di, strides[2] * j + dj, channel]
     *         ) / sum(1)
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_FLOAT16} (since HAL version 1.2)
     * * {@link OperandType::TENSOR_FLOAT32}
     * * {@link OperandType::TENSOR_QUANT8_ASYMM}
     *
     * Supported tensor rank: 4, with "NHWC" or "NCHW" data layout.
     * With the default data layout NHWC, the data is stored in the order of:
     * [batch, height, width, channels]. Alternatively, the data layout could
     * be NCHW, the data storage order of: [batch, channels, height, width].
     * NCHW is supported since HAL version 1.2.
     *
     * Both explicit padding and implicit padding are supported.
     *
     * Inputs (explicit padding):
     * * 0: A 4-D tensor, of shape [batches, height, width, depth], specifying
     *      the input.
     *      Since HAL version 1.2, zero batches is supported for this tensor.
     * * 1: An {@link OperandType::INT32} scalar, specifying the padding on
     *      the left, in the ‘width’ dimension.
     * * 2: An {@link OperandType::INT32} scalar, specifying the padding on
     *      the right, in the ‘width’ dimension.
     * * 3: An {@link OperandType::INT32} scalar, specifying the padding on
     *      the top, in the ‘height’ dimension.
     * * 4: An {@link OperandType::INT32} scalar, specifying the padding on
     *      the bottom, in the ‘height’ dimension.
     * * 5: An {@link OperandType::INT32} scalar, specifying the stride when
     *      walking through input in the ‘width’ dimension.
     * * 6: An {@link OperandType::INT32} scalar, specifying the stride when
     *      walking through input in the ‘height’ dimension.
     * * 7: An {@link OperandType::INT32} scalar, specifying the filter
     *      width.
     * * 8: An {@link OperandType::INT32} scalar, specifying the filter
     *      height.
     * * 9: An {@link OperandType::INT32} scalar, and has to be one of the
     *      {@link FusedActivationFunc} values. Specifies the activation to
     *      invoke on the result.
     * * 10: An optional {@link OperandType::BOOL} scalar, default to false.
     *       Set to true to specify NCHW data layout for input0 and output0.
     *       Available since HAL version 1.2.
     *
     * Inputs (implicit padding):
     * * 0: A 4-D tensor, of shape [batches, height, width, depth], specifying
     *      the input.
     *      Since HAL version 1.2, zero batches is supported for this tensor.
     * * 1: An {@link OperandType::INT32} scalar, specifying the implicit
     *      padding scheme, has to be one of the
     *      following values: {0 (NONE), 1 (SAME), 2 (VALID)}.
     * * 2: An {@link OperandType::INT32} scalar, specifying the stride when
     *      walking through input in the ‘width’ dimension.
     * * 3: An {@link OperandType::INT32} scalar, specifying the stride when
     *      walking through input in the ‘height’ dimension.
     * * 4: An {@link OperandType::INT32} scalar, specifying the filter
     *      width.
     * * 5: An {@link OperandType::INT32} scalar, specifying the filter
     *      height.
     * * 6: An {@link OperandType::INT32} scalar, and has to be one of the
     *      {@link FusedActivationFunc} values. Specifies the activation to
     *      invoke on the result.
     * * 7: An optional {@link OperandType::BOOL} scalar, default to false.
     *      Set to true to specify NCHW data layout for input0 and output0.
     *      Available since HAL version 1.2.
     *
     * Outputs:
     * * 0: The output 4-D tensor, of shape
     *      [batches, out_height, out_width, depth].
     *      For a {@link OperandType::TENSOR_QUANT8_ASYMM} tensor,
     *      the scale and zeroPoint must be the same as input0.
     */
    AVERAGE_POOL_2D = 1 /* @1.1::OperationType:AVERAGE_POOL_2D */,
    /**
     * Concatenates the input tensors along the given dimension.
     *
     * The input tensors must have identical {@link OperandType} and the same
     * dimensions except the dimension along the concatenation axis.
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_FLOAT16} (since HAL version 1.2)
     * * {@link OperandType::TENSOR_FLOAT32}
     * * {@link OperandType::TENSOR_QUANT8_ASYMM}
     *   (full support since HAL version 1.2, see the input section)
     *
     * Supported tensor rank: up to 4
     *
     * Inputs:
     * * 0 ~ n-1: The list of n input tensors, of shape
     *            [D0, D1, ..., Daxis(i), ..., Dm].
     *            Before HAL version 1.2, all input tensors of
     *            {@link OperandType::TENSOR_QUANT8_ASYMM}
     *            must have the same scale and zeroPoint as the output tensor.
     *            Since HAL version 1.2, zero-sized tensors are supported.
     * * n: An {@link OperandType::INT32} scalar, specifying the
     *      concatenation axis.
     *
     * Outputs:
     * * 0: The output, a tensor of the same {@link OperandType} as the input
     *      tensors. The output shape is [D0, D1, ..., sum(Daxis(i)), ..., Dm].
     *      Since HAL version 1.2, for a {@link OperandType::TENSOR_QUANT8_ASYMM} tensor,
     *      the scale and zeroPoint values can be different from
     *      input tensors. Before HAL version 1.2 they have to be the same as for the
     *      input tensors.
     */
    CONCATENATION = 2 /* @1.1::OperationType:CONCATENATION */,
    /**
     * Performs a 2-D convolution operation.
     *
     * The CONV_2D op sweeps a 2-D filter that can mix channels together over a
     * batch of images, applying the filter to each window of each image of the
     * appropriate size.
     *
     * The output dimensions are functions of the filter dimensions, stride, and
     * padding.
     *
     * The values in the output tensor are computed as:
     *
     *     output[b, i, j, channel] =
     *         sum_{di, dj, k} (
     *             input[b, strides[1] * i + di, strides[2] * j + dj, k] *
     *             filter[channel, di, dj, k]
     *         ) + bias[channel]
     *
     * Supported tensor {@link OperandType} configurations:
     * * 32 bit floating point:
     * * * {@link OperandType::TENSOR_FLOAT32} for input, filter, output, and bias.
     *
     * * Quantized:
     * * * {@link OperandType::TENSOR_QUANT8_ASYMM} for input, filter, and output.
     * * * {@link OperandType::TENSOR_INT32} for bias (with scale set to
     * * * input.scale * filter.scale).
     *
     * Available since HAL version 1.2:
     * * 16 bit floating point:
     * * * {@link OperandType::TENSOR_FLOAT16} for input, filter, output, and bias.
     *
     * * Quantized with symmetric per channel quantization for the filter:
     * * * {@link OperandType::TENSOR_QUANT8_ASYMM} for input, and output.
     * * * {@link OperandType::TENSOR_QUANT8_SYMM_PER_CHANNEL} for filter.
     * * * {@link OperandType::TENSOR_INT32} for bias (scale set to 0.0,
     * * * each value scaling is separate and equal to input.scale * filter.scales[channel]).
     *
     * Supported tensor rank: 4, with "NHWC" or "NCHW" data layout.
     * With the default data layout NHWC, the data is stored in the order of:
     * [batch, height, width, channels]. Alternatively, the data layout could
     * be NCHW, the data storage order of: [batch, channels, height, width].
     * NCHW is supported since HAL version 1.2.
     *
     * Both explicit padding and implicit padding are supported.
     *
     * Inputs (explicit padding):
     * * 0: A 4-D tensor, of shape [batches, height, width, depth_in],
     *      specifying the input.
     *      Since HAL version 1.2, zero batches is supported for this tensor.
     * * 1: A 4-D tensor, of shape
     *      [depth_out, filter_height, filter_width, depth_in], specifying the
     *      filter.
     *      For tensor of type {@link OperandType::TENSOR_QUANT8_SYMM_PER_CHANNEL}
     *      the channel dimension (SymmPerChannelQuantParams::channelDim)
     *      must be set to 0.
     * * 2: A 1-D tensor, of shape [depth_out], specifying the bias. For input
     *      tensor of type {@link OperandType::TENSOR_FLOAT32}
     *      or {@link OperandType::TENSOR_FLOAT16} the bias must be of the same type.
     *      For filter tensor of {@link OperandType::TENSOR_QUANT8_ASYMM},
     *      the bias should be of {@link OperandType::TENSOR_INT32}, with zeroPoint
     *      of 0 and bias_scale == input_scale * filter_scale.
     *      For filter tensor of {@link OperandType::TENSOR_QUANT8_SYMM_PER_CHANNEL},
     *      the bias should be of {@link OperandType::TENSOR_INT32}, with zeroPoint of 0
     *      and bias_scale of 0. The actual scale of each value 'i' is equal to
     *      bias_scale[i] = input_scale * filter_scale[i].
     * * 3: An {@link OperandType::INT32} scalar, specifying the padding on
     *      the left, in the ‘width’ dimension.
     * * 4: An {@link OperandType::INT32} scalar, specifying the padding on
     *      the right, in the ‘width’ dimension.
     * * 5: An {@link OperandType::INT32} scalar, specifying the padding on
     *      the top, in the ‘height’ dimension.
     * * 6: An {@link OperandType::INT32} scalar, specifying the padding on
     *      the bottom, in the ‘height’ dimension.
     * * 7: An {@link OperandType::INT32} scalar, specifying the stride when
     *      walking through input in the ‘width’ dimension.
     * * 8: An {@link OperandType::INT32} scalar, specifying the stride when
     *      walking through input in the ‘height’ dimension.
     * * 9: An {@link OperandType::INT32} scalar, and has to be one of the
     *      {@link FusedActivationFunc} values. Specifies the activation to
     *      invoke on the result.
     * * 10: An optional {@link OperandType::BOOL} scalar, default to false.
     *      Set to true to specify NCHW data layout for input0 and output0.
     *      Available since HAL version 1.2.
     * * 11: An optional {@link OperandType::INT32} scalar, specifying the dilation
     *      factor for width. Defaults to 1. If set to k > 1, there will be k-1 skipped
     *      cells between each filter element on width dimension. If this input is set,
     *      input 12 (dilation factor for height) must be specified as well.
     *      Available since HAL version 1.2.
     * * 12: An optional {@link OperandType::INT32} scalar, specifying the dilation
     *      factor for height. Defaults to 1. If set to k > 1, there will be k-1 skipped
     *      cells between each filter element on height dimension. If this input is set,
     *      input 11 (dilation factor for width) must be specified as well.
     *      Available since HAL version 1.2.
     *
     * Inputs (implicit padding):
     * * 0: A 4-D tensor, of shape [batches, height, width, depth_in],
     *      specifying the input.
     *      Since HAL version 1.2, zero batches is supported for this tensor.
     * * 1: A 4-D tensor, of shape
     *      [depth_out, filter_height, filter_width, depth_in], specifying the
     *      filter.
     *      For tensor of type {@link OperandType::TENSOR_QUANT8_SYMM_PER_CHANNEL}
     *      the channel dimension (SymmPerChannelQuantParams::channelDim)
     *      must be set to 0.
     * * 2: A 1-D tensor, of shape [depth_out], specifying the bias. For input
     *      tensor of type {@link OperandType::TENSOR_FLOAT32}
     *      or {@link OperandType::TENSOR_FLOAT16} the bias must be of the same
     *      type.
     *      For filter tensor of {@link OperandType::TENSOR_QUANT8_ASYMM},
     *      the bias should be of {@link OperandType::TENSOR_INT32}, with zeroPoint
     *      of 0 and bias_scale == input_scale * filter_scale.
     *      For filter tensor of {@link OperandType::TENSOR_QUANT8_SYMM_PER_CHANNEL},
     *      the bias should be of {@link OperandType::TENSOR_INT32}, with zeroPoint of 0
     *      and bias_scale of 0. The actual scale of each value 'i' is equal to
     *      bias_scale[i] = input_scale * filter_scale[i].
     * * 3: An {@link OperandType::INT32} scalar, specifying the implicit
     *      padding scheme, has to be one of the
     *      following values: {0 (NONE), 1 (SAME), 2 (VALID)}.
     * * 4: An {@link OperandType::INT32} scalar, specifying the stride when
     *      walking through input in the ‘width’ dimension.
     * * 5: An {@link OperandType::INT32} scalar, specifying the stride when
     *      walking through input in the ‘height’ dimension.
     * * 6: An {@link OperandType::INT32} scalar, and has to be one of the
     *      {@link FusedActivationFunc} values. Specifies the activation to
     *      invoke on the result.
     * * 7: An optional {@link OperandType::BOOL} scalar, default to false.
     *      Set to true to specify NCHW data layout for input0 and output0.
     *      Available since HAL version 1.2.
     * * 8: An optional {@link OperandType::INT32} scalar, specifying the dilation
     *      factor for width. Defaults to 1. If set to k > 1, there will be k-1 skipped
     *      cells between each filter element on width dimension. If this input is set,
     *      input 9 (dilation factor for height) must be specified as well.
     *      Available since HAL version 1.2.
     * * 9: An optional {@link OperandType::INT32} scalar, specifying the dilation
     *      factor for height. Defaults to 1. If set to k > 1, there will be k-1 skipped
     *      cells between each filter element on height dimension. If this input is set,
     *      input 8 (dilation factor for width) must be specified as well.
     *      Available since HAL version 1.2.
     *
     * Outputs:
     * * 0: The output 4-D tensor, of shape
     *      [batches, out_height, out_width, depth_out].
     *      Before HAL version 1.2, for output tensor of
     *      {@link OperandType::TENSOR_QUANT8_ASYMM}, the following condition must
     *      be satisfied: output_scale > input_scale * filter_scale
     */
    CONV_2D = 3 /* @1.1::OperationType:CONV_2D */,
    /**
     * Performs a depthwise 2-D convolution operation.
     *
     * Given an input tensor of shape [batches, height, width, depth_in] and a
     * filter tensor of shape [1, filter_height, filter_width, depth_out]
     * containing depth_out convolutional filters of depth 1, DEPTHWISE_CONV
     * applies a different filter to each input channel (expanding from 1
     * channel to channel_multiplier channels for each), then concatenates the
     * results together.
     *
     * The output has depth_out = depth_in * depth_multiplier channels.
     * The output dimensions are functions of the filter dimensions, stride, and
     * padding.
     *
     * The values in the output tensor are computed as:
     *
     *     output[b, i, j, k * channel_multiplier + q] =
     *         sum_{di, dj} (
     *             input[b, strides[1] * i + di, strides[2] * j + dj, k] *
     *             filter[1, di, dj, k * channel_multiplier + q]
     *         ) + bias[k * channel_multiplier + q]
     *
     * Supported tensor {@link OperandType} configurations:
     * * 32 bit floating point:
     * * * {@link OperandType::TENSOR_FLOAT32} for input, filter, output, and bias.
     *
     * * Quantized:
     * * * {@link OperandType::TENSOR_QUANT8_ASYMM} for input, filter, and output.
     * * * {@link OperandType::TENSOR_INT32} for bias (with scale set to
     * * * input.scale * filter.scale).
     *
     * Available since HAL version 1.2:
     * * 16 bit floating point:
     * * * {@link OperandType::TENSOR_FLOAT16} for input, filter, output, and bias.
     *
     * * Quantized with symmetric per channel quantization for the filter:
     * * * {@link OperandType::TENSOR_QUANT8_ASYMM} for input, and output.
     * * * {@link OperandType::TENSOR_QUANT8_SYMM_PER_CHANNEL} for filter.
     * * * {@link OperandType::TENSOR_INT32} for bias (scale set to 0.0,
     * * * each value scaling is separate and equal to input.scale * filter.scales[channel]).
     *
     * Supported tensor rank: 4, with "NHWC" or "NCHW" data layout.
     * With the default data layout NHWC, the data is stored in the order of:
     * [batch, height, width, channels]. Alternatively, the data layout could
     * be NCHW, the data storage order of: [batch, channels, height, width].
     * NCHW is supported since HAL version 1.2.
     *
     * Both explicit padding and implicit padding are supported.
     *
     * Inputs (explicit padding):
     * * 0: A 4-D tensor, of shape [batches, height, width, depth_in],
     *      specifying the input.
     * * 1: A 4-D tensor, of shape [1, filter_height, filter_width, depth_out],
     *      specifying the filter.
     *      For tensor of type {@link OperandType::TENSOR_QUANT8_SYMM_PER_CHANNEL}
     *      the channel dimension (SymmPerChannelQuantParams::channelDim)
     *      must be set to 3.
     * * 2: A 1-D tensor, of shape [depth_out], specifying the bias. For input
     *      tensor of type {@link OperandType::TENSOR_FLOAT32}
     *      or {@link OperandType::TENSOR_FLOAT16} the bias must be of the same type.
     *      For filter tensor of {@link OperandType::TENSOR_QUANT8_ASYMM},
     *      the bias should be of {@link OperandType::TENSOR_INT32}, with zeroPoint
     *      of 0 and bias_scale == input_scale * filter_scale.
     *      For filter tensor of {@link OperandType::TENSOR_QUANT8_SYMM_PER_CHANNEL},
     *      the bias should be of {@link OperandType::TENSOR_INT32}, with zeroPoint of 0
     *      and bias_scale of 0. The actual scale of each value 'i' is equal to
     *      bias_scale[i] = input_scale * filter_scale[i].
     * * 3: An {@link OperandType::INT32} scalar, specifying the padding on
     *      the left, in the ‘width’ dimension.
     * * 4: An {@link OperandType::INT32} scalar, specifying the padding on
     *      the right, in the ‘width’ dimension.
     * * 5: An {@link OperandType::INT32} scalar, specifying the padding on
     *      the top, in the ‘height’ dimension.
     * * 6: An {@link OperandType::INT32} scalar, specifying the padding on
     *      the bottom, in the ‘height’ dimension.
     * * 7: An {@link OperandType::INT32} scalar, specifying the stride when
     *      walking through input in the ‘width’ dimension.
     * * 8: An {@link OperandType::INT32} scalar, specifying the stride when
     *      walking through input in the ‘height’ dimension.
     * * 9: An {@link OperandType::INT32} scalar, specifying the depthwise
     *      multiplier.
     * * 10: An {@link OperandType::INT32} scalar, and has to be one of the
     *       {@link FusedActivationFunc} values. Specifies the activation to
     *       invoke on the result.
     * * 11: An optional {@link OperandType::BOOL} scalar, default to false.
     *       Set to true to specify NCHW data layout for input0 and output0.
     *       Available since HAL version 1.2.
     * * 12: An optional {@link OperandType::INT32} scalar, specifying the dilation
     *      factor for width. Defaults to 1. If set to k > 1, there will be k-1 skipped
     *      cells between each filter element on width dimension. If this input is set,
     *      input 13 (dilation factor for height) must be specified as well.
     *      Available since HAL version 1.2.
     * * 13: An optional {@link OperandType::INT32} scalar, specifying the dilation
     *      factor for height. Defaults to 1. If set to k > 1, there will be k-1 skipped
     *      cells between each filter element on height dimension. If this input is set,
     *      input 12 (dilation factor for width) must be specified as well.
     *      Available since HAL version 1.2.
     *
     * Inputs (implicit padding):
     * * 0: A 4-D tensor, of shape [batches, height, width, depth_in],
     *      specifying the input.
     * * 1: A 4-D tensor, of shape [1, filter_height, filter_width, depth_out],
     *      specifying the filter.
     * * 2: A 1-D tensor, of shape [depth_out], specifying the bias. For input
     *      tensor of type {@link OperandType::TENSOR_FLOAT32}
     *      or {@link OperandType::TENSOR_FLOAT16} the bias must be of the same type.
     *      For filter tensor of {@link OperandType::TENSOR_QUANT8_ASYMM},
     *      the bias should be of {@link OperandType::TENSOR_INT32}, with zeroPoint
     *      of 0 and bias_scale == input_scale * filter_scale.
     *      For filter tensor of {@link OperandType::TENSOR_QUANT8_SYMM_PER_CHANNEL},
     *      the bias should be of {@link OperandType::TENSOR_INT32}, with zeroPoint of 0
     *      and bias_scale of 0. The actual scale of each value 'i' is equal to
     *      bias_scale[i] = input_scale * filter_scale[i].
     * * 3: An {@link OperandType::INT32} scalar, specifying the implicit
     *      padding scheme, has to be one of the
     *      following values: {0 (NONE), 1 (SAME), 2 (VALID)}.
     * * 4: An {@link OperandType::INT32} scalar, specifying the stride when
     *      walking through input in the ‘width’ dimension.
     * * 5: An {@link OperandType::INT32} scalar, specifying the stride when
     *      walking through input in the ‘height’ dimension.
     * * 6: An {@link OperandType::INT32} scalar, specifying the depthwise
     *      multiplier.
     * * 7: An {@link OperandType::INT32} scalar, and has to be one of the
     *      {@link FusedActivationFunc} values. Specifies the activation to
     *      invoke on the result.
     * * 8: An optional {@link OperandType::BOOL} scalar, default to false.
     *      Set to true to specify NCHW data layout for input0 and output0.
     *      Available since HAL version 1.2.
     * * 9: An optional {@link OperandType::INT32} scalar, specifying the dilation
     *      factor for width. Defaults to 1. If set to k > 1, there will be k-1 skipped
     *      cells between each filter element on width dimension. If this input is set,
     *      input 10 (dilation factor for height) must be specified as well.
     *      Available since HAL version 1.2.
     * * 10: An optional {@link OperandType::INT32} scalar, specifying the dilation
     *      factor for height. Defaults to 1. If set to k > 1, there will be k-1 skipped
     *      cells between each filter element on height dimension. If this input is set,
     *      input 9 (dilation factor for width) must be specified as well.
     *      Available since HAL version 1.2.
     *
     * Outputs:
     * * 0: The output 4-D tensor, of shape
     *      [batches, out_height, out_width, depth_out]. Before HAL version 1.2, for
     *      output tensor of {@link OperandType::TENSOR_QUANT8_ASYMM},
     *      the following condition must be satisfied:
     *      output_scale > input_scale * filter_scale
     */
    DEPTHWISE_CONV_2D = 4 /* @1.1::OperationType:DEPTHWISE_CONV_2D */,
    /**
     * Rearranges data from depth into blocks of spatial data.
     *
     * More specifically, this op outputs a copy of the input tensor where
     * values from the depth dimension are moved in spatial blocks to the height
     * and width dimensions. The value block_size indicates the input block size
     * and how the data is moved.
     *
     * Chunks of data of size block_size * block_size from depth are rearranged
     * into non-overlapping blocks of size block_size x block_size.
     *
     * The width of the output tensor is input_depth * block_size, whereas the
     * height is input_height * block_size. The depth of the input tensor must
     * be divisible by block_size * block_size
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_FLOAT16} (since HAL version 1.2)
     * * {@link OperandType::TENSOR_FLOAT32}
     * * {@link OperandType::TENSOR_QUANT8_ASYMM}
     *
     * Supported tensor rank: 4, with "NHWC" or "NCHW" data layout.
     * With the default data layout NHWC, the data is stored in the order of:
     * [batch, height, width, channels]. Alternatively, the data layout could
     * be NCHW, the data storage order of: [batch, channels, height, width].
     * NCHW is supported since HAL version 1.2.
     *
     * Inputs:
     * * 0: A 4-D tensor, of shape [batches, height, width, depth_in],
     *      specifying the input.
     * * 1: An {@link OperandType::INT32} scalar, specifying the block_size.
     *      block_size must be >=1 and block_size * block_size must be a divisor
     *      of the input depth.
     * * 2: An optional {@link OperandType::BOOL} scalar, default to false.
     *      Set to true to specify NCHW data layout for input0 and output0.
     *      Available since HAL version 1.2.
     *
     * Outputs:
     * * 0: The output 4-D tensor, of shape [batch, height*block_size,
     *      width*block_size, depth/(block_size*block_size)].
     *      For a {@link OperandType::TENSOR_QUANT8_ASYMM} tensor,
     *      the scale and zeroPoint must be the same as input0.
     */
    DEPTH_TO_SPACE = 5 /* @1.1::OperationType:DEPTH_TO_SPACE */,
    /**
     * Dequantizes the input tensor.
     *
     * The formula is:
     *
     *     output = (input - zeroPoint) * scale.
     *
     * Supported input tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_QUANT8_ASYMM}
     * * {@link OperandType::TENSOR_QUANT8_SYMM} (since HAL version 1.2)
     * * {@link OperandType::TENSOR_QUANT8_SYMM_PER_CHANNEL} (since HAL version 1.2)
     *
     * Supported output tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_FLOAT16} (since HAL version 1.2)
     * * {@link OperandType::TENSOR_FLOAT32}.
     *
     * Supported tensor rank: up to 4
     *
     * Inputs:
     * * 0: A tensor.
     *      Since HAL version 1.2, this tensor may be zero-sized.
     *
     * Outputs:
     * * 0: A tensor with the same shape as input0.
     */
    DEQUANTIZE = 6 /* @1.1::OperationType:DEQUANTIZE */,
    /**
     * Looks up sub-tensors in the input tensor.
     *
     * This operator takes for input a tensor of values (Values) and
     * a one-dimensional tensor of selection indices (Lookups).
     * The output tensor is the concatenation of sub-tensors of Values as
     * selected by Lookups.
     *
     * Think of Values as being sliced along its first dimension:
     * The entries in Lookups select which slices are concatenated together
     * to create the output tensor.
     *
     * For example, if Values has shape of [40, 200, 300] and
     * Lookups has shape of [3], all three values found in Lookups are
     * expected to be between 0 and 39. The resulting tensor must
     * have shape of [3, 200, 300].
     *
     * If a value in Lookups is out of bounds, the operation must fail
     * and an error must be reported.
     *
     * Supported value tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_FLOAT32}
     * * {@link OperandType::TENSOR_INT32} (since HAL version 1.2)
     * * {@link OperandType::TENSOR_QUANT8_ASYMM} (since HAL version 1.2)
     *
     * Supported value tensor rank: from 2
     *
     * Inputs:
     * * 0: Lookups. A 1-D tensor of {@link OperandType::TENSOR_INT32}.
     *      The values are indices into the first dimension of Values.
     * * 1: Values. An n-D tensor, where n >= 2, from which sub-tensors are
     *      extracted.
     *
     * Output:
     * * 0: A n-D tensor with the same rank and shape as the Values
     *      tensor, except for the first dimension which has the same size
     *      as Lookups' only dimension.
     *      For a {@link OperandType::TENSOR_QUANT8_ASYMM} tensor,
     *      the scale and zeroPoint must be the same as input1.
     */
    EMBEDDING_LOOKUP = 7 /* @1.1::OperationType:EMBEDDING_LOOKUP */,
    /**
     * Computes element-wise floor() on the input tensor.
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_FLOAT16} (since HAL version 1.2)
     * * {@link OperandType::TENSOR_FLOAT32}
     *
     * Supported tensor rank: up to 4
     *
     * Inputs:
     * * 0: A tensor.
     *
     * Outputs:
     * * 0: The output tensor, of the same {@link OperandType} and dimensions as
     *      the input tensor.
     */
    FLOOR = 8 /* @1.1::OperationType:FLOOR */,
    /**
     * Denotes a fully (densely) connected layer, which connects all elements
     * in the input tensor with each element in the output tensor.
     *
     * This layer implements the operation:
     *
     *     outputs = activation(inputs * weights’ + bias)
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_FLOAT16} (since HAL version 1.2)
     * * {@link OperandType::TENSOR_FLOAT32}
     * * {@link OperandType::TENSOR_QUANT8_ASYMM}
     *
     * Supported tensor rank: up to 4.
     *
     * Inputs:
     * * 0: A tensor of at least rank 2, specifying the input. If rank is
     *      greater than 2, then it gets flattened to a 2-D Tensor. The
     *      (flattened) 2-D Tensor is reshaped (if necessary) to
     *      [batch_size, input_size], where "input_size" corresponds to the
     *      number of inputs to the layer, matching the second dimension of
     *      weights, and "batch_size" is calculated by dividing the number of
     *      elements by "input_size".
     *      Since HAL version 1.2, zero batch_size is supported for this tensor.
     * * 1: A 2-D tensor, specifying the weights, of shape
     *      [num_units, input_size], where "num_units" corresponds to the number
     *      of output nodes.
     * * 2: A 1-D tensor, of shape [num_units], specifying the bias. For input
     *      tensor of {@link OperandType::TENSOR_FLOAT32}, the bias should
     *      also be of {@link OperandType::TENSOR_FLOAT32}.
     *      For input tensor of {@link OperandType::TENSOR_QUANT8_ASYMM},
     *      the bias should be of {@link OperandType::TENSOR_INT32},
     *      with zeroPoint of 0 and bias_scale == input_scale * filter_scale.
     * * 3: An {@link OperandType::INT32} scalar, and has to be one of the
     *      {@link FusedActivationFunc} values. Specifies the activation to
     *      invoke on the result.
     *
     * Outputs:
     * * 0: The output tensor, of shape [batch_size, num_units]. Before HAL version 1.2, for
     *      output tensor of {@link OperandType::TENSOR_QUANT8_ASYMM}, the following
     *      condition must be satisfied: output_scale > input_scale * filter_scale.
     */
    FULLY_CONNECTED = 9 /* @1.1::OperationType:FULLY_CONNECTED */,
    /**
     * Looks up sub-tensors in the input tensor using a key-value map.
     *
     * This operator takes for input a tensor of values (Values),
     * a one-dimensional tensor of selection values (Lookups) and
     * a one-dimensional tensor that maps these values to Values
     * indexes. The output tensor is the concatenation of sub-tensors of
     * Values as selected by Lookups via Keys.
     *
     * Think of Values as being sliced along its outer-most dimension.
     * The output is a concatenation of selected slices, with one slice
     * for each entry of Lookups. The slice selected is the one at the
     * same index as the Maps entry that matches the value in Lookups.
     *
     * For a hit, the corresponding sub-tensor of Values is included
     * in the Output tensor. For a miss, the corresponding sub-tensor in
     * Output must have zero values.
     *
     * For example, if Values has shape of [40, 200, 300],
     * Keys should have a shape of [40]. If Lookups tensor has shape
     * of [3], three slices are being concatenated, so the resulting tensor
     * must have the shape of [3, 200, 300]. If the first entry in Lookups
     * has the value 123456, that value must be located in Keys tensor.
     * If the sixth entry of Keys contains 123456, the sixth slice of Values
     * must be selected. If no entry in Keys has 123456, a slice of zeroes
     * must be concatenated.
     *
     * Supported value tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_FLOAT32}
     * * {@link OperandType::TENSOR_INT32}
     * * {@link OperandType::TENSOR_QUANT8_ASYMM}
     *
     * Supported value tensor rank: from 2
     *
     * Inputs:
     * * 0: Lookups. A 1-D {@link OperandType::TENSOR_INT32} tensor with
     *      shape [ k ].
     * * 1: Keys. A 1-D {@link OperandType::TENSOR_INT32} tensor with shape
     *      [ n ]; Keys and Values pair represent a map, i.e., the ith element
     *      in Keys (Keys[i]) is the key to select the ith sub-tensor in Values
     *      (Values[i]), where 0 <= i <= n-1. Keys tensor *MUST* be sorted in
     *      ascending order.
     * * 2: Values. A tensor with shape of [ n, … ]; i.e., the first dimension
     *      must be n.
     *
     * Outputs:
     * * 0: Output. A tensor with shape [ k …].
     *      For a {@link OperandType::TENSOR_QUANT8_ASYMM} tensor,
     *      the scale and zeroPoint must be the same as input2.
     * * 1: Hits. A boolean tensor with shape [ k ] indicates whether the lookup
     *      hits (True) or not (False).
     *      Stored as {@link OperandType::TENSOR_QUANT8_ASYMM} with offset 0
     *      and scale 1.0f.
     *      A non-zero byte represents True, a hit. A zero indicates otherwise.
     */
    HASHTABLE_LOOKUP = 10 /* @1.1::OperationType:HASHTABLE_LOOKUP */,
    /**
     * Applies L2 normalization along the axis dimension.
     *
     * The values in the output tensor are computed as:
     *
     *     output[batch, row, col, channel] =
     *         input[batch, row, col, channel] /
     *         sqrt(sum_{c} pow(input[batch, row, col, c], 2))
     *
     * By default the axis dimension is the last dimension of the input tensor.
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_FLOAT16} (since HAL version 1.2)
     * * {@link OperandType::TENSOR_FLOAT32}
     * * {@link OperandType::TENSOR_QUANT8_ASYMM} (since HAL version 1.2)
     *
     * Supported tensor rank: up to 4
     * Tensors with rank less than 4 are only supported since HAL version 1.2.
     *
     * Inputs:
     * * 0: An n-D tensor, specifying the tensor to be normalized.
     * * 1: An optional {@link OperandType::INT32} scalar, default to -1,
     *      specifying the dimension normalization would be performed on.
     *      Negative index is used to specify axis from the end (e.g. -1 for
     *      the last axis). Must be in the range [-n, n).
     *      Available since HAL version 1.2.
     *
     * Outputs:
     * * 0: A tensor of the same {@link OperandType} and same shape as input0.
     *      For {@link OperandType::TENSOR_QUANT8_ASYMM},
     *      the scale must be 1.f / 128 and the zeroPoint must be 128.
     */
    L2_NORMALIZATION = 11 /* @1.1::OperationType:L2_NORMALIZATION */,
    /**
     * Performs an 2-D L2 pooling operation.
     *
     * The output dimensions are functions of the filter dimensions, stride, and
     * padding.
     *
     * The values in the output tensor are computed as:
     *
     *     output[b, i, j, c] =
     *         sqrt(sum_{di, dj} pow(input[b, strides[1] * i + di, strides[2] * j + dj, c], 2) /
     *              sum(1))
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_FLOAT16} (since HAL version 1.2)
     * * {@link OperandType::TENSOR_FLOAT32}
     *
     * Supported tensor rank: 4, with "NHWC" or "NCHW" data layout.
     * With the default data layout NHWC, the data is stored in the order of:
     * [batch, height, width, channels]. Alternatively, the data layout could
     * be NCHW, the data storage order of: [batch, channels, height, width].
     * NCHW is supported since HAL version 1.2.
     *
     * Both explicit padding and implicit padding are supported.
     *
     * Inputs (explicit padding):
     * * 0: A 4-D tensor, of shape [batches, height, width, depth], specifying
     *      the input.
     *      Since HAL version 1.2, zero batches is supported for this tensor.
     * * 1: An {@link OperandType::INT32} scalar, specifying the padding on
     *      the left, in the ‘width’ dimension.
     * * 2: An {@link OperandType::INT32} scalar, specifying the padding on
     *      the right, in the ‘width’ dimension.
     * * 3: An {@link OperandType::INT32} scalar, specifying the padding on
     *      the top, in the ‘height’ dimension.
     * * 4: An {@link OperandType::INT32} scalar, specifying the padding on
     *      the bottom, in the ‘height’ dimension.
     * * 5: An {@link OperandType::INT32} scalar, specifying the stride when
     *      walking through input in the ‘width’ dimension.
     * * 6: An {@link OperandType::INT32} scalar, specifying the stride when
     *      walking through input in the ‘height’ dimension.
     * * 7: An {@link OperandType::INT32} scalar, specifying the filter
     *      width.
     * * 8: An {@link OperandType::INT32} scalar, specifying the filter
     *      height.
     * * 9: An {@link OperandType::INT32} scalar, and has to be one of the
     *      {@link FusedActivationFunc} values. Specifies the activation to
     *      invoke on the result.
     * * 10: An optional {@link OperandType::BOOL} scalar, default to false.
     *       Set to true to specify NCHW data layout for input0 and output0.
     *       Available since HAL version 1.2.
     *
     * Inputs (implicit padding):
     * * 0: A 4-D tensor, of shape [batches, height, width, depth], specifying
     *      the input.
     *      Since HAL version 1.2, zero batches is supported for this tensor.
     * * 1: An {@link OperandType::INT32} scalar, specifying the implicit
     *      padding scheme, has to be one of the
     *      following values: {0 (NONE), 1 (SAME), 2 (VALID)}.
     * * 2: An {@link OperandType::INT32} scalar, specifying the stride when
     *      walking through input in the ‘width’ dimension.
     * * 3: An {@link OperandType::INT32} scalar, specifying the stride when
     *      walking through input in the ‘height’ dimension.
     * * 4: An {@link OperandType::INT32} scalar, specifying the filter
     *      width.
     * * 5: An {@link OperandType::INT32} scalar, specifying the filter
     *      height.
     * * 6: An {@link OperandType::INT32} scalar, and has to be one of the
     *      {@link FusedActivationFunc} values. Specifies the activation to
     *      invoke on the result.
     * * 7: An optional {@link OperandType::BOOL} scalar, default to false.
     *      Set to true to specify NCHW data layout for input0 and output0.
     *      Available since HAL version 1.2.
     *
     * Outputs:
     * * 0: The output 4-D tensor, of shape
     *      [batches, out_height, out_width, depth].
     */
    L2_POOL_2D = 12 /* @1.1::OperationType:L2_POOL_2D */,
    /**
     * Applies Local Response Normalization along the depth dimension.
     *
     * The 4-D input tensor is treated as a 3-D array of 1-D vectors (along the
     * last dimension), and each vector is normalized independently. Within a
     * given vector, each component is divided by the weighted, squared sum of
     * inputs within depth_radius.
     *
     * The output is calculated using this formula:
     *
     *     sqr_sum[a, b, c, d] = sum(
     *         pow(input[a, b, c, d - depth_radius : d + depth_radius + 1], 2))
     *     output = input / pow((bias + alpha * sqr_sum), beta)
     *
     * For input tensor with rank less than 4, independently normalizes each
     * 1-D slice along specified dimension.
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_FLOAT16} (since HAL version 1.2)
     * * {@link OperandType::TENSOR_FLOAT32}
     *
     * Supported tensor rank: up to 4
     * Tensors with rank less than 4 are only supported since HAL version 1.2.
     *
     * Inputs:
     * * 0: A 4-D tensor, of shape [batches, height, width, depth], specifying
     *      the input.
     * * 1: An {@link OperandType::INT32} scalar, specifying the radius of
     *      the normalization window.
     * * 2: A scalar, specifying the bias, must not be zero.
     *      For input tensor of {@link OperandType::TENSOR_FLOAT16}, the bias
     *      value must be of {@link OperandType::FLOAT16}.
     *      For input tensor of {@link OperandType::TENSOR_FLOAT32}, the bias
     *      value must be of {@link OperandType::FLOAT32}.
     * * 3: A scalar, specifying the scale factor, alpha.
     *      For input tensor of {@link OperandType::TENSOR_FLOAT16}, the
     *      alpha value must be of {@link OperandType::FLOAT16}.
     *      For input tensor of {@link OperandType::TENSOR_FLOAT32}, the
     *      alpha value must be of {@link OperandType::FLOAT32}.
     * * 4: A scalar, specifying the exponent, beta.
     *      For input tensor of {@link OperandType::TENSOR_FLOAT16}, the beta
     *      value must be of {@link OperandType::FLOAT16}.
     *      For input tensor of {@link OperandType::TENSOR_FLOAT32}, the beta
     *      value must be of {@link OperandType::FLOAT32}.
     * * 5: An optional {@link OperandType::INT32} scalar, default to -1,
     *      specifying the dimension normalization would be performed on.
     *      Negative index is used to specify axis from the end (e.g. -1 for
     *      the last axis). Must be in the range [-n, n).
     *      Available since HAL version 1.2.
     *
     * Outputs:
     * * 0: The output tensor of same shape as input0.
     */
    LOCAL_RESPONSE_NORMALIZATION = 13 /* @1.1::OperationType:LOCAL_RESPONSE_NORMALIZATION */,
    /**
     * Computes sigmoid activation on the input tensor element-wise.
     *
     * The output is calculated using this formula:
     *
     *     output = 1 / (1 + exp(-input))
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_FLOAT16} (since HAL version 1.2)
     * * {@link OperandType::TENSOR_FLOAT32}
     * * {@link OperandType::TENSOR_QUANT8_ASYMM}
     *
     * Supported tensor rank: up to 4.
     *
     * Inputs:
     * * 0: A tensor, specifying the input.
     *      Since HAL version 1.2, this tensor may be zero-sized.
     *
     * Outputs:
     * * 0: The output tensor of same shape as input0.
     *      For {@link OperandType::TENSOR_QUANT8_ASYMM},
     *      the scale must be 1.f / 256 and the zeroPoint must be 0.
     */
    LOGISTIC = 14 /* @1.1::OperationType:LOGISTIC */,
    /**
     * Projects an input to a bit vector via locality senstive hashing.
     *
     * Supported input tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_FLOAT16} (since HAL version 1.2)
     * * {@link OperandType::TENSOR_FLOAT32}
     * * {@link OperandType::TENSOR_INT32}
     * * {@link OperandType::TENSOR_QUANT8_ASYMM}
     *
     * Supported input tensor rank: from 1
     *
     * Inputs:
     * * 0: Hash functions. Dim.size == 2, DataType: Float.
     *      Tensor[0].Dim[0]: Number of hash functions.
     *      Tensor[0].Dim[1]: Number of projected output bits generated by each
     *      hash function.
     *      If the projection type is Sparse:
     *      Tensor[0].Dim[1] + ceil(log2(Tensor[0].Dim[0])) <= 32
     *
     * * 1: Input. Dim.size >= 1, no restriction on DataType.
     * * 2: Weight. Optional. Dim.size == 1, DataType: Float.
     *      If not set, each input element is considered to have the same weight
     *      of 1.0.
     *      Tensor[1].Dim[0] == Tensor[2].Dim[0]
     * * 3: Type:
     *        Sparse:
     *          Value LSHProjectionType_SPARSE(=3) (since HAL version 1.2).
     *          Computed bit vector is considered to be sparse.
     *          Each output element is an int32 made up of multiple bits
     *          computed from hash functions.
     *
     *          NOTE: To avoid collisions across hash functions, an offset value
     *          of k * (1 << Tensor[0].Dim[1]) will be added to each signature,
     *          where k is the index of the hash function.
     *
     *          Value LSHProjectionType_SPARSE_DEPRECATED(=1).
     *          Legacy behavior that does not include the offset value.
     *
     *        Dense:
     *          Value LSHProjectionType_DENSE(=2).
     *          Computed bit vector is considered to be dense. Each output
     *          element represents a bit and can take the value of either
     *          0 or 1.
     *
     * Outputs:
     * * 0: If the projection type is Sparse:
     *      Output.Dim == { Tensor[0].Dim[0] }
     *      A tensor of int32 that represents hash signatures.
     *
     *      If the projection type is Dense:
     *      Output.Dim == { Tensor[0].Dim[0] * Tensor[0].Dim[1] }
     *      A flattened tensor that represents projected bit vectors.
     * The offset value for sparse projections was added in HAL version 1.2.
     */
    LSH_PROJECTION = 15 /* @1.1::OperationType:LSH_PROJECTION */,
    /**
     * Performs a single time step in a Long Short-Term Memory (LSTM) layer
     *
     * The LSTM operation is described by the following equations.
     *
     * \f{eqnarray*}{
     * i_t =& \sigma(W_{xi}x_t+W_{hi}h_{t-1}+W_{ci}C_{t-1}+b_i) & \\
     * f_t =& \sigma(W_{xf}x_t+W_{hf}h_{t-1}+W_{cf}C_{t-1}+b_f) & \\
     * C_t =& clip(f_t \odot C_{t-1} + i_t \odot
     *        g(W_{xc}x_t+W_{hc}h_{t-1}+b_c),\ t_{cell}) & \\
     * o_t =& \sigma(W_{xo}x_t+W_{ho}h_{t-1}+W_{co}C_t+b_o) & \\
     *      & & \\
     *      & clip(W_{proj}(o_t \odot g(C_t))+b_{proj},\ t_{proj})
     *      & if\ there\ is\ a\ projection; \\
     * h_t =& & \\
     *      & o_t \odot g(C_t) & otherwise. \\
     * \f}
     * Where:
     * * \f$x_t\f$ is the input,
     * * \f$i_t\f$ is the input gate,
     * * \f$f_t\f$ is the forget gate,
     * * \f$C_t\f$ is the cell state,
     * * \f$o_t\f$ is the output,
     * * \f$h_t\f$ is the output state,
     * * \f$\sigma\f$ is the logistic sigmoid function,
     * * \f$g\f$ is the cell input and cell output activation function, usually
     *   \f$tahn\f$,
     * * \f$W_{xi}\f$ is the input-to-input weight matrix,
     * * \f$W_{hi}\f$ is the recurrent to input weight matrix,
     * * \f$W_{ci}\f$ is the cell-to-input weight matrix,
     * * \f$b_i\f$ is the input gate bias,
     * * \f$W_{xf}\f$ is the input-to-forget weight matrix,
     * * \f$W_{hf}\f$ is the recurrent-to-forget weight matrix,
     * * \f$W_{cf}\f$ is the cell-to-forget weight matrix,
     * * \f$b_f\f$ is the forget gate bias,
     * * \f$W_{xc}\f$ is the input-to-cell weight matrix,
     * * \f$W_{hc}\f$ is the recurrent-to-cell weight matrix,
     * * \f$b_c\f$ is the cell bias,
     * * \f$W_{xo}\f$ is the input-to-output weight matrix,
     * * \f$W_{ho}\f$ is the recurrent-to-output weight matrix,
     * * \f$W_{co}\f$ is the cell-to-output weight matrix,
     * * \f$b_o\f$ is the output gate bias,
     * * \f$W_{proj}\f$ is the projection weight matrix,
     * * \f$b_{proj}\f$ is the projection bias,
     * * \f$t_{cell}\f$ is the threshold for clipping the cell state, and
     * * \f$t_{proj}\f$ is the threshold for clipping the projected output.
     * * \f$\odot\f$ is the
     *   <a href="https://en.wikipedia.org/wiki/Hadamard_product_(matrices)">
     *   Hadamard product</a> that takes two matrices and produces another
     *   matrix, each element of which is the product of the corresponding
     *   elements of the input matrices.
     *
     * Since HAL version 1.2 LSTM supports layer normalization.
     * In case layer normalization is used, the inputs to internal activation
     * functions (sigmoid and \f$g\f$) are normalized, rescaled and recentered
     * following an approach from section 3.1 from
     * https://arxiv.org/pdf/1607.06450.pdf
     *
     * The operation has the following independently optional inputs:
     * * The cell-to-input weights (\f$W_{ci}\f$), cell-to-forget weights
     *   (\f$W_{cf}\f$) and cell-to-output weights (\f$W_{co}\f$) either all
     *   have values or neither of them have values (i.e., all set to null). If
     *   they have values, the peephole optimization is used.
     * * The input-to-input weights (\f$W_{xi}\f$), recurrent-to-input weights
     *   (\f$W_{hi}\f$) and input gate bias (\f$b_i\f$) either all have values,
     *   or none of them have values. If they have no values, coupling of input
     *   and forget gates (CIFG) is used, in which case the input gate
     *   (\f$i_t\f$) is calculated using the following equation instead.
     *   \f{eqnarray*}{
     *   i_t = 1 - f_t
     *   \f}
     *   In case peephole optimization is used and CIFG is not used
     *   cell-to-input (\f$W_{ci}\f$) weights must be present. Otherwise, the
     *   cell-to-input weights must have no value.
     * * The projection weights (\f$W_{proj}\f$) is required only for the
     *   recurrent projection layer, and should otherwise have no value.
     * * The projection bias (\f$b_{proj}\f$) may (but not required to) have a
     *   value if the recurrent projection layer exists, and should otherwise
     *   have no value.
     * * (HAL version 1.2 or later) The four layer normalization weights either all have
     *   values or none of them have values. Additionally, if CIFG is used,
     *   input layer normalization weights tensor is omitted and the other layer
     *   normalization weights either all have values or none of them have
     *   values. Layer normalization is used when the values of all the layer
     *   normalization weights are present.
     *
     * References:
     *
     * The default non-peephole non-CIFG implementation is based on:
     * http://www.bioinf.jku.at/publications/older/2604.pdf
     * S. Hochreiter and J. Schmidhuber. "Long Short-Term Memory". Neural
     * Computation, 9(8):1735-1780, 1997.
     *
     * The peephole implementation and projection layer is based on:
     * https://research.google.com/pubs/archive/43905.pdf
     * Hasim Sak, Andrew Senior, and Francoise Beaufays. "Long short-term memory
     * recurrent neural network architectures for large scale acoustic
     * modeling." INTERSPEECH, 2014.
     * (However, the concept of peephole optimization was introduced in work
     * prior to this paper.)
     *
     * The coupling of input and forget gate (CIFG) is based on:
     * http://arxiv.org/pdf/1503.04069.pdf
     * Greff et al. "LSTM: A Search Space Odyssey"
     *
     * The layer normalization is based on:
     * https://arxiv.org/pdf/1607.06450.pdf
     * Jimmy Ba et al. "Layer Normalization"
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_FLOAT16} (since HAL version 1.2)
     * * {@link OperandType::TENSOR_FLOAT32}
     *
     * All input and output tensors must be of the same type.
     *
     * Inputs:
     * * 0: The input (\f$x_t\f$).
     *      A 2-D tensor of shape [batch_size, input_size], where “batch_size”
     *      corresponds to the batching dimension, and “input_size” is the size
     *      of the input.
     * * 1: The input-to-input weights (\f$W_{xi}\f$). Optional.
     *      A 2-D tensor of shape [num_units, input_size], where “num_units”
     *      corresponds to the number of cell units.
     * * 2: The input-to-forget weights (\f$W_{xf}\f$).
     *      A 2-D tensor of shape [num_units, input_size].
     * * 3: The input-to-cell weights (\f$W_{xc}\f$).
     *      A 2-D tensor of shape [num_units, input_size].
     * * 4: The input-to-output weights (\f$W_{xo}\f$).
     *      A 2-D tensor of shape [num_units, input_size].
     * * 5: The recurrent-to-input weights (\f$W_{hi}\f$). Optional.
     *      A 2-D tensor of shape [num_units, output_size], where “output_size”
     *      corresponds to either the number of cell units (i.e., “num_units”),
     *      or the second dimension of the “projection_weights”, if defined.
     * * 6: The recurrent-to-forget weights (\f$W_{hf}\f$).
     *      A 2-D tensor of shape [num_units, output_size].
     * * 7: The recurrent-to-cell weights (\f$W_{hc}\f$).
     *      A 2-D tensor of shape [num_units, output_size].
     * * 8: The recurrent-to-output weights (\f$W_{ho}\f$).
     *      A 2-D tensor of shape [num_units, output_size].
     * * 9: The cell-to-input weights (\f$W_{ci}\f$). Optional.
     *      A 1-D tensor of shape [num_units].
     * * 10:The cell-to-forget weights (\f$W_{cf}\f$). Optional.
     *      A 1-D tensor of shape [num_units].
     * * 11:The cell-to-output weights (\f$W_{co}\f$). Optional.
     *      A 1-D tensor of shape [num_units].
     * * 12:The input gate bias (\f$b_i\f$). Optional.
     *      A 1-D tensor of shape [num_units].
     * * 13:The forget gate bias (\f$b_f\f$).
     *      A 1-D tensor of shape [num_units].
     * * 14:The cell bias (\f$b_c\f$).
     *      A 1-D tensor of shape [num_units].
     * * 15:The output gate bias (\f$b_o\f$).
     *      A 1-D tensor of shape [num_units].
     * * 16:The projection weights (\f$W_{proj}\f$). Optional.
     *      A 2-D tensor of shape [output_size, num_units].
     * * 17:The projection bias (\f$b_{proj}\f$). Optional.
     *      A 1-D tensor of shape [output_size].
     * * 18:The output state (in) (\f$h_{t-1}\f$).
     *      A 2-D tensor of shape [batch_size, output_size].
     * * 19:The cell state (in) (\f$C_{t-1}\f$).
     *      A 2-D tensor of shape [batch_size, num_units].
     * * 20:The activation function (\f$g\f$).
     *      A value indicating the activation function:
     *      <ul>
     *      <li>0: None;
     *      <li>1: Relu;
     *      <li>3: Relu6;
     *      <li>4: Tanh;
     *      <li>6: Sigmoid.
     *      </ul>
     * * 21:The clipping threshold (\f$t_{cell}\f$) for the cell state, such
     *      that values are bound within [-cell_clip, cell_clip]. If set to 0.0
     *      then clipping is disabled.
     *      Until HAL version 1.2 this scalar must be of type {@link
     *      OperandType::FLOAT32}. Since HAL version 1.2, if all the input
     *      tensors have type {@link OperandType::TENSOR_FLOAT32}, this
     *      scalar must be of the type {@link OperandType::FLOAT32},
     *      otherwise if all the input tensors have the type {@link
     *      OperandType::TENSOR_FLOAT16}, this scalar must be of type {@link
     *      OperandType::FLOAT16}.
     * * 22:The clipping threshold (\f$t_{proj}\f$) for the output from the
     *      projection layer, such that values are bound within
     *      [-proj_clip, proj_clip]. If set to 0.0 then clipping is disabled.
     *      Until HAL version 1.2 this scalar must be of type {@link
     *      OperandType::FLOAT32}. Since HAL version 1.2, if all the input
     *      tensors have type {@link OperandType::TENSOR_FLOAT32}, this
     *      scalar must be of the type {@link OperandType::FLOAT32},
     *      otherwise if all the input tensors have the type {@link
     *      OperandType::TENSOR_FLOAT16}, this scalar must be of type {@link
     *      OperandType::FLOAT16}.
     * Since HAL version 1.2 there are additional inputs to this op:
     * * 23:The input layer normalization weights.
     *      A 1-D tensor of shape [num_units]. Used to rescale normalized inputs
     *      to activation at input gate.
     * * 24:The forget layer normalization weights.
     *      A 1-D tensor of shape [num_units]. Used to rescale normalized inputs
     *      to activation at forget gate.
     * * 25:The cell layer normalization weights.
     *      A 1-D tensor of shape [num_units]. Used to rescale normalized inputs
     *      to activation at cell gate.
     * * 26:The output layer normalization weights.
     *      A 1-D tensor of shape [num_units]. Used to rescale normalized inputs
     *      to activation at output gate.
     *
     * Outputs:
     * * 0: The scratch buffer.
     *      A 2-D tensor of shape [batch_size, num_units * 3] with CIFG, or
     *      [batch_size, num_units * 4] without CIFG.
     * * 1: The output state (out) (\f$h_t\f$).
     *      A 2-D tensor of shape [batch_size, output_size].
     * * 2: The cell state (out) (\f$C_t\f$).
     *      A 2-D tensor of shape [batch_size, num_units].
     * * 3: The output (\f$o_t\f$).
     *      A 2-D tensor of shape [batch_size, output_size]. This is effectively
     *      the same as the current “output state (out)” value.
     */
    LSTM = 16 /* @1.1::OperationType:LSTM */,
    /**
     * Performs an 2-D max pooling operation.
     *
     * The output dimensions are functions of the filter dimensions, stride, and
     * padding.
     *
     * The values in the output tensor are computed as:
     *
     *     output[b, i, j, channel] =
     *         max_{di, dj} (
     *             input[b, strides[1] * i + di, strides[2] * j + dj, channel]
     *         )
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_FLOAT16} (since HAL version 1.2)
     * * {@link OperandType::TENSOR_FLOAT32}
     * * {@link OperandType::TENSOR_QUANT8_ASYMM}
     *
     * Supported tensor rank: 4, with "NHWC" or "NCHW" data layout.
     * With the default data layout NHWC, the data is stored in the order of:
     * [batch, height, width, channels]. Alternatively, the data layout could
     * be NCHW, the data storage order of: [batch, channels, height, width].
     * NCHW is supported since HAL version 1.2.
     *
     * Both explicit padding and implicit padding are supported.
     *
     * Inputs (explicit padding):
     * * 0: A 4-D tensor, of shape [batches, height, width, depth], specifying
     *      the input.
     *      Since HAL version 1.2, zero batches is supported for this tensor.
     * * 1: An {@link OperandType::INT32} scalar, specifying the padding on
     *      the left, in the ‘width’ dimension.
     * * 2: An {@link OperandType::INT32} scalar, specifying the padding on
     *      the right, in the ‘width’ dimension.
     * * 3: An {@link OperandType::INT32} scalar, specifying the padding on
     *      the top, in the ‘height’ dimension.
     * * 4: An {@link OperandType::INT32} scalar, specifying the padding on
     *      the bottom, in the ‘height’ dimension.
     * * 5: An {@link OperandType::INT32} scalar, specifying the stride when
     *      walking through input in the ‘width’ dimension.
     * * 6: An {@link OperandType::INT32} scalar, specifying the stride when
     *      walking through input in the ‘height’ dimension.
     * * 7: An {@link OperandType::INT32} scalar, specifying the filter
     *      width.
     * * 8: An {@link OperandType::INT32} scalar, specifying the filter
     *      height.
     * * 9: An {@link OperandType::INT32} scalar, and has to be one of the
     *      {@link FusedActivationFunc} values. Specifies the activation to
     *      invoke on the result.
     * * 10: An optional {@link OperandType::BOOL} scalar, default to false.
     *       Set to true to specify NCHW data layout for input0 and output0.
     *       Available since HAL version 1.2.
     *
     * Inputs (implicit padding):
     * * 0: A 4-D tensor, of shape [batches, height, width, depth], specifying
     *      the input.
     *      Since HAL version 1.2, zero batches is supported for this tensor.
     * * 1: An {@link OperandType::INT32} scalar, specifying the implicit
     *      padding scheme, has to be one of the
     *      following values: {0 (NONE), 1 (SAME), 2 (VALID)}.
     * * 2: An {@link OperandType::INT32} scalar, specifying the stride when
     *      walking through input in the ‘width’ dimension.
     * * 3: An {@link OperandType::INT32} scalar, specifying the stride when
     *      walking through input in the ‘height’ dimension.
     * * 4: An {@link OperandType::INT32} scalar, specifying the filter
     *      width.
     * * 5: An {@link OperandType::INT32} scalar, specifying the filter
     *      height.
     * * 6: An {@link OperandType::INT32} scalar, and has to be one of the
     *      {@link FusedActivationFunc} values. Specifies the activation to
     *      invoke on the result.
     * * 7: An optional {@link OperandType::BOOL} scalar, default to false.
     *      Set to true to specify NCHW data layout for input0 and output0.
     *      Available since HAL version 1.2.
     *
     * Outputs:
     * * 0: The output 4-D tensor, of shape
     *      [batches, out_height, out_width, depth].
     *      For a {@link OperandType::TENSOR_QUANT8_ASYMM} tensor,
     *      the scale and zeroPoint must be the same as input0.
     */
    MAX_POOL_2D = 17 /* @1.1::OperationType:MAX_POOL_2D */,
    /**
     * Multiplies two tensors, element-wise.
     *
     * Takes two input tensors of identical {@link OperandType} and compatible
     * dimensions. The output is the product of both input tensors, optionally
     * modified by an activation function.
     *
     * Two dimensions are compatible when:
     *     1. they are equal, or
     *     2. one of them is 1
     *
     * The size of the resulting output is the maximum size along each dimension
     * of the input operands. It starts with the trailing dimensions, and works
     * its way forward.
     *
     * Since HAL version 1.2, generic zero-sized input tensor is supported. Zero
     * dimension is only compatible with 0 or 1. The size of the output
     * dimension is zero if either of corresponding input dimension is zero.
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_FLOAT16} (since HAL version 1.2)
     * * {@link OperandType::TENSOR_FLOAT32}
     * * {@link OperandType::TENSOR_QUANT8_ASYMM}
     *
     * Supported tensor rank: up to 4
     *
     * Inputs:
     * * 0: A tensor.
     * * 1: A tensor of the same {@link OperandType}, and compatible dimensions
     *      as input0.
     * * 2: An {@link OperandType::INT32} scalar, and has to be one of the
     *      {@link FusedActivationFunc} values. Specifies the activation to
     *      invoke on the result.
     *
     * Outputs:
     * * 0: The product, a tensor of the same {@link OperandType} as input0.
     *      For output tensor of {@link OperandType::TENSOR_QUANT8_ASYMM},
     *      the following condition must be satisfied:
     *      output_scale > input1_scale * input2_scale.
     */
    MUL = 18 /* @1.1::OperationType:MUL */,
    /**
     * Computes rectified linear activation on the input tensor element-wise.
     *
     * The output is calculated using this formula:
     *
     *     output = max(0, input)
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_FLOAT16} (since HAL version 1.2)
     * * {@link OperandType::TENSOR_FLOAT32}
     * * {@link OperandType::TENSOR_QUANT8_ASYMM}
     *
     * Supported tensor rank: up to 4.
     *
     * Inputs:
     * * 0: A tensor, specifying the input.
     *      Since HAL version 1.2, this tensor may be zero-sized.
     *
     * Outputs:
     * * 0: The output tensor of same shape as input0.
     *      For a {@link OperandType::TENSOR_QUANT8_ASYMM} tensor,
     *      the scale and zeroPoint must be the same as input0.
     */
    RELU = 19 /* @1.1::OperationType:RELU */,
    /**
     * Computes rectified linear 1 activation on the input tensor element-wise.
     *
     * The output is calculated using this formula:
     *
     *     output = min(1.f, max(-1.f, input))
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_FLOAT16} (since HAL version 1.2)
     * * {@link OperandType::TENSOR_FLOAT32}
     * * {@link OperandType::TENSOR_QUANT8_ASYMM}
     *
     * Supported tensor rank: up to 4.
     *
     * Inputs:
     * * 0: A tensor, specifying the input.
     *      Since HAL version 1.2, this tensor may be zero-sized.
     *
     * Outputs:
     * * 0: The output tensor of the same shape as input0.
     *      For a {@link OperandType::TENSOR_QUANT8_ASYMM} tensor,
     *      the scale and zeroPoint must be the same as input0.
     */
    RELU1 = 20 /* @1.1::OperationType:RELU1 */,
    /**
     * Computes rectified linear 6 activation on the input tensor element-wise.
     *
     * The output is calculated using this formula:
     *
     *     output = min(6, max(0, input))
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_FLOAT16} (since HAL version 1.2)
     * * {@link OperandType::TENSOR_FLOAT32}
     * * {@link OperandType::TENSOR_QUANT8_ASYMM}
     *
     * Supported tensor rank: up to 4.
     *
     * Inputs:
     * * 0: A tensor, specifying the input.
     *      Since HAL version 1.2, this tensor may be zero-sized.
     *
     * Outputs:
     * * 0: The output tensor of same shape as input0.
     *      For a {@link OperandType::TENSOR_QUANT8_ASYMM} tensor,
     *      the scale and zeroPoint must be the same as input0.
     */
    RELU6 = 21 /* @1.1::OperationType:RELU6 */,
    /**
     * Reshapes a tensor.
     *
     * Given tensor, this operation returns a tensor that has the same values as
     * tensor, but with a newly specified shape.
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_FLOAT16} (since HAL version 1.2)
     * * {@link OperandType::TENSOR_FLOAT32}
     * * {@link OperandType::TENSOR_QUANT8_ASYMM}
     *
     * Supported tensor rank: up to 4.
     *
     * Inputs:
     * * 0: A tensor, specifying the tensor to be reshaped.
     * * 1: A 1-D tensor of {@link OperandType::TENSOR_INT32}, defining the
     *      shape of the output tensor. The number of elements implied by shape
     *      must be the same as the number of elements in the input tensor.
     *
     *      If one component of shape is the special value -1, the size of that
     *      dimension is computed so that the total size remains constant. In
     *      particular, a shape of [-1] flattens into 1-D. At most one component
     *      of shape can be -1.
     *
     * Outputs:
     * * 0: The output tensor, of shape specified by the input shape.
     *      For a {@link OperandType::TENSOR_QUANT8_ASYMM} tensor,
     *      the scale and zeroPoint must be the same as input0.
     */
    RESHAPE = 22 /* @1.1::OperationType:RESHAPE */,
    /**
     * Resizes images to given size using the bilinear interpretation.
     *
     * Resized images must be distorted if their output aspect ratio is not the
     * same as input aspect ratio. The corner pixels of output may not be the
     * same as corner pixels of input.
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_FLOAT16} (since HAL version 1.2)
     * * {@link OperandType::TENSOR_FLOAT32}
     * * {@link OperandType::TENSOR_QUANT8_ASYMM} (since HAL version 1.2)
     *
     * Supported tensor rank: 4, with "NHWC" or "NCHW" data layout.
     * With the default data layout NHWC, the data is stored in the order of:
     * [batch, height, width, channels]. Alternatively, the data layout could
     * be NCHW, the data storage order of: [batch, channels, height, width].
     * NCHW is supported since HAL version 1.2.
     *
     * Both resizing by shape and resizing by scale are supported.
     *
     * Inputs (resizing by shape):
     * * 0: A 4-D tensor, of shape [batches, height, width, depth], specifying
     *      the input.
     *      Since HAL version 1.2, zero batches is supported for this tensor.
     * * 1: An {@link OperandType::INT32} scalar, specifying the output
     *      width of the output tensor.
     * * 2: An {@link OperandType::INT32} scalar, specifying the output
     *      height of the output tensor.
     * * 3: An optional {@link OperandType::BOOL} scalar, default to false.
     *      Set to true to specify NCHW data layout for input0 and output0.
     *      Available since HAL version 1.2.
     *
     * Inputs (resizing by scale, since HAL version 1.2):
     * * 0: A 4-D tensor, of shape [batches, height, width, depth], specifying
     *      the input. Zero batches is supported for this tensor.
     * * 1: A scalar, specifying width_scale, the scaling factor of the width
     *      dimension from the input tensor to the output tensor. The output
     *      width is calculated as new_width = floor(width * width_scale).
     *      The scalar must be of {@link OperandType::FLOAT16} if input0 is
     *      of {@link OperandType::TENSOR_FLOAT16} and of
     *      {@link OperandType::FLOAT32} otherwise.
     * * 2: A scalar, specifying height_scale, the scaling factor of the height
     *      dimension from the input tensor to the output tensor. The output
     *      height is calculated as new_height = floor(height * height_scale).
     *      The scalar must be of {@link OperandType::FLOAT16} if input0 is
     *      of {@link OperandType::TENSOR_FLOAT16} and of
     *      {@link OperandType::FLOAT32} otherwise.
     * * 3: An optional {@link OperandType::BOOL} scalar, default to false.
     *      Set to true to specify NCHW data layout for input0 and output0.
     *
     * Outputs:
     * * 0: The output 4-D tensor, of shape
     *      [batches, new_height, new_width, depth].
     *      For a {@link OperandType::TENSOR_QUANT8_ASYMM} tensor,
     *      the scale and zeroPoint must be the same as input0.
     */
    RESIZE_BILINEAR = 23 /* @1.1::OperationType:RESIZE_BILINEAR */,
    /**
     * A basic recurrent neural network layer.
     *
     * This layer implements the operation:
     * outputs = state = activation(inputs * input_weights +
     *                              state * recurrent_weights + bias)
     *
     * Where:
     * * “input_weights” is a weight matrix that multiplies the inputs;
     * * “recurrent_weights” is a weight matrix that multiplies the current
     *    “state” which itself is the output from the previous time step
     *    computation;
     * * “bias” is a bias vector (added to each output vector in the batch);
     * * “activation” is the function passed as the “fused_activation_function”
     *   argument (if not “NONE”).
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_FLOAT16} (since HAL version 1.2)
     * * {@link OperandType::TENSOR_FLOAT32}
     *
     * The input tensors must all be the same type.
     *
     * Inputs:
     * * 0: input.
     *      A 2-D tensor of shape [batch_size, input_size], where “batch_size”
     *      corresponds to the batching dimension, and “input_size” is the size
     *      of the input.
     * * 1: weights.
     *      A 2-D tensor of shape [num_units, input_size], where “num_units”
     *      corresponds to the number of units.
     * * 2: recurrent_weights.
     *      A 2-D tensor of shape [num_units, num_units], with columns
     *      corresponding to the weights from each unit.
     * * 3: bias.
     *      A 1-D tensor of shape [num_units].
     * * 4: hidden state (in).
     *      A 2-D tensor of shape [batch_size, num_units].
     * * 5: fused_activation_function.
     *      An optional {@link FusedActivationFunc} value indicating the
     *      activation function. If “NONE” is specified then it results in a
     *      linear activation.
     *
     * Outputs:
     * * 0: hidden state (out).
     *      A 2-D tensor of shape [batch_size, num_units].
     *
     * * 1: output.
     *      A 2-D tensor of shape [batch_size, num_units]. This is effectively
     *      the same as the current state value.
     */
    RNN = 24 /* @1.1::OperationType:RNN */,
    /**
     * Computes the softmax activation on the input tensor element-wise, per
     * batch, by normalizing the input vector so the maximum coefficient is
     * zero.
     *
     * The output is calculated using this formula:
     *
     *     output[batch, i] =
     *         exp((input[batch, i] - max(input[batch, :])) * beta) /
     *         sum_{k}{exp((input[batch, k] - max(input[batch, :])) * beta)}
     *
     * For input tensor with rank other than 2, the activation will be applied
     * independently on each 1-D slice along specified dimension.
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_FLOAT16} (since HAL version 1.2)
     * * {@link OperandType::TENSOR_FLOAT32}
     * * {@link OperandType::TENSOR_QUANT8_ASYMM}
     *
     * Supported tensor rank: up to 4.
     * Tensors with rank other than 2 or 4 are only supported since HAL version 1.2.
     *
     * Inputs:
     * * 0: A 2-D or 4-D tensor, specifying the tensor to be reshaped.
     *      Since HAL version 1.2, this tensor may be zero-sized.
     * * 1: A scalar, specifying the positive scaling factor for the exponent,
     *      beta. If input0 is of {@link OperandType::TENSOR_FLOAT32} or
     *      {@link OperandType::TENSOR_QUANT8_ASYMM}, the scalar must be of
     *      {@link OperandType::FLOAT32}.
     *      If input0 is of {@link OperandType::TENSOR_FLOAT16}, then the
     *      scalar must be of {@link OperandType::FLOAT16}.
     * * 2: An optional {@link OperandType::INT32} scalar, default to -1,
     *      specifying the dimension the activation would be performed on.
     *      Negative index is used to specify axis from the end (e.g. -1 for
     *      the last axis). Must be in the range [-n, n).
     *      Available since HAL version 1.2.
     *
     * Outputs:
     * * 0: The output tensor of same shape as input0.
     *      For {@link OperandType::TENSOR_QUANT8_ASYMM},
     *      the scale must be 1.f / 256 and the zeroPoint must be 0.
     */
    SOFTMAX = 25 /* @1.1::OperationType:SOFTMAX */,
    /**
     * Rearranges blocks of spatial data, into depth.
     *
     * More specifically, this op outputs a copy of the input tensor where
     * values from the height and width dimensions are moved to the depth
     * dimension. The value block_size indicates the input block size and how
     * the data is moved.
     *
     * Chunks of data of size block_size * block_size from depth are rearranged
     * into non-overlapping blocks of size block_size x block_size.
     *
     * The depth of the output tensor is input_depth * block_size * block_size.
     * The input tensor's height and width must be divisible by block_size.
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_FLOAT16} (since HAL version 1.2)
     * * {@link OperandType::TENSOR_FLOAT32}
     * * {@link OperandType::TENSOR_QUANT8_ASYMM}
     *
     * Supported tensor rank: 4, with "NHWC" or "NCHW" data layout.
     * With the default data layout NHWC, the data is stored in the order of:
     * [batch, height, width, channels]. Alternatively, the data layout could
     * be NCHW, the data storage order of: [batch, channels, height, width].
     * NCHW is supported since HAL version 1.2.
     *
     * Inputs:
     * * 0: A 4-D tensor, of shape [batches, height, width, depth_in],
     *      specifying the input.
     * * 1: An {@link OperandType::INT32} scalar, specifying the block_size.
     *      block_size must be >=1 and block_size must be a divisor of both the
     *      input height and width.
     * * 2: An optional {@link OperandType::BOOL} scalar, default to false.
     *      Set to true to specify NCHW data layout for input0 and output0.
     *      Available since HAL version 1.2.
     *
     * Outputs:
     * * 0: The output 4-D tensor, of shape [batches, height/block_size,
     *      width/block_size, depth_in*block_size*block_size].
     *      For a {@link OperandType::TENSOR_QUANT8_ASYMM} tensor,
     *      the scale and zeroPoint must be the same as input0.
     */
    SPACE_TO_DEPTH = 26 /* @1.1::OperationType:SPACE_TO_DEPTH */,
    /**
     * SVDF op is a kind of stateful layer derived from the notion that a
     * densely connected layer that's processing a sequence of input frames can
     * be approximated by using a singular value decomposition of each of its
     * nodes. The implementation is based on:
     *
     * https://research.google.com/pubs/archive/43813.pdf
     *
     * P. Nakkiran, R. Alvarez, R. Prabhavalkar, C. Parada.
     * “Compressing Deep Neural Networks using a Rank-Constrained Topology”.
     * INTERSPEECH, 2015.
     *
     * It processes the incoming input using a 2-stage filtering mechanism:
     * * stage 1 performs filtering on the "features" dimension, whose outputs
     *   get pushed into a memory of fixed-size memory_size.
     * * stage 2 performs filtering on the "time" dimension of the memory_size
     *   memoized outputs of stage 1.
     *
     * Specifically, for rank 1, this layer implements the operation:
     *
     *     memory = push(conv1d(inputs, weights_feature, feature_dim,
     *                          "PADDING_VALID"));
     *     outputs = activation(memory * weights_time + bias);
     *
     * Where:
     * * “weights_feature” is a weights matrix that processes the inputs (by
     *   convolving the input with every “feature filter”), and whose outputs
     *   get pushed, stacked in order, into the fixed-size “memory” (the oldest
     *   entry gets dropped);
     * * “weights_time” is a weights matrix that processes the “memory” (by a
     *   batched matrix multiplication on the num_units);
     * * “bias” is an optional bias vector (added to each output vector in the
     *   batch); and
     * * “activation” is the function passed as the “fused_activation_function”
     *   argument (if not “NONE”).
     *
     * Each rank adds a dimension to the weights matrices by means of stacking
     * the filters.
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_FLOAT16} (since HAL version 1.2)
     * * {@link OperandType::TENSOR_FLOAT32}
     *
     * All input tensors must be the same type.
     *
     * Inputs:
     * * 0: input.
     *      A 2-D tensor of shape [batch_size, input_size], where “batch_size”
     *      corresponds to the batching dimension, and “input_size” is the size
     *      of the input.
     * * 1: weights_feature.
     *      A 2-D tensor of shape [num_units, input_size], where “num_units”
     *      corresponds to the number of units.
     * * 2: weights_time.
     *      A 2-D tensor of shape [num_units, memory_size], where “memory_size”
     *      corresponds to the fixed-size of the memory.
     * * 3: bias.
     *      An optional 1-D tensor of shape [num_units].
     * * 4: state (in).
     *      A 2-D tensor of shape [batch_size, (memory_size - 1) * num_units * rank].
     * * 5: rank.
     *      The rank of the SVD approximation.
     * * 6: fused_activation_function.
     *      An optional {@link FusedActivationFunc} value indicating the
     *      activation function. If “NONE” is specified then it results in a
     *      linear activation.
     *
     * Outputs:
     * * 0: state (out).
     *      A 2-D tensor of the same {@link OperandType} as the inputs, with shape
     *      [batch_size, (memory_size - 1) * num_units * rank].
     * * 1: output.
     *      A 2-D tensor of the same {@link OperandType} as the inputs, with shape
     *      [batch_size, num_units].
     */
    SVDF = 27 /* @1.1::OperationType:SVDF */,
    /**
     * Computes hyperbolic tangent of input tensor element-wise.
     *
     * The output is calculated using this formula:
     *
     *     output = tanh(input)
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_FLOAT16} (since HAL version 1.2)
     * * {@link OperandType::TENSOR_FLOAT32}
     * * {@link OperandType::TENSOR_QUANT8_ASYMM} (since HAL version 1.2)
     *
     * Supported tensor rank: up to 4.
     *
     * Inputs:
     * * 0: A tensor, specifying the input.
     *      Since HAL version 1.2, this tensor may be zero-sized.
     *
     * Outputs:
     * * 0: The output tensor of same shape as input0.
     *      For {@link OperandType::TENSOR_QUANT8_ASYMM},
     *      the scale must be 1.f / 128 and the zeroPoint must be 128.
     */
    TANH = 28 /* @1.1::OperationType:TANH */,
    /**
     * BatchToSpace for N-dimensional tensors.
     *
     * This operation reshapes the batch dimension (dimension 0) into M + 1
     * dimensions of shape block_shape + [batch], interleaves these blocks back
     * into the grid defined by the spatial dimensions [1, ..., M], to obtain a
     * result with the same rank as the input.
     *
     * This is the reverse of SpaceToBatch.
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_FLOAT16} (since HAL version 1.2)
     * * {@link OperandType::TENSOR_FLOAT32}
     * * {@link OperandType::TENSOR_QUANT8_ASYMM}
     *
     * Supported tensor rank: 4, with "NHWC" or "NCHW" data layout.
     * With the default data layout NHWC, the data is stored in the order of:
     * [batch, height, width, channels]. Alternatively, the data layout could
     * be NCHW, the data storage order of: [batch, channels, height, width].
     * NCHW is supported since HAL version 1.2.
     *
     * Inputs:
     * * 0: An n-D tensor, specifying the tensor to be reshaped
     * * 1: A 1-D Tensor of {@link OperandType::TENSOR_INT32}, the block
     *      sizes for each spatial dimension of the input tensor. All values
     *      must be >= 1.
     * * 2: An optional {@link OperandType::BOOL} scalar, default to false.
     *      Set to true to specify NCHW data layout for input0 and output0.
     *      Available since API level 29.
     *
     * Outputs:
     * * 0: A tensor of the same {@link OperandType} as input0.
     *      For a {@link OperandType::TENSOR_QUANT8_ASYMM} tensor,
     *      the scale and zeroPoint must be the same as input0.
     */
    BATCH_TO_SPACE_ND = 29 /* @1.1::OperationType:BATCH_TO_SPACE_ND */,
    /**
     * Element-wise division of two tensors.
     *
     * Takes two input tensors of identical {@link OperandType} and compatible
     * dimensions. The output is the result of dividing the first input tensor
     * by the second, optionally modified by an activation function.
     *
     * Two dimensions are compatible when:
     *     1. they are equal, or
     *     2. one of them is 1
     *
     * The size of the output is the maximum size along each dimension of the
     * input operands. It starts with the trailing dimensions, and works its way
     * forward.
     *
     * Example:
     *     input1.dimension =    {4, 1, 2}
     *     input2.dimension = {5, 4, 3, 1}
     *     output.dimension = {5, 4, 3, 2}
     *
     * Since HAL version 1.2, generic zero-sized input tensor is supported. Zero
     * dimension is only compatible with 0 or 1. The size of the output
     * dimension is zero if either of corresponding input dimension is zero.
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_FLOAT16} (since HAL version 1.2)
     * * {@link OperandType::TENSOR_FLOAT32}
     *
     * Supported tensor rank: up to 4
     *
     * Inputs:
     * * 0: An n-D tensor, specifying the first input.
     * * 1: A tensor of the same {@link OperandType}, and compatible dimensions
     *      as input0.
     * * 2: An {@link OperandType::INT32} scalar, and has to be one of the
     *      {@link FusedActivationFunc} values. Specifies the activation to
     *      invoke on the result.
     *
     * Outputs:
     * * 0: A tensor of the same {@link OperandType} as input0.
     */
    DIV = 30 /* @1.1::OperationType:DIV */,
    /**
     * Computes the mean of elements across dimensions of a tensor.
     *
     * Reduces the input tensor along the given dimensions to reduce. Unless
     * keep_dims is true, the rank of the tensor is reduced by 1 for each entry
     * in axis. If keep_dims is true, the reduced dimensions are retained with
     * length 1.
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_FLOAT16} (since HAL version 1.2)
     * * {@link OperandType::TENSOR_FLOAT32}
     * * {@link OperandType::TENSOR_QUANT8_ASYMM}
     *
     * Supported tensor rank: up to 4
     *
     * Inputs:
     * * 0: A tensor, specifying the input.
     * * 1: A 1-D Tensor of {@link OperandType::TENSOR_INT32}. The dimensions
     *      to reduce. Must be in the range
     *      [-rank(input_tensor), rank(input_tensor)).
     *
     *      NOTE: When the operation was introduced, the documentation
     *      incorrectly stated that if dimensions were empty, the operation
     *      would reduce across all dimensions. This behavior was never
     *      implemented.
     *
     * * 2: An {@link OperandType::INT32} scalar, keep_dims. If positive,
     *      retains reduced dimensions with length 1.
     *
     * Outputs:
     * * 0: A tensor of the same {@link OperandType} as input0.
     *      For a {@link OperandType::TENSOR_QUANT8_ASYMM} tensor,
     *      the scale and zeroPoint must be the same as input0.
     *      If all dimensions are reduced and keep_dims is false, the output
     *      shape is [1].
     */
    MEAN = 31 /* @1.1::OperationType:MEAN */,
    /**
     * Pads a tensor.
     *
     * This operation pads a tensor according to the specified paddings.
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_FLOAT16} (since HAL version 1.2)
     * * {@link OperandType::TENSOR_FLOAT32}
     * * {@link OperandType::TENSOR_QUANT8_ASYMM}
     *   (full support since HAL version 1.2, see the output section)
     *
     * Supported tensor rank: up to 4
     *
     * Inputs:
     * * 0: An n-D tensor, specifying the tensor to be padded.
     * * 1: A 2-D Tensor of {@link OperandType::TENSOR_INT32}, the paddings
     *      for each spatial dimension of the input tensor. The shape of the
     *      tensor must be {rank(input0), 2}.
     *      padding[i, 0] specifies the number of elements to be padded in the
     *      front of dimension i.
     *      padding[i, 1] specifies the number of elements to be padded after the
     *      end of dimension i.
     *
     * Outputs:
     * * 0: A tensor of the same {@link OperandType} as input0. The
     *      output tensor has the same rank as input0, and each
     *      dimension of the output tensor has the same size as the
     *      corresponding dimension of the input tensor plus the size
     *      of the padding:
     *          output0.dimension[i] =
     *              padding[i, 0] + input0.dimension[i] + padding[i, 1]
     *      For a {@link OperandType::TENSOR_QUANT8_ASYMM} tensor,
     *      the scale and zeroPoint must be the same as input0.
     *
     *      NOTE: Before HAL version 1.2, the pad value for
     *      {@link OperandType::TENSOR_QUANT8_ASYMM} is undefined.
     *      Since HAL version 1.2, the pad value is always the logical zero.
     */
    PAD = 32 /* @1.1::OperationType:PAD */,
    /**
     * SpaceToBatch for N-Dimensional tensors.
     *
     * This operation divides "spatial" dimensions [1, ..., M] of the input into
     * a grid of blocks of shape block_shape, and interleaves these blocks with
     * the "batch" dimension (0) such that in the output, the spatial dimensions
     * [1, ..., M] correspond to the position within the grid, and the batch
     * dimension combines both the position within a spatial block and the
     * original batch position. Prior to division into blocks, the spatial
     * dimensions of the input are optionally zero padded according to paddings.
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_FLOAT16} (since HAL version 1.2)
     * * {@link OperandType::TENSOR_FLOAT32}
     * * {@link OperandType::TENSOR_QUANT8_ASYMM}
     *   (full support since HAL version 1.2, see the output section)
     *
     * Supported tensor rank: 4, with "NHWC" or "NCHW" data layout.
     * With the default data layout NHWC, the data is stored in the order of:
     * [batch, height, width, channels]. Alternatively, the data layout could
     * be NCHW, the data storage order of: [batch, channels, height, width].
     * NCHW is supported since HAL version 1.2.
     *
     * Inputs:
     * * 0: An n-D tensor, specifying the input.
     * * 1: A 1-D Tensor of {@link OperandType::TENSOR_INT32}, the block
     *      sizes for each spatial dimension of the input tensor. All values
     *      must be >= 1.
     * * 2: A 2-D Tensor of {@link OperandType::TENSOR_INT32}, the paddings
     *      for each spatial dimension of the input tensor. All values must be
     *      >= 0. The shape of the tensor must be {M, 2}, where M is the number
     *      of spatial dimensions.
     *      padding[i, 0] specifies the number of element to be padded in the
     *      front of dimension i.
     *      padding[i, 1] specifies the number of element to be padded after the
     *      end of dimension i.
     * * 3: An optional {@link OperandType::BOOL} scalar, default to false.
     *      Set to true to specify NCHW data layout for input0 and output0.
     *      Available since HAL version 1.2.
     *
     * Outputs:
     * * 0: A tensor of the same {@link OperandType} as input0.
     *      For a {@link OperandType::TENSOR_QUANT8_ASYMM} tensor,
     *      the scale and zeroPoint must be the same as input0.
     *
     *      NOTE: Before HAL version 1.2, the pad value for
     *      {@link OperandType::TENSOR_QUANT8_ASYMM} is undefined.
     *      Since HAL version 1.2, the pad value is always the logical zero.
     */
    SPACE_TO_BATCH_ND = 33 /* @1.1::OperationType:SPACE_TO_BATCH_ND */,
    /**
     * Removes dimensions of size 1 from the shape of a tensor.
     *
     * Given a tensor input, this operation returns a tensor of the same
     * {@link OperandType} with all dimensions of size 1 removed. If you don't
     * want to remove all size 1 dimensions, you can remove specific size 1
     * dimensions by specifying the axes (input1).
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_FLOAT16} (since HAL version 1.2)
     * * {@link OperandType::TENSOR_FLOAT32}
     * * {@link OperandType::TENSOR_QUANT8_ASYMM}
     *
     * Supported tensor rank: up to 4
     *
     * Inputs:
     * * 0: An n-D tensor, the tensor to be squeezed.
     * * 1: An optional 1-D tensor of {@link OperandType::TENSOR_INT32}. The
     *      dimensions to squeeze. If specified only squeezes the dimensions
     *      listed. Otherwise, squeezes all dimensions. The dimension index
     *      starts at 0. An error must be reported if squeezing a dimension that
     *      is not 1.
     *
     * Outputs:
     * * 0: A tensor of the same {@link OperandType} as input0. Contains the
     *      same data as input, but has one or more dimensions of size 1
     *      removed.
     *      For a {@link OperandType::TENSOR_QUANT8_ASYMM} tensor,
     *      the scale and zeroPoint must be the same as input0.
     *      If all input dimensions are equal to 1 and are to be squeezed, the
     *      output shape is [1].
     */
    SQUEEZE = 34 /* @1.1::OperationType:SQUEEZE */,
    /**
     * Extracts a strided slice of a tensor.
     *
     * Roughly speaking, this op extracts a slice of size (end - begin) / stride
     * from the given input tensor. Starting at the location specified by begin
     * the slice continues by adding stride to the index until all dimensions
     * are not less than end. Note that a stride can be negative, which causes a
     * reverse slice.
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_FLOAT16} (since HAL version 1.2)
     * * {@link OperandType::TENSOR_FLOAT32}
     * * {@link OperandType::TENSOR_QUANT8_ASYMM}
     *
     * Supported tensor rank: up to 4
     *
     * Inputs:
     * * 0: An n-D tensor, specifying the tensor to be sliced.
     * * 1: begin, a 1-D tensor of {@link OperandType::TENSOR_INT32}. The
     *      starts of the dimensions of the input tensor to be sliced. The
     *      length must be of rank(input0).
     * * 2: end, a 1-D tensor of {@link OperandType::TENSOR_INT32}. The
     *      ends of the dimensions of the input tensor to be sliced. The length
     *      must be of rank(input0).
     * * 3: strides, a 1-D tensor of {@link OperandType::TENSOR_INT32}. The
     *      strides of the dimensions of the input tensor to be sliced. The
     *      length must be of rank(input0). The entries must be non-zero.
     * * 4: begin_mask, an {@link OperandType::INT32} scalar. If the ith bit
     *      of begin_mask is set, begin[i] is ignored and the fullest possible
     *      range in that dimension is used instead.
     * * 5: end_mask, an {@link OperandType::INT32} scalar. If the ith bit of
     *      end_mask is set, end[i] is ignored and the fullest possible range in
     *      that dimension is used instead.
     * * 6: shrink_axis_mask, an {@link OperandType::INT32} scalar. If the
     *      ith bit of shrink_axis_mask is set, the ith dimension specification
     *      shrinks the dimensionality by 1, taking on the value at index
     *      begin[i]. In this case, the ith specification must define a
     *      slice of size 1, e.g. begin[i] = x, end[i] = x + 1.
     *
     * Outputs:
     * * 0: A tensor of the same {@link OperandType} as input0 and rank (n - k),
     *      where k is the number of bits set in shrink_axis_mask.
     *      For a {@link OperandType::TENSOR_QUANT8_ASYMM} tensor,
     *      the scale and zeroPoint must be the same as input0.
     *      If shrink_axis_mask is true for all input dimensions, the output
     *      shape is [1].
     */
    STRIDED_SLICE = 35 /* @1.1::OperationType:STRIDED_SLICE */,
    /**
     * Element-wise subtraction of two tensors.
     *
     * Takes two input tensors of identical {@link OperandType} and compatible
     * dimensions. The output is the result of subtracting the second input
     * tensor from the first one, optionally modified by an activation function.
     *
     * Two dimensions are compatible when:
     *     1. they are equal, or
     *     2. one of them is 1
     *
     * The size of the output is the maximum size along each dimension of the
     * input operands. It starts with the trailing dimensions, and works its way
     * forward.
     *
     * Example:
     *     input1.dimension =    {4, 1, 2}
     *     input2.dimension = {5, 4, 3, 1}
     *     output.dimension = {5, 4, 3, 2}
     *
     * Since HAL version 1.2, generic zero-sized input tensor is supported. Zero
     * dimension is only compatible with 0 or 1. The size of the output
     * dimension is zero if either of corresponding input dimension is zero.
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_FLOAT16} (since HAL version 1.2)
     * * {@link OperandType::TENSOR_FLOAT32}
     * * {@link OperandType::TENSOR_QUANT8_ASYMM} (since HAL version 1.2)
     *
     * Supported tensor rank: up to 4
     *
     * Inputs:
     * * 0: An n-D tensor, specifying the first input.
     * * 1: A tensor of the same {@link OperandType}, and compatible dimensions
     *      as input0.
     * * 2: An {@link OperandType::INT32} scalar, and has to be one of the
     *      {@link FusedActivationFunc} values. Specifies the activation to
     *      invoke on the result.
     *
     * Outputs:
     * * 0: A tensor of the same {@link OperandType} as input0.
     *      For a {@link OperandType::TENSOR_QUANT8_ASYMM} tensor,
     *      the scale and zeroPoint can be different from inputs' scale and zeroPoint.
     */
    SUB = 36 /* @1.1::OperationType:SUB */,
    /**
     * Transposes the input tensor, permuting the dimensions according to the
     * perm tensor.
     *
     * The returned tensor's dimension i corresponds to the input dimension
     * perm[i]. If perm is not given, it is set to (n-1...0), where n is the
     * rank of the input tensor. Hence by default, this operation performs a
     * regular matrix transpose on 2-D input Tensors.
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_FLOAT16} (since HAL version 1.2)
     * * {@link OperandType::TENSOR_FLOAT32}
     * * {@link OperandType::TENSOR_QUANT8_ASYMM}
     *
     * Supported tensor rank: up to 4
     *
     * Inputs:
     * * 0: An n-D tensor, specifying the tensor to be transposed.
     *      Since HAL version 1.2, this tensor may be zero-sized.
     * * 1: An optional 1-D Tensor of {@link OperandType::TENSOR_INT32},
     *      the permutation of the dimensions of the input tensor.
     *
     * Outputs:
     * * 0: A tensor of the same {@link OperandType} as input0.
     *      For a {@link OperandType::TENSOR_QUANT8_ASYMM} tensor,
     *      the scale and zeroPoint must be the same as input0.
     */
    TRANSPOSE = 37 /* @1.1::OperationType:TRANSPOSE */,
    /**
     * Computes the absolute value of a tensor, element-wise.
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_FLOAT16}
     * * {@link OperandType::TENSOR_FLOAT32}
     *
     * Supported tensor rank: from 1.
     *
     * Inputs:
     * * 0: A tensor.
     *
     * Outputs:
     * * 0: The output tensor of same shape as input0.
     */
    ABS = 38,
    /**
     * Returns the index of the largest element along an axis.
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_FLOAT16}
     * * {@link OperandType::TENSOR_FLOAT32}
     * * {@link OperandType::TENSOR_INT32}
     * * {@link OperandType::TENSOR_QUANT8_ASYMM}
     *
     * Supported tensor rank: from 1
     *
     * Inputs:
     * * 0: An n-D tensor specifying the input. Must be non-empty.
     * * 1: An {@link OperandType::INT32} scalar specifying the axis to
     *      reduce across. Negative index is used to specify axis from the
     *      end (e.g. -1 for the last axis). Must be in the range [-n, n).
     *
     * Outputs:
     * * 0: An (n - 1)-D {@link OperandType::TENSOR_INT32} tensor.
     *      If input is 1-dimensional, the output shape is [1].
     */
    ARGMAX = 39,
    /**
     * Returns the index of the smallest element along an axis.
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_FLOAT16}
     * * {@link OperandType::TENSOR_FLOAT32}
     * * {@link OperandType::TENSOR_INT32}
     * * {@link OperandType::TENSOR_QUANT8_ASYMM}
     *
     * Supported tensor rank: from 1
     *
     * Inputs:
     * * 0: An n-D tensor specifying the input. Must be non-empty.
     * * 1: An {@link OperandType::INT32} scalar specifying the axis to
     *      reduce across. Negative index is used to specify axis from the
     *      end (e.g. -1 for the last axis). Must be in the range [-n, n).
     *
     * Outputs:
     * * 0: An (n - 1)-D {@link OperandType::TENSOR_INT32} tensor.
     *      If input is 1-dimensional, the output shape is [1].
     */
    ARGMIN = 40,
    /**
     * Transform axis-aligned bounding box proposals using bounding box deltas.
     *
     * Given the positions of bounding box proposals and the corresponding
     * bounding box deltas for each class, return the refined bounding box
     * regions. The resulting bounding boxes are cliped against the edges of
     * the image.
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_FLOAT16}
     * * {@link OperandType::TENSOR_FLOAT32}
     * * {@link OperandType::TENSOR_QUANT16_ASYMM}
     *
     * Inputs:
     * * 0: A 2-D Tensor of shape [num_rois, 4], specifying the locations of the
     *      bounding box proposals, each line with format [x1, y1, x2, y2].
     *      For tensor of type {@link OperandType::TENSOR_QUANT16_ASYMM},
     *      the zeroPoint must be 0 and the scale must be 0.125. Zero num_rois
     *      is supported for this tensor.
     * * 1: A 2-D Tensor of shape [num_rois, num_classes * 4], specifying the
     *      bounding box delta for each region of interest and each class. The
     *      bounding box deltas are organized in the following order
     *      [dx, dy, dw, dh], where dx and dy is the relative correction factor
     *      for the center position of the bounding box with respect to the width
     *      and height, dw and dh is the log-scale relative correction factor
     *      for the width and height. For input0 of type
     *      {@link OperandType::TENSOR_QUANT16_ASYMM}, this tensor should be
     *      of {@link OperandType::TENSOR_QUANT8_ASYMM}. Zero num_rois is
     *      supported for this tensor.
     * * 2: An 1-D {@link OperandType::TENSOR_INT32} tensor, of shape
     *      [num_rois], specifying the batch index of each box. Boxes with
     *      the same batch index are grouped together. Zero num_rois is
     *      supported for this tensor.
     * * 3: A 2-D Tensor of shape [batches, 2], specifying the information of
     *      each image in the batch, each line with format
     *      [image_height, image_width].
     *
     * Outputs:
     * * 0: A tensor of the same {@link OperandType} as input0, with shape
     *      [num_rois, num_classes * 4], specifying the coordinates of each
     *      output bounding box for each class, with format [x1, y1, x2, y2].
     *      For type of {@link OperandType::TENSOR_QUANT16_ASYMM}, the
     *      scale must be 0.125 and the zero point must be 0.
     */
    AXIS_ALIGNED_BBOX_TRANSFORM = 41,
    /**
     * A recurrent neural network layer that applies an LSTM cell to a
     * sequence of inputs in forward and backward directions.
     *
     * The op supports cross-linking via an auxiliary input. Regular cell feeds
     * one input into the two RNN cells in the following way:
     *
     *       INPUT  (INPUT_REVERSED)
     *         |         |
     *    ---------------------
     *    | FW_LSTM   BW_LSTM |
     *    ---------------------
     *         |         |
     *      FW_OUT     BW_OUT
     *
     * An op with cross-linking takes two inputs and feeds them into the RNN
     * cells in the following way:
     *
     *       AUX_INPUT   (AUX_INPUT_REVERSED)
     *           |             |
     *     INPUT | (INPUT_R'D.)|
     *       |   |       |     |
     *    -----------------------
     *    |  \  /        \    / |
     *    | FW_LSTM     BW_LSTM |
     *    -----------------------
     *         |           |
     *      FW_OUT      BW_OUT
     *
     * The cross-linking mode is enabled iff auxiliary input and auxiliary
     * weights are present. While stacking this op on top of itself, this
     * allows to connect both forward and backward outputs from previous cell
     * to the next cell's input.
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_FLOAT16}
     * * {@link OperandType::TENSOR_FLOAT32}
     *
     * Supported tensor rank: 3, either time-major or batch-major.
     *
     * All input and output tensors must be of the same type.
     *
     * Inputs:
     * * 0: The input.
     *      A 3-D tensor of shape:
     *        If time-major: [max_time, batch_size, input_size]
     *        If batch-major: [batch_size, max_time, input_size]
     *      where "max_time" is the number of timesteps (sequence length),
     *      "batch_size" corresponds to the batching dimension, and
     *      "input_size" is the size of the input.
     * * 1: The forward input-to-input weights. Optional.
     *      A 2-D tensor of shape [fw_num_units, input_size], where “fw_num_units”
     *      corresponds to the number of forward cell units.
     * * 2: The forward input-to-forget weights.
     *      A 2-D tensor of shape [fw_num_units, input_size].
     * * 3: The forward input-to-cell weights.
     *      A 2-D tensor of shape [fw_num_units, input_size].
     * * 4: The forward input-to-output weights.
     *      A 2-D tensor of shape [fw_num_units, input_size].
     * * 5: The forward recurrent-to-input weights. Optional.
     *      A 2-D tensor of shape [fw_num_units, fw_output_size], where “fw_output_size”
     *      corresponds to either the number of cell units (i.e., fw_num_units),
     *      or the second dimension of the “fw_projection_weights”, if defined.
     * * 6: The forward recurrent-to-forget weights.
     *      A 2-D tensor of shape [fw_num_units, fw_output_size].
     * * 7: The forward recurrent-to-cell weights.
     *      A 2-D tensor of shape [fw_num_units, fw_output_size].
     * * 8: The forward recurrent-to-output weights.
     *      A 2-D tensor of shape [fw_num_units, fw_output_size].
     * * 9: The forward cell-to-input weights. Optional.
     *      A 1-D tensor of shape [fw_num_units].
     * * 10: The forward cell-to-forget weights. Optional.
     *       A 1-D tensor of shape [fw_num_units].
     * * 11: The forward cell-to-output weights. Optional.
     *       A 1-D tensor of shape [fw_num_units].
     * * 12: The forward input gate bias. Optional.
     *       A 1-D tensor of shape [fw_num_units].
     * * 13: The forward forget gate bias.
     *       A 1-D tensor of shape [fw_num_units].
     * * 14: The forward cell gate bias.
     *       A 1-D tensor of shape [fw_num_units].
     * * 15: The forward output gate bias.
     *       A 1-D tensor of shape [fw_num_units].
     * * 16: The forward projection weights. Optional.
     *       A 2-D tensor of shape [fw_output_size, fw_num_units].
     * * 17: The forward projection bias. Optional.
     *       A 1-D tensor of shape [fw_output_size].
     * * 18: The backward input-to-input weights. Optional.
     *       A 2-D tensor of shape [bw_num_units, input_size], where “bw_num_units”
     *       corresponds to the number of backward cell units.
     * * 19: The backward input-to-forget weights.
     *       A 2-D tensor of shape [bw_num_units, input_size].
     * * 20: The backward input-to-cell weights.
     *       A 2-D tensor of shape [bw_num_units, input_size].
     * * 21: The backward input-to-output weights.
     *       A 2-D tensor of shape [bw_num_units, input_size].
     * * 22: The backward recurrent-to-input weights. Optional.
     *       A 2-D tensor of shape [bw_num_units, bw_output_size], where “bw_output_size”
     *       corresponds to either the number of cell units (i.e., “bw_num_units”),
     *       or the second dimension of the “bw_projection_weights”, if defined.
     * * 23: The backward recurrent-to-forget weights.
     *       A 2-D tensor of shape [bw_num_units, bw_output_size].
     * * 24: The backward recurrent-to-cell weights.
     *       A 2-D tensor of shape [bw_num_units, bw_output_size].
     * * 25: The backward recurrent-to-output weights.
     *       A 2-D tensor of shape [bw_num_units, bw_output_size].
     * * 26: The backward cell-to-input weights. Optional.
     *       A 1-D tensor of shape [bw_num_units].
     * * 27: The backward cell-to-forget weights. Optional.
     *       A 1-D tensor of shape [bw_num_units].
     * * 28: The backward cell-to-output weights. Optional.
     *       A 1-D tensor of shape [bw_num_units].
     * * 29: The backward input gate bias. Optional.
     *       A 1-D tensor of shape [bw_num_units].
     * * 30: The backward forget gate bias.
     *       A 1-D tensor of shape [bw_num_units].
     * * 31: The backward cell gate bias.
     *       A 1-D tensor of shape [bw_num_units].
     * * 32: The backward output gate bias.
     *       A 1-D tensor of shape [bw_num_units].
     * * 33: The backward projection weights. Optional.
     *       A 2-D tensor of shape [bw_output_size, bw_num_units].
     * * 34: The backward projection bias. Optional.
     *       A 1-D tensor of shape [bw_output_size].
     * * 35: The forward input activation state.
     *       A 2-D tensor of shape [batch_size, bw_output_size].
     * * 36: The forward input cell state.
     *       A 2-D tensor of shape [batch_size, bw_num_units].
     * * 37: The backward input activation state.
     *       A 2-D tensor of shape [batch_size, bw_output_size].
     * * 38: The backward input cell state.
     *       A 2-D tensor of shape [batch_size, bw_num_units].
     * * 39: The auxiliary input. Optional.
     *       A 3-D tensor of shape [max_time, batch_size, input_size], where “batch_size”
     *       corresponds to the batching dimension, and “input_size” is the size
     *       of the input.
     * * 40: The forward auxiliary input-to-input weights. Optional.
     *       A 2-D tensor of shape [fw_num_units, input_size].
     * * 41: The forward auxiliary input-to-forget weights. Optional.
     *       A 2-D tensor of shape [fw_num_units, input_size].
     * * 42: The forward auxiliary input-to-cell weights. Optional.
     *       A 2-D tensor of shape [fw_num_units, input_size].
     * * 43: The forward auxiliary input-to-output weights. Optional.
     *       A 2-D tensor of shape [fw_num_units, input_size].
     * * 44: The backward auxiliary input-to-input weights. Optional.
     *       A 2-D tensor of shape [bw_num_units, input_size].
     * * 45: The backward auxiliary input-to-forget weights. Optional.
     *       A 2-D tensor of shape [bw_num_units, input_size].
     * * 46: The backward auxiliary input-to-cell weights. Optional.
     *       A 2-D tensor of shape [bw_num_units, input_size].
     * * 47: The backward auxiliary input-to-output weights. Optional.
     *       A 2-D tensor of shape [bw_num_units, input_size].
     * * 48: The activation function.
     *       A value indicating the activation function:
     *       <ul>
     *       <li>0: None;
     *       <li>1: Relu;
     *       <li>3: Relu6;
     *       <li>4: Tanh;
     *       <li>6: Sigmoid.
     *       </ul>
     * * 49: The clipping threshold for the cell state, such
     *       that values are bound within [-cell_clip, cell_clip]. If set to 0.0
     *       then clipping is disabled.
     *       If all the input tensors have type {@link OperandType::TENSOR_FLOAT32},
     *       this scalar must be of the type {@link OperandType::FLOAT32},
     *       otherwise if all the input tensors have the type
     *       {@link OperandType::TENSOR_FLOAT16}, this scalar must be
     *       of type {@link OperandType::FLOAT16}.
     * * 50: The clipping threshold for the output from the
     *       projection layer, such that values are bound within
     *       [-proj_clip, proj_clip]. If set to 0.0 then clipping is disabled.
     *       If all the input tensors have type {@link OperandType::TENSOR_FLOAT32},
     *       this scalar must be of the type {@link OperandType::FLOAT32},
     *       otherwise if all the input tensors have the type
     *       {@link OperandType::TENSOR_FLOAT16}, this scalar must be
     *       of type {@link OperandType::FLOAT16}.
     * * 51: merge_outputs
     *       An {@link OperandType::BOOL} scalar specifying if the outputs
     *       from forward and backward cells should be merged.
     * * 52: time_major
     *       An {@link OperandType::BOOL} scalar specifying the shape format
     *       of input and output tensors.
     * * 53: The forward input layer normalization weights. Optional.
     *       A 1-D tensor of shape [fw_num_units]. Used to rescale normalized inputs
     *       to activation at input gate.
     * * 54: The forward forget layer normalization weights. Optional.
     *       A 1-D tensor of shape [fw_num_units]. Used to rescale normalized inputs
     *       to activation at forget gate.
     * * 55: The forward cell layer normalization weights. Optional.
     *       A 1-D tensor of shape [fw_num_units]. Used to rescale normalized inputs
     *       to activation at cell gate.
     * * 56: The forward output layer normalization weights. Optional.
     *       A 1-D tensor of shape [fw_num_units]. Used to rescale normalized inputs
     *       to activation at output gate.
     * * 57: The backward input layer normalization weights. Optional.
     *       A 1-D tensor of shape [bw_num_units]. Used to rescale normalized inputs
     *       to activation at input gate.
     * * 58: The backward forget layer normalization weights. Optional.
     *       A 1-D tensor of shape [bw_num_units]. Used to rescale normalized inputs
     *       to activation at forget gate.
     * * 59: The backward cell layer normalization weights. Optional.
     *       A 1-D tensor of shape [bw_num_units]. Used to rescale normalized inputs
     *       to activation at cell gate.
     * * 60: The backward output layer normalization weights. Optional.
     *       A 1-D tensor of shape [bw_num_units]. Used to rescale normalized inputs
     *       to activation at output gate.
     *
     * Outputs:
     * * 0: The forward output.
     *      A 3-D tensor of shape:
     *        If time-major and not merge_outputs:
     *          [max_time, batch_size, fw_output_size]
     *        If time-major and merge_outputs:
     *          [max_time, batch_size, fw_output_size + bw_output_size]
     *        If batch-major and not merge_outputs:
     *          [batch_size, max_time, fw_output_size]
     *        If batch-major and merge_outputs:
     *          [batch_size, max_time, fw_output_size + bw_output_size]
     * * 1: The backward output.  Unused if merge_outputs is true.
     *      A 3-D tensor of shape:
     *        If time-major: [max_time, batch_size, bw_output_size]
     *        If batch-major: [batch_size, max_time, bw_output_size]
     */
    BIDIRECTIONAL_SEQUENCE_LSTM = 42,
    /**
     * A recurrent neural network layer that applies a basic RNN cell to a
     * sequence of inputs in forward and backward directions.
     *
     * This Op unrolls the input along the sequence dimension, and implements
     * the following operation for each element in the sequence s =
     * 1...sequence_length:
     *   fw_outputs[s] = fw_state = activation(inputs[s] * fw_input_weights’ +
     *          fw_state * fw_recurrent_weights’ + fw_bias)
     *
     * And for each element in sequence t = sequence_length : 1
     *   bw_outputs[t] = bw_state = activation(inputs[t] * bw_input_weights’ +
     *          bw_state * bw_recurrent_weights’ + bw_bias)
     *
     * Where:
     * * “{fw,bw}_input_weights” is a weight matrix that multiplies the inputs;
     * * “{fw,bw}_recurrent_weights” is a weight matrix that multiplies the
     *    current “state” which itself is the output from the previous time step
     *    computation;
     * * “{fw,bw}_bias” is a bias vector (added to each output vector in the
     *    batch);
     * * “activation” is the function passed as the “fused_activation_function”
     *   argument (if not “NONE”).
     *
     * The op supports cross-linking via an auxiliary input. Regular cell feeds
     * one input into the two RNN cells in the following way:
     *
     *       INPUT  (INPUT_REVERSED)
     *         |         |
     *    ---------------------
     *    | FW_RNN     BW_RNN |
     *    ---------------------
     *         |         |
     *      FW_OUT     BW_OUT
     *
     * An op with cross-linking takes two inputs and feeds them into the RNN
     * cells in the following way:
     *
     *       AUX_INPUT   (AUX_INPUT_REVERSED)
     *           |             |
     *     INPUT | (INPUT_R'D.)|
     *       |   |       |     |
     *    -----------------------
     *    |  \  /        \    / |
     *    | FW_RNN       BW_RNN |
     *    -----------------------
     *         |           |
     *      FW_OUT      BW_OUT
     *
     * The cross-linking mode is enabled iff auxiliary input and auxiliary
     * weights are present. While stacking this op on top of itself, this
     * allows to connect both forward and backward outputs from previous cell
     * to the next cell's input.
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_FLOAT16}
     * * {@link OperandType::TENSOR_FLOAT32}
     *
     * The input tensors must all be the same type.
     *
     * Inputs:
     * * 0: input.
     *      A 3-D tensor. The shape is defined by the input 6 (timeMajor). If
     *      it is set to true, then the input has a shape [maxTime, batchSize,
     *      inputSize], otherwise the input has a shape [batchSize, maxTime,
     *      inputSize].
     * * 1: fwWeights.
     *      A 2-D tensor of shape [fwNumUnits, inputSize].
     * * 2: fwRecurrentWeights.
     *      A 2-D tensor of shape [fwNumUnits, fwNumUnits].
     * * 3: fwBias.
     *      A 1-D tensor of shape [fwNumUnits].
     * * 4: fwHiddenState.
     *      A 2-D tensor of shape [batchSize, fwNumUnits]. Specifies a hidden
     *      state input for the first time step of the computation.
     * * 5: bwWeights.
     *      A 2-D tensor of shape [bwNumUnits, inputSize].
     * * 6: bwRecurrentWeights.
     *      A 2-D tensor of shape [bwNumUnits, bwNumUnits].
     * * 7: bwBias.
     *      A 1-D tensor of shape [bwNumUnits].
     * * 8: bwHiddenState
     *      A 2-D tensor of shape [batchSize, bwNumUnits]. Specifies a hidden
     *      state input for the first time step of the computation.
     * * 9: auxInput.
     *      A 3-D tensor. The shape is the same as of the input 0.
     * * 10:fwAuxWeights.
     *      A 2-D tensor of shape [fwNumUnits, inputSize].
     * * 11:bwAuxWeights.
     *      A 2-D tensor of shape [bwNumUnits, inputSize].
     * * 12:fusedActivationFunction.
     *      A {@link FusedActivationFunc} value indicating the activation function. If
     *      “NONE” is specified then it results in a linear activation.
     * * 13:timeMajor
     *      An {@link OperandType::BOOL} scalar specifying the shape format
     *      of input and output tensors.
     * * 14:mergeOutputs
     *      An {@link OperandType::BOOL} scalar specifying if the outputs
     *      from forward and backward cells are separate (if set to false) or
     *      concatenated (if set to true).
     * Outputs:
     * * 0: fwOutput.
     *      A 3-D tensor. The first two dimensions of the shape are defined by
     *      the input 6 (timeMajor) and the third dimension is defined by the
     *      input 14 (mergeOutputs). If timeMajor is set to true, then the first
     *      two dimensions are [maxTime, batchSize], otherwise they are set to
     *      [batchSize, maxTime]. If mergeOutputs is set to true, then the third
     *      dimension is equal to (fwNumUnits + bwNumUnits), otherwise it is set
     *      to fwNumUnits.
     * * 1: bwOutput.
     *      A 3-D tensor. If the input 14 (mergeOutputs) is set to true, then
     *      this tensor is not produced. The shape is defined by the input 6
     *      (timeMajor). If it is set to true, then the shape is set to
     *      [maxTime, batchSize, bwNumUnits], otherwise the shape is set to
     *      [batchSize, maxTime, bwNumUnits].
     */
    BIDIRECTIONAL_SEQUENCE_RNN = 43,
    /**
     * Greedily selects a subset of bounding boxes in descending order of score.
     *
     * This op applies NMS algorithm to each class. In each loop of execution,
     * the box with maximum score gets selected and removed from the pending set.
     * The scores of the rest of boxes are lowered according to the
     * intersection-over-union (IOU) overlapping with the previously selected
     * boxes and a specified NMS kernel method. Any boxes with score less
     * than a threshold are removed from the pending set.
     *
     * Three NMS kernels are supported:
     * * Hard:     score_new = score_old * (1 if IoU < threshold else 0)
     * * Linear:   score_new = score_old * (1 if IoU < threshold else 1 - IoU)
     * * Gaussian: score_new = score_old * exp(- IoU^2 / sigma)
     *
     * Axis-aligned bounding boxes are represented by its upper-left corner
     * coordinate (x1,y1) and lower-right corner coordinate (x2,y2). A valid
     * bounding box should satisfy x1 <= x2 and y1 <= y2.
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_FLOAT16}
     * * {@link OperandType::TENSOR_FLOAT32}
     * * {@link OperandType::TENSOR_QUANT8_ASYMM}
     *
     * Inputs:
     * * 0: A 2-D Tensor of shape [num_rois, num_classes], specifying the score
     *      of each bounding box proposal. The boxes are grouped by batches in the
     *      first dimension. Zero num_rois is supported for this tensor.
     * * 1: A 2-D Tensor specifying the bounding boxes of shape
     *      [num_rois, num_classes * 4], organized in the order [x1, y1, x2, y2].
     *      The boxes are grouped by batches in the first dimension. The sequential
     *      order of the boxes corresponds with input0. For input0 of type
     *      {@link OperandType::TENSOR_QUANT8_ASYMM}, this tensor should be of
     *      {@link OperandType::TENSOR_QUANT16_ASYMM}, with zeroPoint of 0 and
     *      scale of 0.125.
     *      Zero num_rois is supported for this tensor.
     * * 2: A 1-D {@link OperandType::TENSOR_INT32} tensor, of shape
     *      [num_rois], specifying the batch index of each box. Boxes with
     *      the same batch index are grouped together.
     * * 3: An {@link OperandType::FLOAT32} scalar, score_threshold. Boxes
     *      with scores lower than the threshold are filtered before sending
     *      to the NMS algorithm.
     * * 4: An {@link OperandType::INT32} scalar, specifying the maximum
     *      number of selected bounding boxes for each image. Set to a negative
     *      value for unlimited number of output bounding boxes.
     * * 5: An {@link OperandType::INT32} scalar, specifying the NMS
     *      kernel method, options are 0:hard, 1:linear, 2:gaussian.
     * * 6: An {@link OperandType::FLOAT32} scalar, specifying the IoU
     *      threshold in hard and linear NMS kernel. This field is ignored if
     *      gaussian kernel is selected.
     * * 7: An {@link OperandType::FLOAT32} scalar, specifying the sigma in
     *      gaussian NMS kernel. This field is ignored if gaussian kernel is
     *      not selected.
     * * 8: An {@link OperandType::FLOAT32} scalar, nms_score_threshold.
     *      Boxes with scores lower than the threshold are dropped during the
     *      score updating phase in soft NMS.
     *
     * Outputs:
     * * 0: A 1-D Tensor of the same {@link OperandType} as input0, with shape
     *      [num_output_rois], specifying the score of each output box. The boxes
     *      are grouped by batches, but the sequential order in each batch is not
     *      guaranteed. For type of {@link OperandType::TENSOR_QUANT8_ASYMM},
     *      guaranteed. For type of {@link OperandType::TENSOR_QUANT8_ASYMM}
     *      the scale and zero point must be the same as input0.
     * * 1: A 2-D Tensor of the same {@link OperandType} as input1, with shape
     *      [num_output_rois, 4], specifying the coordinates of each
     *      output bounding box with the same format as input1. The sequential
     *      order of the boxes corresponds with output0. For type of
     *      {@link OperandType::TENSOR_QUANT16_ASYMM}, the scale must be
     *      0.125 and the zero point must be 0.
     * * 2: A 1-D {@link OperandType::TENSOR_INT32} tensor, of shape
     *      [num_output_rois], specifying the class of each output box. The
     *      sequential order of the boxes corresponds with output0.
     * * 3: A 1-D {@link OperandType::TENSOR_INT32} tensor, of shape
     *      [num_output_rois], specifying the batch index of each box. Boxes
     *      with the same batch index are grouped together.
     */
    BOX_WITH_NMS_LIMIT = 44,
    /**
     * Casts a tensor to a type.
     *
     * This operation ignores the scale and zeroPoint of quanized tensors,
     * e.g. it treats a {@link OperandType::TENSOR_QUANT8_ASYMM} input
     * as a tensor of uint8 values.
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_FLOAT16}
     * * {@link OperandType::TENSOR_FLOAT32}
     * * {@link OperandType::TENSOR_INT32}
     * * {@link OperandType::TENSOR_QUANT8_ASYMM}
     *
     * Supported tensor rank: from 1
     *
     * Inputs:
     * * 0: A tensor.
     *
     * Outputs:
     * * 0: A tensor with the same shape as input0.
     */
    CAST = 45,
    /**
     * Shuffle the channels of the input tensor.
     *
     * Given an input tensor and a integer value of num_groups, CHANNEL_SHUFFLE
     * divide the channel dimension into num_groups groups, and reorganize the
     * channels by grouping channels with the same index in each group.
     *
     * Along the channel dimension, the output is calculated using this formula:
     *
     *     output_channel[k * num_groups + g] = input_channel[g * group_size + k]
     *
     * where group_size = num_channels / num_groups
     *
     * The number of channels must be divisible by num_groups.
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_FLOAT16}
     * * {@link OperandType::TENSOR_FLOAT32}
     * * {@link OperandType::TENSOR_QUANT8_ASYMM}
     *
     * Supported tensor rank: up to 4
     *
     * Inputs:
     * * 0: An n-D tensor, specifying the tensor to be shuffled.
     * * 1: An {@link OperandType::INT32} scalar, specifying the number of
     *      groups.
     * * 2: An {@link OperandType::INT32} scalar, specifying the dimension
     *      channel shuffle would be performed on. Negative index is used to
     *      specify axis from the end (e.g. -1 for the last axis). Must be in
     *      the range [-n, n).
     *
     * Outputs:
     * * 0: A tensor of the same {@link OperandType} and same shape as input0.
     *      For a {@link OperandType::TENSOR_QUANT8_ASYMM} tensor,
     *      the scale and zeroPoint must be the same as input0.
     */
    CHANNEL_SHUFFLE = 46,
    /**
     * Apply postprocessing steps to bounding box detections.
     *
     * Bounding box detections are generated by applying transformation on a set
     * of predefined anchors with the bounding box deltas from bounding box
     * regression. A final step of hard NMS is applied to limit the number of
     * returned boxes.
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_FLOAT16}
     * * {@link OperandType::TENSOR_FLOAT32}
     *
     * Inputs:
     * * 0: A 3-D Tensor of shape [batches, num_anchors, num_classes], specifying
     *      the score of each anchor with each class. Class 0 for each
     *      [batches, num_anchors, 0] is background and will be ignored.
     * * 1: A 3-D Tensor of shape [batches, num_anchors, length_box_encoding], with
     *      the first four values in length_box_encoding specifying the bounding
     *      box deltas. The box deltas are encoded in the order of [dy, dx, dh, dw],
     *      where dy and dx is the linear-scale relative correction factor for the
     *      center position of the bounding box with respect to the width and height,
     *      dh and dw is the log-scale relative correction factor for the width and
     *      height. All the entries in length_box_encoding beyond the first four
     *      values are ignored in this operation.
     * * 2: A 2-D Tensor of shape [num_anchors, 4], specifying the shape of each
     *      predefined anchor, with format [ctr_y, ctr_x, h, w], where ctr_y and
     *      ctr_x are the center position of the box, and h and w are the height
     *      and the width.
     * * 3: An {@link OperandType::FLOAT32} scalar, specifying the scaling
     *      factor for dy in bounding box deltas.
     * * 4: An {@link OperandType::FLOAT32} scalar, specifying the scaling
     *      factor for dx in bounding box deltas.
     * * 5: An {@link OperandType::FLOAT32} scalar, specifying the scaling
     *      factor for dh in bounding box deltas.
     * * 6: An {@link OperandType::FLOAT32} scalar, specifying the scaling
     *      factor for dw in bounding box deltas.
     * * 7: An {@link OperandType::BOOL} scalar, set to true to use regular
     *      multi-class NMS algorithm that do NMS separately for each class,
     *      set to false for a faster algorithm that only do one single NMS
     *      using the highest class score..
     * * 8: An {@link OperandType::INT32} scalar, max_num_detections, specifying
     *      the maximum number of boxes for the output. Boxes with the lowest
     *      scores are discarded to meet the limit.
     * * 9: An {@link OperandType::INT32} scalar, only used when input7 is
     *      set to false, specifying the maximum number of classes per detection.
     * * 10: An {@link OperandType::INT32} scalar, only used when input7 is
     *       set to true, specifying the maximum number of detections when
     *       applying NMS algorithm for each single class.
     * * 11: A scalar, score_threshold. Boxes with scores lower than the
     *       threshold are filtered before sending to the NMS algorithm. The
     *       scalar must be of {@link OperandType::FLOAT16} if input0 is of
     *       {@link OperandType::TENSOR_FLOAT16} and of
     *       {@link OperandType::FLOAT32} if input0 is of
     *       {@link OperandType::TENSOR_FLOAT32}.
     * * 12: A scalar, specifying the IoU threshold for hard NMS. The scalar
     *       must be of {@link OperandType::FLOAT16} if input0 is of
     *       {@link OperandType::TENSOR_FLOAT16} and of
     *       {@link OperandType::FLOAT32} if input0 is of
     *       {@link OperandType::TENSOR_FLOAT32}.
     * * 13: An {@link OperandType::BOOL} scalar, set to true to include
     *       background class in the list of label map for the output, set
     *       to false to not include the background. When the background
     *       class is included, it has label 0 and the output classes start
     *       at 1 in the label map, otherwise, the output classes start at 0.
     *
     * Outputs:
     * * 0: A 2-D tensor of the same {@link OperandType} as input0, with shape
     *      [batches, max_num_detections], specifying the score of each output
     *      detections.
     * * 1: A 3-D tensor of shape [batches, max_num_detections, 4], specifying the
     *      coordinates of each output bounding box, with format
     *      [y1, x1, y2, x2].
     * * 2: A 2-D {@link OperandType::TENSOR_INT32} tensor, of shape
     *      [batches, max_num_detections], specifying the class label for each
     *      output detection.
     * * 3: An 1-D {@link OperandType::TENSOR_INT32} tensor, of shape [batches],
     *      specifying the number of valid output detections for each batch.
     */
    DETECTION_POSTPROCESSING = 47,
    /**
     * For input tensors x and y, computes x == y elementwise.
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_BOOL8}
     * * {@link OperandType::TENSOR_FLOAT16}
     * * {@link OperandType::TENSOR_FLOAT32}
     * * {@link OperandType::TENSOR_INT32}
     * * {@link OperandType::TENSOR_QUANT8_ASYMM}
     *
     * Supported tensor rank: from 1
     *
     * This operation supports broadcasting.
     *
     * Inputs:
     * * 0: A tensor.
     * * 1: A tensor of the same {@link OperandType} and dimensions compatible
     *      with input0.
     *
     * Outputs:
     * * 0: A tensor of {@link OperandType::TENSOR_BOOL8}.
     */
    EQUAL = 48,
    /**
     * Computes exponential of x element-wise.
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_FLOAT16}
     * * {@link OperandType::TENSOR_FLOAT32}
     *
     * Supported tensor rank: from 1.
     *
     * Inputs:
     * * 0: A tensor.
     *
     * Outputs:
     * * 0: The output tensor of same shape as input0.
     */
    EXP = 49,
    /**
     * Inserts a dimension of 1 into a tensor's shape.
     *
     * Given a tensor input, this operation inserts a dimension of 1 at the
     * given dimension index of input's shape. The dimension index starts at
     * zero; if you specify a negative dimension index, it is counted backward
     * from the end.
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_FLOAT16}
     * * {@link OperandType::TENSOR_FLOAT32}
     * * {@link OperandType::TENSOR_INT32}
     * * {@link OperandType::TENSOR_QUANT8_ASYMM}
     *
     * Supported tensor rank: from 1
     *
     * Inputs:
     * * 0: An n-D tensor.
     * * 1: An {@link OperandType::INT32} scalar specifying the dimension
     *      index to expand. Must be in the range [-(n + 1), (n + 1)).
     *
     * Outputs:
     * * 0: An (n + 1)-D tensor with the same {@link OperandType} and data as
     *      input0.
     *      For a {@link OperandType::TENSOR_QUANT8_ASYMM} tensor,
     *      the scale and zeroPoint must be the same as input0.
     */
    EXPAND_DIMS = 50,
    /**
     * Gathers values along an axis.
     *
     * Produces an output tensor with shape
     *     input0.dimension[:axis] + indices.dimension + input0.dimension[axis + 1:]
     * where:
     *     # Vector indices (output is rank(input0)).
     *     output[a_0, ..., a_n, i, b_0, ..., b_n] =
     *       input0[a_0, ..., a_n, indices[i], b_0, ..., b_n]
     *
     *     # Higher rank indices (output is rank(input0) + rank(indices) - 1).
     *     output[a_0, ..., a_n, i, ..., j, b_0, ... b_n] =
     *       input0[a_0, ..., a_n, indices[i, ..., j], b_0, ..., b_n]
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_FLOAT16}
     * * {@link OperandType::TENSOR_FLOAT32}
     * * {@link OperandType::TENSOR_INT32}
     * * {@link OperandType::TENSOR_QUANT8_ASYMM}
     *
     * Supported tensor rank: from 1
     *
     * Inputs:
     * * 0: An n-D tensor from which to gather values.
     * * 1: An {@link OperandType::INT32} scalar specifying the axis.
     *      Negative index is used to specify axis from the end
     *      (e.g. -1 for the last axis). Must be in the range [-n, n).
     * * 2: A k-D tensor {@link OperandType::TENSOR_INT32} of indices.
     *      The values must be in the bounds of the corresponding dimensions
     *      of input0.
     *
     * Outputs:
     * * 0: An (n + k - 1)-D tensor with the same {@link OperandType} as input0.
     *      For a {@link OperandType::TENSOR_QUANT8_ASYMM} tensor,
     *      the scale and zeroPoint must be the same as input0.
     */
    GATHER = 51,
    /**
     * Generate aixs-aligned bounding box proposals.
     *
     * Bounding box proposals are generated by applying transformation on a set
     * of predefined anchors with the bounding box deltas from bounding box
     * regression. A final step of hard NMS is applied to limit the number of
     * returned boxes.
     *
     * Axis-aligned bounding boxes are represented by its upper-left corner
     * coordinate (x1,y1) and lower-right corner coordinate (x2,y2). A valid
     * bounding box should satisfy x1 <= x2 and y1 <= y2.
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_FLOAT16}
     * * {@link OperandType::TENSOR_FLOAT32}
     * * {@link OperandType::TENSOR_QUANT8_ASYMM}
     *
     * Inputs:
     * * 0: A 4-D Tensor specifying the score of each anchor at each
     *      location. With "NHWC" data layout, the tensor shape is
     *      [batches, height, width, num_anchors]. With "NCHW" data layout,
     *      the tensor shape is [batches, num_anchors, height, width].
     * * 1: A 4-D Tensor specifying the bounding box deltas. With "NHWC" data
     *      layout, the tensor shape is [batches, height, width, num_anchors * 4].
     *      With "NCHW" data layout, the tensor shape is
     *      [batches, num_anchors * 4, height, width]. The box deltas are encoded
     *      in the order of [dx, dy, dw, dh], where dx and dy is the linear-scale
     *      relative correction factor for the center position of the bounding box
     *      with respect to the width and height, dw and dh is the log-scale
     *      relative correction factor for the width and height. The last
     *      dimensions is the channel dimension.
     * * 2: A 2-D Tensor of shape [num_anchors, 4], specifying the shape of each
     *      predefined anchor, with format [x1, y1, x2, y2]. For input0 of type
     *      {@link OperandType::TENSOR_QUANT8_ASYMM}, this tensor should be of
     *      {@link OperandType::TENSOR_QUANT16_SYMM}, with scale of 0.125.
     * * 3: A 2-D Tensor of shape [batches, 2], specifying the size of
     *      each image in the batch, with format [image_height, image_width].
     *      For input0 of type {@link OperandType::TENSOR_QUANT8_ASYMM}, this
     *      tensor should be of {@link OperandType::TENSOR_QUANT16_SYMM}, with
     *      scale of 0.125.
     * * 4: An {@link OperandType::FLOAT32} scalar, specifying the ratio
     *      from the height of original image to the height of feature map.
     * * 5: An {@link OperandType::FLOAT32} scalar, specifying the ratio
     *      from the width of original image to the width of feature map.
     * * 6: An {@link OperandType::INT32} scalar, specifying the maximum
     *      number of boxes before going into the hard NMS algorithm. Boxes
     *      with the lowest scores are discarded to meet the limit. Set to
     *      a non-positive value for unlimited number.
     * * 7: An {@link OperandType::INT32} scalar, specifying the maximum
     *      number of boxes returning from the hard NMS algorithm. Boxes
     *      with the lowest scores are discarded to meet the limit. Set to
     *      a non-positive value for unlimited number.
     * * 8: An {@link OperandType::FLOAT32} scalar, specifying the IoU
     *      threshold for hard NMS.
     * * 9: An {@link OperandType::FLOAT32} scalar, min_size. Boxes with
     *      height or width lower than the absolute threshold are filtered out.
     * * 10: An {@link OperandType::BOOL} scalar, set to true to specify
     *       NCHW data layout for input0 and input1. Set to false for NHWC.
     *
     * Outputs:
     * * 0: A tensor of the same {@link OperandType} as input0, of shape
     *      [num_output_rois], specifying the score of each output box.
     *      The boxes are grouped by batches, but the sequential order in
     *      each batch is not guaranteed. For type of
     *      {@link OperandType::TENSOR_QUANT8_ASYMM}, the scale and zero
     *      point must be the same as input0.
     * * 1: A tensor of the same {@link OperandType} as input3, of shape
     *      [num_output_rois, 4], specifying the coordinates of each output
     *      bounding box for each class, with format [x1, y1, x2, y2].
     *      The sequential order of the boxes corresponds with output0.
     *      For type of {@link OperandType::TENSOR_QUANT16_ASYMM}, the
     *      scale must be 0.125 and the zero point must be 0.
     * * 2: A 1-D {@link OperandType::TENSOR_INT32} tensor, of shape
     *      [num_output_rois], specifying the batch index of each box. Boxes
     *      with the same batch index are grouped together.
     */
    GENERATE_PROPOSALS = 52,
    /**
     * For input tensors x and y, computes x > y elementwise.
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_BOOL8}
     * * {@link OperandType::TENSOR_FLOAT16}
     * * {@link OperandType::TENSOR_FLOAT32}
     * * {@link OperandType::TENSOR_INT32}
     * * {@link OperandType::TENSOR_QUANT8_ASYMM}
     *
     * Supported tensor rank: from 1
     *
     * This operation supports broadcasting.
     *
     * Inputs:
     * * 0: A tensor.
     * * 1: A tensor of the same {@link OperandType} and dimensions compatible
     *      with input0.
     *
     * Outputs:
     * * 0: A tensor of {@link OperandType::TENSOR_BOOL8}.
     */
    GREATER = 53,
    /**
     * For input tensors x and y, computes x >= y elementwise.
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_BOOL8}
     * * {@link OperandType::TENSOR_FLOAT16}
     * * {@link OperandType::TENSOR_FLOAT32}
     * * {@link OperandType::TENSOR_INT32}
     * * {@link OperandType::TENSOR_QUANT8_ASYMM}
     *
     * Supported tensor rank: from 1
     *
     * This operation supports broadcasting.
     *
     * Inputs:
     * * 0: A tensor.
     * * 1: A tensor of the same {@link OperandType} and dimensions compatible
     *      with input0.
     *
     * Outputs:
     * * 0: A tensor of {@link OperandType::TENSOR_BOOL8}.
     */
    GREATER_EQUAL = 54,
    /**
     * Performs a grouped 2-D convolution operation.
     *
     * Given an input tensor of shape [batches, height, width, depth_in] and a
     * filter tensor of shape [depth_out, filter_height, filter_width, depth_group]
     * containing depth_out convolutional filters of depth depth_group, GROUPED_CONV
     * applies a group of different filters to each input channel group, then
     * concatenates the results together.
     *
     * Specifically, the input channels are divided into num_groups groups, each with
     * depth depth_group, i.e. depth_in = num_groups * depth_group. The convolutional
     * filters are also divided into num_groups groups, i.e. depth_out is divisible
     * by num_groups. GROUPED_CONV applies each group of filters to the corresponding
     * input channel group, and the result are concatenated together.
     *
     * The output dimensions are functions of the filter dimensions, stride, and
     * padding.
     *
     * The values in the output tensor are computed as:
     *
     *     output[b, i, j, g * channel_multiplier + q] =
     *         sum_{di, dj, dk} (
     *             input[b, strides[1] * i + di, strides[2] * j + dj,
     *                   g * depth_group + dk] *
     *             filter[g * channel_multiplier + q, di, dj, dk]
     *         ) + bias[channel]
     *
     * where channel_multiplier = depth_out / num_groups
     *
     * Supported tensor {@link OperandType} configurations:
     * * 16 bit floating point:
     * * * {@link OperandType::TENSOR_FLOAT16} for input, filter, output, and bias.
     *
     * * 32 bit floating point:
     * * * {@link OperandType::TENSOR_FLOAT32} for input, filter, output, and bias.
     *
     * * Quantized:
     * * * {@link OperandType::TENSOR_QUANT8_ASYMM} for input, filter, and output.
     * * * {@link OperandType::TENSOR_INT32} for bias (with scale set to
     * * * input.scale * filter.scale).
     *
     * * Quantized with symmetric per channel quantization for the filter:
     * * * {@link OperandType::TENSOR_QUANT8_ASYMM} for input, and output.
     * * * {@link OperandType::TENSOR_QUANT8_SYMM_PER_CHANNEL} for filter.
     * * * {@link OperandType::TENSOR_INT32} for bias (scale set to 0.0,
     * * * each value scaling is separate and equal to input.scale * filter.scales[channel]).
     *
     * Supported tensor rank: 4, with "NHWC" or "NCHW" data layout.
     * With the default data layout NHWC, the data is stored in the order of:
     * [batch, height, width, channels]. Alternatively, the data layout could
     * be NCHW, the data storage order of: [batch, channels, height, width].
     *
     * Both explicit padding and implicit padding are supported.
     *
     * Inputs (explicit padding):
     * * 0: A 4-D tensor, of shape [batches, height, width, depth_in],
     *      specifying the input, where depth_in = num_groups * depth_group.
     * * 1: A 4-D tensor, of shape
     *      [depth_out, filter_height, filter_width, depth_group], specifying
     *      the filter, where depth_out must be divisible by num_groups.  For
     *      tensor of type {@link OperandType::TENSOR_QUANT8_SYMM_PER_CHANNEL}
     *      the channel dimension (channelDim at
     *      {@link SymmPerChannelQuantParams}) must be set to 0.
     * * 2: A 1-D tensor, of shape [depth_out], specifying the bias. For input
     *      tensor of type {@link OperandType::TENSOR_FLOAT32} or
     *      {@link OperandType::TENSOR_FLOAT16}, the bias must be of the same type.
     *      For filter tensor of {@link OperandType::TENSOR_QUANT8_ASYMM},
     *      the bias should be of {@link OperandType::TENSOR_INT32}, with zeroPoint
     *      of 0 and bias_scale == input_scale * filter_scale. For filter tensor
     *      of {@link OperandType::TENSOR_QUANT8_SYMM_PER_CHANNEL}, the bias
     *      should be of {@link OperandType::TENSOR_INT32}, with zeroPoint of
     *      0 and bias_scale of 0. The actual scale of each value 'i' is equal to
     *      bias_scale[i] = input_scale * filter_scale[i].
     * * 3: An {@link OperandType::INT32} scalar, specifying the padding on
     *      the left, in the ‘width’ dimension.
     * * 4: An {@link OperandType::INT32} scalar, specifying the padding on
     *      the right, in the ‘width’ dimension.
     * * 5: An {@link OperandType::INT32} scalar, specifying the padding on
     *      the top, in the ‘height’ dimension.
     * * 6: An {@link OperandType::INT32} scalar, specifying the padding on
     *      the bottom, in the ‘height’ dimension.
     * * 7: An {@link OperandType::INT32} scalar, specifying the stride when
     *      walking through input in the ‘width’ dimension.
     * * 8: An {@link OperandType::INT32} scalar, specifying the stride when
     *      walking through input in the ‘height’ dimension.
     * * 9: An {@link OperandType::INT32} scalar, specifying the number of
     *      groups.
     * * 10: An {@link OperandType::INT32} scalar, and has to be one of the
     *       {@link FusedActivationFunc} values. Specifies the activation to
     *       invoke on the result.
     * * 11: An {@link OperandType::BOOL} scalar, set to true to specify
     *       NCHW data layout for input0 and output0. Set to false for NHWC.
     *
     * Inputs (implicit padding):
     * * 0: A 4-D tensor, of shape [batches, height, width, depth_in],
     *      specifying the input, where depth_in = num_groups * depth_group.
     * * 1: A 4-D tensor, of shape
     *      [depth_out, filter_height, filter_width, depth_group], specifying
     *      the filter, where depth_out must be divisible by num_groups.  For
     *      tensor of type {@link OperandType::TENSOR_QUANT8_SYMM_PER_CHANNEL}
     *      the channel dimension (SymmPerChannelQuantParams::channelDim)
     *      must be set to 0.
     * * 2: A 1-D tensor, of shape [depth_out], specifying the bias. For input
     *      tensor of type {@link OperandType::TENSOR_FLOAT32} or
     *      {@link OperandType::TENSOR_FLOAT16}, the bias must be of the same
     *      {@link OperandType::TENSOR_FLOAT16}, the bias must be of the same type.
     *      For filter tensor of {@link OperandType::TENSOR_QUANT8_ASYMM},
     *      the bias should be of {@link OperandType::TENSOR_INT32}, with zeroPoint
     *      of 0 and bias_scale == input_scale * filter_scale. For filter tensor
     *      of {@link OperandType::TENSOR_QUANT8_SYMM_PER_CHANNEL}, the bias
     *      should be of {@link OperandType::TENSOR_INT32}, with zeroPoint of
     *      0 and bias_scale of 0. The actual scale of each value 'i' is equal to
     *      bias_scale[i] = input_scale * filter_scale[i].
     * * 3: An {@link OperandType::INT32} scalar, specifying the implicit
     *      padding scheme, has to be one of the
     *      following values: {0 (NONE), 1 (SAME), 2 (VALID)}.
     * * 4: An {@link OperandType::INT32} scalar, specifying the stride when
     *      walking through input in the ‘width’ dimension.
     * * 5: An {@link OperandType::INT32} scalar, specifying the stride when
     *      walking through input in the ‘height’ dimension.
     * * 6: An {@link OperandType::INT32} scalar, specifying the number of
     *      groups.
     * * 7: An {@link OperandType::INT32} scalar, and has to be one of the
     *      {@link FusedActivationFunc} values. Specifies the activation to
     *      invoke on the result.
     * * 8: An {@link OperandType::BOOL} scalar, set to true to specify
     *      NCHW data layout for input0 and output0. Set to false for NHWC.
     *
     * Outputs:
     * * 0: The output 4-D tensor, of shape
     *      [batches, out_height, out_width, depth_out].
     *      For a {@link OperandType::TENSOR_QUANT8_ASYMM} tensor,
     *      the scale and zeroPoint can be different from inputs' scale and zeroPoint.
     */
    GROUPED_CONV_2D = 55,
    /**
     * Localize the maximum keypoints from heatmaps.
     *
     * This operation approximates the accurate maximum keypoint scores and
     * indices after bicubic upscaling by using Taylor expansion up to the
     * quadratic term.
     *
     * The bounding box is represented by its upper-left corner coordinate
     * (x1,y1) and lower-right corner coordinate (x2,y2) in the original image.
     * A valid bounding box should satisfy x1 <= x2 and y1 <= y2.
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_FLOAT16}
     * * {@link OperandType::TENSOR_FLOAT32}
     * * {@link OperandType::TENSOR_QUANT8_ASYMM}
     *
     * Supported tensor rank: 4, with "NHWC" or "NCHW" data layout.
     * With the default data layout NHWC, the data is stored in the order of:
     * [batch, height, width, channels]. Alternatively, the data layout could
     * be NCHW, the data storage order of: [batch, channels, height, width].
     *
     * Inputs:
     * * 0: A 4-D Tensor of shape
     *      [num_boxes, heatmap_size, heatmap_size, num_keypoints],
     *      specifying the heatmaps, the height and width of heatmaps should
     *      be the same, and must be greater than or equal to 2.
     * * 1: A 2-D Tensor of shape [num_boxes, 4], specifying the bounding boxes,
     *      each with format [x1, y1, x2, y2]. For input0 of type
     *      {@link OperandType::TENSOR_QUANT8_ASYMM}, this tensor should
     *      be of {@link OperandType::TENSOR_QUANT16_ASYMM}, with zeroPoint
     *      of 0 and scale of 0.125.
     * * 2: An {@link OperandType::BOOL} scalar, set to true to specify
     *      NCHW data layout for input0. Set to false for NHWC.
     *
     * Outputs:
     * * 0: A tensor of the same {@link OperandType} as input0, with shape
     *      [num_boxes, num_keypoints], specifying score of the keypoints.
     *      For a {@link OperandType::TENSOR_QUANT8_ASYMM} tensor,
     *      the scale and zeroPoint can be different from input0 scale and zeroPoint.
     * * 1: A tensor of the same {@link OperandType} as input1, with shape
     *      [num_boxes, num_keypoints, 2], specifying the location of
     *      the keypoints, the second dimension is organized as
     *      [keypoint_x, keypoint_y].
     *      For type of {@link OperandType::TENSOR_QUANT16_ASYMM}, the
     *      scale must be 0.125 and the zero point must be 0.
     */
    HEATMAP_MAX_KEYPOINT = 56,
    /**
     * Applies instance normalization to the input tensor.
     *
     * The values in the output tensor are computed as:
     *
     *     output[b, h, w, c] =
     *         (input[b, h, w, c] - mean[b, c]) * gamma /
     *         sqrt(var[b, c] + epsilon) + beta
     *
     * Where the mean and variance are computed across the spatial dimensions:
     *
     *     mean[b, c] =
     *         sum_{h, w}(input[b, h, w, c]) / sum(1)
     *
     *     var[b, c] =
     *         sum_{h, w}(pow(input[b, h, w, c] - mean[b, c], 2)) / sum(1)
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_FLOAT16}
     * * {@link OperandType::TENSOR_FLOAT32}
     *
     * Supported tensor rank: 4, with "NHWC" or "NCHW" data layout.
     * With the default data layout NHWC, the data is stored in the order of:
     * [batch, height, width, channels]. Alternatively, the data layout could
     * be NCHW, the data storage order of: [batch, channels, height, width].
     *
     * Inputs:
     * * 0: An n-D tensor, specifying the tensor to be normalized.
     * * 1: A scalar, specifying gamma, the scale applied to the normalized
     *      tensor. The scalar must be of {@link OperandType::FLOAT16} if
     *      input0 is of {@link OperandType::TENSOR_FLOAT16} and of
     *      {@link OperandType::FLOAT32} if input0 is of
     *      {@link OperandType::TENSOR_FLOAT32}.
     * * 2: A scalar, specifying beta, the offset applied to the normalized
     *      tensor. The scalar must be of {@link OperandType::FLOAT16} if
     *      input0 is of {@link OperandType::TENSOR_FLOAT16} and of
     *      {@link OperandType::FLOAT32} if input0 is of
     *      {@link OperandType::TENSOR_FLOAT32}.
     * * 3: A scalar, specifying epsilon, the small value added to variance to
     *      avoid dividing by zero. The scalar must be of {@link OperandType::FLOAT16} if
     *      input0 is of {@link OperandType::TENSOR_FLOAT16} and of
     *      {@link OperandType::FLOAT32} if input0 is of
     *      {@link OperandType::TENSOR_FLOAT32}.
     * * 4: An {@link OperandType::BOOL} scalar, set to true to specify
     *      NCHW data layout for input0 and output0. Set to false for NHWC.
     *
     * Outputs:
     * * 0: A tensor of the same {@link OperandType} and same shape as input0.
     */
    INSTANCE_NORMALIZATION = 57,
    /**
     * For input tensors x and y, computes x < y elementwise.
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_BOOL8}
     * * {@link OperandType::TENSOR_FLOAT16}
     * * {@link OperandType::TENSOR_FLOAT32}
     * * {@link OperandType::TENSOR_INT32}
     * * {@link OperandType::TENSOR_QUANT8_ASYMM}
     *
     * Supported tensor rank: from 1
     *
     * This operation supports broadcasting.
     *
     * Inputs:
     * * 0: A tensor.
     * * 1: A tensor of the same {@link OperandType} and dimensions compatible
     *      with input0.
     *
     * Outputs:
     * * 0: A tensor of {@link OperandType::TENSOR_BOOL8}.
     */
    LESS = 58,
    /**
     * For input tensors x and y, computes x <= y elementwise.
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_BOOL8}
     * * {@link OperandType::TENSOR_FLOAT16}
     * * {@link OperandType::TENSOR_FLOAT32}
     * * {@link OperandType::TENSOR_INT32}
     * * {@link OperandType::TENSOR_QUANT8_ASYMM}
     *
     * Supported tensor rank: from 1
     *
     * This operation supports broadcasting.
     *
     * Inputs:
     * * 0: A tensor.
     * * 1: A tensor of the same {@link OperandType} and dimensions compatible
     *      with input0.
     *
     * Outputs:
     * * 0: A tensor of {@link OperandType::TENSOR_BOOL8}.
     */
    LESS_EQUAL = 59,
    /**
     * Computes natural logarithm of x element-wise.
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_FLOAT16}
     * * {@link OperandType::TENSOR_FLOAT32}
     *
     * Supported tensor rank: from 1.
     *
     * Inputs:
     * * 0: A tensor.
     *
     * Outputs:
     * * 0: The output tensor of same shape as input0.
     */
    LOG = 60,
    /**
     * Returns the truth value of x AND y element-wise.
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_BOOL8}
     *
     * Supported tensor rank: from 1
     *
     * This operation supports broadcasting.
     *
     * Inputs:
     * * 0: A tensor of {@link OperandType::TENSOR_BOOL8}.
     * * 1: A tensor of {@link OperandType::TENSOR_BOOL8} and dimensions
     *      compatible with input0.
     *
     * Outputs:
     * * 0: A tensor of {@link OperandType::TENSOR_BOOL8}.
     */
    LOGICAL_AND = 61,
    /**
     * Computes the truth value of NOT x element-wise.
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_BOOL8}
     *
     * Supported tensor rank: from 1.
     *
     * Inputs:
     * * 0: A tensor.
     *
     * Outputs:
     * * 0: The output tensor of same shape as input0.
     */
    LOGICAL_NOT = 62,
    /**
     * Returns the truth value of x OR y element-wise.
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_BOOL8}
     *
     * Supported tensor rank: from 1
     *
     * This operation supports broadcasting.
     *
     * Inputs:
     * * 0: A tensor of {@link OperandType::TENSOR_BOOL8}.
     * * 1: A tensor of {@link OperandType::TENSOR_BOOL8} and dimensions
     *      compatible with input0.
     *
     * Outputs:
     * * 0: A tensor of {@link OperandType::TENSOR_BOOL8}.
     */
    LOGICAL_OR = 63,
    /**
     * Computes the log softmax activations given logits.
     *
     * The output is calculated using this formula:
     *
     *     output = logits * beta - log(reduce_sum(exp(logits * beta), axis))
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_FLOAT16}
     * * {@link OperandType::TENSOR_FLOAT32}
     *
     * Supported tensor rank: from 1.
     *
     * Inputs:
     * * 0: A tensor specifying the input logits.
     * * 1: A scalar, specifying the positive scaling factor for the exponent,
     *      beta.
     *      For input tensor of {@link OperandType::TENSOR_FLOAT16}, the beta
     *      value must be of {@link OperandType::FLOAT16}.
     *      For input tensor of {@link OperandType::TENSOR_FLOAT32}, the beta
     *      value must be of {@link OperandType::FLOAT32}.
     * * 2: An {@link OperandType::INT32} scalar specifying the axis to
     *      reduce across. Negative index is used to specify axis from the
     *      end (e.g. -1 for the last axis). Must be in the range [-n, n).
     *
     * Outputs:
     * * 0: The output tensor of the same {@link OperandType} and shape as
     *      input0.
     */
    LOG_SOFTMAX = 64,
    /**
     * Returns the element-wise maximum of two tensors.
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_FLOAT16}
     * * {@link OperandType::TENSOR_FLOAT32}
     * * {@link OperandType::TENSOR_INT32}
     * * {@link OperandType::TENSOR_QUANT8_ASYMM}
     *
     * Supported tensor rank: from 1.
     *
     * Inputs:
     * * 0: A tensor.
     * * 1: A tensor of the same {@link OperandType} and compatible dimensions
     *      with input0.
     *      For a {@link OperandType::TENSOR_QUANT8_ASYMM} tensor,
     *      the scales and zeroPoint can be different from input0 scale and zeroPoint.
     *
     * Outputs:
     * * 0: A tensor of the same {@link OperandType} as input0.
     *      For a {@link OperandType::TENSOR_QUANT8_ASYMM} tensor,
     *      the scale and zeroPoint can be different from inputs' scale and zeroPoint.
     */
    MAXIMUM = 65,
    /**
     * Returns the element-wise minimum of two tensors.
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_FLOAT16}
     * * {@link OperandType::TENSOR_FLOAT32}
     * * {@link OperandType::TENSOR_INT32}
     * * {@link OperandType::TENSOR_QUANT8_ASYMM}
     *
     * Supported tensor rank: from 1.
     *
     * Inputs:
     * * 0: A tensor.
     * * 1: A tensor of the same {@link OperandType} and compatible dimensions
     *      with input0.
     *      For a {@link OperandType::TENSOR_QUANT8_ASYMM} tensor,
     *      the scales and zeroPoint can be different from input0 scale and zeroPoint.
     *
     * Outputs:
     * * 0: A tensor of the same {@link OperandType} as input0.
     *      For a {@link OperandType::TENSOR_QUANT8_ASYMM} tensor,
     *      the scale and zeroPoint can be different from inputs' scale and zeroPoint.
     */
    MINIMUM = 66,
    /**
     * Computes numerical negative value element-wise.
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_FLOAT16}
     * * {@link OperandType::TENSOR_FLOAT32}
     * * {@link OperandType::TENSOR_INT32}
     *
     * Supported tensor rank: from 1.
     *
     * Inputs:
     * * 0: A tensor.
     *
     * Outputs:
     * * 0: The output tensor of same shape as input0.
     */
    NEG = 67,
    /**
     * For input tensors x and y, computes x != y elementwise.
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_BOOL8}
     * * {@link OperandType::TENSOR_FLOAT16}
     * * {@link OperandType::TENSOR_FLOAT32}
     * * {@link OperandType::TENSOR_INT32}
     * * {@link OperandType::TENSOR_QUANT8_ASYMM}
     *
     * Supported tensor rank: from 1
     *
     * This operation supports broadcasting.
     *
     * Inputs:
     * * 0: A tensor.
     * * 1: A tensor of the same {@link OperandType} and dimensions compatible
     *      with input0.
     *
     * Outputs:
     * * 0: A tensor of {@link OperandType::TENSOR_BOOL8}.
     */
    NOT_EQUAL = 68,
    /**
     * Pads a tensor with the given constant value according to the specified
     * paddings.
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_FLOAT16}
     * * {@link OperandType::TENSOR_FLOAT32}
     * * {@link OperandType::TENSOR_QUANT8_ASYMM}
     *
     * Supported tensor rank: up to 4
     *
     * Inputs:
     * * 0: An n-D tensor, specifying the tensor to be padded.
     * * 1: A 2-D Tensor of {@link OperandType::TENSOR_INT32}, the paddings
     *      for each spatial dimension of the input tensor. The shape of the
     *      tensor must be {rank(input0), 2}.
     *      padding[i, 0] specifies the number of elements to be padded in the
     *      front of dimension i.
     *      padding[i, 1] specifies the number of elements to be padded after
     *      the end of dimension i.
     * * 2: A scalar specifying the value to use for padding input0.
     *      For input tensor of {@link OperandType::TENSOR_FLOAT16}, the
     *      pad value must be of {@link OperandType::FLOAT16}.
     *      For input tensor of {@link OperandType::TENSOR_FLOAT32}, the
     *      pad value must be of {@link OperandType::FLOAT32}.
     *      For input tensor of {@link OperandType::TENSOR_QUANT8_ASYMM},
     *      the pad value must be of {@link OperandType::INT32}. The
     *      scale and zeroPoint are assumed to be the same as in input0.
     *
     * Outputs:
     * * 0: A tensor of the same {@link OperandType} as input0. The
     *      output tensor has the same rank as input0, and each
     *      dimension of the output tensor has the same size as the
     *      corresponding dimension of the input tensor plus the size
     *      of the padding:
     *          output0.dimension[i] =
     *              padding[i, 0] + input0.dimension[i] + padding[i, 1]
     *      For a {@link OperandType::TENSOR_QUANT8_ASYMM} tensor,
     *      the scale and zeroPoint must be the same as input0.
     */
    PAD_V2 = 69,
    /**
     * Computes the power of one value to another.
     *
     * Given a tensor base and a tensor exponent, this operation computes
     * base^exponent elementwise.
     *
     * This operations supports broadcasting. The size of the output is the
     * maximum size along each dimension of the input operands. It starts with
     * the trailing dimensions, and works its way forward.
     *
     * For example:
     *     base.dimension     =    {4, 1, 2}
     *     exponent.dimension = {5, 4, 3, 1}
     *     output.dimension   = {5, 4, 3, 2}
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_FLOAT16}
     * * {@link OperandType::TENSOR_FLOAT32}
     *
     * Supported tensor rank: from 1
     *
     * Inputs:
     * * 0: A tensor specifying the base.
     * * 1: A tensor specifying the exponent.
     *
     * Outputs:
     * * 0: An output tensor.
     */
    POW = 70,
    /**
     * Parametric Rectified Linear Unit.
     *
     * It follows: f(x) = alpha * x for x < 0, f(x) = x for x >= 0, where alpha
     * is a learned array with the same {@link OperandType} and compatible
     * dimensions as input x.
     *
     * Two dimensions are compatible when:
     *     1. they are equal, or
     *     2. one of them is 1
     *
     * The size of the output is the maximum size along each dimension of the
     * input operands. It starts with the trailing dimensions, and works its way
     * forward.
     *
     * Example:
     *     input.dimension  =    {4, 1, 2}
     *     alpha.dimension  = {5, 4, 3, 1}
     *     output.dimension = {5, 4, 3, 2}
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_FLOAT16}
     * * {@link OperandType::TENSOR_FLOAT32}
     * * {@link OperandType::TENSOR_QUANT8_ASYMM}
     *
     * Supported tensor rank: from 1
     *
     * Inputs:
     * * 0: A tensor, specifying the input.
     * * 1: A tensor of the same {@link OperandType}, and compatible dimensions
     *      as input0, specifying the alpha.
     *
     * Outputs:
     * * 0: A tensor of the same {@link OperandType} as input0.
     *      For a {@link OperandType::TENSOR_QUANT8_ASYMM} tensor,
     *      the scales and zeroPoint can be different from input0 scale and zeroPoint.
     */
    PRELU = 71,
    /**
     * Quantizes the input tensor.
     *
     * The formula for {@link OperandType::TENSOR_QUANT8_ASYMM} output tensor is:
     *
     *     output = max(0, min(255, round(input / scale) + zeroPoint)
     *
     * Supported input tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_FLOAT16}
     * * {@link OperandType::TENSOR_FLOAT32}
     *
     * Supported output tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_QUANT8_ASYMM}
     *
     * Supported tensor rank: from 1
     *
     * Inputs:
     * * 0: A tensor, may be zero-sized.
     *
     * Outputs:
     * * 0: The output tensor of same shape as input0, but with
     *      {@link OperandType::TENSOR_QUANT8_ASYMM}.
     */
    QUANTIZE = 72,
    /**
     * A version of quantized LSTM, using 16 bit quantization for internal
     * state.
     *
     * There is no projection layer, so cell state size is equal to the output
     * size.
     *
     * Inputs:
     * * 0: A 2-D tensor of type {@link OperandType::TENSOR_QUANT8_ASYMM}
     *      and shape [numBatches, inputSize] specifying the input to the LSTM
     *      cell. Tensor is quantized with a fixed quantization range of
     *      [-1, 127/128] (scale = 1/128, zeroPoint = 128).
     * * 1: The input-to-input weights.
     *      A 2-D tensor of type {@link OperandType::TENSOR_QUANT8_ASYMM}
     *      and shape [outputSize, inputSize] specifying input-to-input part of
     *      weights for fully-connected layer inside the LSTM cell.
     *      Quantization zero point and scale must be the same across all the
     *      weights.
     * * 2: The input-to-forget weights.
     *      A 2-D tensor of type {@link OperandType::TENSOR_QUANT8_ASYMM}
     *      and shape [outputSize, inputSize] specifying input-to-forget part of
     *      weights for fully-connected layer inside the LSTM cell.
     *      Quantization zero point and scale must be the same across all the
     *      weights.
     * * 3: The input-to-cell weights.
     *      A 2-D tensor of type {@link OperandType::TENSOR_QUANT8_ASYMM}
     *      and shape [outputSize, inputSize] specifying input-to-cell part of
     *      weights for fully-connected layer inside the LSTM cell.
     *      Quantization zero point and scale must be the same across all the
     *      weights.
     * * 4: The input-to-output weights.
     *      A 2-D tensor of type {@link OperandType::TENSOR_QUANT8_ASYMM}
     *      and shape [outputSize, inputSize] specifying input-to-output part of
     *      weights for fully-connected layer inside the LSTM cell.
     *      Quantization zero point and scale must be the same across all the
     *      weights.
     * * 5: The recurrent-to-input weights.
     *      A 2-D tensor of type {@link OperandType::TENSOR_QUANT8_ASYMM}
     *      and shape [outputSize, outputSize] specifying recurrent-to-input part
     *      of weights for fully-connected layer inside the LSTM cell.
     *      Quantization zero point and scale must be the same across all the
     *      weights.
     * * 6: The recurrent-to-forget weights.
     *      A 2-D tensor of type {@link OperandType::TENSOR_QUANT8_ASYMM}
     *      and shape [outputSize, outputSize] specifying recurrent-to-forget
     *      part of weights for fully-connected layer inside the LSTM cell.
     *      Quantization zero point and scale must be the same across all the
     *      weights.
     * * 7: The recurrent-to-cell weights.
     *      A 2-D tensor of type {@link OperandType::TENSOR_QUANT8_ASYMM}
     *      and shape [outputSize, outputSize] specifying recurrent-to-cell part
     *      of weights for fully-connected layer inside the LSTM cell.
     *      Quantization zero point and scale must be the same across all the
     *      weights.
     * * 8: The recurrent-to-output weights.
     *      A 2-D tensor of type {@link OperandType::TENSOR_QUANT8_ASYMM}
     *      and shape [outputSize, outputSize] specifying recurrent-to-output
     *      part of weights for fully-connected layer inside the LSTM cell.
     *      Quantization zero point and scale must be the same across all the
     *      weights.
     * * 9: The input gate bias.
     *      A 1-D tensor of type {@link OperandType::TENSOR_INT32} and shape
     *      [outputSize] specifying the bias for the fully-connected layer
     *      inside the LSTM cell. Bias is quantized with scale being a product
     *      of input and weights scales and zeroPoint equal to 0.
     * * 10:The forget gate bias.
     *      A 1-D tensor of type {@link OperandType::TENSOR_INT32} and shape
     *      [outputSize] specifying the bias for the fully-connected layer
     *      inside the LSTM cell. Bias is quantized with scale being a product
     *      of input and weights scales and zeroPoint equal to 0.
     * * 11:The cell bias.
     *      A 1-D tensor of type {@link OperandType::TENSOR_INT32} and shape
     *      [outputSize] specifying the bias for the fully-connected layer
     *      inside the LSTM cell. Bias is quantized with scale being a product
     *      of input and weights scales and zeroPoint equal to 0.
     * * 12:The output gate bias.
     *      A 1-D tensor of type {@link OperandType::TENSOR_INT32} and shape
     *      [outputSize] specifying the bias for the fully-connected layer
     *      inside the LSTM cell. Bias is quantized with scale being a product
     *      of input and weights scales and zeroPoint equal to 0.
     * * 13: A 2-D tensor of type {@link OperandType::TENSOR_QUANT16_SYMM}
     *       and shape [numBatches, outputSize] specifying the cell state from the
     *       previous time step of the LSTM cell. It is quantized using a
     *       quantization range of [-2^4, 2^4 * 32767/32768] (scale = 2^4 /
     *       32768, zeroPoint = 0).
     * * 14: A 2-D tensor of type {@link OperandType::TENSOR_QUANT8_ASYMM}
     *       and shape [numBathes, outputSize] specifying the output of the LSTM
     *       cell from previous time-step. Tensor is quantized with a fixed
     *       quantization range of [-1, 127/128] (scale = 1/128, zeroPoint =
     *       128).
     *
     *
     * Outputs:
     * * 0: A 2-D tensor of type {@link OperandType::TENSOR_QUANT16_SYMM}
     *      and shape [numBatches, outputSize] which contains a cell state from
     *      the current time step. Tensor is quantized using a quantization
     *      range of [-2^4, 2^4 * 32767/32768] (scale = 2^4 / 32768, zeroPoint =
     *      0).
     * * 1: A 2-D tensor of type {@link OperandType::TENSOR_QUANT8_ASYMM}
     *      and shape [numBathes, outputSize] which contains the output value.
     *      Tensor is quantized with a fixed quantization range of [-1, 127/128]
     *      (scale = 1/128, zeroPoint = 128).
     */
    QUANTIZED_16BIT_LSTM = 73,
    /**
     * Draws samples from a multinomial distribution.
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_FLOAT16}
     * * {@link OperandType::TENSOR_FLOAT32}
     *
     * Inputs:
     * * 0: A 2-D tensor with shape [batches, classes], specifying the
     *      unnormalized log-probabilities for all classes.
     * * 1: A scalar {@link OperandType::INT32}, specifying the number of
     *      independent samples to draw for each row slice.
     * * 2: A 1-D {@link OperandType::TENSOR_INT32} tensor with shape [2],
     *      specifying seeds used to initialize the random distribution. If both
     *      provided seeds are 0, both will be randomly generated.
     * Outputs:
     * * 0: A 2-D {@link OperandType::TENSOR_INT32} tensor with shape
     *      [batches, samples], containing the drawn samples.
     */
    RANDOM_MULTINOMIAL = 74,
    /**
     * Reduces a tensor by computing the "logical and" of elements along given
     * dimensions.
     *
     * If keep_dims is true, the reduced dimensions are
     * retained with length 1. Otherwise, the rank of the tensor is reduced by
     * 1 for each entry in dimensions.
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_BOOL8}
     *
     * Supported tensor rank: up to 4
     *
     * Inputs:
     * * 0: An n-D tensor.
     * * 1: A 1-D tensor of {@link OperandType::TENSOR_INT32}. The dimensions
     *      to reduce. Dimension values must be in the range [-n, n).
     * * 2: An {@link OperandType::BOOL} scalar, keep_dims. If true,
     *      retains reduced dimensions with length 1.
     *
     * Outputs:
     * * 0: A tensor of the same {@link OperandType} as input0.
     *      If all dimensions are reduced and keep_dims is false, the output
     *      shape is [1].
     */
    REDUCE_ALL = 75,
    /**
     * Reduces a tensor by computing the "logical or" of elements along given
     * dimensions.
     *
     * If keep_dims is true, the reduced dimensions are
     * retained with length 1. Otherwise, the rank of the tensor is reduced by
     * 1 for each entry in dimensions.
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_BOOL8}
     *
     * Supported tensor rank: up to 4
     *
     * Inputs:
     * * 0: An n-D tensor.
     * * 1: A 1-D tensor of {@link OperandType::TENSOR_INT32}. The dimensions
     *      to reduce. Dimension values must be in the range [-n, n).
     * * 2: An {@link OperandType::BOOL} scalar, keep_dims. If true,
     *      retains reduced dimensions with length 1.
     *
     * Outputs:
     * * 0: A tensor of the same {@link OperandType} as input0.
     *      If all dimensions are reduced and keep_dims is false, the output
     *      shape is [1].
     */
    REDUCE_ANY = 76,
    /**
     * Reduces a tensor by computing the maximum of elements along given
     * dimensions.
     *
     * If keep_dims is true, the reduced dimensions are
     * retained with length 1. Otherwise, the rank of the tensor is reduced by
     * 1 for each entry in dimensions.
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_FLOAT16}
     * * {@link OperandType::TENSOR_FLOAT32}
     * * {@link OperandType::TENSOR_QUANT8_ASYMM}
     *
     * Supported tensor rank: up to 4
     *
     * Inputs:
     * * 0: An n-D tensor.
     * * 1: A 1-D tensor of {@link OperandType::TENSOR_INT32}. The dimensions
     *      to reduce. Dimension values must be in the range [-n, n).
     * * 2: An {@link OperandType::BOOL} scalar, keep_dims. If true,
     *      retains reduced dimensions with length 1.
     *
     * Outputs:
     * * 0: A tensor of the same {@link OperandType} as input0.
     *      If all dimensions are reduced and keep_dims is false, the output
     *      shape is [1].
     *      For a {@link OperandType::TENSOR_QUANT8_ASYMM} tensor,
     *      the scale and zeroPoint must be the same as input0.
     */
    REDUCE_MAX = 77,
    /**
     * Reduces a tensor by computing the minimum of elements along given
     * dimensions.
     *
     * If keep_dims is true, the reduced dimensions are
     * retained with length 1. Otherwise, the rank of the tensor is reduced by
     * 1 for each entry in dimensions.
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_FLOAT16}
     * * {@link OperandType::TENSOR_FLOAT32}
     * * {@link OperandType::TENSOR_QUANT8_ASYMM}
     *
     * Supported tensor rank: up to 4
     *
     * Inputs:
     * * 0: An n-D tensor.
     * * 1: A 1-D tensor of {@link OperandType::TENSOR_INT32}. The dimensions
     *      to reduce. Dimension values must be in the range [-n, n).
     * * 2: An {@link OperandType::BOOL} scalar, keep_dims. If true,
     *      retains reduced dimensions with length 1.
     *
     * Outputs:
     * * 0: A tensor of the same {@link OperandType} as input0.
     *      If all dimensions are reduced and keep_dims is false, the output
     *      shape is [1].
     *      For a {@link OperandType::TENSOR_QUANT8_ASYMM} tensor,
     *      the scale and zeroPoint must be the same as input0.
     */
    REDUCE_MIN = 78,
    /**
     * Reduces a tensor by multiplying elements along given dimensions.
     *
     * If keep_dims is true, the reduced dimensions are
     * retained with length 1. Otherwise, the rank of the tensor is reduced by
     * 1 for each entry in dimensions.
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_FLOAT16}
     * * {@link OperandType::TENSOR_FLOAT32}
     *
     * Supported tensor rank: up to 4
     *
     * Inputs:
     * * 0: An n-D tensor.
     * * 1: A 1-D tensor of {@link OperandType::TENSOR_INT32}. The dimensions
     *      to reduce. Dimension values must be in the range [-n, n).
     * * 2: An {@link OperandType::BOOL} scalar, keep_dims. If true,
     *      retains reduced dimensions with length 1.
     *
     * Outputs:
     * * 0: A tensor of the same {@link OperandType} as input0.
     *      If all dimensions are reduced and keep_dims is false, the output
     *      shape is [1].
     */
    REDUCE_PROD = 79,
    /**
     * Reduces a tensor by summing elements along given dimensions.
     *
     * If keep_dims is true, the reduced dimensions are
     * retained with length 1. Otherwise, the rank of the tensor is reduced by
     * 1 for each entry in dimensions.
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_FLOAT16}
     * * {@link OperandType::TENSOR_FLOAT32}
     *
     * Supported tensor rank: up to 4
     *
     * Inputs:
     * * 0: An n-D tensor.
     * * 1: A 1-D tensor of {@link OperandType::TENSOR_INT32}. The dimensions
     *      to reduce. Dimension values must be in the range [-n, n).
     * * 2: An {@link OperandType::BOOL} scalar, keep_dims. If true,
     *      retains reduced dimensions with length 1.
     *
     * Outputs:
     * * 0: A tensor of the same {@link OperandType} as input0.
     *      If all dimensions are reduced and keep_dims is false, the output
     *      shape is [1].
     */
    REDUCE_SUM = 80,
    /**
     * Select and scale the feature map of each region of interest to a unified
     * output size by average pooling sampling points from bilinear interpolation.
     *
     * The region of interest is represented by its upper-left corner coordinate
     * (x1,y1) and lower-right corner coordinate (x2,y2) in the original image.
     * A spatial scaling factor is applied to map into feature map coordinate.
     * A valid region of interest should satisfy x1 <= x2 and y1 <= y2.
     *
     * No rounding is applied in this operation. The sampling points are unified
     * distributed in the pooling bin and their values are calculated by bilinear
     * interpolation.
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_FLOAT16}
     * * {@link OperandType::TENSOR_FLOAT32}
     * * {@link OperandType::TENSOR_QUANT8_ASYMM}
     *
     * Supported tensor rank: 4, with "NHWC" or "NCHW" data layout.
     * With the default data layout NHWC, the data is stored in the order of:
     * [batch, height, width, channels]. Alternatively, the data layout could
     * be NCHW, the data storage order of: [batch, channels, height, width].
     *
     * Inputs:
     * * 0: A 4-D tensor, specifying the feature map.
     * * 1: A 2-D Tensor of shape [num_rois, 4], specifying the locations of
     *      the regions of interest, each line with format [x1, y1, x2, y2].
     *      For input0 of type {@link OperandType::TENSOR_QUANT8_ASYMM},
     *      this tensor should be of {@link OperandType::TENSOR_QUANT16_ASYMM},
     *      with zeroPoint of 0 and scale of 0.125. Zero num_rois is
     *      supported for this tensor.
     * * 2: An 1-D {@link OperandType::TENSOR_INT32} tensor, of shape
     *      [num_rois], specifying the batch index of each box. Boxes with
     *      the same batch index are grouped together. Zero num_rois is
     *      supported for this tensor.
     * * 3: An {@link OperandType::INT32} scalar, specifying the output
     *      height of the output tensor.
     * * 4: An {@link OperandType::INT32} scalar, specifying the output
     *      width of the output tensor.
     * * 5: An {@link OperandType::FLOAT32} scalar, specifying the ratio
     *      from the height of original image to the height of feature map.
     * * 6: An {@link OperandType::FLOAT32} scalar, specifying the ratio
     *      from the width of original image to the width of feature map.
     * * 7: An {@link OperandType::INT32} scalar, specifying the number of
     *      sampling points in height dimension used to compute the output.
     *      Set to 0 for adaptive value of ceil(roi_height/out_height).
     * * 8: An {@link OperandType::INT32} scalar, specifying the number of
     *      sampling points in width dimension used to compute the output.
     *      Set to 0 for adaptive value of ceil(roi_width/out_width).
     * * 9: An {@link OperandType::BOOL} scalar, set to true to specify
     *      NCHW data layout for input0 and output0. Set to false for NHWC.
     *
     * Outputs:
     * * 0: A tensor of the same {@link OperandType} as input0. The output
     *      shape is [num_rois, out_height, out_width, depth].
     *      For a {@link OperandType::TENSOR_QUANT8_ASYMM} tensor,
     *      the scale and zeroPoint can be different from the input0 scale and zeroPoint.
     */
    ROI_ALIGN = 81,
    /**
     * Select and scale the feature map of each region of interest to a unified
     * output size by max-pooling.
     *
     * The region of interest is represented by its upper-left corner coordinate
     * (x1,y1) and lower-right corner coordinate (x2,y2) in the original image.
     * A spatial scaling factor is applied to map into feature map coordinate.
     * A valid region of interest should satisfy x1 <= x2 and y1 <= y2.
     *
     * Rounding is applied in this operation to ensure integer boundary for
     * regions of interest and pooling bins.
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_FLOAT16}
     * * {@link OperandType::TENSOR_FLOAT32}
     * * {@link OperandType::TENSOR_QUANT8_ASYMM}
     *
     * Supported tensor rank: 4, with "NHWC" or "NCHW" data layout.
     * With the default data layout NHWC, the data is stored in the order of:
     * [batch, height, width, channels]. Alternatively, the data layout could
     * be NCHW, the data storage order of: [batch, channels, height, width].
     *
     * Inputs:
     * * 0: A 4-D tensor, specifying the feature map.
     * * 1: A 2-D Tensor of shape [num_rois, 4], specifying the locations of
     *      the regions of interest, each line with format [x1, y1, x2, y2].
     *      For input0 of type {@link OperandType::TENSOR_QUANT8_ASYMM},
     *      this tensor should be of {@link OperandType::TENSOR_QUANT16_ASYMM},
     *      with zeroPoint of 0 and scale of 0.125.
     * * 2: An 1-D {@link OperandType::TENSOR_INT32} tensor, of shape
     *      [num_rois], specifying the batch index of each box. Boxes with
     *      the same batch index are grouped together.
     * * 3: An {@link OperandType::INT32} scalar, specifying the output
     *      height of the output tensor.
     * * 4: An {@link OperandType::INT32} scalar, specifying the output
     *      width of the output tensor.
     * * 5: An {@link OperandType::FLOAT32} scalar, specifying the ratio
     *      from the height of original image to the height of feature map.
     * * 6: An {@link OperandType::FLOAT32} scalar, specifying the ratio
     *      from the width of original image to the width of feature map.
     * * 7: An {@link OperandType::BOOL} scalar, set to true to specify
     *      NCHW data layout for input0 and output0. Set to false for NHWC.
     *
     * Outputs:
     * * 0: A tensor of the same {@link OperandType} as input0. The output
     *      shape is [num_rois, out_height, out_width, depth].
     *      For a {@link OperandType::TENSOR_QUANT8_ASYMM} tensor,
     *      the scale and zeroPoint must be the same as input0.
     */
    ROI_POOLING = 82,
    /**
     * Computes reciprocal of square root of x element-wise.
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_FLOAT16}
     * * {@link OperandType::TENSOR_FLOAT32}
     *
     * Supported tensor rank: from 1.
     *
     * Inputs:
     * * 0: A tensor.
     *
     * Outputs:
     * * 0: The output tensor of same shape as input0.
     */
    RSQRT = 83,
    /**
     * Using a tensor of booleans c and input tensors x and y select values
     * elementwise from both input tensors:
     *
     * O[i] = C[i] ? x[i] : y[i].
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_FLOAT16}
     * * {@link OperandType::TENSOR_FLOAT32}
     * * {@link OperandType::TENSOR_INT32}
     * * {@link OperandType::TENSOR_QUANT8_ASYMM}
     *
     * Supported tensor rank: from 1
     *
     * Inputs:
     * * 0: A tensor of type {@link OperandType::TENSOR_BOOL8} acting as a
     *      mask that chooses, based on the value at each element, whether the
     *      corresponding element in the output should be taken from input1 (if
     *      true) or input2 (if false).
     * * 1: An input tensor of the same shape as input0.
     * * 2: An input tensor of the same shape and type as input1.
     *      For a {@link OperandType::TENSOR_QUANT8_ASYMM} tensor,
     *      the scales and zeroPoint can be different from input1 scale and zeroPoint.
     *
     * Outputs:
     * * 0: A tensor of the same type and shape as input1 and input2.
     *      For a {@link OperandType::TENSOR_QUANT8_ASYMM} tensor,
     *      the scale and zeroPoint can be different from inputs' scale and zeroPoint.
     */
    SELECT = 84,
    /**
     * Computes sin of x element-wise.
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_FLOAT16}
     * * {@link OperandType::TENSOR_FLOAT32}
     *
     * Supported tensor rank: from 1.
     *
     * Inputs:
     * * 0: A tensor.
     *
     * Outputs:
     * * 0: The output tensor of same shape as input0.
     */
    SIN = 85,
    /**
     * Extracts a slice of specified size from the input tensor starting at a
     * specified location.
     *
     * The starting location is specified as a 1-D tensor containing offsets
     * for each dimension. The size is specified as a 1-D tensor containing
     * either size of a slice along corresponding dimension or -1. In the latter
     * case, all the remaining elements in dimension are included in the slice.
     *
     * A sum of begin offset and a size of a slice must not exceed size of a
     * corresponding dimension.
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_FLOAT16}
     * * {@link OperandType::TENSOR_FLOAT32}
     * * {@link OperandType::TENSOR_INT32}
     * * {@link OperandType::TENSOR_QUANT8_ASYMM}
     *
     * Supported tensor rank: from 1
     *
     * Inputs:
     * * 0: An n-D tensor to take slice from, may be zero-sized.
     * * 1: A 1-D tensor of type {@link OperandType::TENSOR_INT32} specifying
     *      the beginning indices of the slice in each dimension.
     * * 2: A 1-D tensor of type {@link OperandType::TENSOR_INT32} specifying
     *      the size of the slice in each dimension.
     *
     * Outputs:
     * * 0: An n-D tensor of the same type as the input containing the slice.
     *      For a {@link OperandType::TENSOR_QUANT8_ASYMM} tensor,
     *      its scale and zeroPoint has to be same as the input0 scale and zeroPoint.
     */
    SLICE = 86,
    /**
     * Splits a tensor along a given axis into num_splits subtensors.
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_FLOAT16}
     * * {@link OperandType::TENSOR_FLOAT32}
     * * {@link OperandType::TENSOR_INT32}
     * * {@link OperandType::TENSOR_QUANT8_ASYMM}
     *
     * Supported tensor rank: from 1
     *
     * Inputs:
     * * 0: An n-D tensor to split.
     * * 1: An {@link OperandType::INT32} scalar specifying the axis along
     *      which to split.
     * * 2: An {@link OperandType::INT32} scalar indicating the number of
     *      splits along given axis. Must evenly divide axis size.
     *
     * Outputs:
     * * 0 ~ (num_splits - 1): Resulting subtensors.
     *      For a {@link OperandType::TENSOR_QUANT8_ASYMM} tensor,
     *      the scale and zeroPoint must be the same as input0.
     */
    SPLIT = 87,
    /**
     * Computes square root of x element-wise.
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_FLOAT16}
     * * {@link OperandType::TENSOR_FLOAT32}
     *
     * Supported tensor rank: from 1.
     *
     * Inputs:
     * * 0: A tensor.
     *
     * Outputs:
     * * 0: The output tensor of same shape as input0.
     */
    SQRT = 88,
    /**
     * Constructs a tensor by tiling a given tensor.
     *
     * This operation creates a new tensor by replicating `input` `multiples`
     * times. The output tensor's i-th dimension has `input.dims(i) * multiples[i]`
     * elements, and the values of `input` are replicated `multiples[i]` times
     * along the i-th dimension.
     * For example, tiling `[a b c d]` by `[2]` produces `[a b c d a b c d]`.
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_FLOAT16}
     * * {@link OperandType::TENSOR_FLOAT32}
     * * {@link OperandType::TENSOR_INT32}
     * * {@link OperandType::TENSOR_QUANT8_ASYMM}
     *
     * Supported tensor rank: from 1
     *
     * Inputs:
     * * 0: input, an n-D tensor specifying the input.
     * * 1: multiples, a 1-D tensor of {@link OperandType::TENSOR_INT32}.
     *      The length of multiples must be n.
     *
     * Outputs:
     * * 0: A tiled tensor of the same {@link OperandType} and rank as `input`.
     *      For a {@link OperandType::TENSOR_QUANT8_ASYMM} tensor,
     *      the scale and zeroPoint must be the same as input0.
     */
    TILE = 89,
    /**
     * Finds values and indices of the k largest entries for the last dimension.
     *
     * Resulting values in each dimensions are sorted in descending order. If
     * two values are equal, the one with larger index appears first.
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_FLOAT16}
     * * {@link OperandType::TENSOR_FLOAT32}
     * * {@link OperandType::TENSOR_INT32}
     * * {@link OperandType::TENSOR_QUANT8_ASYMM}
     *
     * Supported tensor rank: from 1
     *
     * Inputs:
     * * 0: input, an n-D tensor specifying the input.
     * * 1: k, an {@link OperandType::INT32} scalar, specifying the number of
     *      top elements to look for along the last dimension.
     *
     * Outputs:
     * * 0: An n-D tensor of the same type as the input, containing the k
     *      largest elements along each last dimensional slice.
     *      For a {@link OperandType::TENSOR_QUANT8_ASYMM} tensor,
     *      the scale and zeroPoint must be the same as input0.
     * * 1: An n-D tensor of type {@link OperandType::TENSOR_INT32}
     *      containing the indices of values within the last dimension of input.
     */
    TOPK_V2 = 90,
    /**
     * Performs the transpose of 2-D convolution operation.
     *
     * This operation is sometimes called "deconvolution" after Deconvolutional
     * Networks, but is actually the transpose (gradient) of
     * {@link OperandType::CONV_2D} rather than an actual deconvolution.
     *
     * The output dimensions are functions of the filter dimensions, stride, and
     * padding.
     *
     * Supported tensor {@link OperandType} configurations:
     * * 16 bit floating point:
     * * * {@link OperandType::TENSOR_FLOAT16} for input, filter, output, and bias.
     *
     * * 32 bit floating point:
     * * * {@link OperandType::TENSOR_FLOAT32} for input, filter, output, and bias.
     *
     * * Quantized:
     * * * {@link OperandType::TENSOR_QUANT8_ASYMM} for input, filter, and output.
     * * * {@link OperandType::TENSOR_INT32} for bias (with scale set to
     * * * input.scale * filter.scale).
     *
     * * Quantized with symmetric per channel quantization for the filter:
     * * * {@link OperandType::TENSOR_QUANT8_ASYMM} for input, and output.
     * * * {@link OperandType::TENSOR_QUANT8_SYMM_PER_CHANNEL} for filter.
     * * * {@link OperandType::TENSOR_INT32} for bias (scale set to 0.0,
     * * * each value scaling is separate and equal to input.scale * filter.scales[channel]).
     *
     * Supported tensor rank: 4, with "NHWC" or "NCHW" data layout.
     * With the default data layout NHWC, the data is stored in the order of:
     * [batch, height, width, channels]. Alternatively, the data layout could
     * be NCHW, the data storage order of: [batch, channels, height, width].
     *
     * Both explicit padding and implicit padding are supported.
     *
     * Inputs (explicit padding):
     * * 0: A 4-D tensor, of shape [batches, height, width, depth_in],
     *      specifying the input.
     * * 1: A 4-D tensor, of shape
     *      [depth_out, filter_height, filter_width, depth_in], specifying the
     *      filter. For tensor of type
     *      {@link OperandType::TENSOR_QUANT8_SYMM_PER_CHANNEL} the channel
     *      dimension (SymmPerChannelQuantParams::channelDim) must be set to 0.
     * * 2: A 1-D tensor, of shape [depth_out], specifying the bias. For input
     *      tensor of type {@link OperandType::TENSOR_FLOAT32} or
     *      {@link OperandType::TENSOR_FLOAT16}, the bias must be of the
     *      same type.
     *      For filter tensor of {@link OperandType::TENSOR_QUANT8_ASYMM},
     *      the bias should be of {@link OperandType::TENSOR_INT32},
     *      with zeroPoint of 0 and bias_scale == input_scale * filter_scale.
     *      For filter tensor of {@link OperandType::TENSOR_QUANT8_SYMM_PER_CHANNEL},
     *      the bias must be of {@link OperandType::TENSOR_INT32}, with zeroPoint of 0
     *      and bias_scale of 0. The actual scale of each value 'i' is equal to
     *      bias_scale[i] = input_scale * filter_scale[i].
     * * 3: An {@link OperandType::INT32} scalar, specifying the padding on
     *      the left, in the ‘width’ dimension.
     * * 4: An {@link OperandType::INT32} scalar, specifying the padding on
     *      the right, in the ‘width’ dimension.
     * * 5: An {@link OperandType::INT32} scalar, specifying the padding on
     *      the top, in the ‘height’ dimension.
     * * 6: An {@link OperandType::INT32} scalar, specifying the padding on
     *      the bottom, in the ‘height’ dimension.
     * * 7: An {@link OperandType::INT32} scalar, specifying the stride when
     *      walking through input in the ‘width’ dimension.
     * * 8: An {@link OperandType::INT32} scalar, specifying the stride when
     *      walking through input in the ‘height’ dimension.
     * * 9: An {@link OperandType::INT32} scalar, and has to be one of the
     *      {@link FusedActivationFunc} values. Specifies the activation to
     *      invoke on the result.
     * * 10: An {@link OperandType::BOOL} scalar, set to true to specify
     *       NCHW data layout for input0 and output0. Set to false for NHWC.
     *
     * Inputs (implicit padding):
     * * 0: A 4-D tensor, of shape [batches, height, width, depth_in],
     *      specifying the input.
     * * 1: A 4-D tensor, of shape
     *      [depth_out, filter_height, filter_width, depth_in], specifying the
     *      filter. For tensor of type
     *      {@link OperandType::TENSOR_QUANT8_SYMM_PER_CHANNEL} the channel
     *      dimension (SymmPerChannelQuantParams::channelDim) must be set to 0.
     * * 2: A 1-D tensor, of shape [depth_out], specifying the bias. For input
     *      tensor of type {@link OperandType::TENSOR_FLOAT32} or
     *      {@link OperandType::TENSOR_FLOAT16}, the bias should be of the
     *      same type.
     *      For filter tensor of {@link OperandType::TENSOR_QUANT8_ASYMM},
     *      the bias should be of {@link OperandType::TENSOR_INT32},
     *      with zeroPoint of 0 and bias_scale == input_scale * filter_scale.
     *      For filter tensor of {@link OperandType::TENSOR_QUANT8_SYMM_PER_CHANNEL},
     *      the bias must be of {@link OperandType::TENSOR_INT32}, with zeroPoint of 0
     *      and bias_scale of 0. The actual scale of each value 'i' is equal to
     *      bias_scale[i] = input_scale * filter_scale[i].
     * * 3: An {@link OperandType::TENSOR_INT32} tensor, specifying the output
     *      tensor shape.
     * * 4: An {@link OperandType::INT32} scalar, specifying the implicit
     *      padding scheme, has to be one of the
     *      following values: {0 (NONE), 1 (SAME), 2 (VALID)}.
     * * 5: An {@link OperandType::INT32} scalar, specifying the stride when
     *      walking through input in the ‘width’ dimension.
     * * 6: An {@link OperandType::INT32} scalar, specifying the stride when
     *      walking through input in the ‘height’ dimension.
     * * 7: An {@link OperandType::INT32} scalar, and has to be one of the
     *      {@link FusedActivationFunc} values. Specifies the activation to
     *      invoke on the result.
     * * 8: An {@link OperandType::BOOL} scalar, set to true to specify
     *      NCHW data layout for input0 and output0. Set to false for NHWC.
     *
     * Outputs:
     * * 0: The output 4-D tensor, of shape
     *      [batches, out_height, out_width, depth_out].
     *      For a {@link OperandType::TENSOR_QUANT8_ASYMM} tensor,
     *      the scale and zeroPoint can be different from inputs' scale and zeroPoint.
     */
    TRANSPOSE_CONV_2D = 91,
    /**
     * A recurrent neural network specified by an LSTM cell.
     *
     * Performs (fully) dynamic unrolling of input.
     *
     * This Op unrolls the input along the time dimension, and implements the
     * following operation for each element in the sequence
     * s = 1...sequence_length:
     *   outputs[s] = projection(state = activation(LSTMOp(inputs[s])))
     *
     * Where LSTMOp is the LSTM op as in {@link OperandType::LSTM},
     * the "projection" is an optional projection layer from state and output
     * and the “activation” is the function passed as the
     * “fused_activation_function” argument (if not “NONE”).
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_FLOAT16}
     * * {@link OperandType::TENSOR_FLOAT32}
     *
     * Supported tensor rank: 3, either time-major or batch-major.
     *
     * All input and output tensors must be of the same type.
     *
     * Inputs:
     * * 0: The input (\f$x_t\f$).
     *      A 3-D tensor of shape:
     *        If time-major: [max_time, batch_size, input_size]
     *        If batch-major: [batch_size, max_time, input_size]
     *      where “max_time” is the number of timesteps (sequence length),
     *      “batch_size” corresponds to the batching dimension, and
     *      “input_size” is the size of the input.
     * * 1: The input-to-input weights (\f$W_{xi}\f$). Optional.
     *      A 2-D tensor of shape [num_units, input_size], where “num_units”
     *      corresponds to the number of cell units.
     * * 2: The input-to-forget weights (\f$W_{xf}\f$).
     *      A 2-D tensor of shape [num_units, input_size].
     * * 3: The input-to-cell weights (\f$W_{xc}\f$).
     *      A 2-D tensor of shape [num_units, input_size].
     * * 4: The input-to-output weights (\f$W_{xo}\f$).
     *      A 2-D tensor of shape [num_units, input_size].
     * * 5: The recurrent-to-input weights (\f$W_{hi}\f$). Optional.
     *      A 2-D tensor of shape [num_units, output_size], where “output_size”
     *      corresponds to either the number of cell units (i.e., “num_units”),
     *      or the second dimension of the “projection_weights”, if defined.
     * * 6: The recurrent-to-forget weights (\f$W_{hf}\f$).
     *      A 2-D tensor of shape [num_units, output_size].
     * * 7: The recurrent-to-cell weights (\f$W_{hc}\f$).
     *      A 2-D tensor of shape [num_units, output_size].
     * * 8: The recurrent-to-output weights (\f$W_{ho}\f$).
     *      A 2-D tensor of shape [num_units, output_size].
     * * 9: The cell-to-input weights (\f$W_{ci}\f$). Optional.
     *      A 1-D tensor of shape [num_units].
     * * 10:The cell-to-forget weights (\f$W_{cf}\f$). Optional.
     *      A 1-D tensor of shape [num_units].
     * * 11:The cell-to-output weights (\f$W_{co}\f$). Optional.
     *      A 1-D tensor of shape [num_units].
     * * 12:The input gate bias (\f$b_i\f$). Optional.
     *      A 1-D tensor of shape [num_units].
     * * 13:The forget gate bias (\f$b_f\f$).
     *      A 1-D tensor of shape [num_units].
     * * 14:The cell bias (\f$b_c\f$).
     *      A 1-D tensor of shape [num_units].
     * * 15:The output gate bias (\f$b_o\f$).
     *      A 1-D tensor of shape [num_units].
     * * 16:The projection weights (\f$W_{proj}\f$). Optional.
     *      A 2-D tensor of shape [output_size, num_units].
     * * 17:The projection bias (\f$b_{proj}\f$). Optional.
     *      A 1-D tensor of shape [output_size].
     * * 18:The output state (in) (\f$h_{t-1}\f$).
     *      A 2-D tensor of shape [batch_size, output_size].
     * * 19:The cell state (in) (\f$C_{t-1}\f$).
     *      A 2-D tensor of shape [batch_size, num_units].
     * * 20:The activation function (\f$g\f$).
     *      A value indicating the activation function:
     *      <ul>
     *      <li>0: None;
     *      <li>1: Relu;
     *      <li>3: Relu6;
     *      <li>4: Tanh;
     *      <li>6: Sigmoid.
     *      </ul>
     * * 21:The clipping threshold (\f$t_{cell}\f$) for the cell state, such
     *      that values are bound within [-cell_clip, cell_clip]. If set to 0.0
     *      then clipping is disabled.
     * * 22:The clipping threshold (\f$t_{proj}\f$) for the output from the
     *      projection layer, such that values are bound within
     *      [-proj_clip, proj_clip]. If set to 0.0 then clipping is disabled.
     * * 23:Time-major if true, batch-major if false.
     * * 24:The input layer normalization weights. Optional.
     *      A 1-D tensor of shape [num_units]. Used to rescale normalized inputs
     *      to activation at input gate.
     * * 25:The forget layer normalization weights. Optional.
     *      A 1-D tensor of shape [num_units]. Used to rescale normalized inputs
     *      to activation at forget gate.
     * * 26:The cell layer normalization weights. Optional.
     *      A 1-D tensor of shape [num_units]. Used to rescale normalized inputs
     *      to activation at cell gate.
     * * 27:The output layer normalization weights. Optional.
     *      A 1-D tensor of shape [num_units]. Used to rescale normalized inputs
     *      to activation at output gate.
     *
     * Outputs:
     * * 0: The output (\f$o_t\f$).
     *      A 3-D tensor of shape:
     *        If time-major: [max_time, batch_size, output_size]
     *        If batch-major: [batch_size, max_time, output_size]
     */
    UNIDIRECTIONAL_SEQUENCE_LSTM = 92,
    /**
     * A recurrent neural network layer that applies a basic RNN cell to a
     * sequence of inputs.
     *
     * This layer unrolls the input along the sequence dimension, and implements
     * the following operation
     * for each element in the sequence s = 1...sequence_length:
     *   outputs[s] = state = activation(inputs[s] * input_weights’ + state *
     *   recurrent_weights’ + bias)
     *
     * Where:
     * * “input_weights” is a weight matrix that multiplies the inputs;
     * * “recurrent_weights” is a weight matrix that multiplies the current
     *    “state” which itself is the output from the previous time step
     *    computation;
     * * “bias” is a bias vector (added to each output vector in the batch);
     * * “activation” is the function passed as the “fused_activation_function”
     *   argument (if not “NONE”).
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_FLOAT16}
     * * {@link OperandType::TENSOR_FLOAT32}
     *
     * The input tensors must all be the same type.
     *
     * Inputs:
     * * 0: input.
     *      A 3-D tensor. The shape is defined by the input 6 (timeMajor). If
     *      it is set to 1, then the input has a shape [maxTime, batchSize,
     *      inputSize], otherwise the input has a shape [batchSize, maxTime,
     *      inputSize].
     * * 1: weights.
     *      A 2-D tensor of shape [numUnits, inputSize].
     * * 2: recurrent_weights.
     *      A 2-D tensor of shape [numUnits, numUnits].
     * * 3: bias.
     *      A 1-D tensor of shape [numUnits].
     * * 4: hidden state
     *      A 2-D tensor of shape [batchSize, numUnits]. Specifies a hidden
     *      state input for the first time step of the computation.
     * * 5: fusedActivationFunction.
     *      A {@link FusedActivationFunc} value indicating the activation function. If
     *      “NONE” is specified then it results in a linear activation.
     * * 6: timeMajor
     *      An {@link OperandType::INT32} scalar specifying the shape format
     *      of input and output tensors. Must be set to either 0 or 1.
     * Outputs:
     * * 0: output.
     *      A 3-D tensor. The shape is defined by the input 6 (timeMajor). If
     *      it is set to 1, then the output has a shape [maxTime, batchSize,
     *      numUnits], otherwise the output has a shape [batchSize, maxTime,
     *      numUnits].
     */
    UNIDIRECTIONAL_SEQUENCE_RNN = 93,
    /**
     * Resizes images to given size using the nearest neighbor interpretation.
     *
     * Resized images must be distorted if their output aspect ratio is not the
     * same as input aspect ratio. The corner pixels of output may not be the
     * same as corner pixels of input.
     *
     * Supported tensor {@link OperandType}:
     * * {@link OperandType::TENSOR_FLOAT16}
     * * {@link OperandType::TENSOR_FLOAT32}
     * * {@link OperandType::TENSOR_QUANT8_ASYMM}
     *
     * Supported tensor rank: 4, with "NHWC" or "NCHW" data layout.
     * With the default data layout NHWC, the data is stored in the order of:
     * [batch, height, width, channels]. Alternatively, the data layout could
     * be NCHW, the data storage order of: [batch, channels, height, width].
     *
     * Both resizing by shape and resizing by scale are supported.
     *
     * Inputs (resizing by shape):
     * * 0: A 4-D tensor, of shape [batches, height, width, depth], specifying
     *      the input. Zero batches is supported for this tensor.
     * * 1: An {@link OperandType::INT32} scalar, specifying the output
     *      width of the output tensor.
     * * 2: An {@link OperandType::INT32} scalar, specifying the output
     *      height of the output tensor.
     * * 3: An {@link OperandType::BOOL} scalar, default to false.
     *      Set to true to specify NCHW data layout for input0 and output0.
     *
     * Inputs (resizing by scale):
     * * 0: A 4-D tensor, of shape [batches, height, width, depth], specifying
     *      the input. Zero batches is supported for this tensor.
     * * 1: A scalar, specifying width_scale, the scaling factor of the width
     *      dimension from the input tensor to the output tensor. The output
     *      width is calculated as new_width = floor(width * width_scale).
     *      The scalar must be of {@link OperandType::FLOAT16} if input0 is
     *      of {@link OperandType::TENSOR_FLOAT16} and of
     *      {@link OperandType::FLOAT32} otherwise.
     * * 2: A scalar, specifying height_scale, the scaling factor of the height
     *      dimension from the input tensor to the output tensor. The output
     *      height is calculated as new_height = floor(height * height_scale).
     *      The scalar must be of {@link OperandType::FLOAT16} if input0 is
     *      of {@link OperandType::TENSOR_FLOAT16} and of
     *      {@link OperandType::FLOAT32} otherwise.
     * * 3: An {@link OperandType::BOOL} scalar, default to false.
     *      Set to true to specify NCHW data layout for input0 and output0.
     *
     * Outputs:
     * * 0: The output 4-D tensor, of shape
     *      [batches, new_height, new_width, depth].
     *      For a {@link OperandType::TENSOR_QUANT8_ASYMM} tensor,
     *      the scale and zeroPoint must be the same as input0.
     */
    RESIZE_NEAREST_NEIGHBOR = 94,
    /**
     * DEPRECATED. Since NNAPI 1.2, extensions are the preferred alternative to
     * OEM operation and data types.
     *
     * This operation is OEM specific. It should only be used for OEM
     * applications.
     */
    OEM_OPERATION = 10000 /* @1.1::OperationType:OEM_OPERATION */,
};

/**
 * The range of values in the OperationType enum.
 */
enum class OperationTypeRange : uint32_t {
    BASE_MIN = 0u,
    FUNDAMENTAL_MIN = 0u,
    FUNDAMENTAL_MAX = 94u,
    OEM_MIN = 10000u,
    OEM_MAX = 10000u,
    BASE_MAX = 65535u /* 0xFFFF */,
};

/**
 * Device types.
 *
 * The type of NNAPI device.
 */
enum class DeviceType : int32_t {
    /**
     * The device does not fall into any category below.
     */
    OTHER = 1,
    /**
     * The device runs NNAPI models on single or multi-core CPU.
     */
    CPU = 2,
    /**
     * The device can run NNAPI models and also accelerate graphics APIs such
     * as OpenGL ES and Vulkan.
     */
    GPU = 3,
    /**
     * Dedicated accelerator for Machine Learning workloads.
     */
    ACCELERATOR = 4,
};

/**
 * The capabilities of a driver.
 *
 * Performance of an operation comes from the type of its first operand.
 * This represents performance for non extension operand types.
 */
struct Capabilities final {
    // Forward declaration for forward reference support:
    struct OperandPerformance;

    /**
     * Driver performance when operating on a particular data type.
     * In the case of float32 data, this is used when the calculations
     * are not relaxed.
     */
    struct OperandPerformance final {
        ::android::hardware::neuralnetworks::V1_2::OperandType type __attribute__ ((aligned(4)));
        ::android::hardware::neuralnetworks::V1_0::PerformanceInfo info __attribute__ ((aligned(4)));
    };

    static_assert(offsetof(::android::hardware::neuralnetworks::V1_2::Capabilities::OperandPerformance, type) == 0, "wrong offset");
    static_assert(offsetof(::android::hardware::neuralnetworks::V1_2::Capabilities::OperandPerformance, info) == 4, "wrong offset");
    static_assert(sizeof(::android::hardware::neuralnetworks::V1_2::Capabilities::OperandPerformance) == 12, "wrong size");
    static_assert(__alignof(::android::hardware::neuralnetworks::V1_2::Capabilities::OperandPerformance) == 4, "wrong alignment");

    /**
     * Driver performance when operating on float32 data but performing
     * calculations with range and/or precision as low as that of the IEEE
     * 754 16-bit floating-point format.
     */
    ::android::hardware::neuralnetworks::V1_0::PerformanceInfo relaxedFloat32toFloat16PerformanceScalar __attribute__ ((aligned(4)));
    ::android::hardware::neuralnetworks::V1_0::PerformanceInfo relaxedFloat32toFloat16PerformanceTensor __attribute__ ((aligned(4)));
    /**
     * Performance by operand type. Must be sorted by OperandType.
     * If a particular OperandType is not present in operandPerformance,
     * its performance is treated as { .execTime = FLT_MAX, .powerUsage = FLT_MAX }.
     */
    ::android::hardware::hidl_vec<::android::hardware::neuralnetworks::V1_2::Capabilities::OperandPerformance> operandPerformance __attribute__ ((aligned(8)));
};

static_assert(offsetof(::android::hardware::neuralnetworks::V1_2::Capabilities, relaxedFloat32toFloat16PerformanceScalar) == 0, "wrong offset");
static_assert(offsetof(::android::hardware::neuralnetworks::V1_2::Capabilities, relaxedFloat32toFloat16PerformanceTensor) == 8, "wrong offset");
static_assert(offsetof(::android::hardware::neuralnetworks::V1_2::Capabilities, operandPerformance) == 16, "wrong offset");
static_assert(sizeof(::android::hardware::neuralnetworks::V1_2::Capabilities) == 32, "wrong size");
static_assert(__alignof(::android::hardware::neuralnetworks::V1_2::Capabilities) == 8, "wrong alignment");

/**
 * Describes one operation of the model's graph.
 */
struct Operation final {
    /**
     * The operation type.
     *
     * Besides the values listed in {@link OperationType}, any value above
     * {@link OperationTypeRange::BASE_MAX} is possible and should be interpreted
     * as an extension type according to {@link Model::extensionNameToPrefix}.
     */
    ::android::hardware::neuralnetworks::V1_2::OperationType type __attribute__ ((aligned(4)));
    /**
     * Describes the table that contains the indexes of the inputs of the
     * operation. The offset is the index in the operandIndexes table.
     */
    ::android::hardware::hidl_vec<uint32_t> inputs __attribute__ ((aligned(8)));
    /**
     * Describes the table that contains the indexes of the outputs of the
     * operation. The offset is the index in the operandIndexes table.
     */
    ::android::hardware::hidl_vec<uint32_t> outputs __attribute__ ((aligned(8)));
};

static_assert(offsetof(::android::hardware::neuralnetworks::V1_2::Operation, type) == 0, "wrong offset");
static_assert(offsetof(::android::hardware::neuralnetworks::V1_2::Operation, inputs) == 8, "wrong offset");
static_assert(offsetof(::android::hardware::neuralnetworks::V1_2::Operation, outputs) == 24, "wrong offset");
static_assert(sizeof(::android::hardware::neuralnetworks::V1_2::Operation) == 40, "wrong size");
static_assert(__alignof(::android::hardware::neuralnetworks::V1_2::Operation) == 8, "wrong alignment");

/**
 * Parameters for TENSOR_QUANT8_SYMM_PER_CHANNEL operand.
 */
struct SymmPerChannelQuantParams final {
    /**
     * Array of scaling values for each channel. Each value must be greater than zero.
     */
    ::android::hardware::hidl_vec<float> scales __attribute__ ((aligned(8)));
    /**
     * Index of the channel dimension
     */
    uint32_t channelDim __attribute__ ((aligned(4)));
};

static_assert(offsetof(::android::hardware::neuralnetworks::V1_2::SymmPerChannelQuantParams, scales) == 0, "wrong offset");
static_assert(offsetof(::android::hardware::neuralnetworks::V1_2::SymmPerChannelQuantParams, channelDim) == 16, "wrong offset");
static_assert(sizeof(::android::hardware::neuralnetworks::V1_2::SymmPerChannelQuantParams) == 24, "wrong size");
static_assert(__alignof(::android::hardware::neuralnetworks::V1_2::SymmPerChannelQuantParams) == 8, "wrong alignment");

/**
 * Describes one operand of the model's graph.
 */
struct Operand final {
    // Forward declaration for forward reference support:
    struct ExtraParams;

    struct ExtraParams final {
        enum class hidl_discriminator : uint8_t {
            /**
             * No additional parameters.
             */
            none = 0,  // ::android::hidl::safe_union::V1_0::Monostate
            /**
             * Symmetric per-channel quantization parameters.
             *
             * Only applicable to operands of type TENSOR_QUANT8_SYMM_PER_CHANNEL.
             */
            channelQuant = 1,  // ::android::hardware::neuralnetworks::V1_2::SymmPerChannelQuantParams
            /**
             * Extension operand parameters.
             *
             * The framework treats this as an opaque data blob.
             * The format is up to individual extensions.
             */
            extension = 2,  // ::android::hardware::hidl_vec<uint8_t>
        };

        ExtraParams();
        ~ExtraParams();
        ExtraParams(ExtraParams&&);
        ExtraParams(const ExtraParams&);
        ExtraParams& operator=(ExtraParams&&);
        ExtraParams& operator=(const ExtraParams&);

        void none(const ::android::hidl::safe_union::V1_0::Monostate&);
        void none(::android::hidl::safe_union::V1_0::Monostate&&);
        ::android::hidl::safe_union::V1_0::Monostate& none();
        const ::android::hidl::safe_union::V1_0::Monostate& none() const;

        void channelQuant(const ::android::hardware::neuralnetworks::V1_2::SymmPerChannelQuantParams&);
        void channelQuant(::android::hardware::neuralnetworks::V1_2::SymmPerChannelQuantParams&&);
        ::android::hardware::neuralnetworks::V1_2::SymmPerChannelQuantParams& channelQuant();
        const ::android::hardware::neuralnetworks::V1_2::SymmPerChannelQuantParams& channelQuant() const;

        void extension(const ::android::hardware::hidl_vec<uint8_t>&);
        void extension(::android::hardware::hidl_vec<uint8_t>&&);
        ::android::hardware::hidl_vec<uint8_t>& extension();
        const ::android::hardware::hidl_vec<uint8_t>& extension() const;

        // Utility methods
        hidl_discriminator getDiscriminator() const;

        constexpr size_t hidl_getUnionOffset() const {
            return offsetof(::android::hardware::neuralnetworks::V1_2::Operand::ExtraParams, hidl_u);
        }

    private:
        void hidl_destructUnion();

        hidl_discriminator hidl_d __attribute__ ((aligned(1))) ;
        union hidl_union final {
            ::android::hidl::safe_union::V1_0::Monostate none __attribute__ ((aligned(1)));
            ::android::hardware::neuralnetworks::V1_2::SymmPerChannelQuantParams channelQuant __attribute__ ((aligned(8)));
            ::android::hardware::hidl_vec<uint8_t> extension __attribute__ ((aligned(8)));

            hidl_union();
            ~hidl_union();
        } hidl_u;

        static_assert(sizeof(::android::hardware::neuralnetworks::V1_2::Operand::ExtraParams::hidl_union) == 24, "wrong size");
        static_assert(__alignof(::android::hardware::neuralnetworks::V1_2::Operand::ExtraParams::hidl_union) == 8, "wrong alignment");
        static_assert(sizeof(::android::hardware::neuralnetworks::V1_2::Operand::ExtraParams::hidl_discriminator) == 1, "wrong size");
        static_assert(__alignof(::android::hardware::neuralnetworks::V1_2::Operand::ExtraParams::hidl_discriminator) == 1, "wrong alignment");
    };

    static_assert(sizeof(::android::hardware::neuralnetworks::V1_2::Operand::ExtraParams) == 32, "wrong size");
    static_assert(__alignof(::android::hardware::neuralnetworks::V1_2::Operand::ExtraParams) == 8, "wrong alignment");

    /**
     * The data type.
     *
     * Besides the values listed in {@link OperandType}, any value above
     * {@link OperandTypeRange::BASE_MAX} is possible and should be interpreted
     * as an extension type according to {@link Model::extensionNameToPrefix}.
     */
    ::android::hardware::neuralnetworks::V1_2::OperandType type __attribute__ ((aligned(4)));
    /**
     * Dimensions of the operand.
     *
     * For a scalar operand, dimensions.size() must be 0.
     *
     * A tensor operand with all dimensions specified has "fully
     * specified" dimensions. Whenever possible (i.e., whenever the
     * dimensions are known at model construction time), a tensor
     * operand should have (but is not required to have) fully
     * specified dimensions, in order to enable the best possible
     * performance.
     *
     * If a tensor operand's dimensions are not fully specified, the
     * dimensions of the operand are deduced from the operand
     * dimensions and values of the operation for which that operand
     * is an output.
     *
     * In the following situations, a tensor operand's dimensions must
     * be fully specified:
     *
     *     . The operand has lifetime CONSTANT_COPY or
     *       CONSTANT_REFERENCE.
     *
     *     . The operand has lifetime MODEL_INPUT. Fully
     *       specified dimensions must either be present in the
     *       Operand or they must be provided in the corresponding
     *       RequestArgument.
     *       EXCEPTION: If the input is optional and omitted
     *       (by setting the hasNoValue field of the corresponding
     *       RequestArgument to true) then it need not have fully
     *       specified dimensions.
     *
     * A tensor operand with some number of unspecified dimensions is
     * represented by setting each unspecified dimension to 0.
     *
     * A tensor operand with unspecified rank is represented by providing
     * an empty dimensions vector.
     */
    ::android::hardware::hidl_vec<uint32_t> dimensions __attribute__ ((aligned(8)));
    /**
     * The number of times this operand appears as an operation input.
     *
     * (For example, if this operand appears once in one operation's
     * input list, and three times in another operation's input list,
     * then numberOfConsumers = 4.)
     */
    uint32_t numberOfConsumers __attribute__ ((aligned(4)));
    /**
     * Quantized scale of the operand.
     *
     * Must be 0 when not applicable to an operand type.
     *
     * See {@link OperandType}.
     */
    float scale __attribute__ ((aligned(4)));
    /**
     * Quantized zero-point offset of the operand.
     *
     * Must be 0 when not applicable to an operand type.
     *
     * See {@link OperandType}.
     */
    int32_t zeroPoint __attribute__ ((aligned(4)));
    /**
     * How the operand is used.
     */
    ::android::hardware::neuralnetworks::V1_0::OperandLifeTime lifetime __attribute__ ((aligned(4)));
    /**
     * Where to find the data for this operand.
     * If the lifetime is TEMPORARY_VARIABLE, MODEL_INPUT, MODEL_OUTPUT, or
     * NO_VALUE:
     * - All the fields must be 0.
     * If the lifetime is CONSTANT_COPY:
     * - location.poolIndex is 0.
     * - location.offset is the offset in bytes into Model.operandValues.
     * - location.length is set.
     * If the lifetime is CONSTANT_REFERENCE:
     * - location.poolIndex is set.
     * - location.offset is the offset in bytes into the specified pool.
     * - location.length is set.
     */
    ::android::hardware::neuralnetworks::V1_0::DataLocation location __attribute__ ((aligned(4)));
    /**
     * Additional parameters specific to a particular operand type.
     */
    ::android::hardware::neuralnetworks::V1_2::Operand::ExtraParams extraParams __attribute__ ((aligned(8)));
};

static_assert(offsetof(::android::hardware::neuralnetworks::V1_2::Operand, type) == 0, "wrong offset");
static_assert(offsetof(::android::hardware::neuralnetworks::V1_2::Operand, dimensions) == 8, "wrong offset");
static_assert(offsetof(::android::hardware::neuralnetworks::V1_2::Operand, numberOfConsumers) == 24, "wrong offset");
static_assert(offsetof(::android::hardware::neuralnetworks::V1_2::Operand, scale) == 28, "wrong offset");
static_assert(offsetof(::android::hardware::neuralnetworks::V1_2::Operand, zeroPoint) == 32, "wrong offset");
static_assert(offsetof(::android::hardware::neuralnetworks::V1_2::Operand, lifetime) == 36, "wrong offset");
static_assert(offsetof(::android::hardware::neuralnetworks::V1_2::Operand, location) == 40, "wrong offset");
static_assert(offsetof(::android::hardware::neuralnetworks::V1_2::Operand, extraParams) == 56, "wrong offset");
static_assert(sizeof(::android::hardware::neuralnetworks::V1_2::Operand) == 88, "wrong size");
static_assert(__alignof(::android::hardware::neuralnetworks::V1_2::Operand) == 8, "wrong alignment");

/**
 * A Neural Network Model.
 *
 * This includes not only the execution graph, but also constant data such as
 * weights or scalars added at construction time. The only information that
 * may not be known is the shape of the input tensors.
 */
struct Model final {
    // Forward declaration for forward reference support:
    struct ExtensionNameAndPrefix;
    enum class ExtensionTypeEncoding : uint8_t;

    /**
     * A correspondence between an extension name and a prefix of operand and
     * operation type values.
     */
    struct ExtensionNameAndPrefix final {
        /**
         * The extension name.
         *
         * See {@link Extension::name} for the format specification.
         */
        ::android::hardware::hidl_string name __attribute__ ((aligned(8)));
        /**
         * The unique extension identifier within the model.
         *
         * See {@link Model::extensionNameToPrefix}.
         */
        uint16_t prefix __attribute__ ((aligned(2)));
    };

    static_assert(offsetof(::android::hardware::neuralnetworks::V1_2::Model::ExtensionNameAndPrefix, name) == 0, "wrong offset");
    static_assert(offsetof(::android::hardware::neuralnetworks::V1_2::Model::ExtensionNameAndPrefix, prefix) == 16, "wrong offset");
    static_assert(sizeof(::android::hardware::neuralnetworks::V1_2::Model::ExtensionNameAndPrefix) == 24, "wrong size");
    static_assert(__alignof(::android::hardware::neuralnetworks::V1_2::Model::ExtensionNameAndPrefix) == 8, "wrong alignment");

    /**
     * Numeric values of extension operand and operation types have the
     * following structure:
     * - 16 high bits represent the "prefix", which corresponds uniquely to the
     *   extension name.
     * - 16 low bits represent the type ID within the extension.
     */
    enum class ExtensionTypeEncoding : uint8_t {
        HIGH_BITS_PREFIX = 16,
        LOW_BITS_TYPE = 16,
    };

    /**
     * All operands included in the model.
     */
    ::android::hardware::hidl_vec<::android::hardware::neuralnetworks::V1_2::Operand> operands __attribute__ ((aligned(8)));
    /**
     * All operations included in the model.
     *
     * The operations are sorted into execution order. Every operand
     * with lifetime MODEL_OUTPUT or TEMPORARY_VARIABLE must be
     * written before it is read.
     */
    ::android::hardware::hidl_vec<::android::hardware::neuralnetworks::V1_2::Operation> operations __attribute__ ((aligned(8)));
    /**
     * Input indexes of the model. There must be at least one.
     *
     * Each value corresponds to the index of the operand in "operands".
     */
    ::android::hardware::hidl_vec<uint32_t> inputIndexes __attribute__ ((aligned(8)));
    /**
     * Output indexes of the model. There must be at least one.
     *
     * Each value corresponds to the index of the operand in "operands".
     */
    ::android::hardware::hidl_vec<uint32_t> outputIndexes __attribute__ ((aligned(8)));
    /**
     * A byte buffer containing operand data that were copied into the model.
     *
     * An operand's value must be located here if and only if Operand::lifetime
     * equals OperandLifeTime::CONSTANT_COPY.
     */
    ::android::hardware::hidl_vec<uint8_t> operandValues __attribute__ ((aligned(8)));
    /**
     * A collection of shared memory pools containing operand values.
     *
     * An operand's value must be located here if and only if Operand::lifetime
     * equals OperandLifeTime::CONSTANT_REFERENCE.
     */
    ::android::hardware::hidl_vec<::android::hardware::hidl_memory> pools __attribute__ ((aligned(8)));
    /**
     * 'true' indicates TENSOR_FLOAT32 may be calculated with range and/or
     * precision as low as that of the IEEE 754 16-bit floating-point format.
     * 'false' indicates TENSOR_FLOAT32 must be calculated using at least the
     * range and precision of the IEEE 754 32-bit floating-point format.
     */
    bool relaxComputationFloat32toFloat16 __attribute__ ((aligned(1)));
    /**
     * The mapping between extension names and prefixes of operand and
     * operation type values.
     *
     * An operand or operation whose numeric type value is above
     * {@link OperandTypeRange::BASE_MAX} or
     * {@link OperationTypeRange::BASE_MAX} respectively should be interpreted
     * as an extension operand. The low
     * {@link Model::ExtensionTypeEncoding::LOW_BITS_TYPE} bits of the value
     * correspond to the type ID within the extension and the high
     * {@link Model::ExtensionTypeEncoding::HIGH_BITS_PREFIX} bits encode
     * the "prefix", which maps uniquely to the extension name.
     *
     * For example, if a model contains an operation whose value is
     * 0xAAAABBBB and extensionNameToPrefix contains an entry with
     * prefix=0xAAAA and name="vendor.test.test_extension", then
     * the operation should be interpreted as the operation 0xBBBB
     * of the extension named vendor.test.test_extension.
     *
     * This is a one-to-one correspondence. That is, there must be at most one
     * prefix corresponding to each extension name and at most one extension
     * name corresponding to each prefix.
     */
    ::android::hardware::hidl_vec<::android::hardware::neuralnetworks::V1_2::Model::ExtensionNameAndPrefix> extensionNameToPrefix __attribute__ ((aligned(8)));
};

static_assert(offsetof(::android::hardware::neuralnetworks::V1_2::Model, operands) == 0, "wrong offset");
static_assert(offsetof(::android::hardware::neuralnetworks::V1_2::Model, operations) == 16, "wrong offset");
static_assert(offsetof(::android::hardware::neuralnetworks::V1_2::Model, inputIndexes) == 32, "wrong offset");
static_assert(offsetof(::android::hardware::neuralnetworks::V1_2::Model, outputIndexes) == 48, "wrong offset");
static_assert(offsetof(::android::hardware::neuralnetworks::V1_2::Model, operandValues) == 64, "wrong offset");
static_assert(offsetof(::android::hardware::neuralnetworks::V1_2::Model, pools) == 80, "wrong offset");
static_assert(offsetof(::android::hardware::neuralnetworks::V1_2::Model, relaxComputationFloat32toFloat16) == 96, "wrong offset");
static_assert(offsetof(::android::hardware::neuralnetworks::V1_2::Model, extensionNameToPrefix) == 104, "wrong offset");
static_assert(sizeof(::android::hardware::neuralnetworks::V1_2::Model) == 120, "wrong size");
static_assert(__alignof(::android::hardware::neuralnetworks::V1_2::Model) == 8, "wrong alignment");

/**
 * Describes the shape information of an output operand after execution.
 */
struct OutputShape final {
    /**
     * Dimensions of the operand.
     */
    ::android::hardware::hidl_vec<uint32_t> dimensions __attribute__ ((aligned(8)));
    /**
     * Whether the provided buffer size is sufficient for the output.
     */
    bool isSufficient __attribute__ ((aligned(1)));
};

static_assert(offsetof(::android::hardware::neuralnetworks::V1_2::OutputShape, dimensions) == 0, "wrong offset");
static_assert(offsetof(::android::hardware::neuralnetworks::V1_2::OutputShape, isSufficient) == 16, "wrong offset");
static_assert(sizeof(::android::hardware::neuralnetworks::V1_2::OutputShape) == 24, "wrong size");
static_assert(__alignof(::android::hardware::neuralnetworks::V1_2::OutputShape) == 8, "wrong alignment");

/**
 * Specifies whether or not to measure timing information during execution.
 */
enum class MeasureTiming : int32_t {
    NO = 0,
    YES = 1,
};

/**
 * Timing information measured during execution. Each time is a duration from
 * the beginning of some task to the end of that task, including time when that
 * task is not active (for example, preempted by some other task, or
 * waiting for some resource to become available).
 *
 * Times are measured in microseconds.
 * When a time is not available, it must be reported as UINT64_MAX.
 */
struct Timing final {
    /**
     * Execution time on device (not driver, which runs on host processor).
     */
    uint64_t timeOnDevice __attribute__ ((aligned(8)));
    /**
     * Execution time in driver (including time on device).
     */
    uint64_t timeInDriver __attribute__ ((aligned(8)));
};

static_assert(offsetof(::android::hardware::neuralnetworks::V1_2::Timing, timeOnDevice) == 0, "wrong offset");
static_assert(offsetof(::android::hardware::neuralnetworks::V1_2::Timing, timeInDriver) == 8, "wrong offset");
static_assert(sizeof(::android::hardware::neuralnetworks::V1_2::Timing) == 16, "wrong size");
static_assert(__alignof(::android::hardware::neuralnetworks::V1_2::Timing) == 8, "wrong alignment");

/**
 * FmqRequestDatum is a single element of a serialized representation of an
 * execution request (a {@link @1.0::Request} object and a {@link MeasureTiming}
 * value) which is sent across FastMessageQueue.
 *
 * The serialized representation for a particular execution is referred to later
 * in these descriptions as a 'packet'.
 *
 * FastMessageQueue can only pass HIDL-defined types that do not involve nested
 * buffers, handles, or interfaces.
 *
 * The request is serialized as follows:
 * 1) 'packetInformation'
 * 2) For each input operand:
 *    2.1) 'inputOperandInformation'
 *    2.2) For each dimension element of the operand:
 *         2.2.1) 'inputOperandDimensionValue'
 * 3) For each output operand:
 *    3.1) 'outputOperandInformation'
 *    3.2) For each dimension element of the operand:
 *         3.2.1) 'outputOperandDimensionValue'
 * 4) For each pool:
 *    4.1) 'poolIdentifier'
 * 5) 'measureTiming'
 */
struct FmqRequestDatum final {
    // Forward declaration for forward reference support:
    struct PacketInformation;
    struct OperandInformation;

    /**
     * Type to describe the high-level layout of the packet.
     */
    struct PacketInformation final {
        /**
         * How many elements the packet contains, including the
         * "packetInformation" datum.
         */
        uint32_t packetSize __attribute__ ((aligned(4)));
        /**
         * Number of input operands.
         */
        uint32_t numberOfInputOperands __attribute__ ((aligned(4)));
        /**
         * Number of output operands.
         */
        uint32_t numberOfOutputOperands __attribute__ ((aligned(4)));
        /**
         * Number of pool identifiers.
         */
        uint32_t numberOfPools __attribute__ ((aligned(4)));
    };

    static_assert(offsetof(::android::hardware::neuralnetworks::V1_2::FmqRequestDatum::PacketInformation, packetSize) == 0, "wrong offset");
    static_assert(offsetof(::android::hardware::neuralnetworks::V1_2::FmqRequestDatum::PacketInformation, numberOfInputOperands) == 4, "wrong offset");
    static_assert(offsetof(::android::hardware::neuralnetworks::V1_2::FmqRequestDatum::PacketInformation, numberOfOutputOperands) == 8, "wrong offset");
    static_assert(offsetof(::android::hardware::neuralnetworks::V1_2::FmqRequestDatum::PacketInformation, numberOfPools) == 12, "wrong offset");
    static_assert(sizeof(::android::hardware::neuralnetworks::V1_2::FmqRequestDatum::PacketInformation) == 16, "wrong size");
    static_assert(__alignof(::android::hardware::neuralnetworks::V1_2::FmqRequestDatum::PacketInformation) == 4, "wrong alignment");

    /**
     * Type representing the information for each operand.
     */
    struct OperandInformation final {
        /**
         * If true, the argument does not have a value. This can be used for
         * operations that take optional arguments. If true, the fields of
         * 'location' are set to 0, 'numberOfDimensions' is set to 0,  and the
         * dimensions information is omitted from the serialization.
         */
        bool hasNoValue __attribute__ ((aligned(1)));
        /**
         * The location within one of the memory pools passed in the Request.
         */
        ::android::hardware::neuralnetworks::V1_0::DataLocation location __attribute__ ((aligned(4)));
        /**
         * Number of subsequent elements that belong to the dimensions vector.
         */
        uint32_t numberOfDimensions __attribute__ ((aligned(4)));
    };

    static_assert(offsetof(::android::hardware::neuralnetworks::V1_2::FmqRequestDatum::OperandInformation, hasNoValue) == 0, "wrong offset");
    static_assert(offsetof(::android::hardware::neuralnetworks::V1_2::FmqRequestDatum::OperandInformation, location) == 4, "wrong offset");
    static_assert(offsetof(::android::hardware::neuralnetworks::V1_2::FmqRequestDatum::OperandInformation, numberOfDimensions) == 16, "wrong offset");
    static_assert(sizeof(::android::hardware::neuralnetworks::V1_2::FmqRequestDatum::OperandInformation) == 20, "wrong size");
    static_assert(__alignof(::android::hardware::neuralnetworks::V1_2::FmqRequestDatum::OperandInformation) == 4, "wrong alignment");

    enum class hidl_discriminator : uint8_t {
        /**
         * packetInformation is the first element of the packet and describes the
         * remainder of the packet.
         */
        packetInformation = 0,  // ::android::hardware::neuralnetworks::V1_2::FmqRequestDatum::PacketInformation
        /**
         * Information for each input operand.
         */
        inputOperandInformation = 1,  // ::android::hardware::neuralnetworks::V1_2::FmqRequestDatum::OperandInformation
        /**
         * Element of the dimensions vector.
         */
        inputOperandDimensionValue = 2,  // uint32_t
        /**
         * Information for each output operand.
         */
        outputOperandInformation = 3,  // ::android::hardware::neuralnetworks::V1_2::FmqRequestDatum::OperandInformation
        /**
         * Element of the dimensions vector.
         */
        outputOperandDimensionValue = 4,  // uint32_t
        /**
         * Unique identifier for a pool.
         *
         * A {@link @1.0::Request} passes across one or more pools of shared memory
         * for the inputs and outputs of an execution. However, these memory pools
         * are not able to be sent across FastMessageQueue directly. Instead, the
         * producing side of the FMQ represents each different pool with a unique
         * identifier, and sends this identifier across the FMQ. Whenever the
         * consuming side of the FMQ needs the memory corresponding to this unique
         * identifier, it can pass the identifier to
         * {@link IBurstCallback::getMemories} to retreive the memory. Although this
         * HIDL Binder call is expensive compared to communication across FMQ, it is
         * only needed in the cases when the consumer does not recognize the unique
         * identifier.
         */
        poolIdentifier = 5,  // int32_t
        /**
         * Specifies whether or not to measure duration of the execution. The
         * duration runs from the time the driver dequeues the request from a
         * FastMessageQueue to the time the driver enqueues results to a
         * FastMessageQueue.
         */
        measureTiming = 6,  // ::android::hardware::neuralnetworks::V1_2::MeasureTiming
    };

    FmqRequestDatum();
    ~FmqRequestDatum();
    FmqRequestDatum(FmqRequestDatum&&);
    FmqRequestDatum(const FmqRequestDatum&);
    FmqRequestDatum& operator=(FmqRequestDatum&&);
    FmqRequestDatum& operator=(const FmqRequestDatum&);

    void packetInformation(const ::android::hardware::neuralnetworks::V1_2::FmqRequestDatum::PacketInformation&);
    void packetInformation(::android::hardware::neuralnetworks::V1_2::FmqRequestDatum::PacketInformation&&);
    ::android::hardware::neuralnetworks::V1_2::FmqRequestDatum::PacketInformation& packetInformation();
    const ::android::hardware::neuralnetworks::V1_2::FmqRequestDatum::PacketInformation& packetInformation() const;

    void inputOperandInformation(const ::android::hardware::neuralnetworks::V1_2::FmqRequestDatum::OperandInformation&);
    void inputOperandInformation(::android::hardware::neuralnetworks::V1_2::FmqRequestDatum::OperandInformation&&);
    ::android::hardware::neuralnetworks::V1_2::FmqRequestDatum::OperandInformation& inputOperandInformation();
    const ::android::hardware::neuralnetworks::V1_2::FmqRequestDatum::OperandInformation& inputOperandInformation() const;

    void inputOperandDimensionValue(uint32_t);
    uint32_t& inputOperandDimensionValue();
    uint32_t inputOperandDimensionValue() const;

    void outputOperandInformation(const ::android::hardware::neuralnetworks::V1_2::FmqRequestDatum::OperandInformation&);
    void outputOperandInformation(::android::hardware::neuralnetworks::V1_2::FmqRequestDatum::OperandInformation&&);
    ::android::hardware::neuralnetworks::V1_2::FmqRequestDatum::OperandInformation& outputOperandInformation();
    const ::android::hardware::neuralnetworks::V1_2::FmqRequestDatum::OperandInformation& outputOperandInformation() const;

    void outputOperandDimensionValue(uint32_t);
    uint32_t& outputOperandDimensionValue();
    uint32_t outputOperandDimensionValue() const;

    void poolIdentifier(int32_t);
    int32_t& poolIdentifier();
    int32_t poolIdentifier() const;

    void measureTiming(::android::hardware::neuralnetworks::V1_2::MeasureTiming);
    ::android::hardware::neuralnetworks::V1_2::MeasureTiming& measureTiming();
    ::android::hardware::neuralnetworks::V1_2::MeasureTiming measureTiming() const;

    // Utility methods
    hidl_discriminator getDiscriminator() const;

    constexpr size_t hidl_getUnionOffset() const {
        return offsetof(::android::hardware::neuralnetworks::V1_2::FmqRequestDatum, hidl_u);
    }

private:
    void hidl_destructUnion();

    hidl_discriminator hidl_d __attribute__ ((aligned(1))) ;
    union hidl_union final {
        ::android::hardware::neuralnetworks::V1_2::FmqRequestDatum::PacketInformation packetInformation __attribute__ ((aligned(4)));
        ::android::hardware::neuralnetworks::V1_2::FmqRequestDatum::OperandInformation inputOperandInformation __attribute__ ((aligned(4)));
        uint32_t inputOperandDimensionValue __attribute__ ((aligned(4)));
        ::android::hardware::neuralnetworks::V1_2::FmqRequestDatum::OperandInformation outputOperandInformation __attribute__ ((aligned(4)));
        uint32_t outputOperandDimensionValue __attribute__ ((aligned(4)));
        int32_t poolIdentifier __attribute__ ((aligned(4)));
        ::android::hardware::neuralnetworks::V1_2::MeasureTiming measureTiming __attribute__ ((aligned(4)));

        hidl_union();
        ~hidl_union();
    } hidl_u;

    static_assert(sizeof(::android::hardware::neuralnetworks::V1_2::FmqRequestDatum::hidl_union) == 20, "wrong size");
    static_assert(__alignof(::android::hardware::neuralnetworks::V1_2::FmqRequestDatum::hidl_union) == 4, "wrong alignment");
    static_assert(sizeof(::android::hardware::neuralnetworks::V1_2::FmqRequestDatum::hidl_discriminator) == 1, "wrong size");
    static_assert(__alignof(::android::hardware::neuralnetworks::V1_2::FmqRequestDatum::hidl_discriminator) == 1, "wrong alignment");
};

static_assert(sizeof(::android::hardware::neuralnetworks::V1_2::FmqRequestDatum) == 24, "wrong size");
static_assert(__alignof(::android::hardware::neuralnetworks::V1_2::FmqRequestDatum) == 4, "wrong alignment");

/**
 * FmqResultDatum is a single element of a serialized representation of the
 * values returned from an execution ({@link @1.0::ErrorStatus},
 * vec<{@link OutputShape}>, and {@link Timing}) which is returned via
 * FastMessageQueue.
 *
 * The serialized representation for a particular execution is referred to later
 * in these descriptions as a 'packet'.
 *
 * FastMessageQueue can only pass HIDL-defined types that do not involve nested
 * buffers, handles, or interfaces.
 *
 * The execution return values ({@link @1.0::ErrorStatus} and
 * vec<{@link OutputShape}>) are serialized as follows:
 * 1) 'packetInformation'
 * 2) For each returned operand:
 *    2.1) 'operandInformation'
 *    2.2) For each dimension element of the operand:
 *         2.2.1) 'operandDimensionValue'
 * 3) 'executionTiming'
 */
struct FmqResultDatum final {
    // Forward declaration for forward reference support:
    struct PacketInformation;
    struct OperandInformation;

    /**
     * Type to describe the high-level layout of the packet.
     */
    struct PacketInformation final {
        /**
         * How many elements the packet contains, including the
         * "packetInformation" datum.
         */
        uint32_t packetSize __attribute__ ((aligned(4)));
        /**
         * Status of the execution.
         */
        ::android::hardware::neuralnetworks::V1_0::ErrorStatus errorStatus __attribute__ ((aligned(4)));
        /**
         * Number of returned operands.
         */
        uint32_t numberOfOperands __attribute__ ((aligned(4)));
    };

    static_assert(offsetof(::android::hardware::neuralnetworks::V1_2::FmqResultDatum::PacketInformation, packetSize) == 0, "wrong offset");
    static_assert(offsetof(::android::hardware::neuralnetworks::V1_2::FmqResultDatum::PacketInformation, errorStatus) == 4, "wrong offset");
    static_assert(offsetof(::android::hardware::neuralnetworks::V1_2::FmqResultDatum::PacketInformation, numberOfOperands) == 8, "wrong offset");
    static_assert(sizeof(::android::hardware::neuralnetworks::V1_2::FmqResultDatum::PacketInformation) == 12, "wrong size");
    static_assert(__alignof(::android::hardware::neuralnetworks::V1_2::FmqResultDatum::PacketInformation) == 4, "wrong alignment");

    /**
     * Type representing the information for each operand.
     */
    struct OperandInformation final {
        /**
         * Indicates whether the operand's output buffer is large enough to
         * store the operand's result data.
         */
        bool isSufficient __attribute__ ((aligned(1)));
        /**
         * Number of subsequent elements that belong to the dimensions vector.
         */
        uint32_t numberOfDimensions __attribute__ ((aligned(4)));
    };

    static_assert(offsetof(::android::hardware::neuralnetworks::V1_2::FmqResultDatum::OperandInformation, isSufficient) == 0, "wrong offset");
    static_assert(offsetof(::android::hardware::neuralnetworks::V1_2::FmqResultDatum::OperandInformation, numberOfDimensions) == 4, "wrong offset");
    static_assert(sizeof(::android::hardware::neuralnetworks::V1_2::FmqResultDatum::OperandInformation) == 8, "wrong size");
    static_assert(__alignof(::android::hardware::neuralnetworks::V1_2::FmqResultDatum::OperandInformation) == 4, "wrong alignment");

    enum class hidl_discriminator : uint8_t {
        /**
         * packetInformation is the first element of the packet and describes the
         * remainder of the packet. It additionally includes the status of the
         * execution.
         */
        packetInformation = 0,  // ::android::hardware::neuralnetworks::V1_2::FmqResultDatum::PacketInformation
        /**
         * Information for each returned operand.
         */
        operandInformation = 1,  // ::android::hardware::neuralnetworks::V1_2::FmqResultDatum::OperandInformation
        /**
         * Element of the dimensions vector.
         */
        operandDimensionValue = 2,  // uint32_t
        /**
         * Duration of execution. Unless measurement was requested and execution
         * succeeds, all times must be reported as UINT64_MAX. A driver may choose
         * to report any time as UINT64_MAX, indicating that measurement is not
         * available.
         */
        executionTiming = 3,  // ::android::hardware::neuralnetworks::V1_2::Timing
    };

    FmqResultDatum();
    ~FmqResultDatum();
    FmqResultDatum(FmqResultDatum&&);
    FmqResultDatum(const FmqResultDatum&);
    FmqResultDatum& operator=(FmqResultDatum&&);
    FmqResultDatum& operator=(const FmqResultDatum&);

    void packetInformation(const ::android::hardware::neuralnetworks::V1_2::FmqResultDatum::PacketInformation&);
    void packetInformation(::android::hardware::neuralnetworks::V1_2::FmqResultDatum::PacketInformation&&);
    ::android::hardware::neuralnetworks::V1_2::FmqResultDatum::PacketInformation& packetInformation();
    const ::android::hardware::neuralnetworks::V1_2::FmqResultDatum::PacketInformation& packetInformation() const;

    void operandInformation(const ::android::hardware::neuralnetworks::V1_2::FmqResultDatum::OperandInformation&);
    void operandInformation(::android::hardware::neuralnetworks::V1_2::FmqResultDatum::OperandInformation&&);
    ::android::hardware::neuralnetworks::V1_2::FmqResultDatum::OperandInformation& operandInformation();
    const ::android::hardware::neuralnetworks::V1_2::FmqResultDatum::OperandInformation& operandInformation() const;

    void operandDimensionValue(uint32_t);
    uint32_t& operandDimensionValue();
    uint32_t operandDimensionValue() const;

    void executionTiming(const ::android::hardware::neuralnetworks::V1_2::Timing&);
    void executionTiming(::android::hardware::neuralnetworks::V1_2::Timing&&);
    ::android::hardware::neuralnetworks::V1_2::Timing& executionTiming();
    const ::android::hardware::neuralnetworks::V1_2::Timing& executionTiming() const;

    // Utility methods
    hidl_discriminator getDiscriminator() const;

    constexpr size_t hidl_getUnionOffset() const {
        return offsetof(::android::hardware::neuralnetworks::V1_2::FmqResultDatum, hidl_u);
    }

private:
    void hidl_destructUnion();

    hidl_discriminator hidl_d __attribute__ ((aligned(1))) ;
    union hidl_union final {
        ::android::hardware::neuralnetworks::V1_2::FmqResultDatum::PacketInformation packetInformation __attribute__ ((aligned(4)));
        ::android::hardware::neuralnetworks::V1_2::FmqResultDatum::OperandInformation operandInformation __attribute__ ((aligned(4)));
        uint32_t operandDimensionValue __attribute__ ((aligned(4)));
        ::android::hardware::neuralnetworks::V1_2::Timing executionTiming __attribute__ ((aligned(8)));

        hidl_union();
        ~hidl_union();
    } hidl_u;

    static_assert(sizeof(::android::hardware::neuralnetworks::V1_2::FmqResultDatum::hidl_union) == 16, "wrong size");
    static_assert(__alignof(::android::hardware::neuralnetworks::V1_2::FmqResultDatum::hidl_union) == 8, "wrong alignment");
    static_assert(sizeof(::android::hardware::neuralnetworks::V1_2::FmqResultDatum::hidl_discriminator) == 1, "wrong size");
    static_assert(__alignof(::android::hardware::neuralnetworks::V1_2::FmqResultDatum::hidl_discriminator) == 1, "wrong alignment");
};

static_assert(sizeof(::android::hardware::neuralnetworks::V1_2::FmqResultDatum) == 24, "wrong size");
static_assert(__alignof(::android::hardware::neuralnetworks::V1_2::FmqResultDatum) == 8, "wrong alignment");

/**
 * Information about an extension.
 */
struct Extension final {
    // Forward declaration for forward reference support:
    struct OperandTypeInformation;

    /**
     * Information about an extension operand type.
     */
    struct OperandTypeInformation final {
        /**
         * The extension operand type.
         */
        uint16_t type __attribute__ ((aligned(2)));
        /**
         * Indicates whether the extension operand type represents a tensor or
         * a scalar.
         */
        bool isTensor __attribute__ ((aligned(1)));
        /**
         * The byte size of the operand (if scalar) or of a single element (if
         * tensor).
         */
        uint32_t byteSize __attribute__ ((aligned(4)));
    };

    static_assert(offsetof(::android::hardware::neuralnetworks::V1_2::Extension::OperandTypeInformation, type) == 0, "wrong offset");
    static_assert(offsetof(::android::hardware::neuralnetworks::V1_2::Extension::OperandTypeInformation, isTensor) == 2, "wrong offset");
    static_assert(offsetof(::android::hardware::neuralnetworks::V1_2::Extension::OperandTypeInformation, byteSize) == 4, "wrong offset");
    static_assert(sizeof(::android::hardware::neuralnetworks::V1_2::Extension::OperandTypeInformation) == 8, "wrong size");
    static_assert(__alignof(::android::hardware::neuralnetworks::V1_2::Extension::OperandTypeInformation) == 4, "wrong alignment");

    /**
     * The extension name.
     *
     * The name must consist of lowercase latin letters, numbers, periods, and
     * underscore signs. The name must contain at least one period.
     *
     * The name must start with the reverse domain name of the vendor.
     *
     * Example: com.google.test_extension
     */
    ::android::hardware::hidl_string name __attribute__ ((aligned(8)));
    /**
     * Information about operand types defined by the extension.
     */
    ::android::hardware::hidl_vec<::android::hardware::neuralnetworks::V1_2::Extension::OperandTypeInformation> operandTypes __attribute__ ((aligned(8)));
};

static_assert(offsetof(::android::hardware::neuralnetworks::V1_2::Extension, name) == 0, "wrong offset");
static_assert(offsetof(::android::hardware::neuralnetworks::V1_2::Extension, operandTypes) == 16, "wrong offset");
static_assert(sizeof(::android::hardware::neuralnetworks::V1_2::Extension) == 32, "wrong size");
static_assert(__alignof(::android::hardware::neuralnetworks::V1_2::Extension) == 8, "wrong alignment");

//
// type declarations for package
//

template<typename>
static inline std::string toString(uint32_t o);
static inline std::string toString(::android::hardware::neuralnetworks::V1_2::Constant o);
static inline void PrintTo(::android::hardware::neuralnetworks::V1_2::Constant o, ::std::ostream* os);
constexpr uint32_t operator|(const ::android::hardware::neuralnetworks::V1_2::Constant lhs, const ::android::hardware::neuralnetworks::V1_2::Constant rhs) {
    return static_cast<uint32_t>(static_cast<uint32_t>(lhs) | static_cast<uint32_t>(rhs));
}
constexpr uint32_t operator|(const uint32_t lhs, const ::android::hardware::neuralnetworks::V1_2::Constant rhs) {
    return static_cast<uint32_t>(lhs | static_cast<uint32_t>(rhs));
}
constexpr uint32_t operator|(const ::android::hardware::neuralnetworks::V1_2::Constant lhs, const uint32_t rhs) {
    return static_cast<uint32_t>(static_cast<uint32_t>(lhs) | rhs);
}
constexpr uint32_t operator&(const ::android::hardware::neuralnetworks::V1_2::Constant lhs, const ::android::hardware::neuralnetworks::V1_2::Constant rhs) {
    return static_cast<uint32_t>(static_cast<uint32_t>(lhs) & static_cast<uint32_t>(rhs));
}
constexpr uint32_t operator&(const uint32_t lhs, const ::android::hardware::neuralnetworks::V1_2::Constant rhs) {
    return static_cast<uint32_t>(lhs & static_cast<uint32_t>(rhs));
}
constexpr uint32_t operator&(const ::android::hardware::neuralnetworks::V1_2::Constant lhs, const uint32_t rhs) {
    return static_cast<uint32_t>(static_cast<uint32_t>(lhs) & rhs);
}
constexpr uint32_t &operator|=(uint32_t& v, const ::android::hardware::neuralnetworks::V1_2::Constant e) {
    v |= static_cast<uint32_t>(e);
    return v;
}
constexpr uint32_t &operator&=(uint32_t& v, const ::android::hardware::neuralnetworks::V1_2::Constant e) {
    v &= static_cast<uint32_t>(e);
    return v;
}

template<typename>
static inline std::string toString(int32_t o);
static inline std::string toString(::android::hardware::neuralnetworks::V1_2::OperandType o);
static inline void PrintTo(::android::hardware::neuralnetworks::V1_2::OperandType o, ::std::ostream* os);
constexpr int32_t operator|(const ::android::hardware::neuralnetworks::V1_2::OperandType lhs, const ::android::hardware::neuralnetworks::V1_2::OperandType rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | static_cast<int32_t>(rhs));
}
constexpr int32_t operator|(const int32_t lhs, const ::android::hardware::neuralnetworks::V1_2::OperandType rhs) {
    return static_cast<int32_t>(lhs | static_cast<int32_t>(rhs));
}
constexpr int32_t operator|(const ::android::hardware::neuralnetworks::V1_2::OperandType lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | rhs);
}
constexpr int32_t operator&(const ::android::hardware::neuralnetworks::V1_2::OperandType lhs, const ::android::hardware::neuralnetworks::V1_2::OperandType rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & static_cast<int32_t>(rhs));
}
constexpr int32_t operator&(const int32_t lhs, const ::android::hardware::neuralnetworks::V1_2::OperandType rhs) {
    return static_cast<int32_t>(lhs & static_cast<int32_t>(rhs));
}
constexpr int32_t operator&(const ::android::hardware::neuralnetworks::V1_2::OperandType lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & rhs);
}
constexpr int32_t &operator|=(int32_t& v, const ::android::hardware::neuralnetworks::V1_2::OperandType e) {
    v |= static_cast<int32_t>(e);
    return v;
}
constexpr int32_t &operator&=(int32_t& v, const ::android::hardware::neuralnetworks::V1_2::OperandType e) {
    v &= static_cast<int32_t>(e);
    return v;
}

template<typename>
static inline std::string toString(uint32_t o);
static inline std::string toString(::android::hardware::neuralnetworks::V1_2::OperandTypeRange o);
static inline void PrintTo(::android::hardware::neuralnetworks::V1_2::OperandTypeRange o, ::std::ostream* os);
constexpr uint32_t operator|(const ::android::hardware::neuralnetworks::V1_2::OperandTypeRange lhs, const ::android::hardware::neuralnetworks::V1_2::OperandTypeRange rhs) {
    return static_cast<uint32_t>(static_cast<uint32_t>(lhs) | static_cast<uint32_t>(rhs));
}
constexpr uint32_t operator|(const uint32_t lhs, const ::android::hardware::neuralnetworks::V1_2::OperandTypeRange rhs) {
    return static_cast<uint32_t>(lhs | static_cast<uint32_t>(rhs));
}
constexpr uint32_t operator|(const ::android::hardware::neuralnetworks::V1_2::OperandTypeRange lhs, const uint32_t rhs) {
    return static_cast<uint32_t>(static_cast<uint32_t>(lhs) | rhs);
}
constexpr uint32_t operator&(const ::android::hardware::neuralnetworks::V1_2::OperandTypeRange lhs, const ::android::hardware::neuralnetworks::V1_2::OperandTypeRange rhs) {
    return static_cast<uint32_t>(static_cast<uint32_t>(lhs) & static_cast<uint32_t>(rhs));
}
constexpr uint32_t operator&(const uint32_t lhs, const ::android::hardware::neuralnetworks::V1_2::OperandTypeRange rhs) {
    return static_cast<uint32_t>(lhs & static_cast<uint32_t>(rhs));
}
constexpr uint32_t operator&(const ::android::hardware::neuralnetworks::V1_2::OperandTypeRange lhs, const uint32_t rhs) {
    return static_cast<uint32_t>(static_cast<uint32_t>(lhs) & rhs);
}
constexpr uint32_t &operator|=(uint32_t& v, const ::android::hardware::neuralnetworks::V1_2::OperandTypeRange e) {
    v |= static_cast<uint32_t>(e);
    return v;
}
constexpr uint32_t &operator&=(uint32_t& v, const ::android::hardware::neuralnetworks::V1_2::OperandTypeRange e) {
    v &= static_cast<uint32_t>(e);
    return v;
}

template<typename>
static inline std::string toString(int32_t o);
static inline std::string toString(::android::hardware::neuralnetworks::V1_2::OperationType o);
static inline void PrintTo(::android::hardware::neuralnetworks::V1_2::OperationType o, ::std::ostream* os);
constexpr int32_t operator|(const ::android::hardware::neuralnetworks::V1_2::OperationType lhs, const ::android::hardware::neuralnetworks::V1_2::OperationType rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | static_cast<int32_t>(rhs));
}
constexpr int32_t operator|(const int32_t lhs, const ::android::hardware::neuralnetworks::V1_2::OperationType rhs) {
    return static_cast<int32_t>(lhs | static_cast<int32_t>(rhs));
}
constexpr int32_t operator|(const ::android::hardware::neuralnetworks::V1_2::OperationType lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | rhs);
}
constexpr int32_t operator&(const ::android::hardware::neuralnetworks::V1_2::OperationType lhs, const ::android::hardware::neuralnetworks::V1_2::OperationType rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & static_cast<int32_t>(rhs));
}
constexpr int32_t operator&(const int32_t lhs, const ::android::hardware::neuralnetworks::V1_2::OperationType rhs) {
    return static_cast<int32_t>(lhs & static_cast<int32_t>(rhs));
}
constexpr int32_t operator&(const ::android::hardware::neuralnetworks::V1_2::OperationType lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & rhs);
}
constexpr int32_t &operator|=(int32_t& v, const ::android::hardware::neuralnetworks::V1_2::OperationType e) {
    v |= static_cast<int32_t>(e);
    return v;
}
constexpr int32_t &operator&=(int32_t& v, const ::android::hardware::neuralnetworks::V1_2::OperationType e) {
    v &= static_cast<int32_t>(e);
    return v;
}

template<typename>
static inline std::string toString(uint32_t o);
static inline std::string toString(::android::hardware::neuralnetworks::V1_2::OperationTypeRange o);
static inline void PrintTo(::android::hardware::neuralnetworks::V1_2::OperationTypeRange o, ::std::ostream* os);
constexpr uint32_t operator|(const ::android::hardware::neuralnetworks::V1_2::OperationTypeRange lhs, const ::android::hardware::neuralnetworks::V1_2::OperationTypeRange rhs) {
    return static_cast<uint32_t>(static_cast<uint32_t>(lhs) | static_cast<uint32_t>(rhs));
}
constexpr uint32_t operator|(const uint32_t lhs, const ::android::hardware::neuralnetworks::V1_2::OperationTypeRange rhs) {
    return static_cast<uint32_t>(lhs | static_cast<uint32_t>(rhs));
}
constexpr uint32_t operator|(const ::android::hardware::neuralnetworks::V1_2::OperationTypeRange lhs, const uint32_t rhs) {
    return static_cast<uint32_t>(static_cast<uint32_t>(lhs) | rhs);
}
constexpr uint32_t operator&(const ::android::hardware::neuralnetworks::V1_2::OperationTypeRange lhs, const ::android::hardware::neuralnetworks::V1_2::OperationTypeRange rhs) {
    return static_cast<uint32_t>(static_cast<uint32_t>(lhs) & static_cast<uint32_t>(rhs));
}
constexpr uint32_t operator&(const uint32_t lhs, const ::android::hardware::neuralnetworks::V1_2::OperationTypeRange rhs) {
    return static_cast<uint32_t>(lhs & static_cast<uint32_t>(rhs));
}
constexpr uint32_t operator&(const ::android::hardware::neuralnetworks::V1_2::OperationTypeRange lhs, const uint32_t rhs) {
    return static_cast<uint32_t>(static_cast<uint32_t>(lhs) & rhs);
}
constexpr uint32_t &operator|=(uint32_t& v, const ::android::hardware::neuralnetworks::V1_2::OperationTypeRange e) {
    v |= static_cast<uint32_t>(e);
    return v;
}
constexpr uint32_t &operator&=(uint32_t& v, const ::android::hardware::neuralnetworks::V1_2::OperationTypeRange e) {
    v &= static_cast<uint32_t>(e);
    return v;
}

template<typename>
static inline std::string toString(int32_t o);
static inline std::string toString(::android::hardware::neuralnetworks::V1_2::DeviceType o);
static inline void PrintTo(::android::hardware::neuralnetworks::V1_2::DeviceType o, ::std::ostream* os);
constexpr int32_t operator|(const ::android::hardware::neuralnetworks::V1_2::DeviceType lhs, const ::android::hardware::neuralnetworks::V1_2::DeviceType rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | static_cast<int32_t>(rhs));
}
constexpr int32_t operator|(const int32_t lhs, const ::android::hardware::neuralnetworks::V1_2::DeviceType rhs) {
    return static_cast<int32_t>(lhs | static_cast<int32_t>(rhs));
}
constexpr int32_t operator|(const ::android::hardware::neuralnetworks::V1_2::DeviceType lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | rhs);
}
constexpr int32_t operator&(const ::android::hardware::neuralnetworks::V1_2::DeviceType lhs, const ::android::hardware::neuralnetworks::V1_2::DeviceType rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & static_cast<int32_t>(rhs));
}
constexpr int32_t operator&(const int32_t lhs, const ::android::hardware::neuralnetworks::V1_2::DeviceType rhs) {
    return static_cast<int32_t>(lhs & static_cast<int32_t>(rhs));
}
constexpr int32_t operator&(const ::android::hardware::neuralnetworks::V1_2::DeviceType lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & rhs);
}
constexpr int32_t &operator|=(int32_t& v, const ::android::hardware::neuralnetworks::V1_2::DeviceType e) {
    v |= static_cast<int32_t>(e);
    return v;
}
constexpr int32_t &operator&=(int32_t& v, const ::android::hardware::neuralnetworks::V1_2::DeviceType e) {
    v &= static_cast<int32_t>(e);
    return v;
}

static inline std::string toString(const ::android::hardware::neuralnetworks::V1_2::Capabilities::OperandPerformance& o);
static inline void PrintTo(const ::android::hardware::neuralnetworks::V1_2::Capabilities::OperandPerformance& o, ::std::ostream*);
static inline bool operator==(const ::android::hardware::neuralnetworks::V1_2::Capabilities::OperandPerformance& lhs, const ::android::hardware::neuralnetworks::V1_2::Capabilities::OperandPerformance& rhs);
static inline bool operator!=(const ::android::hardware::neuralnetworks::V1_2::Capabilities::OperandPerformance& lhs, const ::android::hardware::neuralnetworks::V1_2::Capabilities::OperandPerformance& rhs);

static inline std::string toString(const ::android::hardware::neuralnetworks::V1_2::Capabilities& o);
static inline void PrintTo(const ::android::hardware::neuralnetworks::V1_2::Capabilities& o, ::std::ostream*);
static inline bool operator==(const ::android::hardware::neuralnetworks::V1_2::Capabilities& lhs, const ::android::hardware::neuralnetworks::V1_2::Capabilities& rhs);
static inline bool operator!=(const ::android::hardware::neuralnetworks::V1_2::Capabilities& lhs, const ::android::hardware::neuralnetworks::V1_2::Capabilities& rhs);

static inline std::string toString(const ::android::hardware::neuralnetworks::V1_2::Operation& o);
static inline void PrintTo(const ::android::hardware::neuralnetworks::V1_2::Operation& o, ::std::ostream*);
static inline bool operator==(const ::android::hardware::neuralnetworks::V1_2::Operation& lhs, const ::android::hardware::neuralnetworks::V1_2::Operation& rhs);
static inline bool operator!=(const ::android::hardware::neuralnetworks::V1_2::Operation& lhs, const ::android::hardware::neuralnetworks::V1_2::Operation& rhs);

static inline std::string toString(const ::android::hardware::neuralnetworks::V1_2::SymmPerChannelQuantParams& o);
static inline void PrintTo(const ::android::hardware::neuralnetworks::V1_2::SymmPerChannelQuantParams& o, ::std::ostream*);
static inline bool operator==(const ::android::hardware::neuralnetworks::V1_2::SymmPerChannelQuantParams& lhs, const ::android::hardware::neuralnetworks::V1_2::SymmPerChannelQuantParams& rhs);
static inline bool operator!=(const ::android::hardware::neuralnetworks::V1_2::SymmPerChannelQuantParams& lhs, const ::android::hardware::neuralnetworks::V1_2::SymmPerChannelQuantParams& rhs);

static inline std::string toString(const ::android::hardware::neuralnetworks::V1_2::Operand::ExtraParams& o);
static inline void PrintTo(const ::android::hardware::neuralnetworks::V1_2::Operand::ExtraParams& o, ::std::ostream*);
static inline bool operator==(const ::android::hardware::neuralnetworks::V1_2::Operand::ExtraParams& lhs, const ::android::hardware::neuralnetworks::V1_2::Operand::ExtraParams& rhs);
static inline bool operator!=(const ::android::hardware::neuralnetworks::V1_2::Operand::ExtraParams& lhs, const ::android::hardware::neuralnetworks::V1_2::Operand::ExtraParams& rhs);

static inline std::string toString(const ::android::hardware::neuralnetworks::V1_2::Operand& o);
static inline void PrintTo(const ::android::hardware::neuralnetworks::V1_2::Operand& o, ::std::ostream*);
static inline bool operator==(const ::android::hardware::neuralnetworks::V1_2::Operand& lhs, const ::android::hardware::neuralnetworks::V1_2::Operand& rhs);
static inline bool operator!=(const ::android::hardware::neuralnetworks::V1_2::Operand& lhs, const ::android::hardware::neuralnetworks::V1_2::Operand& rhs);

static inline std::string toString(const ::android::hardware::neuralnetworks::V1_2::Model::ExtensionNameAndPrefix& o);
static inline void PrintTo(const ::android::hardware::neuralnetworks::V1_2::Model::ExtensionNameAndPrefix& o, ::std::ostream*);
static inline bool operator==(const ::android::hardware::neuralnetworks::V1_2::Model::ExtensionNameAndPrefix& lhs, const ::android::hardware::neuralnetworks::V1_2::Model::ExtensionNameAndPrefix& rhs);
static inline bool operator!=(const ::android::hardware::neuralnetworks::V1_2::Model::ExtensionNameAndPrefix& lhs, const ::android::hardware::neuralnetworks::V1_2::Model::ExtensionNameAndPrefix& rhs);

template<typename>
static inline std::string toString(uint8_t o);
static inline std::string toString(::android::hardware::neuralnetworks::V1_2::Model::ExtensionTypeEncoding o);
static inline void PrintTo(::android::hardware::neuralnetworks::V1_2::Model::ExtensionTypeEncoding o, ::std::ostream* os);
constexpr uint8_t operator|(const ::android::hardware::neuralnetworks::V1_2::Model::ExtensionTypeEncoding lhs, const ::android::hardware::neuralnetworks::V1_2::Model::ExtensionTypeEncoding rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) | static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator|(const uint8_t lhs, const ::android::hardware::neuralnetworks::V1_2::Model::ExtensionTypeEncoding rhs) {
    return static_cast<uint8_t>(lhs | static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator|(const ::android::hardware::neuralnetworks::V1_2::Model::ExtensionTypeEncoding lhs, const uint8_t rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) | rhs);
}
constexpr uint8_t operator&(const ::android::hardware::neuralnetworks::V1_2::Model::ExtensionTypeEncoding lhs, const ::android::hardware::neuralnetworks::V1_2::Model::ExtensionTypeEncoding rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) & static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator&(const uint8_t lhs, const ::android::hardware::neuralnetworks::V1_2::Model::ExtensionTypeEncoding rhs) {
    return static_cast<uint8_t>(lhs & static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator&(const ::android::hardware::neuralnetworks::V1_2::Model::ExtensionTypeEncoding lhs, const uint8_t rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) & rhs);
}
constexpr uint8_t &operator|=(uint8_t& v, const ::android::hardware::neuralnetworks::V1_2::Model::ExtensionTypeEncoding e) {
    v |= static_cast<uint8_t>(e);
    return v;
}
constexpr uint8_t &operator&=(uint8_t& v, const ::android::hardware::neuralnetworks::V1_2::Model::ExtensionTypeEncoding e) {
    v &= static_cast<uint8_t>(e);
    return v;
}

static inline std::string toString(const ::android::hardware::neuralnetworks::V1_2::Model& o);
static inline void PrintTo(const ::android::hardware::neuralnetworks::V1_2::Model& o, ::std::ostream*);
// operator== and operator!= are not generated for Model

static inline std::string toString(const ::android::hardware::neuralnetworks::V1_2::OutputShape& o);
static inline void PrintTo(const ::android::hardware::neuralnetworks::V1_2::OutputShape& o, ::std::ostream*);
static inline bool operator==(const ::android::hardware::neuralnetworks::V1_2::OutputShape& lhs, const ::android::hardware::neuralnetworks::V1_2::OutputShape& rhs);
static inline bool operator!=(const ::android::hardware::neuralnetworks::V1_2::OutputShape& lhs, const ::android::hardware::neuralnetworks::V1_2::OutputShape& rhs);

template<typename>
static inline std::string toString(int32_t o);
static inline std::string toString(::android::hardware::neuralnetworks::V1_2::MeasureTiming o);
static inline void PrintTo(::android::hardware::neuralnetworks::V1_2::MeasureTiming o, ::std::ostream* os);
constexpr int32_t operator|(const ::android::hardware::neuralnetworks::V1_2::MeasureTiming lhs, const ::android::hardware::neuralnetworks::V1_2::MeasureTiming rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | static_cast<int32_t>(rhs));
}
constexpr int32_t operator|(const int32_t lhs, const ::android::hardware::neuralnetworks::V1_2::MeasureTiming rhs) {
    return static_cast<int32_t>(lhs | static_cast<int32_t>(rhs));
}
constexpr int32_t operator|(const ::android::hardware::neuralnetworks::V1_2::MeasureTiming lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | rhs);
}
constexpr int32_t operator&(const ::android::hardware::neuralnetworks::V1_2::MeasureTiming lhs, const ::android::hardware::neuralnetworks::V1_2::MeasureTiming rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & static_cast<int32_t>(rhs));
}
constexpr int32_t operator&(const int32_t lhs, const ::android::hardware::neuralnetworks::V1_2::MeasureTiming rhs) {
    return static_cast<int32_t>(lhs & static_cast<int32_t>(rhs));
}
constexpr int32_t operator&(const ::android::hardware::neuralnetworks::V1_2::MeasureTiming lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & rhs);
}
constexpr int32_t &operator|=(int32_t& v, const ::android::hardware::neuralnetworks::V1_2::MeasureTiming e) {
    v |= static_cast<int32_t>(e);
    return v;
}
constexpr int32_t &operator&=(int32_t& v, const ::android::hardware::neuralnetworks::V1_2::MeasureTiming e) {
    v &= static_cast<int32_t>(e);
    return v;
}

static inline std::string toString(const ::android::hardware::neuralnetworks::V1_2::Timing& o);
static inline void PrintTo(const ::android::hardware::neuralnetworks::V1_2::Timing& o, ::std::ostream*);
static inline bool operator==(const ::android::hardware::neuralnetworks::V1_2::Timing& lhs, const ::android::hardware::neuralnetworks::V1_2::Timing& rhs);
static inline bool operator!=(const ::android::hardware::neuralnetworks::V1_2::Timing& lhs, const ::android::hardware::neuralnetworks::V1_2::Timing& rhs);

static inline std::string toString(const ::android::hardware::neuralnetworks::V1_2::FmqRequestDatum::PacketInformation& o);
static inline void PrintTo(const ::android::hardware::neuralnetworks::V1_2::FmqRequestDatum::PacketInformation& o, ::std::ostream*);
static inline bool operator==(const ::android::hardware::neuralnetworks::V1_2::FmqRequestDatum::PacketInformation& lhs, const ::android::hardware::neuralnetworks::V1_2::FmqRequestDatum::PacketInformation& rhs);
static inline bool operator!=(const ::android::hardware::neuralnetworks::V1_2::FmqRequestDatum::PacketInformation& lhs, const ::android::hardware::neuralnetworks::V1_2::FmqRequestDatum::PacketInformation& rhs);

static inline std::string toString(const ::android::hardware::neuralnetworks::V1_2::FmqRequestDatum::OperandInformation& o);
static inline void PrintTo(const ::android::hardware::neuralnetworks::V1_2::FmqRequestDatum::OperandInformation& o, ::std::ostream*);
static inline bool operator==(const ::android::hardware::neuralnetworks::V1_2::FmqRequestDatum::OperandInformation& lhs, const ::android::hardware::neuralnetworks::V1_2::FmqRequestDatum::OperandInformation& rhs);
static inline bool operator!=(const ::android::hardware::neuralnetworks::V1_2::FmqRequestDatum::OperandInformation& lhs, const ::android::hardware::neuralnetworks::V1_2::FmqRequestDatum::OperandInformation& rhs);

static inline std::string toString(const ::android::hardware::neuralnetworks::V1_2::FmqRequestDatum& o);
static inline void PrintTo(const ::android::hardware::neuralnetworks::V1_2::FmqRequestDatum& o, ::std::ostream*);
static inline bool operator==(const ::android::hardware::neuralnetworks::V1_2::FmqRequestDatum& lhs, const ::android::hardware::neuralnetworks::V1_2::FmqRequestDatum& rhs);
static inline bool operator!=(const ::android::hardware::neuralnetworks::V1_2::FmqRequestDatum& lhs, const ::android::hardware::neuralnetworks::V1_2::FmqRequestDatum& rhs);

static inline std::string toString(const ::android::hardware::neuralnetworks::V1_2::FmqResultDatum::PacketInformation& o);
static inline void PrintTo(const ::android::hardware::neuralnetworks::V1_2::FmqResultDatum::PacketInformation& o, ::std::ostream*);
static inline bool operator==(const ::android::hardware::neuralnetworks::V1_2::FmqResultDatum::PacketInformation& lhs, const ::android::hardware::neuralnetworks::V1_2::FmqResultDatum::PacketInformation& rhs);
static inline bool operator!=(const ::android::hardware::neuralnetworks::V1_2::FmqResultDatum::PacketInformation& lhs, const ::android::hardware::neuralnetworks::V1_2::FmqResultDatum::PacketInformation& rhs);

static inline std::string toString(const ::android::hardware::neuralnetworks::V1_2::FmqResultDatum::OperandInformation& o);
static inline void PrintTo(const ::android::hardware::neuralnetworks::V1_2::FmqResultDatum::OperandInformation& o, ::std::ostream*);
static inline bool operator==(const ::android::hardware::neuralnetworks::V1_2::FmqResultDatum::OperandInformation& lhs, const ::android::hardware::neuralnetworks::V1_2::FmqResultDatum::OperandInformation& rhs);
static inline bool operator!=(const ::android::hardware::neuralnetworks::V1_2::FmqResultDatum::OperandInformation& lhs, const ::android::hardware::neuralnetworks::V1_2::FmqResultDatum::OperandInformation& rhs);

static inline std::string toString(const ::android::hardware::neuralnetworks::V1_2::FmqResultDatum& o);
static inline void PrintTo(const ::android::hardware::neuralnetworks::V1_2::FmqResultDatum& o, ::std::ostream*);
static inline bool operator==(const ::android::hardware::neuralnetworks::V1_2::FmqResultDatum& lhs, const ::android::hardware::neuralnetworks::V1_2::FmqResultDatum& rhs);
static inline bool operator!=(const ::android::hardware::neuralnetworks::V1_2::FmqResultDatum& lhs, const ::android::hardware::neuralnetworks::V1_2::FmqResultDatum& rhs);

static inline std::string toString(const ::android::hardware::neuralnetworks::V1_2::Extension::OperandTypeInformation& o);
static inline void PrintTo(const ::android::hardware::neuralnetworks::V1_2::Extension::OperandTypeInformation& o, ::std::ostream*);
static inline bool operator==(const ::android::hardware::neuralnetworks::V1_2::Extension::OperandTypeInformation& lhs, const ::android::hardware::neuralnetworks::V1_2::Extension::OperandTypeInformation& rhs);
static inline bool operator!=(const ::android::hardware::neuralnetworks::V1_2::Extension::OperandTypeInformation& lhs, const ::android::hardware::neuralnetworks::V1_2::Extension::OperandTypeInformation& rhs);

static inline std::string toString(const ::android::hardware::neuralnetworks::V1_2::Extension& o);
static inline void PrintTo(const ::android::hardware::neuralnetworks::V1_2::Extension& o, ::std::ostream*);
static inline bool operator==(const ::android::hardware::neuralnetworks::V1_2::Extension& lhs, const ::android::hardware::neuralnetworks::V1_2::Extension& rhs);
static inline bool operator!=(const ::android::hardware::neuralnetworks::V1_2::Extension& lhs, const ::android::hardware::neuralnetworks::V1_2::Extension& rhs);

//
// type header definitions for package
//

template<>
inline std::string toString<::android::hardware::neuralnetworks::V1_2::Constant>(uint32_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    ::android::hardware::hidl_bitfield<::android::hardware::neuralnetworks::V1_2::Constant> flipped = 0;
    bool first = true;
    if ((o & ::android::hardware::neuralnetworks::V1_2::Constant::BYTE_SIZE_OF_CACHE_TOKEN) == static_cast<uint32_t>(::android::hardware::neuralnetworks::V1_2::Constant::BYTE_SIZE_OF_CACHE_TOKEN)) {
        os += (first ? "" : " | ");
        os += "BYTE_SIZE_OF_CACHE_TOKEN";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::Constant::BYTE_SIZE_OF_CACHE_TOKEN;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::Constant::MAX_NUMBER_OF_CACHE_FILES) == static_cast<uint32_t>(::android::hardware::neuralnetworks::V1_2::Constant::MAX_NUMBER_OF_CACHE_FILES)) {
        os += (first ? "" : " | ");
        os += "MAX_NUMBER_OF_CACHE_FILES";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::Constant::MAX_NUMBER_OF_CACHE_FILES;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

static inline std::string toString(::android::hardware::neuralnetworks::V1_2::Constant o) {
    using ::android::hardware::details::toHexString;
    if (o == ::android::hardware::neuralnetworks::V1_2::Constant::BYTE_SIZE_OF_CACHE_TOKEN) {
        return "BYTE_SIZE_OF_CACHE_TOKEN";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::Constant::MAX_NUMBER_OF_CACHE_FILES) {
        return "MAX_NUMBER_OF_CACHE_FILES";
    }
    std::string os;
    os += toHexString(static_cast<uint32_t>(o));
    return os;
}

static inline void PrintTo(::android::hardware::neuralnetworks::V1_2::Constant o, ::std::ostream* os) {
    *os << toString(o);
}

template<>
inline std::string toString<::android::hardware::neuralnetworks::V1_2::OperandType>(int32_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    ::android::hardware::hidl_bitfield<::android::hardware::neuralnetworks::V1_2::OperandType> flipped = 0;
    bool first = true;
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperandType::FLOAT32) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperandType::FLOAT32)) {
        os += (first ? "" : " | ");
        os += "FLOAT32";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperandType::FLOAT32;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperandType::INT32) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperandType::INT32)) {
        os += (first ? "" : " | ");
        os += "INT32";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperandType::INT32;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperandType::UINT32) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperandType::UINT32)) {
        os += (first ? "" : " | ");
        os += "UINT32";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperandType::UINT32;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperandType::TENSOR_FLOAT32) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperandType::TENSOR_FLOAT32)) {
        os += (first ? "" : " | ");
        os += "TENSOR_FLOAT32";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperandType::TENSOR_FLOAT32;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperandType::TENSOR_INT32) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperandType::TENSOR_INT32)) {
        os += (first ? "" : " | ");
        os += "TENSOR_INT32";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperandType::TENSOR_INT32;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperandType::TENSOR_QUANT8_ASYMM) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperandType::TENSOR_QUANT8_ASYMM)) {
        os += (first ? "" : " | ");
        os += "TENSOR_QUANT8_ASYMM";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperandType::TENSOR_QUANT8_ASYMM;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperandType::OEM) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperandType::OEM)) {
        os += (first ? "" : " | ");
        os += "OEM";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperandType::OEM;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperandType::TENSOR_OEM_BYTE) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperandType::TENSOR_OEM_BYTE)) {
        os += (first ? "" : " | ");
        os += "TENSOR_OEM_BYTE";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperandType::TENSOR_OEM_BYTE;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperandType::BOOL) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperandType::BOOL)) {
        os += (first ? "" : " | ");
        os += "BOOL";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperandType::BOOL;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperandType::TENSOR_QUANT16_SYMM) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperandType::TENSOR_QUANT16_SYMM)) {
        os += (first ? "" : " | ");
        os += "TENSOR_QUANT16_SYMM";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperandType::TENSOR_QUANT16_SYMM;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperandType::TENSOR_FLOAT16) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperandType::TENSOR_FLOAT16)) {
        os += (first ? "" : " | ");
        os += "TENSOR_FLOAT16";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperandType::TENSOR_FLOAT16;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperandType::TENSOR_BOOL8) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperandType::TENSOR_BOOL8)) {
        os += (first ? "" : " | ");
        os += "TENSOR_BOOL8";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperandType::TENSOR_BOOL8;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperandType::FLOAT16) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperandType::FLOAT16)) {
        os += (first ? "" : " | ");
        os += "FLOAT16";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperandType::FLOAT16;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperandType::TENSOR_QUANT8_SYMM_PER_CHANNEL) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperandType::TENSOR_QUANT8_SYMM_PER_CHANNEL)) {
        os += (first ? "" : " | ");
        os += "TENSOR_QUANT8_SYMM_PER_CHANNEL";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperandType::TENSOR_QUANT8_SYMM_PER_CHANNEL;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperandType::TENSOR_QUANT16_ASYMM) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperandType::TENSOR_QUANT16_ASYMM)) {
        os += (first ? "" : " | ");
        os += "TENSOR_QUANT16_ASYMM";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperandType::TENSOR_QUANT16_ASYMM;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperandType::TENSOR_QUANT8_SYMM) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperandType::TENSOR_QUANT8_SYMM)) {
        os += (first ? "" : " | ");
        os += "TENSOR_QUANT8_SYMM";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperandType::TENSOR_QUANT8_SYMM;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

static inline std::string toString(::android::hardware::neuralnetworks::V1_2::OperandType o) {
    using ::android::hardware::details::toHexString;
    if (o == ::android::hardware::neuralnetworks::V1_2::OperandType::FLOAT32) {
        return "FLOAT32";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperandType::INT32) {
        return "INT32";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperandType::UINT32) {
        return "UINT32";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperandType::TENSOR_FLOAT32) {
        return "TENSOR_FLOAT32";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperandType::TENSOR_INT32) {
        return "TENSOR_INT32";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperandType::TENSOR_QUANT8_ASYMM) {
        return "TENSOR_QUANT8_ASYMM";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperandType::OEM) {
        return "OEM";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperandType::TENSOR_OEM_BYTE) {
        return "TENSOR_OEM_BYTE";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperandType::BOOL) {
        return "BOOL";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperandType::TENSOR_QUANT16_SYMM) {
        return "TENSOR_QUANT16_SYMM";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperandType::TENSOR_FLOAT16) {
        return "TENSOR_FLOAT16";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperandType::TENSOR_BOOL8) {
        return "TENSOR_BOOL8";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperandType::FLOAT16) {
        return "FLOAT16";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperandType::TENSOR_QUANT8_SYMM_PER_CHANNEL) {
        return "TENSOR_QUANT8_SYMM_PER_CHANNEL";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperandType::TENSOR_QUANT16_ASYMM) {
        return "TENSOR_QUANT16_ASYMM";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperandType::TENSOR_QUANT8_SYMM) {
        return "TENSOR_QUANT8_SYMM";
    }
    std::string os;
    os += toHexString(static_cast<int32_t>(o));
    return os;
}

static inline void PrintTo(::android::hardware::neuralnetworks::V1_2::OperandType o, ::std::ostream* os) {
    *os << toString(o);
}

template<>
inline std::string toString<::android::hardware::neuralnetworks::V1_2::OperandTypeRange>(uint32_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    ::android::hardware::hidl_bitfield<::android::hardware::neuralnetworks::V1_2::OperandTypeRange> flipped = 0;
    bool first = true;
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperandTypeRange::BASE_MIN) == static_cast<uint32_t>(::android::hardware::neuralnetworks::V1_2::OperandTypeRange::BASE_MIN)) {
        os += (first ? "" : " | ");
        os += "BASE_MIN";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperandTypeRange::BASE_MIN;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperandTypeRange::FUNDAMENTAL_MIN) == static_cast<uint32_t>(::android::hardware::neuralnetworks::V1_2::OperandTypeRange::FUNDAMENTAL_MIN)) {
        os += (first ? "" : " | ");
        os += "FUNDAMENTAL_MIN";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperandTypeRange::FUNDAMENTAL_MIN;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperandTypeRange::FUNDAMENTAL_MAX) == static_cast<uint32_t>(::android::hardware::neuralnetworks::V1_2::OperandTypeRange::FUNDAMENTAL_MAX)) {
        os += (first ? "" : " | ");
        os += "FUNDAMENTAL_MAX";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperandTypeRange::FUNDAMENTAL_MAX;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperandTypeRange::OEM_MIN) == static_cast<uint32_t>(::android::hardware::neuralnetworks::V1_2::OperandTypeRange::OEM_MIN)) {
        os += (first ? "" : " | ");
        os += "OEM_MIN";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperandTypeRange::OEM_MIN;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperandTypeRange::OEM_MAX) == static_cast<uint32_t>(::android::hardware::neuralnetworks::V1_2::OperandTypeRange::OEM_MAX)) {
        os += (first ? "" : " | ");
        os += "OEM_MAX";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperandTypeRange::OEM_MAX;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperandTypeRange::BASE_MAX) == static_cast<uint32_t>(::android::hardware::neuralnetworks::V1_2::OperandTypeRange::BASE_MAX)) {
        os += (first ? "" : " | ");
        os += "BASE_MAX";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperandTypeRange::BASE_MAX;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

static inline std::string toString(::android::hardware::neuralnetworks::V1_2::OperandTypeRange o) {
    using ::android::hardware::details::toHexString;
    if (o == ::android::hardware::neuralnetworks::V1_2::OperandTypeRange::BASE_MIN) {
        return "BASE_MIN";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperandTypeRange::FUNDAMENTAL_MIN) {
        return "FUNDAMENTAL_MIN";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperandTypeRange::FUNDAMENTAL_MAX) {
        return "FUNDAMENTAL_MAX";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperandTypeRange::OEM_MIN) {
        return "OEM_MIN";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperandTypeRange::OEM_MAX) {
        return "OEM_MAX";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperandTypeRange::BASE_MAX) {
        return "BASE_MAX";
    }
    std::string os;
    os += toHexString(static_cast<uint32_t>(o));
    return os;
}

static inline void PrintTo(::android::hardware::neuralnetworks::V1_2::OperandTypeRange o, ::std::ostream* os) {
    *os << toString(o);
}

template<>
inline std::string toString<::android::hardware::neuralnetworks::V1_2::OperationType>(int32_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    ::android::hardware::hidl_bitfield<::android::hardware::neuralnetworks::V1_2::OperationType> flipped = 0;
    bool first = true;
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::ADD) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::ADD)) {
        os += (first ? "" : " | ");
        os += "ADD";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::ADD;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::AVERAGE_POOL_2D) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::AVERAGE_POOL_2D)) {
        os += (first ? "" : " | ");
        os += "AVERAGE_POOL_2D";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::AVERAGE_POOL_2D;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::CONCATENATION) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::CONCATENATION)) {
        os += (first ? "" : " | ");
        os += "CONCATENATION";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::CONCATENATION;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::CONV_2D) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::CONV_2D)) {
        os += (first ? "" : " | ");
        os += "CONV_2D";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::CONV_2D;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::DEPTHWISE_CONV_2D) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::DEPTHWISE_CONV_2D)) {
        os += (first ? "" : " | ");
        os += "DEPTHWISE_CONV_2D";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::DEPTHWISE_CONV_2D;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::DEPTH_TO_SPACE) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::DEPTH_TO_SPACE)) {
        os += (first ? "" : " | ");
        os += "DEPTH_TO_SPACE";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::DEPTH_TO_SPACE;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::DEQUANTIZE) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::DEQUANTIZE)) {
        os += (first ? "" : " | ");
        os += "DEQUANTIZE";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::DEQUANTIZE;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::EMBEDDING_LOOKUP) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::EMBEDDING_LOOKUP)) {
        os += (first ? "" : " | ");
        os += "EMBEDDING_LOOKUP";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::EMBEDDING_LOOKUP;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::FLOOR) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::FLOOR)) {
        os += (first ? "" : " | ");
        os += "FLOOR";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::FLOOR;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::FULLY_CONNECTED) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::FULLY_CONNECTED)) {
        os += (first ? "" : " | ");
        os += "FULLY_CONNECTED";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::FULLY_CONNECTED;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::HASHTABLE_LOOKUP) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::HASHTABLE_LOOKUP)) {
        os += (first ? "" : " | ");
        os += "HASHTABLE_LOOKUP";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::HASHTABLE_LOOKUP;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::L2_NORMALIZATION) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::L2_NORMALIZATION)) {
        os += (first ? "" : " | ");
        os += "L2_NORMALIZATION";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::L2_NORMALIZATION;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::L2_POOL_2D) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::L2_POOL_2D)) {
        os += (first ? "" : " | ");
        os += "L2_POOL_2D";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::L2_POOL_2D;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::LOCAL_RESPONSE_NORMALIZATION) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::LOCAL_RESPONSE_NORMALIZATION)) {
        os += (first ? "" : " | ");
        os += "LOCAL_RESPONSE_NORMALIZATION";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::LOCAL_RESPONSE_NORMALIZATION;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::LOGISTIC) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::LOGISTIC)) {
        os += (first ? "" : " | ");
        os += "LOGISTIC";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::LOGISTIC;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::LSH_PROJECTION) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::LSH_PROJECTION)) {
        os += (first ? "" : " | ");
        os += "LSH_PROJECTION";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::LSH_PROJECTION;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::LSTM) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::LSTM)) {
        os += (first ? "" : " | ");
        os += "LSTM";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::LSTM;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::MAX_POOL_2D) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::MAX_POOL_2D)) {
        os += (first ? "" : " | ");
        os += "MAX_POOL_2D";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::MAX_POOL_2D;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::MUL) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::MUL)) {
        os += (first ? "" : " | ");
        os += "MUL";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::MUL;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::RELU) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::RELU)) {
        os += (first ? "" : " | ");
        os += "RELU";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::RELU;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::RELU1) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::RELU1)) {
        os += (first ? "" : " | ");
        os += "RELU1";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::RELU1;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::RELU6) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::RELU6)) {
        os += (first ? "" : " | ");
        os += "RELU6";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::RELU6;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::RESHAPE) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::RESHAPE)) {
        os += (first ? "" : " | ");
        os += "RESHAPE";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::RESHAPE;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::RESIZE_BILINEAR) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::RESIZE_BILINEAR)) {
        os += (first ? "" : " | ");
        os += "RESIZE_BILINEAR";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::RESIZE_BILINEAR;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::RNN) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::RNN)) {
        os += (first ? "" : " | ");
        os += "RNN";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::RNN;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::SOFTMAX) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::SOFTMAX)) {
        os += (first ? "" : " | ");
        os += "SOFTMAX";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::SOFTMAX;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::SPACE_TO_DEPTH) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::SPACE_TO_DEPTH)) {
        os += (first ? "" : " | ");
        os += "SPACE_TO_DEPTH";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::SPACE_TO_DEPTH;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::SVDF) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::SVDF)) {
        os += (first ? "" : " | ");
        os += "SVDF";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::SVDF;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::TANH) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::TANH)) {
        os += (first ? "" : " | ");
        os += "TANH";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::TANH;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::BATCH_TO_SPACE_ND) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::BATCH_TO_SPACE_ND)) {
        os += (first ? "" : " | ");
        os += "BATCH_TO_SPACE_ND";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::BATCH_TO_SPACE_ND;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::DIV) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::DIV)) {
        os += (first ? "" : " | ");
        os += "DIV";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::DIV;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::MEAN) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::MEAN)) {
        os += (first ? "" : " | ");
        os += "MEAN";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::MEAN;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::PAD) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::PAD)) {
        os += (first ? "" : " | ");
        os += "PAD";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::PAD;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::SPACE_TO_BATCH_ND) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::SPACE_TO_BATCH_ND)) {
        os += (first ? "" : " | ");
        os += "SPACE_TO_BATCH_ND";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::SPACE_TO_BATCH_ND;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::SQUEEZE) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::SQUEEZE)) {
        os += (first ? "" : " | ");
        os += "SQUEEZE";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::SQUEEZE;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::STRIDED_SLICE) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::STRIDED_SLICE)) {
        os += (first ? "" : " | ");
        os += "STRIDED_SLICE";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::STRIDED_SLICE;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::SUB) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::SUB)) {
        os += (first ? "" : " | ");
        os += "SUB";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::SUB;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::TRANSPOSE) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::TRANSPOSE)) {
        os += (first ? "" : " | ");
        os += "TRANSPOSE";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::TRANSPOSE;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::ABS) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::ABS)) {
        os += (first ? "" : " | ");
        os += "ABS";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::ABS;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::ARGMAX) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::ARGMAX)) {
        os += (first ? "" : " | ");
        os += "ARGMAX";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::ARGMAX;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::ARGMIN) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::ARGMIN)) {
        os += (first ? "" : " | ");
        os += "ARGMIN";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::ARGMIN;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::AXIS_ALIGNED_BBOX_TRANSFORM) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::AXIS_ALIGNED_BBOX_TRANSFORM)) {
        os += (first ? "" : " | ");
        os += "AXIS_ALIGNED_BBOX_TRANSFORM";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::AXIS_ALIGNED_BBOX_TRANSFORM;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::BIDIRECTIONAL_SEQUENCE_LSTM) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::BIDIRECTIONAL_SEQUENCE_LSTM)) {
        os += (first ? "" : " | ");
        os += "BIDIRECTIONAL_SEQUENCE_LSTM";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::BIDIRECTIONAL_SEQUENCE_LSTM;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::BIDIRECTIONAL_SEQUENCE_RNN) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::BIDIRECTIONAL_SEQUENCE_RNN)) {
        os += (first ? "" : " | ");
        os += "BIDIRECTIONAL_SEQUENCE_RNN";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::BIDIRECTIONAL_SEQUENCE_RNN;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::BOX_WITH_NMS_LIMIT) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::BOX_WITH_NMS_LIMIT)) {
        os += (first ? "" : " | ");
        os += "BOX_WITH_NMS_LIMIT";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::BOX_WITH_NMS_LIMIT;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::CAST) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::CAST)) {
        os += (first ? "" : " | ");
        os += "CAST";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::CAST;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::CHANNEL_SHUFFLE) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::CHANNEL_SHUFFLE)) {
        os += (first ? "" : " | ");
        os += "CHANNEL_SHUFFLE";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::CHANNEL_SHUFFLE;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::DETECTION_POSTPROCESSING) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::DETECTION_POSTPROCESSING)) {
        os += (first ? "" : " | ");
        os += "DETECTION_POSTPROCESSING";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::DETECTION_POSTPROCESSING;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::EQUAL) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::EQUAL)) {
        os += (first ? "" : " | ");
        os += "EQUAL";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::EQUAL;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::EXP) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::EXP)) {
        os += (first ? "" : " | ");
        os += "EXP";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::EXP;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::EXPAND_DIMS) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::EXPAND_DIMS)) {
        os += (first ? "" : " | ");
        os += "EXPAND_DIMS";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::EXPAND_DIMS;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::GATHER) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::GATHER)) {
        os += (first ? "" : " | ");
        os += "GATHER";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::GATHER;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::GENERATE_PROPOSALS) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::GENERATE_PROPOSALS)) {
        os += (first ? "" : " | ");
        os += "GENERATE_PROPOSALS";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::GENERATE_PROPOSALS;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::GREATER) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::GREATER)) {
        os += (first ? "" : " | ");
        os += "GREATER";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::GREATER;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::GREATER_EQUAL) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::GREATER_EQUAL)) {
        os += (first ? "" : " | ");
        os += "GREATER_EQUAL";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::GREATER_EQUAL;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::GROUPED_CONV_2D) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::GROUPED_CONV_2D)) {
        os += (first ? "" : " | ");
        os += "GROUPED_CONV_2D";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::GROUPED_CONV_2D;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::HEATMAP_MAX_KEYPOINT) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::HEATMAP_MAX_KEYPOINT)) {
        os += (first ? "" : " | ");
        os += "HEATMAP_MAX_KEYPOINT";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::HEATMAP_MAX_KEYPOINT;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::INSTANCE_NORMALIZATION) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::INSTANCE_NORMALIZATION)) {
        os += (first ? "" : " | ");
        os += "INSTANCE_NORMALIZATION";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::INSTANCE_NORMALIZATION;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::LESS) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::LESS)) {
        os += (first ? "" : " | ");
        os += "LESS";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::LESS;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::LESS_EQUAL) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::LESS_EQUAL)) {
        os += (first ? "" : " | ");
        os += "LESS_EQUAL";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::LESS_EQUAL;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::LOG) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::LOG)) {
        os += (first ? "" : " | ");
        os += "LOG";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::LOG;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::LOGICAL_AND) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::LOGICAL_AND)) {
        os += (first ? "" : " | ");
        os += "LOGICAL_AND";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::LOGICAL_AND;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::LOGICAL_NOT) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::LOGICAL_NOT)) {
        os += (first ? "" : " | ");
        os += "LOGICAL_NOT";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::LOGICAL_NOT;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::LOGICAL_OR) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::LOGICAL_OR)) {
        os += (first ? "" : " | ");
        os += "LOGICAL_OR";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::LOGICAL_OR;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::LOG_SOFTMAX) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::LOG_SOFTMAX)) {
        os += (first ? "" : " | ");
        os += "LOG_SOFTMAX";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::LOG_SOFTMAX;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::MAXIMUM) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::MAXIMUM)) {
        os += (first ? "" : " | ");
        os += "MAXIMUM";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::MAXIMUM;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::MINIMUM) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::MINIMUM)) {
        os += (first ? "" : " | ");
        os += "MINIMUM";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::MINIMUM;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::NEG) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::NEG)) {
        os += (first ? "" : " | ");
        os += "NEG";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::NEG;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::NOT_EQUAL) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::NOT_EQUAL)) {
        os += (first ? "" : " | ");
        os += "NOT_EQUAL";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::NOT_EQUAL;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::PAD_V2) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::PAD_V2)) {
        os += (first ? "" : " | ");
        os += "PAD_V2";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::PAD_V2;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::POW) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::POW)) {
        os += (first ? "" : " | ");
        os += "POW";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::POW;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::PRELU) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::PRELU)) {
        os += (first ? "" : " | ");
        os += "PRELU";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::PRELU;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::QUANTIZE) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::QUANTIZE)) {
        os += (first ? "" : " | ");
        os += "QUANTIZE";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::QUANTIZE;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::QUANTIZED_16BIT_LSTM) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::QUANTIZED_16BIT_LSTM)) {
        os += (first ? "" : " | ");
        os += "QUANTIZED_16BIT_LSTM";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::QUANTIZED_16BIT_LSTM;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::RANDOM_MULTINOMIAL) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::RANDOM_MULTINOMIAL)) {
        os += (first ? "" : " | ");
        os += "RANDOM_MULTINOMIAL";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::RANDOM_MULTINOMIAL;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::REDUCE_ALL) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::REDUCE_ALL)) {
        os += (first ? "" : " | ");
        os += "REDUCE_ALL";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::REDUCE_ALL;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::REDUCE_ANY) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::REDUCE_ANY)) {
        os += (first ? "" : " | ");
        os += "REDUCE_ANY";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::REDUCE_ANY;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::REDUCE_MAX) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::REDUCE_MAX)) {
        os += (first ? "" : " | ");
        os += "REDUCE_MAX";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::REDUCE_MAX;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::REDUCE_MIN) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::REDUCE_MIN)) {
        os += (first ? "" : " | ");
        os += "REDUCE_MIN";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::REDUCE_MIN;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::REDUCE_PROD) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::REDUCE_PROD)) {
        os += (first ? "" : " | ");
        os += "REDUCE_PROD";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::REDUCE_PROD;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::REDUCE_SUM) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::REDUCE_SUM)) {
        os += (first ? "" : " | ");
        os += "REDUCE_SUM";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::REDUCE_SUM;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::ROI_ALIGN) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::ROI_ALIGN)) {
        os += (first ? "" : " | ");
        os += "ROI_ALIGN";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::ROI_ALIGN;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::ROI_POOLING) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::ROI_POOLING)) {
        os += (first ? "" : " | ");
        os += "ROI_POOLING";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::ROI_POOLING;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::RSQRT) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::RSQRT)) {
        os += (first ? "" : " | ");
        os += "RSQRT";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::RSQRT;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::SELECT) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::SELECT)) {
        os += (first ? "" : " | ");
        os += "SELECT";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::SELECT;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::SIN) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::SIN)) {
        os += (first ? "" : " | ");
        os += "SIN";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::SIN;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::SLICE) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::SLICE)) {
        os += (first ? "" : " | ");
        os += "SLICE";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::SLICE;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::SPLIT) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::SPLIT)) {
        os += (first ? "" : " | ");
        os += "SPLIT";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::SPLIT;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::SQRT) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::SQRT)) {
        os += (first ? "" : " | ");
        os += "SQRT";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::SQRT;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::TILE) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::TILE)) {
        os += (first ? "" : " | ");
        os += "TILE";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::TILE;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::TOPK_V2) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::TOPK_V2)) {
        os += (first ? "" : " | ");
        os += "TOPK_V2";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::TOPK_V2;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::TRANSPOSE_CONV_2D) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::TRANSPOSE_CONV_2D)) {
        os += (first ? "" : " | ");
        os += "TRANSPOSE_CONV_2D";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::TRANSPOSE_CONV_2D;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::UNIDIRECTIONAL_SEQUENCE_LSTM) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::UNIDIRECTIONAL_SEQUENCE_LSTM)) {
        os += (first ? "" : " | ");
        os += "UNIDIRECTIONAL_SEQUENCE_LSTM";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::UNIDIRECTIONAL_SEQUENCE_LSTM;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::UNIDIRECTIONAL_SEQUENCE_RNN) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::UNIDIRECTIONAL_SEQUENCE_RNN)) {
        os += (first ? "" : " | ");
        os += "UNIDIRECTIONAL_SEQUENCE_RNN";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::UNIDIRECTIONAL_SEQUENCE_RNN;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::RESIZE_NEAREST_NEIGHBOR) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::RESIZE_NEAREST_NEIGHBOR)) {
        os += (first ? "" : " | ");
        os += "RESIZE_NEAREST_NEIGHBOR";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::RESIZE_NEAREST_NEIGHBOR;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationType::OEM_OPERATION) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::OperationType::OEM_OPERATION)) {
        os += (first ? "" : " | ");
        os += "OEM_OPERATION";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationType::OEM_OPERATION;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

static inline std::string toString(::android::hardware::neuralnetworks::V1_2::OperationType o) {
    using ::android::hardware::details::toHexString;
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::ADD) {
        return "ADD";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::AVERAGE_POOL_2D) {
        return "AVERAGE_POOL_2D";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::CONCATENATION) {
        return "CONCATENATION";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::CONV_2D) {
        return "CONV_2D";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::DEPTHWISE_CONV_2D) {
        return "DEPTHWISE_CONV_2D";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::DEPTH_TO_SPACE) {
        return "DEPTH_TO_SPACE";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::DEQUANTIZE) {
        return "DEQUANTIZE";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::EMBEDDING_LOOKUP) {
        return "EMBEDDING_LOOKUP";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::FLOOR) {
        return "FLOOR";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::FULLY_CONNECTED) {
        return "FULLY_CONNECTED";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::HASHTABLE_LOOKUP) {
        return "HASHTABLE_LOOKUP";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::L2_NORMALIZATION) {
        return "L2_NORMALIZATION";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::L2_POOL_2D) {
        return "L2_POOL_2D";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::LOCAL_RESPONSE_NORMALIZATION) {
        return "LOCAL_RESPONSE_NORMALIZATION";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::LOGISTIC) {
        return "LOGISTIC";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::LSH_PROJECTION) {
        return "LSH_PROJECTION";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::LSTM) {
        return "LSTM";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::MAX_POOL_2D) {
        return "MAX_POOL_2D";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::MUL) {
        return "MUL";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::RELU) {
        return "RELU";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::RELU1) {
        return "RELU1";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::RELU6) {
        return "RELU6";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::RESHAPE) {
        return "RESHAPE";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::RESIZE_BILINEAR) {
        return "RESIZE_BILINEAR";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::RNN) {
        return "RNN";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::SOFTMAX) {
        return "SOFTMAX";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::SPACE_TO_DEPTH) {
        return "SPACE_TO_DEPTH";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::SVDF) {
        return "SVDF";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::TANH) {
        return "TANH";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::BATCH_TO_SPACE_ND) {
        return "BATCH_TO_SPACE_ND";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::DIV) {
        return "DIV";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::MEAN) {
        return "MEAN";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::PAD) {
        return "PAD";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::SPACE_TO_BATCH_ND) {
        return "SPACE_TO_BATCH_ND";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::SQUEEZE) {
        return "SQUEEZE";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::STRIDED_SLICE) {
        return "STRIDED_SLICE";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::SUB) {
        return "SUB";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::TRANSPOSE) {
        return "TRANSPOSE";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::ABS) {
        return "ABS";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::ARGMAX) {
        return "ARGMAX";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::ARGMIN) {
        return "ARGMIN";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::AXIS_ALIGNED_BBOX_TRANSFORM) {
        return "AXIS_ALIGNED_BBOX_TRANSFORM";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::BIDIRECTIONAL_SEQUENCE_LSTM) {
        return "BIDIRECTIONAL_SEQUENCE_LSTM";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::BIDIRECTIONAL_SEQUENCE_RNN) {
        return "BIDIRECTIONAL_SEQUENCE_RNN";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::BOX_WITH_NMS_LIMIT) {
        return "BOX_WITH_NMS_LIMIT";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::CAST) {
        return "CAST";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::CHANNEL_SHUFFLE) {
        return "CHANNEL_SHUFFLE";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::DETECTION_POSTPROCESSING) {
        return "DETECTION_POSTPROCESSING";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::EQUAL) {
        return "EQUAL";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::EXP) {
        return "EXP";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::EXPAND_DIMS) {
        return "EXPAND_DIMS";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::GATHER) {
        return "GATHER";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::GENERATE_PROPOSALS) {
        return "GENERATE_PROPOSALS";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::GREATER) {
        return "GREATER";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::GREATER_EQUAL) {
        return "GREATER_EQUAL";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::GROUPED_CONV_2D) {
        return "GROUPED_CONV_2D";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::HEATMAP_MAX_KEYPOINT) {
        return "HEATMAP_MAX_KEYPOINT";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::INSTANCE_NORMALIZATION) {
        return "INSTANCE_NORMALIZATION";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::LESS) {
        return "LESS";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::LESS_EQUAL) {
        return "LESS_EQUAL";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::LOG) {
        return "LOG";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::LOGICAL_AND) {
        return "LOGICAL_AND";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::LOGICAL_NOT) {
        return "LOGICAL_NOT";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::LOGICAL_OR) {
        return "LOGICAL_OR";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::LOG_SOFTMAX) {
        return "LOG_SOFTMAX";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::MAXIMUM) {
        return "MAXIMUM";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::MINIMUM) {
        return "MINIMUM";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::NEG) {
        return "NEG";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::NOT_EQUAL) {
        return "NOT_EQUAL";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::PAD_V2) {
        return "PAD_V2";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::POW) {
        return "POW";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::PRELU) {
        return "PRELU";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::QUANTIZE) {
        return "QUANTIZE";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::QUANTIZED_16BIT_LSTM) {
        return "QUANTIZED_16BIT_LSTM";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::RANDOM_MULTINOMIAL) {
        return "RANDOM_MULTINOMIAL";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::REDUCE_ALL) {
        return "REDUCE_ALL";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::REDUCE_ANY) {
        return "REDUCE_ANY";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::REDUCE_MAX) {
        return "REDUCE_MAX";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::REDUCE_MIN) {
        return "REDUCE_MIN";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::REDUCE_PROD) {
        return "REDUCE_PROD";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::REDUCE_SUM) {
        return "REDUCE_SUM";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::ROI_ALIGN) {
        return "ROI_ALIGN";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::ROI_POOLING) {
        return "ROI_POOLING";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::RSQRT) {
        return "RSQRT";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::SELECT) {
        return "SELECT";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::SIN) {
        return "SIN";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::SLICE) {
        return "SLICE";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::SPLIT) {
        return "SPLIT";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::SQRT) {
        return "SQRT";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::TILE) {
        return "TILE";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::TOPK_V2) {
        return "TOPK_V2";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::TRANSPOSE_CONV_2D) {
        return "TRANSPOSE_CONV_2D";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::UNIDIRECTIONAL_SEQUENCE_LSTM) {
        return "UNIDIRECTIONAL_SEQUENCE_LSTM";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::UNIDIRECTIONAL_SEQUENCE_RNN) {
        return "UNIDIRECTIONAL_SEQUENCE_RNN";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::RESIZE_NEAREST_NEIGHBOR) {
        return "RESIZE_NEAREST_NEIGHBOR";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationType::OEM_OPERATION) {
        return "OEM_OPERATION";
    }
    std::string os;
    os += toHexString(static_cast<int32_t>(o));
    return os;
}

static inline void PrintTo(::android::hardware::neuralnetworks::V1_2::OperationType o, ::std::ostream* os) {
    *os << toString(o);
}

template<>
inline std::string toString<::android::hardware::neuralnetworks::V1_2::OperationTypeRange>(uint32_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    ::android::hardware::hidl_bitfield<::android::hardware::neuralnetworks::V1_2::OperationTypeRange> flipped = 0;
    bool first = true;
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationTypeRange::BASE_MIN) == static_cast<uint32_t>(::android::hardware::neuralnetworks::V1_2::OperationTypeRange::BASE_MIN)) {
        os += (first ? "" : " | ");
        os += "BASE_MIN";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationTypeRange::BASE_MIN;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationTypeRange::FUNDAMENTAL_MIN) == static_cast<uint32_t>(::android::hardware::neuralnetworks::V1_2::OperationTypeRange::FUNDAMENTAL_MIN)) {
        os += (first ? "" : " | ");
        os += "FUNDAMENTAL_MIN";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationTypeRange::FUNDAMENTAL_MIN;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationTypeRange::FUNDAMENTAL_MAX) == static_cast<uint32_t>(::android::hardware::neuralnetworks::V1_2::OperationTypeRange::FUNDAMENTAL_MAX)) {
        os += (first ? "" : " | ");
        os += "FUNDAMENTAL_MAX";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationTypeRange::FUNDAMENTAL_MAX;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationTypeRange::OEM_MIN) == static_cast<uint32_t>(::android::hardware::neuralnetworks::V1_2::OperationTypeRange::OEM_MIN)) {
        os += (first ? "" : " | ");
        os += "OEM_MIN";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationTypeRange::OEM_MIN;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationTypeRange::OEM_MAX) == static_cast<uint32_t>(::android::hardware::neuralnetworks::V1_2::OperationTypeRange::OEM_MAX)) {
        os += (first ? "" : " | ");
        os += "OEM_MAX";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationTypeRange::OEM_MAX;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::OperationTypeRange::BASE_MAX) == static_cast<uint32_t>(::android::hardware::neuralnetworks::V1_2::OperationTypeRange::BASE_MAX)) {
        os += (first ? "" : " | ");
        os += "BASE_MAX";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::OperationTypeRange::BASE_MAX;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

static inline std::string toString(::android::hardware::neuralnetworks::V1_2::OperationTypeRange o) {
    using ::android::hardware::details::toHexString;
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationTypeRange::BASE_MIN) {
        return "BASE_MIN";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationTypeRange::FUNDAMENTAL_MIN) {
        return "FUNDAMENTAL_MIN";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationTypeRange::FUNDAMENTAL_MAX) {
        return "FUNDAMENTAL_MAX";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationTypeRange::OEM_MIN) {
        return "OEM_MIN";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationTypeRange::OEM_MAX) {
        return "OEM_MAX";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::OperationTypeRange::BASE_MAX) {
        return "BASE_MAX";
    }
    std::string os;
    os += toHexString(static_cast<uint32_t>(o));
    return os;
}

static inline void PrintTo(::android::hardware::neuralnetworks::V1_2::OperationTypeRange o, ::std::ostream* os) {
    *os << toString(o);
}

template<>
inline std::string toString<::android::hardware::neuralnetworks::V1_2::DeviceType>(int32_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    ::android::hardware::hidl_bitfield<::android::hardware::neuralnetworks::V1_2::DeviceType> flipped = 0;
    bool first = true;
    if ((o & ::android::hardware::neuralnetworks::V1_2::DeviceType::OTHER) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::DeviceType::OTHER)) {
        os += (first ? "" : " | ");
        os += "OTHER";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::DeviceType::OTHER;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::DeviceType::CPU) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::DeviceType::CPU)) {
        os += (first ? "" : " | ");
        os += "CPU";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::DeviceType::CPU;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::DeviceType::GPU) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::DeviceType::GPU)) {
        os += (first ? "" : " | ");
        os += "GPU";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::DeviceType::GPU;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::DeviceType::ACCELERATOR) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::DeviceType::ACCELERATOR)) {
        os += (first ? "" : " | ");
        os += "ACCELERATOR";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::DeviceType::ACCELERATOR;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

static inline std::string toString(::android::hardware::neuralnetworks::V1_2::DeviceType o) {
    using ::android::hardware::details::toHexString;
    if (o == ::android::hardware::neuralnetworks::V1_2::DeviceType::OTHER) {
        return "OTHER";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::DeviceType::CPU) {
        return "CPU";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::DeviceType::GPU) {
        return "GPU";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::DeviceType::ACCELERATOR) {
        return "ACCELERATOR";
    }
    std::string os;
    os += toHexString(static_cast<int32_t>(o));
    return os;
}

static inline void PrintTo(::android::hardware::neuralnetworks::V1_2::DeviceType o, ::std::ostream* os) {
    *os << toString(o);
}

static inline std::string toString(const ::android::hardware::neuralnetworks::V1_2::Capabilities::OperandPerformance& o) {
    using ::android::hardware::toString;
    std::string os;
    os += "{";
    os += ".type = ";
    os += ::android::hardware::neuralnetworks::V1_2::toString(o.type);
    os += ", .info = ";
    os += ::android::hardware::neuralnetworks::V1_0::toString(o.info);
    os += "}"; return os;
}

static inline void PrintTo(const ::android::hardware::neuralnetworks::V1_2::Capabilities::OperandPerformance& o, ::std::ostream* os) {
    *os << toString(o);
}

static inline bool operator==(const ::android::hardware::neuralnetworks::V1_2::Capabilities::OperandPerformance& lhs, const ::android::hardware::neuralnetworks::V1_2::Capabilities::OperandPerformance& rhs) {
    if (lhs.type != rhs.type) {
        return false;
    }
    if (lhs.info != rhs.info) {
        return false;
    }
    return true;
}

static inline bool operator!=(const ::android::hardware::neuralnetworks::V1_2::Capabilities::OperandPerformance& lhs, const ::android::hardware::neuralnetworks::V1_2::Capabilities::OperandPerformance& rhs){
    return !(lhs == rhs);
}

static inline std::string toString(const ::android::hardware::neuralnetworks::V1_2::Capabilities& o) {
    using ::android::hardware::toString;
    std::string os;
    os += "{";
    os += ".relaxedFloat32toFloat16PerformanceScalar = ";
    os += ::android::hardware::neuralnetworks::V1_0::toString(o.relaxedFloat32toFloat16PerformanceScalar);
    os += ", .relaxedFloat32toFloat16PerformanceTensor = ";
    os += ::android::hardware::neuralnetworks::V1_0::toString(o.relaxedFloat32toFloat16PerformanceTensor);
    os += ", .operandPerformance = ";
    os += ::android::hardware::toString(o.operandPerformance);
    os += "}"; return os;
}

static inline void PrintTo(const ::android::hardware::neuralnetworks::V1_2::Capabilities& o, ::std::ostream* os) {
    *os << toString(o);
}

static inline bool operator==(const ::android::hardware::neuralnetworks::V1_2::Capabilities& lhs, const ::android::hardware::neuralnetworks::V1_2::Capabilities& rhs) {
    if (lhs.relaxedFloat32toFloat16PerformanceScalar != rhs.relaxedFloat32toFloat16PerformanceScalar) {
        return false;
    }
    if (lhs.relaxedFloat32toFloat16PerformanceTensor != rhs.relaxedFloat32toFloat16PerformanceTensor) {
        return false;
    }
    if (lhs.operandPerformance != rhs.operandPerformance) {
        return false;
    }
    return true;
}

static inline bool operator!=(const ::android::hardware::neuralnetworks::V1_2::Capabilities& lhs, const ::android::hardware::neuralnetworks::V1_2::Capabilities& rhs){
    return !(lhs == rhs);
}

static inline std::string toString(const ::android::hardware::neuralnetworks::V1_2::Operation& o) {
    using ::android::hardware::toString;
    std::string os;
    os += "{";
    os += ".type = ";
    os += ::android::hardware::neuralnetworks::V1_2::toString(o.type);
    os += ", .inputs = ";
    os += ::android::hardware::toString(o.inputs);
    os += ", .outputs = ";
    os += ::android::hardware::toString(o.outputs);
    os += "}"; return os;
}

static inline void PrintTo(const ::android::hardware::neuralnetworks::V1_2::Operation& o, ::std::ostream* os) {
    *os << toString(o);
}

static inline bool operator==(const ::android::hardware::neuralnetworks::V1_2::Operation& lhs, const ::android::hardware::neuralnetworks::V1_2::Operation& rhs) {
    if (lhs.type != rhs.type) {
        return false;
    }
    if (lhs.inputs != rhs.inputs) {
        return false;
    }
    if (lhs.outputs != rhs.outputs) {
        return false;
    }
    return true;
}

static inline bool operator!=(const ::android::hardware::neuralnetworks::V1_2::Operation& lhs, const ::android::hardware::neuralnetworks::V1_2::Operation& rhs){
    return !(lhs == rhs);
}

static inline std::string toString(const ::android::hardware::neuralnetworks::V1_2::SymmPerChannelQuantParams& o) {
    using ::android::hardware::toString;
    std::string os;
    os += "{";
    os += ".scales = ";
    os += ::android::hardware::toString(o.scales);
    os += ", .channelDim = ";
    os += ::android::hardware::toString(o.channelDim);
    os += "}"; return os;
}

static inline void PrintTo(const ::android::hardware::neuralnetworks::V1_2::SymmPerChannelQuantParams& o, ::std::ostream* os) {
    *os << toString(o);
}

static inline bool operator==(const ::android::hardware::neuralnetworks::V1_2::SymmPerChannelQuantParams& lhs, const ::android::hardware::neuralnetworks::V1_2::SymmPerChannelQuantParams& rhs) {
    if (lhs.scales != rhs.scales) {
        return false;
    }
    if (lhs.channelDim != rhs.channelDim) {
        return false;
    }
    return true;
}

static inline bool operator!=(const ::android::hardware::neuralnetworks::V1_2::SymmPerChannelQuantParams& lhs, const ::android::hardware::neuralnetworks::V1_2::SymmPerChannelQuantParams& rhs){
    return !(lhs == rhs);
}

static inline std::string toString(const ::android::hardware::neuralnetworks::V1_2::Operand::ExtraParams& o) {
    using ::android::hardware::toString;
    std::string os;
    os += "{";

    switch (o.getDiscriminator()) {
        case ::android::hardware::neuralnetworks::V1_2::Operand::ExtraParams::hidl_discriminator::none: {
            os += ".none = ";
            os += toString(o.none());
            break;
        }
        case ::android::hardware::neuralnetworks::V1_2::Operand::ExtraParams::hidl_discriminator::channelQuant: {
            os += ".channelQuant = ";
            os += toString(o.channelQuant());
            break;
        }
        case ::android::hardware::neuralnetworks::V1_2::Operand::ExtraParams::hidl_discriminator::extension: {
            os += ".extension = ";
            os += toString(o.extension());
            break;
        }
        default: {
            ::android::hardware::details::logAlwaysFatal((
                    "Unknown union discriminator (value: " +
                    std::to_string((uint8_t) o.getDiscriminator()) + ").").c_str());
        }
    }
    os += "}"; return os;
}

static inline void PrintTo(const ::android::hardware::neuralnetworks::V1_2::Operand::ExtraParams& o, ::std::ostream* os) {
    *os << toString(o);
}

static inline bool operator==(const ::android::hardware::neuralnetworks::V1_2::Operand::ExtraParams& lhs, const ::android::hardware::neuralnetworks::V1_2::Operand::ExtraParams& rhs) {
    if (lhs.getDiscriminator() != rhs.getDiscriminator()) {
        return false;
    }
    switch (lhs.getDiscriminator()) {
        case ::android::hardware::neuralnetworks::V1_2::Operand::ExtraParams::hidl_discriminator::none: {
            return (lhs.none() == rhs.none());
        }
        case ::android::hardware::neuralnetworks::V1_2::Operand::ExtraParams::hidl_discriminator::channelQuant: {
            return (lhs.channelQuant() == rhs.channelQuant());
        }
        case ::android::hardware::neuralnetworks::V1_2::Operand::ExtraParams::hidl_discriminator::extension: {
            return (lhs.extension() == rhs.extension());
        }
        default: {
            ::android::hardware::details::logAlwaysFatal((
                    "Unknown union discriminator (value: " +
                    std::to_string((uint8_t) lhs.getDiscriminator()) + ").").c_str());
        }
    }
    return true;
}

static inline bool operator!=(const ::android::hardware::neuralnetworks::V1_2::Operand::ExtraParams& lhs, const ::android::hardware::neuralnetworks::V1_2::Operand::ExtraParams& rhs){
    return !(lhs == rhs);
}

static inline std::string toString(const ::android::hardware::neuralnetworks::V1_2::Operand& o) {
    using ::android::hardware::toString;
    std::string os;
    os += "{";
    os += ".type = ";
    os += ::android::hardware::neuralnetworks::V1_2::toString(o.type);
    os += ", .dimensions = ";
    os += ::android::hardware::toString(o.dimensions);
    os += ", .numberOfConsumers = ";
    os += ::android::hardware::toString(o.numberOfConsumers);
    os += ", .scale = ";
    os += ::android::hardware::toString(o.scale);
    os += ", .zeroPoint = ";
    os += ::android::hardware::toString(o.zeroPoint);
    os += ", .lifetime = ";
    os += ::android::hardware::neuralnetworks::V1_0::toString(o.lifetime);
    os += ", .location = ";
    os += ::android::hardware::neuralnetworks::V1_0::toString(o.location);
    os += ", .extraParams = ";
    os += ::android::hardware::neuralnetworks::V1_2::toString(o.extraParams);
    os += "}"; return os;
}

static inline void PrintTo(const ::android::hardware::neuralnetworks::V1_2::Operand& o, ::std::ostream* os) {
    *os << toString(o);
}

static inline bool operator==(const ::android::hardware::neuralnetworks::V1_2::Operand& lhs, const ::android::hardware::neuralnetworks::V1_2::Operand& rhs) {
    if (lhs.type != rhs.type) {
        return false;
    }
    if (lhs.dimensions != rhs.dimensions) {
        return false;
    }
    if (lhs.numberOfConsumers != rhs.numberOfConsumers) {
        return false;
    }
    if (lhs.scale != rhs.scale) {
        return false;
    }
    if (lhs.zeroPoint != rhs.zeroPoint) {
        return false;
    }
    if (lhs.lifetime != rhs.lifetime) {
        return false;
    }
    if (lhs.location != rhs.location) {
        return false;
    }
    if (lhs.extraParams != rhs.extraParams) {
        return false;
    }
    return true;
}

static inline bool operator!=(const ::android::hardware::neuralnetworks::V1_2::Operand& lhs, const ::android::hardware::neuralnetworks::V1_2::Operand& rhs){
    return !(lhs == rhs);
}

static inline std::string toString(const ::android::hardware::neuralnetworks::V1_2::Model::ExtensionNameAndPrefix& o) {
    using ::android::hardware::toString;
    std::string os;
    os += "{";
    os += ".name = ";
    os += ::android::hardware::toString(o.name);
    os += ", .prefix = ";
    os += ::android::hardware::toString(o.prefix);
    os += "}"; return os;
}

static inline void PrintTo(const ::android::hardware::neuralnetworks::V1_2::Model::ExtensionNameAndPrefix& o, ::std::ostream* os) {
    *os << toString(o);
}

static inline bool operator==(const ::android::hardware::neuralnetworks::V1_2::Model::ExtensionNameAndPrefix& lhs, const ::android::hardware::neuralnetworks::V1_2::Model::ExtensionNameAndPrefix& rhs) {
    if (lhs.name != rhs.name) {
        return false;
    }
    if (lhs.prefix != rhs.prefix) {
        return false;
    }
    return true;
}

static inline bool operator!=(const ::android::hardware::neuralnetworks::V1_2::Model::ExtensionNameAndPrefix& lhs, const ::android::hardware::neuralnetworks::V1_2::Model::ExtensionNameAndPrefix& rhs){
    return !(lhs == rhs);
}

template<>
inline std::string toString<::android::hardware::neuralnetworks::V1_2::Model::ExtensionTypeEncoding>(uint8_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    ::android::hardware::hidl_bitfield<::android::hardware::neuralnetworks::V1_2::Model::ExtensionTypeEncoding> flipped = 0;
    bool first = true;
    if ((o & ::android::hardware::neuralnetworks::V1_2::Model::ExtensionTypeEncoding::HIGH_BITS_PREFIX) == static_cast<uint8_t>(::android::hardware::neuralnetworks::V1_2::Model::ExtensionTypeEncoding::HIGH_BITS_PREFIX)) {
        os += (first ? "" : " | ");
        os += "HIGH_BITS_PREFIX";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::Model::ExtensionTypeEncoding::HIGH_BITS_PREFIX;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::Model::ExtensionTypeEncoding::LOW_BITS_TYPE) == static_cast<uint8_t>(::android::hardware::neuralnetworks::V1_2::Model::ExtensionTypeEncoding::LOW_BITS_TYPE)) {
        os += (first ? "" : " | ");
        os += "LOW_BITS_TYPE";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::Model::ExtensionTypeEncoding::LOW_BITS_TYPE;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

static inline std::string toString(::android::hardware::neuralnetworks::V1_2::Model::ExtensionTypeEncoding o) {
    using ::android::hardware::details::toHexString;
    if (o == ::android::hardware::neuralnetworks::V1_2::Model::ExtensionTypeEncoding::HIGH_BITS_PREFIX) {
        return "HIGH_BITS_PREFIX";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::Model::ExtensionTypeEncoding::LOW_BITS_TYPE) {
        return "LOW_BITS_TYPE";
    }
    std::string os;
    os += toHexString(static_cast<uint8_t>(o));
    return os;
}

static inline void PrintTo(::android::hardware::neuralnetworks::V1_2::Model::ExtensionTypeEncoding o, ::std::ostream* os) {
    *os << toString(o);
}

static inline std::string toString(const ::android::hardware::neuralnetworks::V1_2::Model& o) {
    using ::android::hardware::toString;
    std::string os;
    os += "{";
    os += ".operands = ";
    os += ::android::hardware::toString(o.operands);
    os += ", .operations = ";
    os += ::android::hardware::toString(o.operations);
    os += ", .inputIndexes = ";
    os += ::android::hardware::toString(o.inputIndexes);
    os += ", .outputIndexes = ";
    os += ::android::hardware::toString(o.outputIndexes);
    os += ", .operandValues = ";
    os += ::android::hardware::toString(o.operandValues);
    os += ", .pools = ";
    os += ::android::hardware::toString(o.pools);
    os += ", .relaxComputationFloat32toFloat16 = ";
    os += ::android::hardware::toString(o.relaxComputationFloat32toFloat16);
    os += ", .extensionNameToPrefix = ";
    os += ::android::hardware::toString(o.extensionNameToPrefix);
    os += "}"; return os;
}

static inline void PrintTo(const ::android::hardware::neuralnetworks::V1_2::Model& o, ::std::ostream* os) {
    *os << toString(o);
}

// operator== and operator!= are not generated for Model

static inline std::string toString(const ::android::hardware::neuralnetworks::V1_2::OutputShape& o) {
    using ::android::hardware::toString;
    std::string os;
    os += "{";
    os += ".dimensions = ";
    os += ::android::hardware::toString(o.dimensions);
    os += ", .isSufficient = ";
    os += ::android::hardware::toString(o.isSufficient);
    os += "}"; return os;
}

static inline void PrintTo(const ::android::hardware::neuralnetworks::V1_2::OutputShape& o, ::std::ostream* os) {
    *os << toString(o);
}

static inline bool operator==(const ::android::hardware::neuralnetworks::V1_2::OutputShape& lhs, const ::android::hardware::neuralnetworks::V1_2::OutputShape& rhs) {
    if (lhs.dimensions != rhs.dimensions) {
        return false;
    }
    if (lhs.isSufficient != rhs.isSufficient) {
        return false;
    }
    return true;
}

static inline bool operator!=(const ::android::hardware::neuralnetworks::V1_2::OutputShape& lhs, const ::android::hardware::neuralnetworks::V1_2::OutputShape& rhs){
    return !(lhs == rhs);
}

template<>
inline std::string toString<::android::hardware::neuralnetworks::V1_2::MeasureTiming>(int32_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    ::android::hardware::hidl_bitfield<::android::hardware::neuralnetworks::V1_2::MeasureTiming> flipped = 0;
    bool first = true;
    if ((o & ::android::hardware::neuralnetworks::V1_2::MeasureTiming::NO) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::MeasureTiming::NO)) {
        os += (first ? "" : " | ");
        os += "NO";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::MeasureTiming::NO;
    }
    if ((o & ::android::hardware::neuralnetworks::V1_2::MeasureTiming::YES) == static_cast<int32_t>(::android::hardware::neuralnetworks::V1_2::MeasureTiming::YES)) {
        os += (first ? "" : " | ");
        os += "YES";
        first = false;
        flipped |= ::android::hardware::neuralnetworks::V1_2::MeasureTiming::YES;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

static inline std::string toString(::android::hardware::neuralnetworks::V1_2::MeasureTiming o) {
    using ::android::hardware::details::toHexString;
    if (o == ::android::hardware::neuralnetworks::V1_2::MeasureTiming::NO) {
        return "NO";
    }
    if (o == ::android::hardware::neuralnetworks::V1_2::MeasureTiming::YES) {
        return "YES";
    }
    std::string os;
    os += toHexString(static_cast<int32_t>(o));
    return os;
}

static inline void PrintTo(::android::hardware::neuralnetworks::V1_2::MeasureTiming o, ::std::ostream* os) {
    *os << toString(o);
}

static inline std::string toString(const ::android::hardware::neuralnetworks::V1_2::Timing& o) {
    using ::android::hardware::toString;
    std::string os;
    os += "{";
    os += ".timeOnDevice = ";
    os += ::android::hardware::toString(o.timeOnDevice);
    os += ", .timeInDriver = ";
    os += ::android::hardware::toString(o.timeInDriver);
    os += "}"; return os;
}

static inline void PrintTo(const ::android::hardware::neuralnetworks::V1_2::Timing& o, ::std::ostream* os) {
    *os << toString(o);
}

static inline bool operator==(const ::android::hardware::neuralnetworks::V1_2::Timing& lhs, const ::android::hardware::neuralnetworks::V1_2::Timing& rhs) {
    if (lhs.timeOnDevice != rhs.timeOnDevice) {
        return false;
    }
    if (lhs.timeInDriver != rhs.timeInDriver) {
        return false;
    }
    return true;
}

static inline bool operator!=(const ::android::hardware::neuralnetworks::V1_2::Timing& lhs, const ::android::hardware::neuralnetworks::V1_2::Timing& rhs){
    return !(lhs == rhs);
}

static inline std::string toString(const ::android::hardware::neuralnetworks::V1_2::FmqRequestDatum::PacketInformation& o) {
    using ::android::hardware::toString;
    std::string os;
    os += "{";
    os += ".packetSize = ";
    os += ::android::hardware::toString(o.packetSize);
    os += ", .numberOfInputOperands = ";
    os += ::android::hardware::toString(o.numberOfInputOperands);
    os += ", .numberOfOutputOperands = ";
    os += ::android::hardware::toString(o.numberOfOutputOperands);
    os += ", .numberOfPools = ";
    os += ::android::hardware::toString(o.numberOfPools);
    os += "}"; return os;
}

static inline void PrintTo(const ::android::hardware::neuralnetworks::V1_2::FmqRequestDatum::PacketInformation& o, ::std::ostream* os) {
    *os << toString(o);
}

static inline bool operator==(const ::android::hardware::neuralnetworks::V1_2::FmqRequestDatum::PacketInformation& lhs, const ::android::hardware::neuralnetworks::V1_2::FmqRequestDatum::PacketInformation& rhs) {
    if (lhs.packetSize != rhs.packetSize) {
        return false;
    }
    if (lhs.numberOfInputOperands != rhs.numberOfInputOperands) {
        return false;
    }
    if (lhs.numberOfOutputOperands != rhs.numberOfOutputOperands) {
        return false;
    }
    if (lhs.numberOfPools != rhs.numberOfPools) {
        return false;
    }
    return true;
}

static inline bool operator!=(const ::android::hardware::neuralnetworks::V1_2::FmqRequestDatum::PacketInformation& lhs, const ::android::hardware::neuralnetworks::V1_2::FmqRequestDatum::PacketInformation& rhs){
    return !(lhs == rhs);
}

static inline std::string toString(const ::android::hardware::neuralnetworks::V1_2::FmqRequestDatum::OperandInformation& o) {
    using ::android::hardware::toString;
    std::string os;
    os += "{";
    os += ".hasNoValue = ";
    os += ::android::hardware::toString(o.hasNoValue);
    os += ", .location = ";
    os += ::android::hardware::neuralnetworks::V1_0::toString(o.location);
    os += ", .numberOfDimensions = ";
    os += ::android::hardware::toString(o.numberOfDimensions);
    os += "}"; return os;
}

static inline void PrintTo(const ::android::hardware::neuralnetworks::V1_2::FmqRequestDatum::OperandInformation& o, ::std::ostream* os) {
    *os << toString(o);
}

static inline bool operator==(const ::android::hardware::neuralnetworks::V1_2::FmqRequestDatum::OperandInformation& lhs, const ::android::hardware::neuralnetworks::V1_2::FmqRequestDatum::OperandInformation& rhs) {
    if (lhs.hasNoValue != rhs.hasNoValue) {
        return false;
    }
    if (lhs.location != rhs.location) {
        return false;
    }
    if (lhs.numberOfDimensions != rhs.numberOfDimensions) {
        return false;
    }
    return true;
}

static inline bool operator!=(const ::android::hardware::neuralnetworks::V1_2::FmqRequestDatum::OperandInformation& lhs, const ::android::hardware::neuralnetworks::V1_2::FmqRequestDatum::OperandInformation& rhs){
    return !(lhs == rhs);
}

static inline std::string toString(const ::android::hardware::neuralnetworks::V1_2::FmqRequestDatum& o) {
    using ::android::hardware::toString;
    std::string os;
    os += "{";

    switch (o.getDiscriminator()) {
        case ::android::hardware::neuralnetworks::V1_2::FmqRequestDatum::hidl_discriminator::packetInformation: {
            os += ".packetInformation = ";
            os += toString(o.packetInformation());
            break;
        }
        case ::android::hardware::neuralnetworks::V1_2::FmqRequestDatum::hidl_discriminator::inputOperandInformation: {
            os += ".inputOperandInformation = ";
            os += toString(o.inputOperandInformation());
            break;
        }
        case ::android::hardware::neuralnetworks::V1_2::FmqRequestDatum::hidl_discriminator::inputOperandDimensionValue: {
            os += ".inputOperandDimensionValue = ";
            os += toString(o.inputOperandDimensionValue());
            break;
        }
        case ::android::hardware::neuralnetworks::V1_2::FmqRequestDatum::hidl_discriminator::outputOperandInformation: {
            os += ".outputOperandInformation = ";
            os += toString(o.outputOperandInformation());
            break;
        }
        case ::android::hardware::neuralnetworks::V1_2::FmqRequestDatum::hidl_discriminator::outputOperandDimensionValue: {
            os += ".outputOperandDimensionValue = ";
            os += toString(o.outputOperandDimensionValue());
            break;
        }
        case ::android::hardware::neuralnetworks::V1_2::FmqRequestDatum::hidl_discriminator::poolIdentifier: {
            os += ".poolIdentifier = ";
            os += toString(o.poolIdentifier());
            break;
        }
        case ::android::hardware::neuralnetworks::V1_2::FmqRequestDatum::hidl_discriminator::measureTiming: {
            os += ".measureTiming = ";
            os += toString(o.measureTiming());
            break;
        }
        default: {
            ::android::hardware::details::logAlwaysFatal((
                    "Unknown union discriminator (value: " +
                    std::to_string((uint8_t) o.getDiscriminator()) + ").").c_str());
        }
    }
    os += "}"; return os;
}

static inline void PrintTo(const ::android::hardware::neuralnetworks::V1_2::FmqRequestDatum& o, ::std::ostream* os) {
    *os << toString(o);
}

static inline bool operator==(const ::android::hardware::neuralnetworks::V1_2::FmqRequestDatum& lhs, const ::android::hardware::neuralnetworks::V1_2::FmqRequestDatum& rhs) {
    if (lhs.getDiscriminator() != rhs.getDiscriminator()) {
        return false;
    }
    switch (lhs.getDiscriminator()) {
        case ::android::hardware::neuralnetworks::V1_2::FmqRequestDatum::hidl_discriminator::packetInformation: {
            return (lhs.packetInformation() == rhs.packetInformation());
        }
        case ::android::hardware::neuralnetworks::V1_2::FmqRequestDatum::hidl_discriminator::inputOperandInformation: {
            return (lhs.inputOperandInformation() == rhs.inputOperandInformation());
        }
        case ::android::hardware::neuralnetworks::V1_2::FmqRequestDatum::hidl_discriminator::inputOperandDimensionValue: {
            return (lhs.inputOperandDimensionValue() == rhs.inputOperandDimensionValue());
        }
        case ::android::hardware::neuralnetworks::V1_2::FmqRequestDatum::hidl_discriminator::outputOperandInformation: {
            return (lhs.outputOperandInformation() == rhs.outputOperandInformation());
        }
        case ::android::hardware::neuralnetworks::V1_2::FmqRequestDatum::hidl_discriminator::outputOperandDimensionValue: {
            return (lhs.outputOperandDimensionValue() == rhs.outputOperandDimensionValue());
        }
        case ::android::hardware::neuralnetworks::V1_2::FmqRequestDatum::hidl_discriminator::poolIdentifier: {
            return (lhs.poolIdentifier() == rhs.poolIdentifier());
        }
        case ::android::hardware::neuralnetworks::V1_2::FmqRequestDatum::hidl_discriminator::measureTiming: {
            return (lhs.measureTiming() == rhs.measureTiming());
        }
        default: {
            ::android::hardware::details::logAlwaysFatal((
                    "Unknown union discriminator (value: " +
                    std::to_string((uint8_t) lhs.getDiscriminator()) + ").").c_str());
        }
    }
    return true;
}

static inline bool operator!=(const ::android::hardware::neuralnetworks::V1_2::FmqRequestDatum& lhs, const ::android::hardware::neuralnetworks::V1_2::FmqRequestDatum& rhs){
    return !(lhs == rhs);
}

static inline std::string toString(const ::android::hardware::neuralnetworks::V1_2::FmqResultDatum::PacketInformation& o) {
    using ::android::hardware::toString;
    std::string os;
    os += "{";
    os += ".packetSize = ";
    os += ::android::hardware::toString(o.packetSize);
    os += ", .errorStatus = ";
    os += ::android::hardware::neuralnetworks::V1_0::toString(o.errorStatus);
    os += ", .numberOfOperands = ";
    os += ::android::hardware::toString(o.numberOfOperands);
    os += "}"; return os;
}

static inline void PrintTo(const ::android::hardware::neuralnetworks::V1_2::FmqResultDatum::PacketInformation& o, ::std::ostream* os) {
    *os << toString(o);
}

static inline bool operator==(const ::android::hardware::neuralnetworks::V1_2::FmqResultDatum::PacketInformation& lhs, const ::android::hardware::neuralnetworks::V1_2::FmqResultDatum::PacketInformation& rhs) {
    if (lhs.packetSize != rhs.packetSize) {
        return false;
    }
    if (lhs.errorStatus != rhs.errorStatus) {
        return false;
    }
    if (lhs.numberOfOperands != rhs.numberOfOperands) {
        return false;
    }
    return true;
}

static inline bool operator!=(const ::android::hardware::neuralnetworks::V1_2::FmqResultDatum::PacketInformation& lhs, const ::android::hardware::neuralnetworks::V1_2::FmqResultDatum::PacketInformation& rhs){
    return !(lhs == rhs);
}

static inline std::string toString(const ::android::hardware::neuralnetworks::V1_2::FmqResultDatum::OperandInformation& o) {
    using ::android::hardware::toString;
    std::string os;
    os += "{";
    os += ".isSufficient = ";
    os += ::android::hardware::toString(o.isSufficient);
    os += ", .numberOfDimensions = ";
    os += ::android::hardware::toString(o.numberOfDimensions);
    os += "}"; return os;
}

static inline void PrintTo(const ::android::hardware::neuralnetworks::V1_2::FmqResultDatum::OperandInformation& o, ::std::ostream* os) {
    *os << toString(o);
}

static inline bool operator==(const ::android::hardware::neuralnetworks::V1_2::FmqResultDatum::OperandInformation& lhs, const ::android::hardware::neuralnetworks::V1_2::FmqResultDatum::OperandInformation& rhs) {
    if (lhs.isSufficient != rhs.isSufficient) {
        return false;
    }
    if (lhs.numberOfDimensions != rhs.numberOfDimensions) {
        return false;
    }
    return true;
}

static inline bool operator!=(const ::android::hardware::neuralnetworks::V1_2::FmqResultDatum::OperandInformation& lhs, const ::android::hardware::neuralnetworks::V1_2::FmqResultDatum::OperandInformation& rhs){
    return !(lhs == rhs);
}

static inline std::string toString(const ::android::hardware::neuralnetworks::V1_2::FmqResultDatum& o) {
    using ::android::hardware::toString;
    std::string os;
    os += "{";

    switch (o.getDiscriminator()) {
        case ::android::hardware::neuralnetworks::V1_2::FmqResultDatum::hidl_discriminator::packetInformation: {
            os += ".packetInformation = ";
            os += toString(o.packetInformation());
            break;
        }
        case ::android::hardware::neuralnetworks::V1_2::FmqResultDatum::hidl_discriminator::operandInformation: {
            os += ".operandInformation = ";
            os += toString(o.operandInformation());
            break;
        }
        case ::android::hardware::neuralnetworks::V1_2::FmqResultDatum::hidl_discriminator::operandDimensionValue: {
            os += ".operandDimensionValue = ";
            os += toString(o.operandDimensionValue());
            break;
        }
        case ::android::hardware::neuralnetworks::V1_2::FmqResultDatum::hidl_discriminator::executionTiming: {
            os += ".executionTiming = ";
            os += toString(o.executionTiming());
            break;
        }
        default: {
            ::android::hardware::details::logAlwaysFatal((
                    "Unknown union discriminator (value: " +
                    std::to_string((uint8_t) o.getDiscriminator()) + ").").c_str());
        }
    }
    os += "}"; return os;
}

static inline void PrintTo(const ::android::hardware::neuralnetworks::V1_2::FmqResultDatum& o, ::std::ostream* os) {
    *os << toString(o);
}

static inline bool operator==(const ::android::hardware::neuralnetworks::V1_2::FmqResultDatum& lhs, const ::android::hardware::neuralnetworks::V1_2::FmqResultDatum& rhs) {
    if (lhs.getDiscriminator() != rhs.getDiscriminator()) {
        return false;
    }
    switch (lhs.getDiscriminator()) {
        case ::android::hardware::neuralnetworks::V1_2::FmqResultDatum::hidl_discriminator::packetInformation: {
            return (lhs.packetInformation() == rhs.packetInformation());
        }
        case ::android::hardware::neuralnetworks::V1_2::FmqResultDatum::hidl_discriminator::operandInformation: {
            return (lhs.operandInformation() == rhs.operandInformation());
        }
        case ::android::hardware::neuralnetworks::V1_2::FmqResultDatum::hidl_discriminator::operandDimensionValue: {
            return (lhs.operandDimensionValue() == rhs.operandDimensionValue());
        }
        case ::android::hardware::neuralnetworks::V1_2::FmqResultDatum::hidl_discriminator::executionTiming: {
            return (lhs.executionTiming() == rhs.executionTiming());
        }
        default: {
            ::android::hardware::details::logAlwaysFatal((
                    "Unknown union discriminator (value: " +
                    std::to_string((uint8_t) lhs.getDiscriminator()) + ").").c_str());
        }
    }
    return true;
}

static inline bool operator!=(const ::android::hardware::neuralnetworks::V1_2::FmqResultDatum& lhs, const ::android::hardware::neuralnetworks::V1_2::FmqResultDatum& rhs){
    return !(lhs == rhs);
}

static inline std::string toString(const ::android::hardware::neuralnetworks::V1_2::Extension::OperandTypeInformation& o) {
    using ::android::hardware::toString;
    std::string os;
    os += "{";
    os += ".type = ";
    os += ::android::hardware::toString(o.type);
    os += ", .isTensor = ";
    os += ::android::hardware::toString(o.isTensor);
    os += ", .byteSize = ";
    os += ::android::hardware::toString(o.byteSize);
    os += "}"; return os;
}

static inline void PrintTo(const ::android::hardware::neuralnetworks::V1_2::Extension::OperandTypeInformation& o, ::std::ostream* os) {
    *os << toString(o);
}

static inline bool operator==(const ::android::hardware::neuralnetworks::V1_2::Extension::OperandTypeInformation& lhs, const ::android::hardware::neuralnetworks::V1_2::Extension::OperandTypeInformation& rhs) {
    if (lhs.type != rhs.type) {
        return false;
    }
    if (lhs.isTensor != rhs.isTensor) {
        return false;
    }
    if (lhs.byteSize != rhs.byteSize) {
        return false;
    }
    return true;
}

static inline bool operator!=(const ::android::hardware::neuralnetworks::V1_2::Extension::OperandTypeInformation& lhs, const ::android::hardware::neuralnetworks::V1_2::Extension::OperandTypeInformation& rhs){
    return !(lhs == rhs);
}

static inline std::string toString(const ::android::hardware::neuralnetworks::V1_2::Extension& o) {
    using ::android::hardware::toString;
    std::string os;
    os += "{";
    os += ".name = ";
    os += ::android::hardware::toString(o.name);
    os += ", .operandTypes = ";
    os += ::android::hardware::toString(o.operandTypes);
    os += "}"; return os;
}

static inline void PrintTo(const ::android::hardware::neuralnetworks::V1_2::Extension& o, ::std::ostream* os) {
    *os << toString(o);
}

static inline bool operator==(const ::android::hardware::neuralnetworks::V1_2::Extension& lhs, const ::android::hardware::neuralnetworks::V1_2::Extension& rhs) {
    if (lhs.name != rhs.name) {
        return false;
    }
    if (lhs.operandTypes != rhs.operandTypes) {
        return false;
    }
    return true;
}

static inline bool operator!=(const ::android::hardware::neuralnetworks::V1_2::Extension& lhs, const ::android::hardware::neuralnetworks::V1_2::Extension& rhs){
    return !(lhs == rhs);
}


}  // namespace V1_2
}  // namespace neuralnetworks
}  // namespace hardware
}  // namespace android

//
// global type declarations for package
//

namespace android {
namespace hardware {
namespace details {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++17-extensions"
template<> inline constexpr std::array<::android::hardware::neuralnetworks::V1_2::Constant, 2> hidl_enum_values<::android::hardware::neuralnetworks::V1_2::Constant> = {
    ::android::hardware::neuralnetworks::V1_2::Constant::BYTE_SIZE_OF_CACHE_TOKEN,
    ::android::hardware::neuralnetworks::V1_2::Constant::MAX_NUMBER_OF_CACHE_FILES,
};
#pragma clang diagnostic pop
}  // namespace details
}  // namespace hardware
}  // namespace android

namespace android {
namespace hardware {
namespace details {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++17-extensions"
template<> inline constexpr std::array<::android::hardware::neuralnetworks::V1_2::OperandType, 16> hidl_enum_values<::android::hardware::neuralnetworks::V1_2::OperandType> = {
    ::android::hardware::neuralnetworks::V1_2::OperandType::FLOAT32,
    ::android::hardware::neuralnetworks::V1_2::OperandType::INT32,
    ::android::hardware::neuralnetworks::V1_2::OperandType::UINT32,
    ::android::hardware::neuralnetworks::V1_2::OperandType::TENSOR_FLOAT32,
    ::android::hardware::neuralnetworks::V1_2::OperandType::TENSOR_INT32,
    ::android::hardware::neuralnetworks::V1_2::OperandType::TENSOR_QUANT8_ASYMM,
    ::android::hardware::neuralnetworks::V1_2::OperandType::OEM,
    ::android::hardware::neuralnetworks::V1_2::OperandType::TENSOR_OEM_BYTE,
    ::android::hardware::neuralnetworks::V1_2::OperandType::BOOL,
    ::android::hardware::neuralnetworks::V1_2::OperandType::TENSOR_QUANT16_SYMM,
    ::android::hardware::neuralnetworks::V1_2::OperandType::TENSOR_FLOAT16,
    ::android::hardware::neuralnetworks::V1_2::OperandType::TENSOR_BOOL8,
    ::android::hardware::neuralnetworks::V1_2::OperandType::FLOAT16,
    ::android::hardware::neuralnetworks::V1_2::OperandType::TENSOR_QUANT8_SYMM_PER_CHANNEL,
    ::android::hardware::neuralnetworks::V1_2::OperandType::TENSOR_QUANT16_ASYMM,
    ::android::hardware::neuralnetworks::V1_2::OperandType::TENSOR_QUANT8_SYMM,
};
#pragma clang diagnostic pop
}  // namespace details
}  // namespace hardware
}  // namespace android

namespace android {
namespace hardware {
namespace details {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++17-extensions"
template<> inline constexpr std::array<::android::hardware::neuralnetworks::V1_2::OperandTypeRange, 6> hidl_enum_values<::android::hardware::neuralnetworks::V1_2::OperandTypeRange> = {
    ::android::hardware::neuralnetworks::V1_2::OperandTypeRange::BASE_MIN,
    ::android::hardware::neuralnetworks::V1_2::OperandTypeRange::FUNDAMENTAL_MIN,
    ::android::hardware::neuralnetworks::V1_2::OperandTypeRange::FUNDAMENTAL_MAX,
    ::android::hardware::neuralnetworks::V1_2::OperandTypeRange::OEM_MIN,
    ::android::hardware::neuralnetworks::V1_2::OperandTypeRange::OEM_MAX,
    ::android::hardware::neuralnetworks::V1_2::OperandTypeRange::BASE_MAX,
};
#pragma clang diagnostic pop
}  // namespace details
}  // namespace hardware
}  // namespace android

namespace android {
namespace hardware {
namespace details {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++17-extensions"
template<> inline constexpr std::array<::android::hardware::neuralnetworks::V1_2::OperationType, 96> hidl_enum_values<::android::hardware::neuralnetworks::V1_2::OperationType> = {
    ::android::hardware::neuralnetworks::V1_2::OperationType::ADD,
    ::android::hardware::neuralnetworks::V1_2::OperationType::AVERAGE_POOL_2D,
    ::android::hardware::neuralnetworks::V1_2::OperationType::CONCATENATION,
    ::android::hardware::neuralnetworks::V1_2::OperationType::CONV_2D,
    ::android::hardware::neuralnetworks::V1_2::OperationType::DEPTHWISE_CONV_2D,
    ::android::hardware::neuralnetworks::V1_2::OperationType::DEPTH_TO_SPACE,
    ::android::hardware::neuralnetworks::V1_2::OperationType::DEQUANTIZE,
    ::android::hardware::neuralnetworks::V1_2::OperationType::EMBEDDING_LOOKUP,
    ::android::hardware::neuralnetworks::V1_2::OperationType::FLOOR,
    ::android::hardware::neuralnetworks::V1_2::OperationType::FULLY_CONNECTED,
    ::android::hardware::neuralnetworks::V1_2::OperationType::HASHTABLE_LOOKUP,
    ::android::hardware::neuralnetworks::V1_2::OperationType::L2_NORMALIZATION,
    ::android::hardware::neuralnetworks::V1_2::OperationType::L2_POOL_2D,
    ::android::hardware::neuralnetworks::V1_2::OperationType::LOCAL_RESPONSE_NORMALIZATION,
    ::android::hardware::neuralnetworks::V1_2::OperationType::LOGISTIC,
    ::android::hardware::neuralnetworks::V1_2::OperationType::LSH_PROJECTION,
    ::android::hardware::neuralnetworks::V1_2::OperationType::LSTM,
    ::android::hardware::neuralnetworks::V1_2::OperationType::MAX_POOL_2D,
    ::android::hardware::neuralnetworks::V1_2::OperationType::MUL,
    ::android::hardware::neuralnetworks::V1_2::OperationType::RELU,
    ::android::hardware::neuralnetworks::V1_2::OperationType::RELU1,
    ::android::hardware::neuralnetworks::V1_2::OperationType::RELU6,
    ::android::hardware::neuralnetworks::V1_2::OperationType::RESHAPE,
    ::android::hardware::neuralnetworks::V1_2::OperationType::RESIZE_BILINEAR,
    ::android::hardware::neuralnetworks::V1_2::OperationType::RNN,
    ::android::hardware::neuralnetworks::V1_2::OperationType::SOFTMAX,
    ::android::hardware::neuralnetworks::V1_2::OperationType::SPACE_TO_DEPTH,
    ::android::hardware::neuralnetworks::V1_2::OperationType::SVDF,
    ::android::hardware::neuralnetworks::V1_2::OperationType::TANH,
    ::android::hardware::neuralnetworks::V1_2::OperationType::BATCH_TO_SPACE_ND,
    ::android::hardware::neuralnetworks::V1_2::OperationType::DIV,
    ::android::hardware::neuralnetworks::V1_2::OperationType::MEAN,
    ::android::hardware::neuralnetworks::V1_2::OperationType::PAD,
    ::android::hardware::neuralnetworks::V1_2::OperationType::SPACE_TO_BATCH_ND,
    ::android::hardware::neuralnetworks::V1_2::OperationType::SQUEEZE,
    ::android::hardware::neuralnetworks::V1_2::OperationType::STRIDED_SLICE,
    ::android::hardware::neuralnetworks::V1_2::OperationType::SUB,
    ::android::hardware::neuralnetworks::V1_2::OperationType::TRANSPOSE,
    ::android::hardware::neuralnetworks::V1_2::OperationType::ABS,
    ::android::hardware::neuralnetworks::V1_2::OperationType::ARGMAX,
    ::android::hardware::neuralnetworks::V1_2::OperationType::ARGMIN,
    ::android::hardware::neuralnetworks::V1_2::OperationType::AXIS_ALIGNED_BBOX_TRANSFORM,
    ::android::hardware::neuralnetworks::V1_2::OperationType::BIDIRECTIONAL_SEQUENCE_LSTM,
    ::android::hardware::neuralnetworks::V1_2::OperationType::BIDIRECTIONAL_SEQUENCE_RNN,
    ::android::hardware::neuralnetworks::V1_2::OperationType::BOX_WITH_NMS_LIMIT,
    ::android::hardware::neuralnetworks::V1_2::OperationType::CAST,
    ::android::hardware::neuralnetworks::V1_2::OperationType::CHANNEL_SHUFFLE,
    ::android::hardware::neuralnetworks::V1_2::OperationType::DETECTION_POSTPROCESSING,
    ::android::hardware::neuralnetworks::V1_2::OperationType::EQUAL,
    ::android::hardware::neuralnetworks::V1_2::OperationType::EXP,
    ::android::hardware::neuralnetworks::V1_2::OperationType::EXPAND_DIMS,
    ::android::hardware::neuralnetworks::V1_2::OperationType::GATHER,
    ::android::hardware::neuralnetworks::V1_2::OperationType::GENERATE_PROPOSALS,
    ::android::hardware::neuralnetworks::V1_2::OperationType::GREATER,
    ::android::hardware::neuralnetworks::V1_2::OperationType::GREATER_EQUAL,
    ::android::hardware::neuralnetworks::V1_2::OperationType::GROUPED_CONV_2D,
    ::android::hardware::neuralnetworks::V1_2::OperationType::HEATMAP_MAX_KEYPOINT,
    ::android::hardware::neuralnetworks::V1_2::OperationType::INSTANCE_NORMALIZATION,
    ::android::hardware::neuralnetworks::V1_2::OperationType::LESS,
    ::android::hardware::neuralnetworks::V1_2::OperationType::LESS_EQUAL,
    ::android::hardware::neuralnetworks::V1_2::OperationType::LOG,
    ::android::hardware::neuralnetworks::V1_2::OperationType::LOGICAL_AND,
    ::android::hardware::neuralnetworks::V1_2::OperationType::LOGICAL_NOT,
    ::android::hardware::neuralnetworks::V1_2::OperationType::LOGICAL_OR,
    ::android::hardware::neuralnetworks::V1_2::OperationType::LOG_SOFTMAX,
    ::android::hardware::neuralnetworks::V1_2::OperationType::MAXIMUM,
    ::android::hardware::neuralnetworks::V1_2::OperationType::MINIMUM,
    ::android::hardware::neuralnetworks::V1_2::OperationType::NEG,
    ::android::hardware::neuralnetworks::V1_2::OperationType::NOT_EQUAL,
    ::android::hardware::neuralnetworks::V1_2::OperationType::PAD_V2,
    ::android::hardware::neuralnetworks::V1_2::OperationType::POW,
    ::android::hardware::neuralnetworks::V1_2::OperationType::PRELU,
    ::android::hardware::neuralnetworks::V1_2::OperationType::QUANTIZE,
    ::android::hardware::neuralnetworks::V1_2::OperationType::QUANTIZED_16BIT_LSTM,
    ::android::hardware::neuralnetworks::V1_2::OperationType::RANDOM_MULTINOMIAL,
    ::android::hardware::neuralnetworks::V1_2::OperationType::REDUCE_ALL,
    ::android::hardware::neuralnetworks::V1_2::OperationType::REDUCE_ANY,
    ::android::hardware::neuralnetworks::V1_2::OperationType::REDUCE_MAX,
    ::android::hardware::neuralnetworks::V1_2::OperationType::REDUCE_MIN,
    ::android::hardware::neuralnetworks::V1_2::OperationType::REDUCE_PROD,
    ::android::hardware::neuralnetworks::V1_2::OperationType::REDUCE_SUM,
    ::android::hardware::neuralnetworks::V1_2::OperationType::ROI_ALIGN,
    ::android::hardware::neuralnetworks::V1_2::OperationType::ROI_POOLING,
    ::android::hardware::neuralnetworks::V1_2::OperationType::RSQRT,
    ::android::hardware::neuralnetworks::V1_2::OperationType::SELECT,
    ::android::hardware::neuralnetworks::V1_2::OperationType::SIN,
    ::android::hardware::neuralnetworks::V1_2::OperationType::SLICE,
    ::android::hardware::neuralnetworks::V1_2::OperationType::SPLIT,
    ::android::hardware::neuralnetworks::V1_2::OperationType::SQRT,
    ::android::hardware::neuralnetworks::V1_2::OperationType::TILE,
    ::android::hardware::neuralnetworks::V1_2::OperationType::TOPK_V2,
    ::android::hardware::neuralnetworks::V1_2::OperationType::TRANSPOSE_CONV_2D,
    ::android::hardware::neuralnetworks::V1_2::OperationType::UNIDIRECTIONAL_SEQUENCE_LSTM,
    ::android::hardware::neuralnetworks::V1_2::OperationType::UNIDIRECTIONAL_SEQUENCE_RNN,
    ::android::hardware::neuralnetworks::V1_2::OperationType::RESIZE_NEAREST_NEIGHBOR,
    ::android::hardware::neuralnetworks::V1_2::OperationType::OEM_OPERATION,
};
#pragma clang diagnostic pop
}  // namespace details
}  // namespace hardware
}  // namespace android

namespace android {
namespace hardware {
namespace details {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++17-extensions"
template<> inline constexpr std::array<::android::hardware::neuralnetworks::V1_2::OperationTypeRange, 6> hidl_enum_values<::android::hardware::neuralnetworks::V1_2::OperationTypeRange> = {
    ::android::hardware::neuralnetworks::V1_2::OperationTypeRange::BASE_MIN,
    ::android::hardware::neuralnetworks::V1_2::OperationTypeRange::FUNDAMENTAL_MIN,
    ::android::hardware::neuralnetworks::V1_2::OperationTypeRange::FUNDAMENTAL_MAX,
    ::android::hardware::neuralnetworks::V1_2::OperationTypeRange::OEM_MIN,
    ::android::hardware::neuralnetworks::V1_2::OperationTypeRange::OEM_MAX,
    ::android::hardware::neuralnetworks::V1_2::OperationTypeRange::BASE_MAX,
};
#pragma clang diagnostic pop
}  // namespace details
}  // namespace hardware
}  // namespace android

namespace android {
namespace hardware {
namespace details {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++17-extensions"
template<> inline constexpr std::array<::android::hardware::neuralnetworks::V1_2::DeviceType, 4> hidl_enum_values<::android::hardware::neuralnetworks::V1_2::DeviceType> = {
    ::android::hardware::neuralnetworks::V1_2::DeviceType::OTHER,
    ::android::hardware::neuralnetworks::V1_2::DeviceType::CPU,
    ::android::hardware::neuralnetworks::V1_2::DeviceType::GPU,
    ::android::hardware::neuralnetworks::V1_2::DeviceType::ACCELERATOR,
};
#pragma clang diagnostic pop
}  // namespace details
}  // namespace hardware
}  // namespace android

namespace android {
namespace hardware {
namespace details {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++17-extensions"
template<> inline constexpr std::array<::android::hardware::neuralnetworks::V1_2::Model::ExtensionTypeEncoding, 2> hidl_enum_values<::android::hardware::neuralnetworks::V1_2::Model::ExtensionTypeEncoding> = {
    ::android::hardware::neuralnetworks::V1_2::Model::ExtensionTypeEncoding::HIGH_BITS_PREFIX,
    ::android::hardware::neuralnetworks::V1_2::Model::ExtensionTypeEncoding::LOW_BITS_TYPE,
};
#pragma clang diagnostic pop
}  // namespace details
}  // namespace hardware
}  // namespace android

namespace android {
namespace hardware {
namespace details {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++17-extensions"
template<> inline constexpr std::array<::android::hardware::neuralnetworks::V1_2::MeasureTiming, 2> hidl_enum_values<::android::hardware::neuralnetworks::V1_2::MeasureTiming> = {
    ::android::hardware::neuralnetworks::V1_2::MeasureTiming::NO,
    ::android::hardware::neuralnetworks::V1_2::MeasureTiming::YES,
};
#pragma clang diagnostic pop
}  // namespace details
}  // namespace hardware
}  // namespace android


#endif  // HIDL_GENERATED_ANDROID_HARDWARE_NEURALNETWORKS_V1_2_TYPES_H
