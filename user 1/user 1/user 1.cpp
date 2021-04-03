#include "User.h"
#include<fstream>
#include <iostream>
#include<vector>
using namespace std;
void userCheck(vector<User>& a, vector<User>& b,ofstream) {
	int k = 0;
	ofstream fout("users.txt");
	for (int i = 0; i < b.size(); i++) {
		for (int j = 0; j < a.size(); i++) {
			if (b[i].email!= a[j].email)
				k++;
		}
		if (k == a.size()) {
			cout << "You are registered successfully!" << endl;
			b[i].printUser();
			 k = 0;
		}
	}
}
int main()
{
	ifstream fin("users.txt");
	ofstream fout("users.txt", ios::in | ios::out | ios::app);
	vector<User> a;
	vector<User> b;
	User t;
	while (fin >> t.name >> t.lname >> t.email >> t.uname >> t.password) {
		if(t.password.size()>7)
		a.push_back(t);
	}
	while (cin >> t.name >> t.lname >> t.email >> t.uname >> t.password) {
			b.push_back(t);
	}
}

