#include <iostream>

using namespace std;

const int SIZE = 3;

// Function to print the game board
void printBoard(char board[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cout << board[i][j];
            if (j < SIZE - 1) cout << " | ";
        }
        cout << endl;  //\n
        if (i < SIZE - 1) cout << "--+---+--\n";
    }
}

char checkWinner(char broad[SIZE][SIZE]) {
    //Check rows and columns
    for (int i = 0; i < SIZE; ++i) {

        //rows
        if (broad[i][0] == broad[i][1] && broad[i][1] == broad[i][2]) {
            if (broad[i][0] != ' ') return broad[i][0];
        }

        //column
        if (broad[0][i] == broad[1][i] && broad[1][i] == broad[2][i]) {
            if (broad[0][i] != ' ') return broad[0][i];
        }
    }

    //Check diagonal
    if (broad[0][0] == broad[1][1] && broad[1][1] == broad[2][2]) {
        if (broad[0][0] != ' ') return broad[0][0];
    }

    if (broad[0][2] == broad[1][1] && broad[1][1] == broad[2][0]) {
        if (broad[0][2] != ' ') return broad[0][2];
    }

    //Check for draw
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            if (broad[i][j] == ' ') return ' ';
        }
    }

    return 'D'; //Draw

}


int main() {
    char board[SIZE][SIZE] = { {' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '} }; // Initialize 3x3 board with spaces
    char currentPlayer = 'X'; // Player X starts
    char winner = ' ';

    while (winner == ' ') {
        printBoard(board);
        int row, col;
        cout << "Player " << currentPlayer << ", enter row and column (0 - 2) Example: 0 <space> 1";
        cin >> row >> col;


    }

    return 0;
}