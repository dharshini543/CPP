#include "LoginManagement.h"
#include <iostream>
#include <string>

LoginManagement::LoginManagement()
{
    cout<<"LoginManagement Constructor"<<endl;
    m_userCount = 0;
}

LoginManagement::LoginManagement(const LoginManagement &user)
{
    cout<< "LoginManagement constructor called"<<endl;
    m_userCount = user.m_userCount;

}

LoginManagement::~LoginManagement()
{
    cout<<"LoginManagement Destructor"<<endl;

    for(auto user : m_userList)
    {
        delete user;
    }
}

LoginManagement LoginManagement::operator =(LoginManagement &user)
{
    cout<< "LoginManagement assignment operator"<<endl;
    return user;
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
    string adminName,adminPassword;

    if(m_userCount == 0)
    {
        m_userList.push_back(new User("Dharshini","1234","ADMIN"));
        m_userCount++;
        for(auto admin:m_userList)
        {
            if(admin->getUserName() == "Dharshini" && admin->getPassWord() == "1234")
            {
                return admin;
            }
        }
        return NULL;
    }
    else
    {
        while(true)
        {
            cout<<"Enter AdminName"<<endl;
            cin>>adminName;
            if(adminName.length() > 15)
            {
                cout<<"Please enter maximum 15 Characters"<<endl;
            }
            else
            {
                break;
            }
        }
        while(true)
        {
            cout<<"Enter AdminPassword"<<endl;
            cin>>adminPassword;
            if(adminPassword.length() > 15)
            {
                cout<<"Please enter maximum 15 Characters"<<endl;
            }
            else
            {
                break;
            }
        }
        for(auto user:m_userList)
        {
            if(user->getUserName() == adminName && user->getPassWord() == adminPassword && user->getUserRole() == "ADMIN")
            {
                cout<<"Admin already exists"<<endl;
                return NULL;
            }
        }
        m_userList.push_back(new User(adminName, adminPassword, "ADMIN"));
        m_userCount++;
        for(auto admin:m_userList)
        {
            if(admin->getUserName() == adminName && admin->getPassWord() == adminPassword)
            {
                return admin;
            }
        }
        return NULL;
    }
}

User* LoginManagement::signUp()
{
    string userName,passWord;
    while(true)
    {
        cout<<"Enter UserName"<<endl;
        cin>>userName;
        if(userName.length() > 15)
        {
            cout<<"Please enter maximum 15 Characters"<<endl;
        }
        else
        {
            break;
        }
    }
    while(true)
    {
        cout<<"Enter Password"<<endl;
        cin>>passWord;
        if(passWord.length() > 15)
        {
            cout<<"Please enter maximum 15 Characters"<<endl;
        }
        else
        {
            break;
        }
    }
    for(auto user:m_userList)
    {
        if(user->getUserName() == userName && user->getPassWord() == passWord && user->getUserRole() == "CUSTOMER")
        {
            cout<<"User already exists"<<endl;
            return NULL;
        }
    }
    m_userList.push_back(new User(userName, passWord, "CUSTOMER"));
    m_userCount++;
    for(auto user:m_userList)
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
    int userFound = 0;
    while(true)
    {
        cout<<"Enter UserName"<<endl;
        cin>>userName;
        if(userName.length() > 15)
        {
            cout<<"Please enter maximum 15 Characters"<<endl;
        }
        else
        {
            break;
        }
    }
    while(true)
    {
        cout<<"Enter Password"<<endl;
        cin>>passWord;
        if(passWord.length() > 15)
        {
            cout<<"Please enter maximum 15 Characters"<<endl;
        }
        else
        {
            break;
        }
    }
    for(auto user:m_userList)
    {
        if(user->getUserName() == userName)
        {
            if(user->getPassWord() == passWord)
            {
                if(user->getUserRole() == "ADMIN" || user->getUserRole() == "CUSTOMER")
                {
                    user->setUserLogin(1);
                    userFound++;
                    cout<<"Login SuccessFull Welcome "<<user->getUserName()<<endl;
                    return user;
                }
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

list<User*> LoginManagement::getUserList()
{
    return m_userList;
}

void LoginManagement::setUserList(list<User*> userList)
{
    m_userList= userList;
}
