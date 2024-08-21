#include "histogram_test.h"
#include "image.h"
#include "image_pyramid.hpp"
#include <string>
using namespace std;
template<typename T> 
Image<T>& set_val(Image<T>& img,T val)
{
    for(int i=0; i<img.height();i++)
    {
        for(int j=0;j<img.width();j++)
        {
            img.set(i,j,val);
        }
    }
    return img; 
}


int main()
{
    // int error =histogram_test();
    // cout<<"Histogram test returned :"<<error<<endl;

    cv::Mat in_image = cv::imread("/home/sravya/Documents/Code/Data/cameraman.tif");
    std::vector<cv::Mat> pyramids = compute_gauss_pyramid(in_image, 3);

    int level = 0;
    for (auto img : pyramids)
    {
        string window{"img_" + to_string(level)};
        cv::imshow(window, img);
        cv::waitKey(0);
    }
}