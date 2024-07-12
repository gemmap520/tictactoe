#include "tictactoe.h"
#include <iostream>

int main() {
    TicTacToe game;
    char player = 'X';

    while (true) {
        int move;
        std::cout << "Enter your move (1-9): ";
        std::cin >> move;

        int row, col;
        convertToRowCol(move, row, col);

        if (game.makeMove(row, col, player)) {
            game.drawBoard();

            if (game.checkWin(player)) {
                std::cout << "Player " << player << " wins!" << std::endl;
                break;
            } else if (game.isBoardFull()) {
                std::cout << "The game is a draw!" << std::endl;
                break;
            }

            player = (player == 'X') ? 'O' : 'X';
        } else {
            std::cout << "Invalid move. Try again." << std::endl;
        }
    }

    return 0;
}
