/*
39.Write a Program to Calculate the Factorial of a Number Using Recursion
*/

#include <iostream>
#include <cstring>  
#define MAX 100
using namespace std;


int fact( int);

int main() {
    int num;
    cin >> num;

    cout << fact(num);


    return 0;
}


int fact( int n)
{
    if (n <= 1)
        return 1;

    return n * fact(n-1);

}