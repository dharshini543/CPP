#include "User_FileOperation.h"
#include<fstream>
#include <iostream>

User_FileOperation::User_FileOperation()
{
    cout<<"User_FileOperation Constructor"<<endl;
}

User_FileOperation::User_FileOperation(const User_FileOperation &user)
{
    cout<< "User_FileOperation Copy constructor called"<<endl;

}

User_FileOperation::~User_FileOperation()
{
    cout<<"User File operations Destructor"<<endl;
}

User_FileOperation User_FileOperation::operator =(User_FileOperation &user)
{
    cout<< "User_FileOperation assignment operator"<<endl;
    return user;
}

void User_FileOperation::writeData(list<User *> userList)
{
    ofstream file("user.csv");
    if (!file)
    {
        cout << "Error opening User  file for writing!" << endl;
        return ;
    }
    file<<"UserName    "<<"Password    "<<"UserRole    "<<endl;
    for(auto user:userList)
    {
        file<<user->getUserName()<<","<<user->getPassWord()<<","<<user->getUserRole()<<endl;
    }
    cout<<"Data written to User file"<<endl;
    file.close();
}

list<User *> User_FileOperation::readData()
{
    list<User*> userList;
    ifstream file("user.csv");
    if (!file)
    {
        cout << "Error opening User file for reading!" << endl;
        return userList;
    }

    string line, userName, passWord, userRole;
    int userID;

    getline(file, line);
    while (getline(file, userName, ',') && getline(file, passWord, ',') && getline(file, userRole))
    {
        userList.push_back(new User(userName, passWord, userRole));
    }

    file.close();
    cout<<"Data read from User file"<<endl;

    return userList;
}
