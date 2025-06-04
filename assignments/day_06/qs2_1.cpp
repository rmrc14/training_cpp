/*

Q. Print series 0,3,8,15,24,35,48,63,80,99

*/

#include<iostream>

using namespace std;


int main()
{

	int itr1 = 1, n;

cout << "enter the number"<<endl;
cin >> n;

while (itr1<n)   //qs 2
{
	cout << (itr1 * itr1) + 1<<",";
	itr1++;

}

cout << (itr1 * itr1) + 1;
return 0;
}