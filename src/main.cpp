#include "histogram_test.h"
#include "image.h"
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
    int error =histogram_test();
    cout<<"Histogram test returned :"<<error<<endl;
   
    


}