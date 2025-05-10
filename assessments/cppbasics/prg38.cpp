/*
38.Write a Program to Calculate the Length of the String Using Recursion
*/

#include <iostream>
#include <cstring>  
#define MAX 100
using namespace std;


int strlength(char [],int);

int main() {
    char str[MAX];
 
    cin.getline(str, MAX);

    cout<<strlength(str,0);
    

    return 0;
}


int strlength(char ch[],int count)
{
    

    if(ch[count]!='\0')
        return 1+strlength(ch,count+1);
     
}