// 5.7.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>

int main()
{
	using namespace std;

	int num;
	cout << "How many cars do you wish to catalog? ";
	cin >> num;

	struct car
	{
		string brand;
		int year;
	};
	
	car * user = new car [num];

	for (int i = 0; i < num; i++)
	{
		cout << "Car #" << i + 1 << ":\n";
		cout << "Please enter the make: ";
		cin.get();
		getline(cin, user[i].brand);
		cout << "Please enter the year made: ";
		cin >> user[i].year;
	}

	cout << "Here is your collection:" << endl;
	for (int i = 0; i < num; i++)
		cout << (*(user + i)).year << " " << (*(user + i)).brand << endl;

	system("pause");
    return 0;
}

