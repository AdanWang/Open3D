// ----------------------------------------------------------------------------
// -                        Open3D: www.open3d.org                            -
// ----------------------------------------------------------------------------
// The MIT License (MIT)
//
// Copyright (c) 2017 Jaesik Park <syncle@gmail.com>
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

#include <string>

namespace three {

class OdometryOption
{

public:

	OdometryOption(
			double lambda_dep = 0.95, 
			int minimum_correspondence_num = 30000,
			std::vector<int> iteration_number_per_pyramid_level =
			{ 10, 10, 10, 5 } /* {smaller image size to original image size} */,
			double max_depth_diff = 0.07, 
			double min_depth = 0.0,	
			double max_depth = 4.0,
			bool check_initialization = true,
			std::string intrinsic_path = "") :
			lambda_dep_(lambda_dep), 
			minimum_correspondence_num_(minimum_correspondence_num),
			iteration_number_per_pyramid_level_
			(iteration_number_per_pyramid_level),
			max_depth_diff_(max_depth_diff), min_depth_(min_depth), 
			max_depth_(max_depth), 
			check_initialization_(check_initialization),
			intrinsic_path_(intrinsic_path) {}
	~OdometryOption() {}

public:
	double lambda_dep_;
	double minimum_correspondence_num_;
	std::vector<int> iteration_number_per_pyramid_level_;
	double max_depth_diff_;
	double min_depth_;
	double max_depth_;
	bool check_initialization_;
	std::string intrinsic_path_;
};

}
