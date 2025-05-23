
/*
2. Hotel Room Booking Manager
Objective: Manage bookings for rooms in a hotel.
Class:
	HotelRoom
Attributes:
	Room Number
	Type (AC/Non-AC)
	IsBooked (boolean)
Methods:
	Constructor
	bookRoom()
	showStatus()


*/



#include <iostream>
#include<string>

using namespace std;

class  HotelRoom {
private:
	int hr_roomNumber;
	string hr_type;
	string hrTypeVal;
	bool IsBooked;
	int count ;

public:
	HotelRoom( int, string);
	bool bookRoom();
	void showStatus();
};

HotelRoom::HotelRoom(int rno,string rType )
{
	hr_roomNumber = rno;
	hr_type = rType;
	IsBooked = true;
	count = 0;
}

bool HotelRoom::bookRoom()
{
	count++;

	if (IsBooked ==true && count==1)
	{
		
		return IsBooked = true;
	}
	else
		return false;


}

void HotelRoom::showStatus()
{
	if (IsBooked && count==1)
		cout << "Room " << hr_roomNumber<<"("<< hr_type <<") is now booked." << endl;
	else
		cout << "Room already booked."<<endl;
}


int main()
{
	HotelRoom h1(201, "AC");
	h1.bookRoom();
	h1.showStatus();


	h1.bookRoom();
	h1.showStatus();

	return 0;
}