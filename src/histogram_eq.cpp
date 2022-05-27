#include"histogram_eq.h"

 void HistogramEqualization::compute_histogram(unsigned char* img, const int nrows,const int ncols)
 {
     std::memset(m_hist,0,sizeof(unsigned int)*m_nbins);
     std:memset(m_prob,0,sizeof(float)*m_nbins);
     std::memset(m_cdf,0,sizeof(float)*m_nbins);
     for(int i=0;i<nrows*ncols;++i) {
         int index= img[i]%m_nbins;
         m_hist[index]++;
     }
   for(int i=0;i<m_nbins;++i) {
        m_prob[i]= static_cast<float>(m_hist[i])/(nrows*ncols);
        if(i>0) {
        m_cdf[i]=m_cdf[i-1]+m_prob[i];
        }
 }
 }
 void HistogramEqualization::equalize()
 {

 }