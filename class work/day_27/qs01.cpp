#include<iostream>
#include<string.h>
#include<string>
using namespace std;

class ArrayManipulations
{
private:
	int * arr;
	int size;
	int* ascSort();
	int* descSort();
	int biggestElement();

public:
	//int* setArray();
	void displayAsc();
	void displayDesc();
	void dispBiggest();
	
	ArrayManipulations(int a[],int s)
	{
		
		size = s;
		arr = new int[size];
		arr = a;
		//setArray();
		/*dispBiggest();
		displayDesc();
		displayAsc();*/
	}
	
};

//int* ArrayManipulations::setArray()
//{
//
//	for (int i = 0;i < size;i++)
//	{
//		cin >> arr[i];
//	}
//
//
//	return arr;
//}


int* ArrayManipulations::ascSort()
{
	//int size = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	int tmp;
	for (i = 0;i < size;i++)
	{
		for (int j = 0;j < size;j++)
		{
			if (arr[i] > arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}

	}


	return arr;

}
void ArrayManipulations::displayAsc()
{

	ascSort();
	//int size = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0;i < size;i++)
	{
		cout << arr[i] << " " ;

	}
	cout << endl;
}



int* ArrayManipulations::descSort()
{
	//int size = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	int tmp;
	for (i = 0;i < size;i++)
	{
		for(int j=0;j<size;j++)
		{
			if (arr[i]<arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}

	}


	return arr;

}
void  ArrayManipulations::displayDesc()
{
	descSort();
	//int size = sizeof(arr) / sizeof(arr[0]);
	
	for (int i = 0;i < size;i++)
	{
		cout << arr[i] << " " ;

	}
	cout << endl;
}


int ArrayManipulations::biggestElement()
{
	//int size = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	int max=arr[i];
	for (i = 0;i < size;i++)
	{
	
		if (max < arr[i])
			max = arr[i];
		
	}
	return max;
}
void ArrayManipulations::dispBiggest()
{
	cout << "biggest element in the array is: " << biggestElement() << endl;

}




int main()
{
	

	int arr[] = { 34, 12,65,987 };
	ArrayManipulations A(arr, 4);
	A.dispBiggest();
	A.displayAsc();
	A.displayDesc();
	

	


	return 0;
}