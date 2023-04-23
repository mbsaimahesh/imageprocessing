#include "image_pyramid.hpp"

std::vector<cv::Mat> compute_gauss_pyramid(cv::Mat& src, const int num_levels)
{
    std::vector<cv::Mat> pyramid;
    for(int i=0;i<num_levels;++i)
    {
        cv::Mat dst;
        cv::pyrDown(src,dst);
        pyramid.push_back(dst);
        src=dst;
    }
    return pyramid;
}