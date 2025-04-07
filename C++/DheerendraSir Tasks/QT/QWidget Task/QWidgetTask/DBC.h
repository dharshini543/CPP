#ifndef DBC_H
#define DBC_H
#include "ABC.h"

class DBC:public ABC
{

public:
    DBC();
    ~DBC();

protected:
    void paintEvent(QPaintEvent *event);

};

#endif // DBC_H
