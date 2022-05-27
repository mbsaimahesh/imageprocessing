
#include "image.h"
template<typename PixelType>
Image<PixelType>::Image(unsigned int w, unsigned int h):m_height{h},m_width{w} {

        m_data = new PixelType[m_width*m_height];

    }
template<typename PixelType>
Image<PixelType>::Image(Image&& im_mov)
{
    m_width=im_mov.m_width;
    m_height= im_mov.m_height;
    m_data = im_mov.m_data;
    im_mov.m_data = nullptr;
    im_mov.m_height=0;
    im_mov.m_width=0;
}
template<typename PixelType>
Image<PixelType>::~Image()
{
    if(m_data != nullptr) 
    {
        delete [] m_data;
    }
}
template<typename PixelType>
PixelType Image<PixelType>::at(int i, int j)
{
    if(i<m_height && j<m_width)
    {
        return m_data[i*m_width + j];
    } else {
        throw std::exception("out of range");
    }
}

template<typename PixelType>
void Image<PixelType>::set(int i, int j, PixelType pixel) 
{
    if(i<m_height && j<m_width) 
    {
        m_data[i*m_width+j]=pixel;
    } else {
        throw std::exception("out of range");
    }
}
