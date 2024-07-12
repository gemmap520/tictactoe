# Tic-Tac-Toe Game

This is a simple Tic-Tac-Toe game implemented in C++ with a graphical interface using X11. The game allows two players to play Tic-Tac-Toe on a 3x3 grid.

## Features

- Graphical display of the Tic-Tac-Toe board.
- Players can make moves by entering numbers 1-9.
- The game checks for win conditions and draws.
- Highlights the winning player and handles invalid moves.

## Prerequisites

- X11 development libraries (XQuartz for macOS)
- A C++ compiler supporting C++20 (e.g., g++)

## Installation

1. Ensure you have X11 installed. For macOS, you can use XQuartz:
   ```sh
   brew install --cask xquartz
2. Clone the repository:
  ```bash
  git clone https://github.com/yourusername/tic-tac-toe.git
  cd tic-tac-toe
  ```
3. Compile the project:
  ```bash
  make
  ```

## Running the Game

   ```bash
   ./tictactoe
   ```

## How to Play

1. Run the game.
2. Players take turns entering their moves.
3. Enter your move by typing a number between 1 and 9 corresponding to the grid position:
  ```markdown
  1 | 2 | 3
  ---------
  4 | 5 | 6
  ---------
  7 | 8 | 9
  ```
4. The game will display the updated board after each move.
5. The game announces the winner or if there is a draw.

## Code Structure

- main.cc: Contains the main game loop and handles user input.
- tictactoe.h: Header file for the TicTacToe class.
- tictactoe.cc: Implementation file for the TicTacToe class.
- window.h: Header file for the Xwindow class, which handles the graphical display.
- window.cc: Implementation file for the Xwindow class.
- Makefile: Build configuration file for the project.

## License

This project is licensed under the MIT License. See the LICENSE file for details.

## Acknowledgments
- The X11 library for providing the graphical interface.
- The C++ programming language and its standard libraries.

You can create a new file named `README.md` in your project directory and paste this content into the file. Then, add, commit, and push the file to your GitHub repository:

```sh
git add README.md
git commit -m "Add README file"
git push
```

