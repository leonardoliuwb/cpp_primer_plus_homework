// sales.cpp -- chack the functions

#include "stdafx.h"
#include "namesp.h"
#include <iostream>

using namespace std;
using namespace SALES;
int main()
{
	Sales s1;
	Sales s2;
	cout << "The following is the first sales' information:\n";
	setSales(s1);
	showSales(s1);
	cout << endl << endl << endl;
	cout << "The following is the second sales' information:\n";
	double ar[6] = { 12.5, 55.2, 60.7, 5.512, 13.624, 9.456};
	setSales(s2, ar, 6);
	showSales(s2);
	cout << endl << endl << endl;
	cout << "Bye\n";
	system("pause");
	return 0;
}