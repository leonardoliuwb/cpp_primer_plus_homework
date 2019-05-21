// useperson.cpp -- check the class and member functions

#include "stdafx.h"
#include <iostream>
#include "person.h"


int main()
{
	Person one;
	Person two("Smythecraft");
	Person three("Dimwiddy", "Sam");
	std::cout << "The first person's name is\n";
	std::cout << "Format #1: ";
	one.Show();
	std::cout << "Format #2: ";
	one.FormalShow();
	std::cout << "The second person's name is\n";
	std::cout << "Format #1: ";
	two.Show();
	std::cout << "Format #2: ";
	two.FormalShow();
	std::cout << "The third person's name is\n";
	std::cout << "Format #1: ";
	three.Show();
	std::cout << "Format #2: ";
	three.FormalShow();
	std::cout << "Task finished. \nBye.\n";
	system("pause");
    return 0;
}

