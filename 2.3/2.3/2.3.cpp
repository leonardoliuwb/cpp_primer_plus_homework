// 2.3.cpp: 定义控制台应用程序的入口点。
// 函数调用

#include "stdafx.h"
#include <iostream>
void fun1();
void fun2();

int main()
{
	using namespace std;
	fun1();
	fun1();
	fun2();
	fun2();
	cin.get();
    return 0;
}

void fun1()
{
	using namespace std;
	cout << "Three blind mice" << endl;
}

void fun2()
{
	using namespace std;
	cout << "See how they run" << endl;
}