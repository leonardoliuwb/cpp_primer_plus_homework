// 4.4.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>

int main()
{
	using namespace std;

	string firstname;
	string lastname;
	string wholename;

	cout << "Enter your first name: ";
	getline(cin, firstname);
	cout << "Enter your last name: ";
	getline(cin, lastname);
	wholename = lastname + ", " + firstname;

	cout << "Here's the information in a single string: " << wholename << endl;

	system("pause");
    return 0;
}

