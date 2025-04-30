#include<iostream>
#define ROW 3  // single row size 3 * 4 
#define COL 3


using namespace std;

int main()
{
	//int arr[1][3]; // same as ---  arr[3]
	int arr1[ROW][COL] = { { 10,20,30 }, { 40,50,60 }, { 70,80,90 } };
	int arr2[ROW][COL] = { 10,20,30,40,50,60,70,80,90 };
	int arr3[ROW][COL];

	for (int i = 0;i < ROW;i++)
	{
		for (int j = 0; j < COL;j++) //iteration to access the item
			cout << arr1[i][j] << "\t";
		cout << endl;
	}

	// prints the address stored
	for (int i = 0;i < ROW;i++)
	{
		for (int j = 0; j < COL;j++) 
			cout <<"Address of arr["<<i<<"]"<<"["<<j<<"]"<<" = " <<(unsigned long int)&arr1[i][j] <<" value= "<< arr1[i][j] << "\t";
		cout << endl;
	}

	// scan for array3 


	for (int i = 0;i < ROW;i++)
	{
		for (int j = 0; j < COL;j++) 
			cin>>arr3[i][j] ;
		cout << endl;
	}

	// print array3
	cout << "==========================" << endl;
	for (int i = 0;i < ROW;i++)
	{
		for (int j = 0; j < COL;j++) 
			cout<< arr3[i][j]<<"\t";
		cout << endl;
	}



	return 0;

}