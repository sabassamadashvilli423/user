#pragma once
#include<string>
#include<iostream>
using namespace std;
class User
{
public:
	string name, lname, uname, password, email;
	void printUser();
	User();
	~User();
};

