/*
store odd elements in first  half of array 
and 2nd half of the array contains the even element 


*/


#include<iostream>
#define CAP 10  //not used
using namespace std;



int main()
{
	int a[] = { 11,13,12,15,8,6,4,3,7,1 };
	int i, countOdd, countEven;

	constexpr int noElems = sizeof(a) / sizeof(a[0]);
	int outputArr[noElems];
	cout << "No of Elements present: " << noElems << endl;

	for (i = 0, countOdd = 0;i < noElems;i++)
	{
		if (a[i] % 2 != 0) {
			outputArr[countOdd] = a[i];
			countOdd++;
		}
	}

	for (i = 0, countEven = countOdd;i < noElems;i++)
	{
		if (a[i] % 2 == 0) {
			outputArr[countEven] = a[i];
			countEven++;
		}
	}


	for (i = 0;i < noElems;i++)
		cout << outputArr[i] << endl;

	return 0;
}

