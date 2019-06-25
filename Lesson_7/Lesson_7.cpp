// Lesson_7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

const double pi = 3.14;

double area(double radius); //for cicle
double area(double radius, double height);//for cylinder 

int main()
{
	char selection = ' ';
	int radius = 0, height = 0;
    cout << "Enter c for circle and z for cylinder : !\n"<<endl;
	cin >> selection;
	if (selection == 'c' || selection == 'C')
	{

		cout << "Please provide radius : " << endl;
		cin >> radius;
		cout << "area is : " << area( height);

	}
	else if (selection == 'Z' || selection == 'z')
	{
		cout << "Please provide radius : " << endl;
		cin >> radius;
		cout << "Please provide height : " << endl;
		cin >> height;
		cout << "area is : " << area(radius, height);

	}
	else
	{
		cout << "WRONG SELECTION !!!" << endl;
	}
}

double area(double radius)
{
	return radius* radius * pi;
}

double area(double radius, double height)
{
	return 2 * area(radius) + (2 * pi * radius * height);
}
