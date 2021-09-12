#include<iostream>
#include"opencv4/opencv2/opencv.hpp"

using namespace std;

int main()
{
    string s;
    cv::Mat in_image=cv::imread("/home/sravya/Code/standard_test_images/lake.tif",cv::IMREAD_GRAYSCALE);
    cv::imshow("Lake",in_image);
    cv::waitKey(0);
}