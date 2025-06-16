#ifndef EXAMPLE_H
#define EXAMPLE_H

/*!
    \class Example
    \brief A sample class to test QDoc with images.

    This class shows image usage with and without alt text.

    \section1 Image Without Alt Text
    \image doc/images/icon-no-alt.png

    \section1 Image With Alt Text
    \image doc/images/icon-with-alt.png "A keyboard input icon"
*/
class Example
{
public:
    Example();
    void sayHello();
};

#endif // EXAMPLE_H
