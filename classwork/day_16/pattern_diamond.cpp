/*
             *
            ***
           *****
          *******
           *****
            ***
             *


*/

#include<iostream>

void display(int);

using namespace std;

int main()
{

    int num=5;
  
    display(num);

    return 0;
}
void display(int n)
{
    
    int i, j;
	for ( i = 0; i < n; i++)
	{
        for ( j = 1;j < n-i;j++)
            cout << " ";

      
		for ( j = 1;j <= 2*i-1;j++)
			cout << "*";
        

		cout << endl;

	}
	for ( i = n-2; i >0; i--)
	{
        for ( j = 1;j <=n-i-1;j++)
            cout << " ";
      
		for ( j = 1;j <= 2*i-1;j++)
			cout << "*";
       
       
		cout << endl;

	}
    

}


/*
 for (i = 0; i <= r; i++) // Loop for the upper half of the diamond
    {
        for (j = 1; j <= r - i; j++) // Loop to print spaces before the asterisks
        {
            cout << " "; // Print a space
        }

        for (j = 1; j <= 2 * i - 1; j++) // Loop to print asterisks in each row
        {
            cout << "*"; // Print an asterisk
        }

        cout << endl; // Move to the next line after each row is printed
    }

    // Loop to print the lower half of the diamond pattern
    for (i = r - 1; i >= 1; i--) // Loop for the lower half of the diamond
    {
        for (j = 1; j <= r - i; j++) // Loop to print spaces before the asterisks
        {
            cout << " "; // Print a space
        }

        for (j = 1; j <= 2 * i - 1; j++) // Loop to print asterisks in each row
        {
            cout << "*"; // Print an asterisk
        }

        cout << endl; // Move to the next line after each row is printed
    }
*/