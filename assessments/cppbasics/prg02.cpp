/*


2. Write a Program to Find the Greatest of the Three Numbers

*/
#include <iostream>

void greatest(int,int,int);

using namespace std;

int main()
{
	int a,b,c;
	cin >> a>>b>>c;

	greatest(a,b,c);




	return 0;

}

void greatest(int a,int b,int c)
{
	int res = (a > b && a > c ? a : ((b > c) ? b : c));
	cout << res;


}