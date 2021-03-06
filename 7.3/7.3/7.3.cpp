// 7.3.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};
void display(box temp);
float cal(box * temp);
using namespace std;

int main()
{
	cout << "The following is the example box.\n";
	box temp;
	cout << "Please enter the box maker: ";
	cin >> temp.maker;
	cout << "Please enter the height: ";
	cin >> temp.height;
	cout << "Please enter the width: ";
	cin >> temp.width;
	cout << "Please enter the length: ";
	cin >> temp.length;
	cout << "Please enter the volume: ";
	cin >> temp.volume;
	display(temp);
	float vol;
	vol = cal(&temp);
	cout << "\nBut after the calculation, the volume of the box is " << vol << endl;
	system("pause");
    return 0;
}

void display(box temp)
{
	cout << "\nThe maker of the box is " << temp.maker << "." << endl;
	cout << "The height of the box is " << temp.height << "." << endl;
	cout << "The width of the box is " << temp.width << "." << endl;
	cout << "The length of the box is " << temp.length << "." << endl;
	cout << "The volume of the box is " << temp.volume << "." << endl;
}

float cal(box * temp)
{
	float vol;
	vol = temp->height * temp->width * temp->length;
	return vol;
}

