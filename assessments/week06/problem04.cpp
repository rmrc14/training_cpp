/*
4. Luggage Weight Checker
Objective: Validate if luggage is overweight.
Class:
	Luggage
Attributes:
	Passenger Name
	Weight (kg)
	Limit (default 20kg)
Methods:
	Constructor
	checkOverweight()


*/


#include <iostream>
#include<string>

using namespace std;

class  Luggage {
private:
	string Passenger_Name;
	float Weight;
	float Limit;
		
public:
	Luggage(string, float);
	int checkOverweight();
};

Luggage::Luggage(string fname, float w)
{
	Passenger_Name = fname;
	Weight = w;
	Limit = 20.0;

}
int Luggage::checkOverweight()
{
	if (Weight <= Limit)
		cout << "Luggage within limit." << endl;
	else
		cout << "Overweight! Exceeded by " << Weight-Limit<< "kg." << endl;

	return 0;
}




int main()
{
	Luggage l1("Rita", 18);
	l1.checkOverweight();

	/*Expected Output :
	Luggage within limit.
		Test Case 2 :*/
	
	Luggage l2("Sam", 25);
	l2.checkOverweight();

	/*Expected Output :
	Overweight!Exceeded by 5 kg.*/

	return 0;
}