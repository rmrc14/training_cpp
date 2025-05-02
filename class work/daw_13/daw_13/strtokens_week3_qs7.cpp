#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char str1[] = "1011 , Bhima shankar , 0000";

	char delimit[] = ",";
	char* result = nullptr;


	result = strtok(str1, delimit);


	cout << result << endl;



	return 0;

}