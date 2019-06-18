// Lesson_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main()
{
	string greetstring("Hello std::string !");
	cout << greetstring << endl;

	cout << "Enter a line of text: " << endl;
	string firstline;
	getline(cin, firstline);

	cout << "Enter a line of text: " << endl;
	string secondline;
	getline(cin, secondline);

	cout << firstline + " " + secondline << endl;

	string acopy;
	acopy = firstline;

	cout << "copy string is :" << acopy<<endl;




}
