// Lesson_10.cpp : Inheritence 
//

#include <iostream>
#include <string>
using namespace std;

//base class
class Fish
{
protected:
	bool isFreshWaterFish;
public:
	void Swim()
	{
		if (isFreshWaterFish)
			cout << "Swims in lake" << endl;
		else
			cout << "Swims in sea" << endl;
	}
};

//derived class
class Tuna :public Fish
{
public: 
	Tuna()
	{
		isFreshWaterFish = false;
	}
};

//derived class
class crap : public Fish
{
public:
	crap()
	{
		isFreshWaterFish = true;
	}
};


int main()
{
	crap myLunch;
	Tuna myDinner;
	
	cout << "About my food:" << endl;

	cout << "Lunch: ";
	myLunch.Swim();

	cout << "Dinner: ";
	myDinner.Swim();

	//Can't change variable "isFreshWater" in any class because it is protected
	//myLunch.isFreshWaterFish = false;

}
