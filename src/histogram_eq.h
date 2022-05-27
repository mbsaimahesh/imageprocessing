#ifndef HISTOGRAM_EQ_H
#define HISTOGRAM_EQ_H
#include<cstring>
/**
 * @brief  Performs histogram equalization on the image.
 *  compute  the histogram of the  images.\n
 *  ToDo: Implement for any number of bins.\n
 * compute the  probabilities.
 * calculate the Commulated Distribution Function.
 *  Map the values of the each pixel as CDF(x)
 * 
 * 
 */
class HistogramEqualization
{
public:
    HistogramEqualization(int nbins):m_nbins{nbins}{
        m_hist=new unsigned int[m_nbins];
        m_prob = new float[m_nbins];
        m_cdf = new float[m_nbins];
        
    }
    ~HistogramEqualization()
    {
        delete[] m_hist;
        delete[] m_prob;
        delete[] m_cdf;
    }
 /**
  * @brief compute the histogram.
  * 
  * @param img only grayscale images. 
  * @param nrows 
  * @param ncols 
  */
 void compute_histogram(unsigned char* img, const int nrows,const int ncols);
 /**
  * @brief  equalize the image histogram using the already computed histogram.
  * 
  */
 void equalize();

private:
    const int m_nbins;
    unsigned int * m_hist;
    float* m_prob;
    float* m_cdf;

};
#endif
