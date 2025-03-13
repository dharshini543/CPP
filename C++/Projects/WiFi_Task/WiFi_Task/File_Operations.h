#ifndef FILE_OPERATIONS_H
#define FILE_OPERATIONS_H

#include "WiFi.h"
#include <list>

class File_Operations
{
    list<WiFi*> m_wifi;
public:
    File_Operations();
    virtual void writeData(list<WiFi*>wifi);
    virtual list<WiFi*> readData();
    virtual ~File_Operations();
};

#endif // FILE_OPERATIONS_H
