/*
37.Write a Program to Check if the Given String is Palindrome or not Using Recursion
*/


#include <iostream>
#include <cstring>  
#define MAX 100
using namespace std;


bool isPalindrome(char str[], int start, int end); 

int main() {
    char str[MAX];
    cout << "Enter a string: ";
    cin.getline(str, MAX);

    int len = strlen(str);

    if (isPalindrome(str, 0, len - 1))
        cout << "palindrome.\n";
    else
        cout << "not a palindrome.\n";

    return 0;
}


bool isPalindrome(char str[], int start, int end)
{

    if (start >= end)
        return true;


    if (str[start] != str[end])
        return false;


    return isPalindrome(str, start + 1, end - 1);
}