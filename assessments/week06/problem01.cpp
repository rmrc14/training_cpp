
/*
Flight Seat Reservation System
Objective: Create a class to manage flight seat reservations. 
Each flight has a seat count and a record of bookings.
Class:
	Flight
Attributes:
	Flight Number
	Total Seats
	Booked Seats
Methods:
	Constructor
	bookSeats(int)
	showAvailability()


*/



#include <iostream>
#include<string>

using namespace std;

class  Flight {
private:
	string flightName;
	int flightNumber;
	int	f_totalSeats;
	int f_bookedSeats;
	int f_seatsAvailable;
	bool f_BookingStatus;
	

public:
	Flight(string ,int);
	bool bookSeats(int);
	void showAvailability();
};
//constructor
Flight::Flight(string fname,int cap)
{
	flightName = fname;
	f_totalSeats = cap;
	f_seatsAvailable = cap;
	f_bookedSeats = 0;
}

bool Flight::bookSeats(int booking)
{
	f_bookedSeats += booking;
	
	if (f_totalSeats >= f_bookedSeats)
	{
		f_seatsAvailable = f_seatsAvailable - f_bookedSeats;

		return f_BookingStatus=true;
	}
	else
		return f_BookingStatus=false;

		
}

void Flight::showAvailability()
{
	if (f_BookingStatus)
		cout << "Flight: " << flightName << "\t|\t Seats Available: " << f_seatsAvailable << endl;
	else
		cout << "Booking Failed: Not enough seats.";
}


int main()
{
	Flight f1("AI203", 100);
	f1.bookSeats(30);
	f1.showAvailability();

	f1.bookSeats(80);
	f1.showAvailability();

	return 0;
}