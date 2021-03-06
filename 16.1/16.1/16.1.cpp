// 16.1.cpp -- judge if a string is hui-string
#include "stdafx.h"
#include <string>
#include <iostream>
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
	string rev(str.rbegin(), str.rend());
	return (str == rev);
}

