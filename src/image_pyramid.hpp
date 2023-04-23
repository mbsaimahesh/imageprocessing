#ifndef IMAGE_PYRAMID_HPP
#define IMAGE_PYRAMID_HPP

#include "opencv4/opencv2/opencv.hpp"
#include <vector>


std::vector<cv::Mat> compute_gauss_pyramid(cv::Mat& src, const int num_levels);
#endif