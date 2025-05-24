#include<iostream>
using namespace std;
int main()
{
	char line[] = "he works at tcs";
	//unsigned long int r1 = 0, r2 = 0, r3 = 0;
	unsigned long int BAl = 0, BAr = 0;
	int p1 = 0, p2 = 0;


	char ss1[] = "are";
	char ss2[] = "i";

	char* res1 = strstr(line, ss1);
	char* res2 = strstr(line, ss2);

	if (res1 != nullptr)
	{
		p1 = (unsigned long int)res1 - (unsigned long int)line;
	}
	else
		p1 = -1;


	if (res2 != nullptr)
	{
		p2 = (unsigned long int)res2 - (unsigned long int)line;
	}
	else
		p2 = -1;

	cout << p1 + p2<<endl;

	return 0;
}
