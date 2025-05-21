/*
Q1.Digital Clock Simulation
Problem:
Create a class DigitalClock with members hour, minute, and second. 
Add a function tick() that increments the time by one second and
handles overflow.

*/


#include<iostream>
#include<string>

using namespace std;

class DigitalClock
{
private:
	unsigned int hours;
	unsigned int minute;
	unsigned int second;

public:
	void tick();
	void setHours(int);
	void setMinute(int);
	void setSecond(int);

};
void DigitalClock::setHours(int hr)
{

	hours = hr;

}
void DigitalClock::setMinute(int min) {
	minute = min;
}
void DigitalClock::setSecond(int sec)
{
	second = sec;
}


void DigitalClock::tick()
{
	while(true)
	{
		for (int i = 0;i < 24;i++)
		{
			for (int j = 0;j < 60;j++)
			{
				for (int k = 0;k < 60;k++)
				{
					cout << i << ":" << j << ":" << k << endl;
					
				}
			}
			//cout << "\r";
		}
	}

}


int main()
{
	DigitalClock C;
	int h;
	int m;
	int s;


	//setHours(h);

	C.tick();

	return 0;
}