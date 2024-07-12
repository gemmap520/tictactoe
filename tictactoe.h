#ifndef TICTACTOE_H
#define TICTACTOE_H

#include "window.h"

class TicTacToe {
    char board[3][3];
    Xwindow w;

public:
    TicTacToe();
    void drawBoard();
    bool makeMove(int row, int col, char player);
    bool checkWin(char player);
    bool isBoardFull();
};

void convertToRowCol(int num, int &row, int &col);

#endif
