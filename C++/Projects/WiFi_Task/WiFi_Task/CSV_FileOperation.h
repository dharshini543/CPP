#ifndef CSV_FILEOPERATION_H
#define CSV_FILEOPERATION_H
#include "File_Operations.h"
#include "WiFi.h"
#include <list>

class CSV_FileOperation:public File_Operations
{
public:
    CSV_FileOperation();
    void writeData(list<WiFi*> wifi);
    list<WiFi*> readData();
    ~CSV_FileOperation();
};

#endif // CSV_FILEOPERATION_H
