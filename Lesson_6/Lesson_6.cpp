// Lesson_6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
using namespace std;
int main()
{
	int somenums[] = { 1,101,-1,40,2040 };
	int mynumber = 0;
	vector<int> myvector;


	std::cout << "Hello World!\n" << endl;

	/*Range-based for loop*/
	for (int aNum : somenums)
	{
		cout << "The array elements are " << aNum << endl;
	}

	/*Range-based for loop with auto */
	for (auto aNum : somenums)
	{
		cout << "The array elements are " << aNum << endl;
	}


	do {
		/*vector input*/
		cout << "Please enter number or -1 to terminate" << endl;
		cin >> mynumber;
		myvector.push_back(mynumber);
	} while (mynumber != -1);

	/*Range based for loop */
	for (int i=0 ; i<(sizeof(myvector)/sizeof(int));i++)
	{
		cout << "number of id" << i <<" is :"<<myvector[i]<< endl;
	}
}

