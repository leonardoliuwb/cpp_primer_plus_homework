// 6.1-c.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>  
#include <cctype>  
using namespace std;
int main()
{
	cout << "Enter your input, type @ to terminate input:\n";
	char ch;
	cin.get(ch);
	while (ch != '@')
	{
		if (islower(ch))
		{
			ch = toupper(ch);
		}
		else if (isupper(ch))
		{
			ch = tolower(ch);
		}
		if (isdigit(ch) == false)
		{
			cout << ch;
		}
		cin.get(ch);
	}
	cout << endl;
	system("pause");
	return 0;
}



