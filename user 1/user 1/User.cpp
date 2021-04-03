#include "User.h"
#include<iostream>
#include<fstream>
using namespace std;
User::User() {

}
void User::printUser() {
	ofstream fout("users.txt");
	fout<< name<<" "<< lname<<" "<<email<<" "<< uname<<" "<< password<<" "<<endl ;
}
User::~User() {
	cout << "object removed" << endl;
}
