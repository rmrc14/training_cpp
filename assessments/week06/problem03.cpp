/*

3. Food Delivery Tip Calculator
Objective: Calculate delivery tip based on food bill.
Class:
	DeliveryTip
Attributes:
	Order ID
	Bill Amount
	Distance (km)
	Tip (calculated)
Methods:
	Constructor
	calculateTip()
	printDetails()
Tip Rule:
	< 5 km: 5% of bill
	5-10 km: 10%
	> 10 km: 15%


*/




#include <iostream>
#include<string>

using namespace std;

class  DeliveryTip {
private:
	string Order_ID;
	float Bill_Amount;
	float Distance;
	float tip;
	float calculateTip();

public:
	DeliveryTip(string, float, float);
	
	void printDetails();
};

DeliveryTip::DeliveryTip(string fname, float pr,float km)
{
	Order_ID = fname;
	Bill_Amount = pr;
	Distance = km;
	tip = 0.0;

}
float DeliveryTip::calculateTip()
{
	/*
	< 5 km: 5 % of bill
		5 - 10 km : 10 %
	> 10 km: 15 %
	*/
	if (Distance <= 5)
		return tip += (Bill_Amount * 0.05);
	else if (Distance > 5 && Distance <= 10)
		return tip += (Bill_Amount * 0.10);
	else if(Distance >10)
		return tip += (Bill_Amount * 0.15);


}


void DeliveryTip::printDetails()
{
	cout << "Order " << Order_ID << "\t|\t Tip: ₹" << calculateTip()<<endl;
}


int main()
{
	DeliveryTip d1("ORD1", 500, 3);
	d1.printDetails();

	DeliveryTip d2("ORD2", 1000, 12);
	d2.printDetails();

	return 0;
}