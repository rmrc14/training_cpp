/*
strings --- collection of chars

"hello"---- 5 charcter + 1 null = size is 6

len of string ----- excluding null char
*/

#include<iostream>
#include<cstring>
using namespace std;


int main()
{
	char nameEmp[20]="remin"; //1 row with 20 col
	//cin >> nameEmp;
	//cout << nameEmp<<endl;
	//cout << "len string: " << strlen(nameEmp);
	char str1[20], str2[20], str3[30];

	strcat(strcat(strcpy(str1, "rem"), "in"), " varghese");

	printf("\nstr1: %s\n", str1);



	return 0;
}