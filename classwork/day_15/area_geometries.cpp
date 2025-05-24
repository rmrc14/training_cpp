#include <iostream>
#define PI 3.141
void area(int);
void display(int);
//void triangle(int, int);

using namespace std;

int main  (int argc, char** argv     )
{
	if (argc > 1)
	{
		display(atoi(argv[1]));
	}
	



	return 0;
}

void area(int num)
{

	float a, b, r; 
	

	switch (num)
	{
	default:
		cout << "not the correct choice: ";
		cin >> num;
		display(num);
		
		area(num);
		break;
	case 1:
		cout << " triangle b and h: ";
		cin >> a >> b;
		cout << " triangle :";
		cout << (0.5 * a * b);
		break;
	case 2:
		cout << " rectangle b and h: ";
		cin >> a >> b;
		cout << " rectangle :";
		cout << (2* a * b);
		break;
	case 3:
		cout << " circle r: ";
		cin >> r ;
		cout << " circle :";
		cout << (PI*r*r);
		break;
	case 4:
		cout << " square side a : ";
		cin >> a;
		cout << " square :";
		cout << (a * a * a);
		break;
	}

}

void display(int num)
{
	

	cout << "choose which area to be found :" << endl;
	cout << "\t1. triangle \n \t2. rectangle \n \t3. circle \n \t4. square \n";
	cin >> num;
	area(num);

}