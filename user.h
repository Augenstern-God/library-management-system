#pragma once
#include <iostream>
#include <string>
#include "book.h"
#include <vector>
using namespace std;
class User{
public:
    string name;
    string password;
    char role;

};
class Admin:public User{
public:
    void finduser(string name){

    }
    void deleuser(string name){}
    void adduser(string name,string password,char role){

    }
    void changeuser(string name,string password,char role){

    }
    void resetpassword(string name,string password){

    }
    void addbook(Book book){}
};
vector<User> users;