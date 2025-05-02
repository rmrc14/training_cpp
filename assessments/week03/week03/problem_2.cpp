/*
problem 2
You are given a sorted array A of size N containing integers. 
Every element in the array appears exactly twice, except for one element that appears only once.
Your task is to find and print that unique element.

?? Constraints
The array is sorted in non-decreasing order.
1 ? N ? 10^5 (N is always odd)
if possible try to solve considering bellow 2 conditions
Time Complexity: O(N)
Do not use extra memory (i.e., no additional data structures like hash maps, sets, or arrays)
*/



#include<iostream>
#include<cstring>

#define MAX 100
int arrayCmp(int [],int);
using namespace std;

int main()
{
	int res,size;

	int arr[MAX]; // = { 3, 3, 4 ,4 ,5 ,5 ,7 };

	cout << "enter the size of array need to be odd" << endl;
	cin >> size;
	if(size%2==0)
	{
		cout << "not odd size:";
		return 0;
	}

	for(int i=0 ; i<size;i++) //ip
		cin>> arr[i];
	
	cout << endl;
;

	res=arrayCmp(arr,size);


	//cout << "sum : " << res;
	


	return 0;
}

int arrayCmp(int s1[],int n)
{
	


	// check 
	for (int i = 0; i < n;i++)
	{
		
		if (s1[i] != s1[i + 1])
			cout << s1[i];
		
	}

}