/*
4) Isha is playing with numbers and trying to write program to Check if the sum of distinct digits of two integers are equal

Output Format:
If  the sum of distinct digits of both the numbers are equal
if true	print YES
otherwise  print NO.

Examples:
Input:
 2452
 9222
Output:
 YES

Input
121
3035
Output:
 NO


*/

#include <iostream>
using namespace std;

int main()
{
    int array1[10] = { 0 }, array2[10] = { 0 };
    int num1, num2, count = 0, i = 0, sum1 = 0, sum2 = 0, tmp1 = 0, tmp2 = 0;
    cout << "enter a number" << endl;
    cin >> num1;
    cout << "enter a number" << endl;
    cin >> num2;



    while (num1 != 0 || num2 != 0)
    {
        array1[i] = num1 % 10;
        array2[i] = num2 % 10;

        num1 /= 10;
        num2 /= 10;
        i++;
        count++;

    }
    cout << count << endl;
    for (int j = 0;j < count;j++)
    {
        tmp1 = array1[j];
        tmp2 = array2[j];
        for (int k = j;k < count;k++)
        {
            if (tmp1 == array1[k] && j != k)
                array1[j] = array1[k] = 0;
            if (tmp2 == array2[k] && j != k)
                array2[j] = array2[k] = 0;

        }

    }




    //cout<<"exited  "<<sum1<<endl;




    for (i = 0;i < count;i++)
    {
        sum1 += array1[i];
        sum2 += array2[i];

    }
    cout << sum1 << " =" << sum2 << endl;
    if (sum1 == sum2)
        cout << " yes " << endl;
    else
        cout << "no " << endl;

    return 0;
}