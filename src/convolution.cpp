#include "convolution.h"
void convolve(unsigned char* img,const int imwidth,const int imheight,int* filter, const int  filter_width,const int filter_height, unsigned char* outimg)
{
    for(int i=0;i<imheight;++i) 
    {
        for(int j=0;j<imwidth;++j)
        {
            int value =0;
            for(int p= -filter_height/2 ; p<filter_height/2; ++p)
            {
                for(int q= -filter_width/2; q<filter_width/2;++q)
                {
                    int row = (i+p);
                    int col = (j+q);
                    unsigned char pix=0;
                    if((row>0 && row<imheight) && (col>0 && col<imwidth)) {
                        pix = img[row*imwidth+col];
                        
                    }
                    value += (pix*filter[(p+(filter_height/2))* filter_width + (q+filter_width/2)]);

                }
            }
            outimg[i*imwidth+j]=value;
        }
    }

}
void convolve_separable(unsigned char* img,const int imwidth,const int imheight,
     int* filter, const int  filter_width,const int filter_height, unsigned char* outimg)
     {
         //  f ** (g1*g2) = (f**g1) * (f**g2)
     for(int i=0;i<imheight;++i) 
    {
        for(int j=0;j<imwidth;++j)
        {
            int value =0;
            for(int p= -filter_height/2 ; p<filter_height/2; ++p)
            {
                    int row = (i+p);
                    int col = (j);
                    unsigned char pix=0;
                    if((row>0 && row<imheight) && (col>0 && col<imwidth)) {
                        pix = img[row*imwidth+col];
                        
                    }
                    value += (pix*filter[(p+(filter_height/2))* filter_width + (filter_width/2)]);

            }
            outimg[i*imwidth+j]=value;
        }
    }
     }

