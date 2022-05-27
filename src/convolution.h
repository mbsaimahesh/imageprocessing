#ifndef CONVOLUTION_H
#define CONVOLUTION_H
/**
 * @brief Perform convolution of img and filter.
 *  
 *  convolution operation on the images is represented as 
 *   \f$ x_1 \f$ 
 * 
 * @param img 
 * @param imwidth 
 * @param imheight 
 * @param filter 
 * @param filter_width 
 * @param filter_height 
 * @param outimg 
 */
void convolve(unsigned char* img,const int imwidth,const int imheight,
     int* filter, const int  filter_width,const int filter_height, unsigned char* outimg);

void convolve_separable(unsigned char* img,const int imwidth,const int imheight,
     int* filter, const int  filter_width,const int filter_height, unsigned char* outimg);

#endif