#include <iostream>
using namespace std;

class TicTacToe {
private:
    char board[3][3];
    char currentPlayer;

public:
    TicTacToe() {
        // Initialize the board
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                board[i][j] = ' ';
        currentPlayer = 'X';
    }

    void printBoard() {
        cout << "\n";
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << " " << board[i][j];
                if (j < 2) cout << " |";
            }
            cout << "\n";
            if (i < 2) cout << "---+---+---\n";
        }
        cout << "\n";
    }

    bool checkWin() {
        // Check rows and columns
        for (int i = 0; i < 3; i++) {
            if ((board[i][0] == currentPlayer &&
                board[i][1] == currentPlayer &&
                board[i][2] == currentPlayer) ||
                (board[0][i] == currentPlayer &&
                    board[1][i] == currentPlayer &&
                    board[2][i] == currentPlayer)) {
                return true;
            }
        }

        // Check diagonals
        if ((board[0][0] == currentPlayer &&
            board[1][1] == currentPlayer &&
            board[2][2] == currentPlayer) ||
            (board[0][2] == currentPlayer &&
                board[1][1] == currentPlayer &&
                board[2][0] == currentPlayer)) {
            return true;
        }

        return false;
    }

    bool isDraw() {
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                if (board[i][j] == ' ')
                    return false;
        return true;
    }

    void switchPlayer() {
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    void playerMove() {
        int row, col;
        while (true) {
            cout << "Player " << currentPlayer << ", enter row and column (1-3): ";
            cin >> row >> col;
            row--; col--; // Convert to 0-based index

            if (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == ' ') {
                board[row][col] = currentPlayer;
                break;
            }
            else {
                cout << "Invalid move. Try again.\n";
            }
        }
    }

    void playGame() {
        while (true) {
            printBoard();
            playerMove();

            if (checkWin()) {
                printBoard();
                cout << "Player " << currentPlayer << " wins!\n";
                break;
            }

            if (isDraw()) {
                printBoard();
                cout << "It's a draw!\n";
                break;
            }

            switchPlayer();
        }
    }
};

int main() {
    TicTacToe game;
    game.playGame();
    return 0;
}
