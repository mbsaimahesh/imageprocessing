#include "histogram_test.h"
#include "image.h"
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
    histogram_test();
    Image<unsigned char> image(4,4);
   
    


}