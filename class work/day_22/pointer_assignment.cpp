/*
WAP
1. Given an input string str of n length, find the number of consitives characters 
present in the given and delete those consitive chars in the string str.
2. repeat the process untill all the consitive characters are deleted/removed
from the given string i.e str.

3. find the number of the operation are done while deleting the consitive characters.

i/p
ZYABDFEC
zyabdefc

o/p

Exp:

ZYDFEC count = 1

o/p
ZYFC  count = 2

zydefc


i/p
adcbz

dcz count = 1

o/p
c count = 2
*/

#include<iostream>

int cons_del(char*);
int unique(char*);


using namespace std;

int main()
{
	char arr[20];
	cin.getline(arr, 19);


	cons_del(arr);
	return 0;

}


int cons_del(char* ptr)
{
	char *tmp = ptr;
	int count = 0;
	while (*ptr != '\0')
	{
		
		for(int i=0;ptr[i]!='\0';i++)
		{
			ptr = tmp;
			if (((int)*ptr) + 1 == (int)ptr[i])
			{
				/**ptr = ' ';
				ptr[i] = ' ';*/

				count++;


				int j = i;
				for (; ptr[j + 1]; j++)
				{
					ptr[j] = ptr[j + 1];
				}
				ptr[j] = 0;

				j = 0;
				for (; ptr[j + 1]; j++)
				{
					ptr[j] = ptr[j + 1];
				}
				ptr[j] = 0;


				
				

			}
		}
		ptr++;
	}
	ptr = tmp;
	while (*ptr != '\0')
	{
		cout << *ptr++;
	}

	cout << "\n" << count;


	return 0;
}

int unique(char*)
{



	return 0;
}
