#ifndef USER_H
#define USER_H
#include <string>
using namespace std;
class User
{
public:
    User(string userName,string passWord,string userRole);
    ~User();
    string getUserName();
    string getPassWord();
    string getUserRole();
    int getisLoggedIn();
    void setUserName(string UserName);
    void setPassWord(string PassWord);
    void setUserRole(string UserRole);
    void setUserLogin(int isLoggedIn);

private:
    string m_userName;
    string m_passWord;
    string m_userRole;
    int m_isLoggedIn;
};

#endif // USER_H
