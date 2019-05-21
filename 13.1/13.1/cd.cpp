// cd.cpp -- functions' definition
#include "stdafx.h"
#include <iostream>
#include <cstring>
#include "cd.h"
using namespace std;

Cd::Cd(char * s1, char * s2, int n, double x)
{
	strcpy_s(performers, 50, s1);
	strcpy_s(label, 20, s2);
	selections = n;
	playtime = x;
}

Cd::Cd(const Cd & d)
{
	strcpy_s(performers, 50, d.performers);
	strcpy_s(label, 20, d.label);
	selections = d.selections;
	playtime = d.playtime;
}

Cd::Cd()
{
	strcpy_s(performers, 50, "null");
	strcpy_s(label, 20, "null");
	selections = 0;
	playtime = 0;
}

Cd::~Cd()
{
}

void Cd::Report() const
{
	cout << "In this CD disk, the performers are " << performers << endl;
	cout << "The labels are " << label << endl;
	cout << "There are " << selections << " selections and lasts " << playtime << " minutes.\n";
}

Cd & Cd::operator=(const Cd & d)
{
	strcpy_s(performers, 50, d.performers);
	strcpy_s(label, 20, d.label);
	selections = d.selections;
	playtime = d.playtime;
	return *this;
}

Classic::Classic(char * s0, char * s1, char * s2, int n, double x) : Cd(s1, s2, n, x)
{
	strcpy_s(mainworks, 50, s0);
}

Classic::Classic(char * s0, Cd & rs) : Cd(rs)
{
	strcpy_s(mainworks, 50, s0);
}

Classic::Classic() : Cd()
{
	strcpy_s(mainworks, 50, "null");
}

Classic::~Classic()
{
}

void Classic::Report() const
{
	Cd::Report();
	cout << "The main works of this disk are " << mainworks << endl;
}

Classic & Classic::operator=(const Classic & d)
{
	if (this == &d)
		return *this;
	Cd::operator=(d);
	strcpy_s(mainworks, 50, d.mainworks);
	return *this;
}