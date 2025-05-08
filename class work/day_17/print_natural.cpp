#include<iostream>

//#define MAX 10

//void printNat(int);



using namespace std;
int main()
{
	static int n=1;
	
	if (n == 10)
		exit(0);//exit(EXIT_SUCCESS)
	cout << n++ << " ";
	main();

	return EXIT_SUCCESS;
}

//void printNat(int num)
//{
//	return printNat(num - 1);
//
//}