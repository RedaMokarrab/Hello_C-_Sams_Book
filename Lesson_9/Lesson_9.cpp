// Lesson_9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
#pragma warning(disable : 4996)

/*Class Human*/
class Human
{
private:
	//attributes:
	string name;
	int age;
	string gender;

public:
	//constructor
	Human(string name, int age, string gender );

	//deconstructor 
	~Human();

	//methods
	void talk(string texttotalk)
	{
		//do nothing
	}
	void introduceself(void)
	{
		cout << "My name is " + name;
		cout << " and I am " << age <<" years old ";
		if (gender != "")
		{
			cout << gender<<endl;
		}
		else 
		{
			cout << endl;
		}
	}

	void Setage(int humanAge)
	{
		age = humanAge;
	}
	
	void SetName(string humanName)
	{
		name = humanName;
	}
};

Human::~Human()
{

}

Human::Human(string name, int age, string gender = "")
{
	this->name = name;
	this->age = age;
	this->gender = gender;

}


/*Class MyString*/

class MyString
{
private:
	char* buffer;

public:
	//constructor
	MyString(const char* input)
	{

		if (input != NULL)
		{
			buffer = new char[strlen(input) + 1];
			strcpy(buffer, input);
			

		}
		else
		{
			cout << "failed allocating string" << endl;
			buffer = NULL;

		}
	}

	//deconstructor
	~MyString()
	{
		cout << "Invoking deconstructor , clearing up" << endl;
		if (buffer != NULL)
			delete[] buffer;
	}
	int GetLength()
	{
		return strlen(buffer);
	}

	const char* GetString()
	{
		return buffer;
	}
};

int main()
{
	/*Example 1 :
	*
	*/
	//instance creation
	Human firstman("Adam",32,"Male");
	Human firstwoman("Eve", 28, "Female");
	Human oldman("Hassan", 120);

	//class operation invocation
	firstman.introduceself();
	firstwoman.introduceself();
	oldman.introduceself();

	/*Example 2 :
*
*/
	MyString sayHello("Say Hello from class");
	//MyString invalidString(NULL);

	cout << "String buffer in sayHello variable is " << sayHello.GetLength()<<endl;
	cout << "and buffer contains:::: " << sayHello.GetString() <<":::::"<< endl;

}

