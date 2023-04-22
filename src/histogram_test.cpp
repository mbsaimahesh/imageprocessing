#include "histogram_test.h"
using namespace std;

int histogram_test()
{


    cv::Mat in_image=cv::imread("/home/sravya/Code/Data/standard_test_images/lake.tif",cv::IMREAD_GRAYSCALE);
    if(in_image.empty())
    {
        return -1;
    }

    //HistogramEqualization heq{256};
    //heq.compute_histogram(in_image.ptr<uchar>(),in_image.rows,in_image.cols);
    int filter[9] = {0,-1,0,-1,4,-1,0,-1,0};
    const int filter_width =3;
    const int filter_height=3;
    cv::Mat out_img= cv::Mat::zeros(cv::Size(in_image.rows,in_image.cols),CV_8UC1);
    auto start = std::chrono::high_resolution_clock::now();
    convolve(in_image.ptr<uchar>(),in_image.cols,in_image.rows,filter,filter_width,filter_height,
    out_img.ptr<uchar>());
    auto duration =std::chrono::high_resolution_clock::now()-start;
    std::cout<<"time:"<<std::chrono::duration_cast<std::chrono::milliseconds>(duration).count()<<"ms"<<std::endl;
    cv::imshow("Lake",out_img);
    cv::waitKey(0);
    return 0;
}