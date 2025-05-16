/*
		count vowels in a string using pointers and functions
*/
#include<iostream>

int vowels(char*);



using namespace std;

int main()
{
	char arr[20];
	cin.getline(arr, 19);
	

	cout << vowels(arr);
	return 0;

}


int vowels(char* ptr)
{
	//char a[] = "aeiouAEIOU";
	int count = 0;
	/*while (*ptr != '\0')
	{
		for(int i=0;a[i]!='\0';i++)
		{
			if (*ptr == a[i])
				count++;
		}
		ptr++;

	}*/

	while (*ptr != '\0')
	{
		switch (*ptr)
		{
		case'a':
		case'A':
		case'e':
		case'E':
		case'i':
		case'I':
		case'O':
		case'o':
		case'u':
		case'U':
			count++;
		}
		ptr++;

	}




	return count;
}

