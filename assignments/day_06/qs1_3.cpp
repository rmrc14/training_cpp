/*

3) Write a program to calculate area of circle taking input the radius of the circle


*/

#include<iostream>

using namespace std;


int main(){
	const int pi = 3.145; // to find area of circle
	int r;
	float area;
	cout << "enter the radius";
	cin >> r;

	area = pi * r * r;
	cout << "the area of circle is: "<<area<<endl;
	



return 0;
}