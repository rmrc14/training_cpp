/*
41.Write a Program to Print All Natural Numbers up to N Without Using a Semi-Colon
*/

#include <iostream>

using namespace std;
#define N 10

int main()
{
    static int x = 1;
    if (cout << x << " " && x++ < N && main()) {
    }
    return 0;
}

//int main()
//{
//	static int n = 1;
//
//	if (n == 10)
//		exit(0);//exit(EXIT_SUCCESS)
//	cout << n++ << " ";
//	main();
//
//	return EXIT_SUCCESS;
//}