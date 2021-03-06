// 9.2.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

void strcount(const string str);

int main()
{
	using namespace std;
	string input;
	cout << "Enter a line:\n";
	getline(cin, input);
	while (cin)
	{
		strcount(input);
		cout << "Enter next line (empty line to quit):\n";
		getline(cin, input);
		if (input == "")
			break;
	}
	cout << "Bye\n";
	system("pause");
    return 0;
}

void strcount(const string str)
{
	static int total = 0;
	int count = 0;
	cout << "\"" << str << "\" contains ";
	while (str[count])
		count++;
	total += count;
	cout << count << " characters\n";
	cout << total << " characters in total\n";
}
