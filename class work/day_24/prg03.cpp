#include<iostream>

using namespace std;
int main()
{
	int row = 3, col = 4;

	int** arr = nullptr;

	// first allocate row pointer

	arr = (int**)malloc(sizeof(int*) * row);
	cout << sizeof(arr) << endl;
	// for each row allocate mem for cols

	for (int i = 0;i < row;i++)
	{
		arr[i] = (int*)malloc(sizeof(int*) * col);
	}


	for (int i = 0;i < row;i++)
		for (int j = 0;j < col;j++)
			cin >> arr[i][j];

	for (int i = 0;i < row;i++)
	{
		for (int j = 0;j < col;j++)
			cout<< arr[i][j]<<" ";
		cout << endl;
	}


	return 0;
}