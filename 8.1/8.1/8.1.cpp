// 8.1.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
void print(char * str, int n = 0);

int main()
{
	char str[20] = "leonardo liu";
	print(str);
	print(str, 5);
	print(str, 16);
	print(str);
	system("pause");
    return 0;
}

void print(char * str, int n)
{
	static int flag = 0;
	flag++;
	if (n == 0)
		cout << str << endl;
	else
	{
		for (int i = 0; i < flag; i++)
			cout << str << endl;
	}
	cout << endl;
	return;
}
