// find the largest and the smallest in the array
#include<iostream>
#define MAX 10
using namespace std;

int main() 
{

	int arr[5] = {2,400 ,54,45,89};
	int max, min;
	//for (int i = 0;i < 5;i++)
	//	cin >> arr[i];
	max = arr[0];
	min = arr[0];
	for (int i = 1;i < 5;i++)
	{
		
		if (arr[i]>max)
			max = arr[i];
		if (arr[i]<min)
			min = arr[i];

	}
	cout << "min :" << min << " \nmax : " << max << endl;
	return 0;
}