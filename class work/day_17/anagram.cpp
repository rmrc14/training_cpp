#include<iostream>
#include<cstring>
#include<ctype.h>
bool anagram(char[],char[]);
#define MAX 100
using namespace std;
int main()
{
    char arr[MAX], arr2[MAX];
    //cin.getline(arr, 99);
    fgets(arr, 99, stdin);
    fgets(arr2, 99, stdin);
   // int n = strlen(arr);
    if (anagram(arr,arr2))
    {
        cout << " is anagram" << endl;
    }
    else
    {
        cout << " is not an anagram" << endl;
    }



    return 0;
}

bool anagram(char st1[],char st2[])
{
    if (strlen(st1) != strlen(st2)) {
        return false;
    }

    int count[26] = { 0 }; // count for a-z (26 letters)
 
    memset(count, 0, 104);

    for (int i = 0; i < strlen(st1); ++i) {
        st1[i] = tolower(st1[i]); // convert to lowercase cctype.h
        st2[i] = tolower(st2[i]);
        count[st1[i] - 'a']++;  // increment count for s1   
        count[st2[i] - 'a']--;
    }
    for (int i = 0;i < 26;i++)
    {
        if (count[i] != 0)
            return false;

    }

    return true;
}
