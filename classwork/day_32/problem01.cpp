/*
Vehicle class Hierarchy
  You are tasked with modeling a simple vehicle hierarchy in C++.
  Your goal is to create a base class called Vehicle and a derived class called Car.

Class Definitions:

1. Vehicle class:

    Attributes:
        make (String): Represents the make (manufacturer) of the vehicle.
        model (String): Represents the model of the vehicle.
    Methods:
        start(): Prints a message indicating that the vehicle is starting.
        stop(): Prints a message indicating that the vehicle is stopping.

2. Car class (inherits from Vehicle):

    Attributes:
        numberOfDoors (int): Represents the number of doors of the car.
    Methods:
        honk(): Prints a message indicating that the car's horn is being honked.
        Additionally, write a Main class with the main method to demonstrate 
        the functionality of these classes. Create instances of both the Vehicle 
        and Car classes, call their methods, and display appropriate messages.

Expected Output
    Starting the Generic Vehicle
    Stopping the Generic Vehicle
    Starting the Toyota Camry
    Honking the horn of the Toyota Camry
    Stopping the Toyota Camry

Task
    Complete the code to show that the inheritance and functionality are working correctly.

*/
#include <iostream>
#include<string>
using namespace std;

//base class
class Vehicle
{
   string  make;// : Represents the make(manufacturer) of the vehicle.
   string model;// : Represents the model of the vehicle.
public:

    void start() { cout << "start " << endl; } //: Prints a message indicating that the vehicle is starting.
    void stop() { cout << "stop " << endl; }// : Prints a message indicating that the vehicle is stopping.
};

//derived class
class Car
{
    int numberOfDoors;//(int) : Represents the number of doors of the car.
    public :
        
        void honk()
        {
            cout << " sound of horn ";//: Prints a message indicating that the car's horn is being honked.

        }
};

 /* Additionally, write a Main class with the main method to demonstrate
    the functionality of these classes.Create instances of both the Vehicle
    and Car classes, call their methods, and display appropriate messages.*/