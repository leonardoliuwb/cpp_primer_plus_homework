// 4.2.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>

int main()
{
	using namespace std;

	string name;
	string dessert;

	cout << "Enter your name: " << endl;
	getline(cin, name);
	cout << "Enter your favorite dessert:" << endl;
	getline(cin, dessert);
	cout << "I have some delicious " << dessert << " for you, " << name << "." << endl;

	system("pause");
    return 0;
}

