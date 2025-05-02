/*
Problem Statement 7
Write a program that takes two comma-separated lists of integers as input.
For each integer N in the first list, the program needs to find the count of its occurrences
(denoted as C) in the second list. 
The program should print the result N-C for each integer N in the first list.

*/


#include<iostream>
#include<cstring>
#define MAX 100
int comma(int a[],int b[],int,int);
using namespace std;

int main()
{
    
    int res;

    int a[] = { 1,2,3 };
    int b[] = { 4,5,6,5,5,3 };

    int sizea = sizeof(a) / sizeof(a[0]);
    int sizeb = sizeof(b) / sizeof(b[0]);
    
    for (int i = 0; i < sizea;i++) //output string
        cout << a[i]<<" ";

    cout << endl;
    

    res = comma(a,b,sizea,sizeb);


    
    return 0;
}


int comma(int a[],int b[],int sizea, int sizeb)
{


    for (int i = 0; i < sizea; i++) // iterates through a 
    {
        int count = 0;   // reinitializes every loop after j is completed
           for (int j = 0; j < sizeb ; j++) // for b array
            {

                if (a[i] == b[j])
                {
                    count++;

                }

            }
        
        cout <<a[i]<<"=" << count << " "<<endl;
    }
 
    return 0;
}