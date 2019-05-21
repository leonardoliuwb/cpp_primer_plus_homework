// move.cpp -- class member functions' definition

#include "stdafx.h"
#include <iostream>
#include "move.h"
using namespace std;

Move::Move(double a, double b)
{
	x = a;
	y = b;
}

void Move::showmove() const
{
	cout << "x = " << x << ", and y = " << y << endl;
}

Move & Move::add(const Move & m) const
{
	Move n;
	n.x = m.x + this->x;
	n.y = m.y + this->y;
	return n;
}

void Move::reset(double a, double b)
{
	x = a;
	y = b;
}

