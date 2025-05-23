/*
5. Parcel Shipping Cost Estimator
Objective: Estimate shipping cost based on weight and distance.
Class:
	Parcel
Attributes:
	Parcel ID
	Weight (kg)
	Distance (km)
	Cost
Cost Formula: ₹5/km for ≤5kg, else ₹8/km
	Methods:
	Constructor
	calculateCost()
	printCost()


*/

#include <iostream>
#include<string>

using namespace std;

class  Parcel {
private:
	string Parcel_ID;
	float Weight;
	float Distance;
	float Cost;
	float calculateCost();

public:
	Parcel(string, float, float);
		
	void printCost();
};

Parcel::Parcel(string fname, float w, float km)
{
	Parcel_ID = fname;
	Weight = w;
	Distance = km;
	Cost = 0.0;

}
float Parcel::calculateCost()//₹5/km for ≤5kg, else ₹8/km
{

	if (Weight <= 5)
		return Cost += (Distance * 5);
	else if (Weight > 5)
		return Cost += (Distance * 8);
	


}


void Parcel::printCost()
{
	cout << "Parcel" << Parcel_ID << " | Cost: ₹"<< calculateCost() <<endl;

}


int main()
{
	Parcel p1("PX001", 3, 50);
	p1.printCost();


	Parcel p2("PX002", 8, 50);
	p2.printCost();


	return 0;
}