/*
Here are some logic-based problem statements using 2D arrays in C++ that focus on reasoning and algorithmic thinking:

Magic Square Verification:
Given an N x N matrix, determine if it is a magic square, meaning:
The sum of each row, column, and both diagonals is the same.
No duplicate numbers exist.
Here are some test cases for the Magic Square Verification problem:

Test Case 1: Valid Magic Square
Input:

3 3
8 1 6
3 5 7
4 9 2
Expected Output:

It is a Magic Square!
Explanation:
All rows, columns, and diagonals sum to 15.

Test Case 2: Invalid Magic Square (Row Sum Mismatch)
Input:

3 3
4 9 2
3 5 8
8 1 6
Expected Output:

Not a Magic Square.
Explanation:
Second row sums to 16 instead of 15, breaking the magic square condition.

Test Case 3: Invalid Magic Square (Diagonal Sum Mismatch)
Input:

3 3
2 7 6
9 5 1
4 3 8
Expected Output:

Not a Magic Square.
Explanation:
One diagonal sums to 10 while the other sums to 15, failing the magic square check.

Test Case 4: Larger Magic Square (Valid)
Input:

4 4
16 2 3 13
5 11 10 8
9 7 6 12
4 14 15 1
Expected Output:

It is a Magic Square!
Explanation:
All sums equal 34, confirming it’s a valid magic square.

*/

#include<iostream>
#define ROW 5  
#define COL 5
#define MAX 10

using namespace std;

int main()
{
    int arr1[ROW][COL];
    int r1, c1;
    int rowsum[MAX];
    int colsum[MAX];
    int diagsum[MAX];
    int flag_row = 0;//int flag_row = 0; // changes to 1 when all rows sum are equal
    int flag_col = 0;
    int flag_diag = 0;

    cout << "Enter the row and column of matrix 1: ";
    cin >> r1 >> c1;
    
    // Input for matrix 1
    cout << "Enter the elements of matrix :" << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++) {
            cin >> arr1[i][j];
        }
    }

    // sum of rows 
    rowsum[r1];
    //initialize rowsum to 0
    for (int i = 0; i < r1; i++)
        rowsum[i] = 0;
  


    // calculate sum of rows

    

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++) {
           rowsum[i]+= arr1[i][j];
        }
    }
    
    

    for (int i = 0; i < r1; i++)// sets flag-row
    {
       // cout << rowsum[i] << endl;
        if (rowsum[i] == rowsum[0])
            flag_row = 1;
       
    }

    //sum of columns
    //int flag_col = 0;
    colsum[r1];
    //initialize rowsum to 0
    for (int i = 0; i < r1; i++)
        colsum[i] = 0;


    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++) {
            colsum[i] += arr1[j][i];
        }
    }
    for (int i = 0; i < r1; i++)
        cout << colsum[i] << endl;

    for (int i = 0; i < r1; i++)// sets flag-row
    {
       // cout << colsum[i] << endl;
        if (colsum[i] == colsum[0])
            flag_col = 1;

    }


    //sum of diagonals
    diagsum[r1];
    //initialize diagsum to 0
    for (int i = 0; i < r1; i++)
        diagsum[i] = 0;

    for (int i = 0; i < r1; i++)
    {
       
            diagsum[i] += arr1[i][i];
            if (diagsum[i] == diagsum[0])
                flag_diag = 1;
        
    }
    if (flag_col == flag_row== flag_diag == 1)
        cout << "It is a Magic Square!";
    else
        cout << "Not a Magic Square.";

    return 0;
}
