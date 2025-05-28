/*

A vehicle company is deciding to hire a programmer to develop a system that will allow the
company to enter the details of the vehicles sold by them. As a programmer, you need to
implement a program that contains a 

base class -- called Vehicles that contains a data
                 member to store the price of the vehicles. 

Derive two other classes named as Car and Motorcycle.
• The Car class will contain data members to store details that include seating capacity,
number of doors and fuel type (diesel or petrol).
• The Motorcycle class will contain data members to store details such as the number
of cylinders, the number of gears and the number of wheels.

Derive another subclass  :   named as Audi of Car and Yamaha of Motorcycle.

• The Audi class will contain a data member to store the model type.
• The Yamaha class will contain a data member to store the make – type.
Display the details of an Audi car (price, seating capacity, number of doors, fuel type, model
type) and the details of the Yamaha motorcycle (price, number of cylinders, number of
gears, number of wheels, make – type)

*/

#include<iostream>
#include<string>
using namespace std;

class Vehicles
{
protected:
    float v_price;
public:
    ~Vehicles(){}
    Vehicles(float price): v_price(price){}


    void dispVehicle()
    {
        cout << "Vehicle Price: " << v_price << endl;
    }


};

class Car:public Vehicles
{
protected:
    int c_seatingCap;
    int  number_of_doors;
    string fuel_type;//(diesel or petrol).
public:
    ~Car(){}
    Car(int seats, int doors, string fuel, float price):
        Vehicles(price),
        c_seatingCap(seats),
        number_of_doors(doors),
        fuel_type(fuel){}
    void dispCar()
        
    {
        cout << "Seating Capacity: " << c_seatingCap << endl;
        cout << "Number of doors: " << number_of_doors << endl;
        cout << "Fuel type: " << fuel_type << endl;
    }


};


class Motorcycle:public Vehicles
{
protected:
    int  num_of_cylinders;
    int num_of_gears;
    int num_of_wheels;
public:
    ~Motorcycle(){}
    Motorcycle(int cylinders,int gears,int wheels,float price):
        Vehicles(price),
    num_of_cylinders(cylinders),
        num_of_gears(gears),
        num_of_wheels(wheels)
    {}
    void dispMotorcycle()
    {
        cout << "Number of cylinders: " << num_of_cylinders << endl;
        cout << "Number of gears: " << num_of_gears << endl;
        cout << "Number of wheels: " << num_of_wheels << endl;
    }



};

class Audi :private Car 
{
    string  model_type;
public:
   /* Display the details of an Audi car(price, seating capacity, number of doors, fuel type, model
        type)*/
    ~Audi(){}
    Audi(string model_type, int seats, int doors, string fuel, float price) :
        Car(seats, doors, fuel, price), 
        model_type(model_type)
        {}
    void dispAudi()
    {
        dispVehicle();
        dispCar();
        cout << "Model type : " << model_type << endl;

    }
};

class Yamaha :private Motorcycle
{
    string  make_type;
public:
    /*the details of the Yamaha motorcycle (price, number of cylinders, number of
gears, number of wheels, make – type)*/
    Yamaha(string make_type, int cylinders, int gears, int wheels, float price):
        Motorcycle( cylinders,  gears,  wheels,  price),
       make_type(make_type)    
    {}
    void dispYamaha()

    {
        dispVehicle();
        dispMotorcycle();
        cout << "Make type : " << make_type << endl;

    }
};


int main()
{
    //Audi car(modeltype, seating capacity, number of doors, fuel type,price )

    Audi audiCar("A6", 5, 4, "Petrol", 65000); 

    //(price, number of cylinders, number of gears, number of wheels, make – type)

    Yamaha yamahaBike("MT-15", 1, 6, 2, 17500);

    cout << "=== Audi Car Details ===" << endl;
    audiCar.dispAudi();

    cout << "\n=== Yamaha Bike Details ===" << endl;
    yamahaBike.dispYamaha();




    return 0;

}