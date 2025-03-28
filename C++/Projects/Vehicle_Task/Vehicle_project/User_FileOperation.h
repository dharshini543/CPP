#ifndef USER_FILEOPERATION_H
#define USER_FILEOPERATION_H

#include "User.h"
#include <list>

class User_FileOperation
{
public:
    User_FileOperation();
    User_FileOperation(const User_FileOperation &user);
    ~User_FileOperation();

    User_FileOperation operator = (User_FileOperation& user);


    void writeData(list<User*> userList);
    list<User*> readData();
};

#endif // USER_FILEOPERATION_H
