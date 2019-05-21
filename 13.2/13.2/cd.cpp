// cd.cpp -- functions' definition
#include "stdafx.h"
#include <iostream>
#include <cstring>
#include "cd.h"
using namespace std;

Cd::Cd(char * s1, char * s2, int n, double x)
{
	performers = new char[strlen(s1) + 1];
	strcpy_s(performers, strlen(s1)+1, s1);
	label = new char[strlen(s1) + 1];
	strcpy_s(label, strlen(s2)+1, s2);
	selections = n;
	playtime = x;
}

Cd::Cd(const Cd & d)
{
	performers = new char[strlen(d.performers) + 1];
	strcpy_s(performers, strlen(d.performers)+1, d.performers);
	label = new char[strlen(d.label) + 1];
	strcpy_s(label, strlen(d.label)+1, d.label);
	selections = d.selections;
	playtime = d.playtime;
}

Cd::Cd()
{
	performers = new char[5];
	strcpy_s(performers, 5, "null");
	label = new char[5];
	strcpy_s(label, 5, "null");
	selections = 0;
	playtime = 0;
}

Cd::~Cd()
{
	delete [] performers;
	delete [] label;
}

void Cd::Report() const
{
	cout << "In this CD disk, the performers are " << performers << endl;
	cout << "The labels are " << label << endl;
	cout << "There are " << selections << " selections and lasts " << playtime << " minutes.\n";
}

Cd & Cd::operator=(const Cd & d)
{
	performers = new char[strlen(d.performers) + 1];
	strcpy_s(performers, strlen(d.performers)+1, d.performers);
	label = new char[strlen(d.label) + 1];
	strcpy_s(label, strlen(d.label)+1, d.label);
	selections = d.selections;
	playtime = d.playtime;
	return *this;
}

Classic::Classic(char * s0, char * s1, char * s2, int n, double x) : Cd(s1, s2, n, x)
{
	mainworks = new char[strlen(s0) + 1];
	strcpy_s(mainworks, strlen(s0)+1, s0);
}

Classic::Classic(char * s0, Cd & rs) : Cd(rs)
{
	mainworks = new char[strlen(s0) + 1];
	strcpy_s(mainworks, strlen(s0)+1, s0);
}

Classic::Classic() : Cd()
{
	mainworks = new char[5];
	strcpy_s(mainworks, 5, "null");
}

Classic::~Classic()
{
	delete [] mainworks;
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
	mainworks = new char[strlen(d.mainworks) + 1];
	strcpy_s(mainworks, strlen(d.mainworks) + 1, d.mainworks);
	return *this;
}