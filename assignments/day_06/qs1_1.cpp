/*

1) The basic salary is entered. House rent allowance is 40 % of basic salary & dearness
allowance is 20% of basic salary. write a program to calculate the gross salary.

*/

#include<iostream>

using namespace std;



int main() {
	float basic, rent_aln, dear_all, grosssalary = 0.0; //gross salary quest 1

	cout << " enter the basic salary" << endl;
	cin >> basic;

	rent_aln = basic * (0.04);
	dear_all = basic * (0.02);

	grosssalary = basic + rent_aln + dear_all;
	cout << grosssalary << " is the gross salary";

	return 0;
}