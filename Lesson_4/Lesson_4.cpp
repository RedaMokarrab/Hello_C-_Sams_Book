// Lesson_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main()
{
	int input_data = 0;
	vector<int> my_dynarray(2);
	my_dynarray[0] = 1;
	my_dynarray[1] = 1;

	cout << "Please enter a new number : " << endl;
	cin >> input_data;

	do
	{
		my_dynarray.push_back(input_data);
		cout << "Current array size is : " << my_dynarray.size() << endl;
		cout << "Please enter a new number : " << endl;
		cin >> input_data;

	} while (input_data != -1);


}
