#include<iostream>
#include<cstring>
#include<ctype.h>
int freqAlpha(char[], int);
#define MAX 100
using namespace std;
int main()
{
	char arr[MAX];
    //cin.getline(arr, 99);
	fgets(arr, 99,stdin);
	
    int n = strlen(arr);
    freqAlpha(arr, n);




	return 0;
}

int freqAlpha(char ch[], int size)
{
    
    int count[26] = { 0 }; // count for a-z (26 letters)
   // char c2[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
    memset(count, 0, 104);

    for (int i = 0; i < size; ++i) {
         ch[i] = tolower(ch[i]); // convert to lowercase cctype.h
        
            count[ch[i] - 'a']++;  // increment count for s1    minus a is done to make it fit in 26 index value
        
    }
    for (int i = 0;i < 26;i++)
    {
        if(count[i]!=0)
            cout << char(i + 'a') << " =" << count[i] << endl;
    }

    return 0;
}







