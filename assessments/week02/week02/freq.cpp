/*
Objective: Write a program to count the frequency of each digit (0–9) in a given integer\

Example:
Input: 34534453
Output:
Digit frequencies:
0: 0
1: 0
2: 0
3: 3
4: 3
5: 0
6: 0
7: 0
8: 0
9: 0
0: 0
        ------------note  :   do not use array
*/


#include<iostream>


using namespace std;





int main()
{
	int num, rem;
	int count_0=0, count_1=0, count_2=0, count_3=0, count_4=0, count_5=0, count_6=0, count_7=0, count_8=0, count_9=0;

	
	cout << "enter a num " << endl;
	cin >> num;

	while (num != 0)// while used to get individual digits of the given no.
	{
		
		rem = num % 10;

		num /= 10;
		
		switch (rem) // used to count the no. of individual digits in no.
		{
		default :
			cout << "not defined i/p" << endl;
			break;
		case 0:
			count_0++;
			break;
		case 1:
			count_1++;
			break;
		case 2:
			count_2++;
			break;
		case 3:
			count_3++;
			break;
		case 4:
			count_4++;
			break;
		case 5:
			count_5++;
			break;
		case 6:
			count_6++;
			break;
		case 7:
			count_7++;
			break;
		case 8:
			count_8++;
			break;
		case 9:
			count_9++;
			break;


		}

	}

	cout << "digit frequencies:" << endl;

	cout << "0:" << count_0<<endl;
	cout << "1:" << count_1 << endl;
	cout << "2:" << count_2 << endl;
	cout << "3:" << count_3 << endl;
	cout << "4:" << count_4 << endl;
	cout << "5:" << count_5 << endl;
	cout << "6:" << count_6 << endl;
	cout << "7:" << count_7 << endl;
	cout << "8:" << count_8 << endl;
	cout << "9:" << count_9 << endl;



	return 0;
}