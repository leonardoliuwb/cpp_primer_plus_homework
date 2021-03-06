// 16.2.cpp -- judge if a string is a Hui-string (contains the space and symbols)

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cctype>
using namespace std;
bool isHui(const string & str);

int main()
{
	cout << "Test begin.\n";
	cout << "Please enter your input (empty input to quit): ";
	string input;
	getline(cin, input);
	while (cin && input.size() > 0)
	{
		if (isHui(input))
			cout << "What you input is a Hui string!\n";
		else
			cout << "What you input is not a Hui string!\n";
		cout << "Please enter your input (empty input to quit): ";
		getline(cin, input);
	}
	cout << "Test end. Quit.\n";
	system("pause");
	return 0;
}

bool isHui(const string & str)
{
	string str_test = str;
	for (auto i = str_test.begin(); i != str_test.end();)
	{
		if (!isalpha(*i))
		{
			i = str_test.erase(i);
			continue;
		}
		else
		{
			*i = tolower(*i);
			i++;
		}
	}
	string rev(str_test.rbegin(), str_test.rend());
	return (str_test == rev);
}

