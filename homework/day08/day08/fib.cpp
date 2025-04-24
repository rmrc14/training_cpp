//factorial fibonacci

#include <iostream>

int fib(int);
int factorial(int);
using namespace std;

int main()
{
    int choice, count = 0,num;
    cout << "choose 1. fibonacci 2. factorial   -- of a number" << endl;
    cout << "enter the choice:" << endl;
    cin >> choice;
    cout << "enter the num: " << endl;
    cin >> num;

    if (choice == 1)
    {
        for(int i=0;i<=num ; i++)
        cout << fib(i);
    }
    else if (choice == 2)
        cout << "ans:" << factorial(num);
    else
        cout << "enter the correct choice" << endl;

    return 0;

}

int fib(int x)
{
    
    if (x <= 1)
        return x;

    else
        return fib(x-1)+fib(x-2);
}



int factorial(int y)
{
    if (y <= 1)
        return 1;
    
   return y * factorial(y-1);
}