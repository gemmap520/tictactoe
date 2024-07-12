#include "tictactoe.h"
#include <iostream>

TicTacToe::TicTacToe() {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            board[i][j] = ' ';
        }
    }
}

void TicTacToe::drawBoard() {
    w.fillRectangle(100, 0, 5, 300, Xwindow::Black);
    w.fillRectangle(200, 0, 5, 300, Xwindow::Black);
    w.fillRectangle(0, 100, 300, 5, Xwindow::Black);
    w.fillRectangle(0, 200, 300, 5, Xwindow::Black);

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (board[i][j] == 'X') {
                w.drawString(50 + 100 * j, 50 + 100 * i, "X");
            } else if (board[i][j] == 'O') {
                w.drawString(50 + 100 * j, 50 + 100 * i, "O");
            }
        }
    }
}

bool TicTacToe::makeMove(int row, int col, char player) {
    if (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == ' ') {
        board[row][col] = player;
        return true;
    }
    return false;
}

bool TicTacToe::checkWin(char player) {
    // Check rows and columns
    for (int i = 0; i < 3; ++i) {
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
            (board[0][i] == player && board[1][i] == player && board[2][i] == player)) {
            return true;
        }
    }
    // Check diagonals
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player)) {
        return true;
    }
    return false;
}

bool TicTacToe::isBoardFull() {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (board[i][j] == ' ') {
                return false;
            }
        }
    }
    return true;
}

void convertToRowCol(int num, int &row, int &col) {
    switch (num) {
        case 1: row = 0; col = 0; break;
        case 2: row = 0; col = 1; break;
        case 3: row = 0; col = 2; break;
        case 4: row = 1; col = 0; break;
        case 5: row = 1; col = 1; break;
        case 6: row = 1; col = 2; break;
        case 7: row = 2; col = 0; break;
        case 8: row = 2; col = 1; break;
        case 9: row = 2; col = 2; break;
        default: row = -1; col = -1; // Invalid input
    }
}
