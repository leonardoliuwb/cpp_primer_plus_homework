// plorg.cpp -- class member functions' definition

#include "stdafx.h"
#include <iostream>
#include "plorg.h"
using namespace std;

Plorg::Plorg()
{
	strcpy_s(pname, "Plorga");
	CI = 0;
}

void Plorg::showplorg() const
{
	cout << "The plorg name is " << pname << ", and the CI is " << CI << endl;
}

void Plorg::newplorg(const char * name)
{
	strcpy_s(pname, name);
	CI = 50;
}

void Plorg::setCI(int x)
{
	CI = x;
}