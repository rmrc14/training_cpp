#include<iostream>
#include<cstring>
using namespace std;

int add(int, int);
int add(int, int, int);

char* add(char*, char*);

int main()
{
	char s1[] = "remin";
	char s2[] = "hai";

	cout << add(10, 20) << endl;
	cout << add(10, 20,30) << endl;
	cout << add(s1, s2) << endl;

	return 0;
}

int add(int a, int b)
{
	return a + b;


}

int add(int a, int b, int c)
{

	return a + b + c;
}

char* add(char* a, char* b)
{

	return strcat(a,b);

}