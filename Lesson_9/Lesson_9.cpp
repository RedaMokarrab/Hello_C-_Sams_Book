// Lesson_9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class human
{
public:
	//attributes:
	string name;
	int age;
	string gender;

	//functions
	void talk(string texttotalk)
	{
		//do nothing
	}
	void introduceself(void)
	{
		cout << "My name is : " + name << endl;
		cout << "and I am " << age <<" years old"<< endl;
	}
};

int main()
{
	human firstman,firstwoman;

	firstman.name = "Adam ";
	firstman.age = 32;

	firstwoman.name = "Eve";
	firstwoman.age = 28;

	firstman.introduceself();
	firstwoman.introduceself();

}

