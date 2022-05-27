#ifndef IMAGE_H
#define IMAGE_H
/**
 * @brief  Image container. Stores image of given width and rows.
 * 
 * @tparam PixelType 
 */
template<typename PixelType>
class Image
{
private:
    /* data */
    unsigned int m_width;
    unsigned int m_height;
    PixelType* m_data;

public:
    Image(unsigned int w, unsigned int h);
    Image(Image&&);
    PixelType at(int i, int j);
    void set(int i, int j, PixelType pixel);
    const int width() const { return m_width;}
    const int height() const (return m_height;}
    ~Image();
};

#include "image.hxx"
#endif