// 4.8.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>

struct William
{
	char brand[20];
	float diameter;
	float weight;
};

int main()
{
	using namespace std;

	William * example;
	example = new William;
	cout << "Please Enter your pizza's information: " << endl;
	cout << "Brand: ";
	cin.getline(example->brand, 20);
	cout << "Diameter: ";
	cin >> example->diameter;
	cin.get();
	cout << "Weight: ";
	cin >> example->weight;
	cout << "So the folowing is your pizza's  information:" << endl;
	cout << "Brand: " << example->brand << ".\n";
	cout << "Diameter: " << example->diameter << "cm.\n";
	cout << "Weight: " << example->weight << "kg.\n";
	delete[] example;

	system("pause");
    return 0;
}

