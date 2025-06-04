/*
* Q. Check whether a given number can be expressed as the sum of two prime number

i/p
Enter a positive integer: 34
Output
34 = 3 + 31
34 = 5 + 29
34 = 11 + 23
34 = 17 + 17
NoofWays = 4


*/

#include <iostream>

bool isPrime(int);
using namespace std;

int main()
{
    int num, count = 0;
    cout << "enter the no:" << endl;
    cin >> num;


    for (int i = 2;i < num;i++)
    { //cout<<"entered "<<endl;
        for (int j = i;j < num;j++)
        {
            if (isPrime(i) && isPrime(j) && true)
            {
                if (i + j == num)
                {
                    cout << "" << i << "+" << j << endl;
                    count++;
                }
            }

        }

    }
    cout << "count =" << count << endl;
    return 0;
}

bool isPrime(int num)
{
    bool flag = false;
    if (num <= 1)
        return false;
    for (int itr1 = 2; itr1 <= num / 2;itr1++)
    {
        if (num % itr1 == 0)
        {
            flag = true;
            break;
        }
    }

    if (flag == false)
        return true;
    else
        return false;

}