#ifndef LOGINMANAGEMENT_H
#define LOGINMANAGEMENT_H
#include<list>
#include "User.h"
using namespace std;

class LoginManagement
{
public:
    LoginManagement();
    LoginManagement(const LoginManagement &user);
    ~LoginManagement();

    LoginManagement operator = (LoginManagement& user);

    int getUserCount();
    void setUserCount(int userCount);

    list<User*> getUserList();
    void setUserList(list<User*> userList);

    User *addAdmin();
    User* signUp();
    User *login();

private:
    list<User*> m_userList;
    int m_userCount;
};

#endif // LOGINMANAGEMENT_H
