/*

 Problem 3: Vehicle Rental System
	Concepts: Class, Single Inheritance, Constructor, Method Overloading

	Problem Statement: 
	Design a base class Vehicle with attributes vehicleId, type, and ratePerKm.
	Derive two classes Car and Bike from it. Use constructors to initialize values. 
	Overload a method calculateFare() to:

		Accept only distance
		Accept distance and number of days (for long-term rental with discount)

*/
#include <iostream>
#include<string>
using namespace std;

// Base Class: Vehicle
class Vehicle {
protected:
    string vehicleId;
    string type;
    float ratePerKm;
    float v_fare;
    float v_discountedFare;
    //  Accept only distance
    float calculateFare(float distance) {
        return v_fare=distance * ratePerKm;
    }

    // Overloaded method: Accept distance and number of days
    float calculateFare(float distance, int days)
    {
        v_fare = distance * ratePerKm;
       
        v_discountedFare = v_fare* 0.9; // 10% discount so take only 90% of the rate so 0.9
        
        return v_discountedFare;
    }
public:
    // Constructor
    Vehicle(string id, string type, float rate, float distance, int days) {
        vehicleId = id;
       this-> type = type;
        ratePerKm = rate;
        v_discountedFare = 0.0;
        v_fare = 0.0;
        if(days>2)
            calculateFare(distance, days);
        else
            calculateFare(distance);
    }
    void displayFare()
    {
        // Output
        cout << "Fare without discount: ₹" << v_fare << endl;
        cout << "Fare with long-term discount: ₹" << v_discountedFare << endl;

    }
    
};

// Derived Class: Car
class Car : public Vehicle {
public:
    Car(string id, float rate, float distance, int days) : Vehicle(id, "Car", rate,distance,days) {}
};

// Derived Class: Bike
class Bike : public Vehicle {
public:
    Bike(string id, float rate, float distance, int days) : Vehicle(id, "Bike", rate, distance, days) {}
};

// Main Function
int main() {
    string type, vehicleId;
    double rate, distance;
    int days;

    
    cout << "Vehicle Type: ";
    cin >> type;
    cout << "Vehicle ID: ";
    cin >> vehicleId;
    cout << "Rate per Km: ";
    cin >> rate;
    cout << "Distance (in Km): ";
    cin >> distance;
    cout << "Number of Days: ";
    cin >> days;

    if (type == "car")
    {
        Car c(vehicleId, rate, distance, days);
        c.displayFare();
    }
    else if (type == "bike")
    {
        Bike b(vehicleId, rate, distance, days);
        b.displayFare();
    }
    else
        cout << "not defined vehicle type" << endl;

    

   

    return 0;
}
