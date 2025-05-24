/*
Q1.Digital Clock Simulation
Problem:
Create a class DigitalClock with members hour, minute, and second. 
Add a function tick() that increments the time by one second and
handles overflow.

*/


#include<iostream>
#include<string>
#include <iomanip>  //for setfill setwidth

using namespace std;

class DigitalClock
{
private:
	unsigned int hours;
	unsigned int minute;
	unsigned int second;

public:
	int tick();          //increment the time
	int setHours(int);
	int setMinute(int);
	int setSecond(int);
	void display();
};
void DigitalClock::display() 
{
	cout << setfill('0') << setw(2) << hours << ":"
		<< setfill('0') << setw(2) << minute << ":"
		<< setfill('0') << setw(2) << second << endl; //setfill fills the empty spaces with 0 and i.e eg 05 or 00 if there are nothing to print
}
int DigitalClock::setHours(int hr=24)
{

	hours = hr;
	return EXIT_SUCCESS;
}
int DigitalClock::setMinute(int min=59) {
	minute = min;
	return EXIT_SUCCESS;
}
int DigitalClock::setSecond(int sec=59)
{
	second = sec;
	return EXIT_SUCCESS;
}


int DigitalClock::tick()
{
	/*while (true)
	{*/
		//for (int i = 0;i < 24;i++)
		//{
		//	
		//		for (int j = 0;j < 60;j++)
		//		{
		//			
		//				for (int k = 0;k < 60;k++)
		//				{
		//						cout << i << ":" << j << ":" << k << endl;
		//					

		//				}
		//			
		//		}
		//	
		//	//cout << "\r";
		//}
	//}

		second++;
		if (second == 60)
		{
			second = 0;    //manages overflow
			minute++;
			if (minute == 60)
			{
				minute = 0;
				hours++;
				if (hours == 24)
				{
					hours = 0;
				}
			}
		}
		return EXIT_SUCCESS;
}


int main()
{
	DigitalClock C;
	
	int h = 24;
	int m = 2;
	int s = 12;


	C.setHours(h);
	C.setMinute(m);
	C.setSecond(s);

	for (int i = 0; i < 50; ++i) {
		C.display(); //cals display
		C.tick();     //increment time
		
	}


	//C.tick();

	return 0;
}