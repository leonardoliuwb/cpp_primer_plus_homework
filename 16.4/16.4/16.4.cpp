// 16.4.cpp -- function 

#include "stdafx.h"
#include <iostream>
#include <algorithm>
using namespace std;
int reduce(long ar[], int n);

int main()
{
	long testarr[10] = { 156, 124, 23, 43, 35, 23, 124, 199, 210, 156 };
	cout << "The following is my original array:\n";
	for (int i = 0; i < 10; i++)
	{
		cout << testarr[i] << " ";
	}
	cout << endl;
	int newsize = reduce(testarr, 10);
	cout << "After reduction, the array:\n";
	for (int i = 0; i < newsize; i++)
	{
		cout << testarr[i] << " ";
	}
	cout << endl;
	system("pause");
    return 0;
}

int reduce(long ar[], int n)
{
	sort(ar, ar + n);
	long * new_ar;
	new_ar = unique(ar, ar + n);
	return new_ar - ar;
}