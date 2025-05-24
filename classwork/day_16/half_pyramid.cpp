/*
             *
            ***
           *****
          *******
          


*/

#include<iostream>

void display(int);

using namespace std;

int main()
{

    int num = 7;
    //cin >> num;
    display(num);

    return 0;
}
void display(int n)
{

    int i, j, k,l,m;
    for (i = 0; i < n; i++)
    {
        for (j = 1;j < n - i;j++)
            cout << " ";


        for (j = 1;j <= 2 * i - 1;j++)
            cout << "*";


        cout << endl;

    }
   


}