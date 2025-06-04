
/*
create a class for finding the biggest element in the array also functions to do
asc and desc order of array

*/


#include "ArrayManipulations.h"


int main()
{


	int arr[] = { 34, 12,65,987 };
	
	int s = sizeof(arr) / sizeof(arr[0]);

	ArrayManipulations A(arr, s);
	A.dispBiggest();
	A.displayAsc();
	A.displayDesc();





	return 0;
}