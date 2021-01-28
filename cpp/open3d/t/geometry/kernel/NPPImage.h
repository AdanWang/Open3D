// ----------------------------------------------------------------------------
// -                        Open3D: www.open3d.org                            -
// ----------------------------------------------------------------------------
// The MIT License (MIT)
//
// Copyright (c) 2018 www.open3d.org
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
// FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
// IN THE SOFTWARE.
// ----------------------------------------------------------------------------
#pragma once

#ifdef BUILD_CUDA_MODULE
#include "open3d/core/Dtype.h"
#include "open3d/core/Tensor.h"
#include <nppdefs.h>
#include <nppi.h>
#include "open3d/t/geometry/Image.h"

namespace open3d {
namespace t {
namespace geometry {
namespace npp {

void Dilate(const open3d::core::Tensor &srcim,
            open3d::core::Tensor &dstim,
            int half_kernel_size);

void Filter(const open3d::core::Tensor &srcim,
            open3d::core::Tensor &dstim,
            t::geometry::Image::FilterType filter_type);

void Gaussian(const open3d::core::Tensor &srcim,
            open3d::core::Tensor &dstim,
            NppiMaskSize mask_size);

void SobelHorizontal(const open3d::core::Tensor &src_im,
            open3d::core::Tensor &dst_im);

void SobelVertical(const open3d::core::Tensor &src_im,
            open3d::core::Tensor &dst_im);

}  // namespace npp
}  // namespace geometry
}  // namespace t
}  // namespace open3d

#endif  // BUILD_CUDA_MODULE
