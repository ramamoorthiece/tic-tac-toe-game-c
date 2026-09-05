Tic-Tac-Toe Game in C

A console-based Tic-Tac-Toe game developed using C programming.

Project Overview

This project implements a two-player Tic-Tac-Toe game where:

Player X and Player O take turns.
Players enter the row and column position.
The program checks whether the selected position is valid.
The program automatically detects the winner.
The program detects a tie when the board is full.
The board is displayed after every move.
Technologies Used
C Programming
2D Arrays
Functions
Loops
Conditional Statements
Boolean Logic
Standard Input/Output
Board Positions

Players enter positions using row and column numbers.

1 1 | 1 2 | 1 3
2 1 | 2 2 | 2 3
3 1 | 3 2 | 3 3

For example:

Enter X positions (c,r): 1 1

This places X in the first row and first column.

Game Rules
X plays first.
Players select an empty position.
A player wins by getting three symbols in:
A horizontal row
A vertical column
A diagonal
If all positions are filled without a winner, the match is a tie.
Invalid positions are rejected.
