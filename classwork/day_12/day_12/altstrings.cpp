/*
	TC01
i/p
s1 = "ABCDE"
s2 = "abcde"
o/p
s3 = AaBbCcDdEe

TC02
i/p
s1 = "ABCDEFGH"
s2 = "abcde"
o/p
s3 = AaBbCcDdEeFGH

TC03
i/p
s1 = "ABCDE"
s2 = "abcdefgh"
o/p
s3 = AaBbCcDdEefgh

*/

#include<iostream>
#include<cstring>
#define MAX 50

//void stringlength(char[], int);
void stringSwap(char[],char[],char[]);
using namespace std;
int main()
{
	char s1[MAX], s2[MAX], s3[MAX];
	cout << "enter string:" << endl;
	fgets(s1, MAX, stdin);
	cout << "enter string:" << endl;
	fgets(s2, MAX, stdin);

	stringSwap(s1,s2,s3);

	return 0;

}
void stringSwap(char s1[], char s2[], char s3[])
{
	int n1 = strlen(s1);
	int n2 = strlen(s2);
	for (int i = 0;i <= n1 + n2;i++)
	{
		if (n1 > n2)
		{
			if (s2[i] != '/0')
			{
				if (i % 2 == 0)
					s3[i] = s1[i];
				else
					s3[i] = s2[i];
			}
			else
			{
				s3[i] = s1[i];
			}
		}
		else
		{
			if (s1[i] != '/0')
			{
				if (i % 2 == 0)
					s3[i] = s1[i];
				else
					s3[i] = s2[i];
			}
			else
			{
				s3[i] = s2[i];
			}
		}

	}
	for(int i=0;i<=n1+n2;i++)
		cout << s3[i];

}
