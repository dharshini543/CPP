#include "Camera.h"
#include <iostream>
using namespace std;

Camera::Camera(int pixels):m_pixels(pixels)
{
    cout<<"Camera constructor called"<<endl;
}
Camera::~Camera()
{
    cout<<"Camera Destructor called"<<endl;
}
void Camera::display()
{
    cout<<"Camera Display"<<endl;
    cout<<"Pixel :"<<m_pixels<<endl;

}
void Camera::TakeaPhoto()
{
    cout<<"Take a photo"<<endl;
}
