// 4.3.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <cstring>

int main()
{
	using namespace std;

	char firstname[80];
	char lastname[80];
	char wholename[80];

	cout << "Enter your first name: ";
	cin.getline(firstname, 80);
	cout << "Enter your last name: ";
	cin.getline(lastname, 80);
	strcat_s(lastname, ", ");
	strcat_s(lastname, firstname);

	cout << "Here's the information in a single string: " << lastname << endl;

	system("pause");
    return 0;
}

