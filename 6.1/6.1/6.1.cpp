// 6.1.cpp: 定义控制台应用程序的入口点。
// 6.1.cpp

#include "stdafx.h"
#include <iostream>
#include <cctype>

int main()
{
	using namespace std;
	char input;
	char output[200];

	cout << "Enter your input:" << endl;
	cin.get(input);
	for (int i = 0; i <= 200 && input != '@'; i++)
	{
		if (input >= 'a' && input <= 'z')
		{
			input = toupper(input);
			output[i] = input;
		}
		else if (input >= 'A' && input <= 'Z')
		{
			input = tolower(input);
			output[i] = input;
		}
		cin.get(input);
	}

	cout << "The input is: " << endl;
	cout << output << endl;

	system("pause");
    return 0;
}

