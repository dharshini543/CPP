#ifndef TV_H
#define TV_H
#include <string>
using namespace std;

class TV
{
public:
    float m_length;
    float m_width;
    float m_thickness;
    string m_brand;
    string m_colour;
    TV();
    void display();
    ~TV();
};

#endif // TV_H
