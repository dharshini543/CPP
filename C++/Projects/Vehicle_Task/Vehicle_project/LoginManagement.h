#ifndef LOGINMANAGEMENT_H
#define LOGINMANAGEMENT_H
#include<list>
#include "User.h"
#include "User_FileOperation.h"
using namespace std;

class LoginManagement
{
public:
    LoginManagement();
    ~LoginManagement();
    int getUserCount();
    void setUserCount(int userCount);
    User *addAdmin();
    User* signUp();
    User *login();
    list<User*> getUserList();
    void setUserList(list<User*> userList);

private:
    list<User*> m_userList;
    int m_userCount;
};

#endif // LOGINMANAGEMENT_H
