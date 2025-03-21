#include "LoginManagement.h"
#include <iostream>
#include <string>

LoginManagement::LoginManagement()
{
    m_userCount = 0;
}

LoginManagement::~LoginManagement()
{

}

int LoginManagement::getUserCount()
{
    return m_userCount;
}

void LoginManagement::setUserCount(int userCount)
{
    m_userCount = userCount;
}

User* LoginManagement::addAdmin()
{

    m_userList.push_back(new User("Dharshini","1234","ADMIN"));
    m_userCount++;
    for(auto* i:m_userList)
    {
        if(i->getUserName() == "Dharshini" && i->getPassWord() == "1234")
        {
            return i;
        }
    }
    return NULL;
}

User* LoginManagement::signUp()
{
    string userName,passWord;
    int usercount = 0,Success = 1;
    cout<<"Enter Username"<<endl;
    cin>>userName;
    cout<<"Enter Password"<<endl;
    cin>>passWord;
    m_userList.push_back(new User(userName,passWord,"CUSTOMER"));
    m_userCount++;
    for(auto* user:m_userList)
    {
        if(user->getUserName() == userName && user->getPassWord() == passWord)
        {
            return user;
        }
    }
    return NULL;
}

User* LoginManagement::login()
{
    string userName,passWord;
    int userFound = 0,Success = 0;
    cout<<"Enter Username"<<endl;
    cin>>userName;
    cout<<"Enter Password"<<endl;
    cin>>passWord;
    for(auto* i:m_userList)
    {
        if(i->getUserName() == userName)
        {
            if(i->getPassWord() == passWord)
            {
                i->setUserLogin(1);
                userFound = 1;
                cout<<"Login SuccessFull Welcome "<<i->getUserName()<<endl;
                return i;
            }
        }
    }
    if(userFound == 0)
    {
        cout<<"Username or password is incorrect"<<endl;
        cout<<"Please try again..."<<endl;
    }
    return NULL;

}

list<User *> LoginManagement::getUserList()
{
    return m_userList;
}

void LoginManagement::setUserList(list<User*> userList)
{
    m_userList= userList;
}
