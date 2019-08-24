// Lesson_8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void pointerBasics(void);
void dynamicMemoryBasics(void);
void referenceBasics(void);
int main()
{
	//pointerBasics();
	//dynamicMemoryBasics();
	referenceBasics();
}

void pointerBasics(void)
{
	int age = 30;

	int* pointsToInt = &age;
	cout << "Points to age now !! " << endl;
	cout << "pointer = 0x" << hex << pointsToInt << endl;

	int dogsage = 9;
	pointsToInt = &dogsage;
	cout << "Points to dogsagee now !!" << endl;
	cout << "pointer = 0x" << hex << pointsToInt << endl;
}

void dynamicMemoryBasics(void)
{
	int* intptr = new int;
	//part 1;
	cout <<"Enter you dog's age : " << endl;
	cin >> *intptr;

	cout << "Dog's age is : " << *intptr<<" and is stored at address 0x"<<hex<<intptr<<endl;

	delete intptr;


	//part 2
	int numofelements = 0;
	cout << "How many element shall I reserve ? " << endl;
	cin >> numofelements;

	try {
		int* intarrayptr = new int[numofelements];
		cout << "Dynamically allocated " <<dec<< numofelements << "integers at address 0x" << hex << intarrayptr << endl;
		delete[] intarrayptr;
	}
	catch(bad_alloc ){
		cout << "Exeption:Not enough memory to allocate" << endl;
	}
	
	//part 3
	int* pointToMany = new(nothrow) int[0x1fffffff];

	if (pointToMany == NULL)
	{
		cout << "Failed allocation"<<endl;
		delete pointToMany;
	}
	else
	{
		cout << "succeeded !!" << endl;
	}
}

void referenceBasics(void)
{
	int var1 = 552;
	int& varref = var1;/*reference is just an alias to the same variable with the same address*/

	cout << "main variabl = " << var1 << " at address :0x"<<hex<<&var1<<endl;
	cout << "reference variable = " << varref << " at address :0x" << hex<<&varref << endl;
}
