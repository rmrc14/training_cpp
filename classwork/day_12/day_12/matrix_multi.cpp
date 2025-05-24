#ifdef __INTELLISENSE__
#pragma diag_suppress 28
#endif


#include<iostream>
#define ROW 5  // single row size 3 * 4 
#define COL 5


using namespace std;

int main()
{
    int arr1[ROW][COL], arr2[ROW][COL], arr3[ROW][COL];
    int r1, c1, r2, c2;

    cout << "Enter the row and column of matrix 1: ";
    cin >> r1 >> c1;

    cout << "Enter the row and column of matrix 2: ";
    cin >> r2 >> c2;

    if (c1 == r2 || c2 == r1) {
        arr1[r1][c1];
        arr2[r2][c2];
        arr3[r1][c2];

        // Input for matrix 1
        cout << "Enter the elements of matrix 1:" << endl;
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c1; j++) {
                cin >> arr1[i][j];
            }
        }

        // Input for matrix 2
        cout << "Enter the elements of matrix 2:" << endl;
        for (int i = 0; i < r2; i++) {
            for (int j = 0; j < c2; j++) {
                cin >> arr2[i][j];
            }
        }

        // Initialize the result matrix to 0
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c2; j++) {
                arr3[i][j] = 0;
            }
        }

        // Matrix multiplication
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c2; j++) {
                for (int k = 0; k < c1; k++) {  // less than c1 as its common
                    arr3[i][j] += arr1[i][k] * arr2[k][j];
                }
            }
        }

        // Output the result
        cout << "Resultant matrix after multiplication:" << endl;
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c2; j++) {
                cout << arr3[i][j] << " ";
            }
            cout << endl;
        }

    }
    else{
        cout << "Matrix multiplication is not possible. " << endl;
       
    }
    
  
    return 0;
}

	

