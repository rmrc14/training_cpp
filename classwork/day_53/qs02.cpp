#include <iostream>
using namespace std;

int RowWithMaxOnes(int matrix[][100], int N) {
    int max_row_index = -1;
    int col = N - 1; 

    for (int row = 0; row < N; ++row) {
        
        while (col >= 0 && matrix[row][col] == 1) {
            col--;
            max_row_index = row; 
        }
    }

    return max_row_index;
}

int main() {
    int matrix[4][100] = {
        {0, 0, 0, 1},
        {0, 0, 1, 1},
        {0, 1, 1, 1},
        {0, 0, 1, 1}
    };

    int N = 4;
    int result = RowWithMaxOnes(matrix, N);
    cout << "Row with maximum 1s is: " << result << endl;

    return 0;
}
