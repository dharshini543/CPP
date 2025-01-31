#ifndef CAMERA_H
#define CAMERA_H

class Camera
{
public:
    int m_pixels;
    Camera(int  pixels);
    ~Camera();
    void display();
    void TakeaPhoto();
};

#endif // CAMERA_H
