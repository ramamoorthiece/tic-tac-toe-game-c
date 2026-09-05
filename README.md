# Tic-tac-toe-game-c
A console-based Tic-Tac-Toe game developed using C programming.

Project Overview 
This project implements a two-player Tic-Tac-Toe game where: 
 Player X and Player O take turns. 
 Players enter the row and column position. 
 The program checks whether the selected position is valid. 
 The game automatically detects the winner. 
 The game detects a tie when the board is full. 
 The board is displayed after every move. 
Technologies Used 
 C Programming 
 2D Arrays 
 Functions 
 Loops 
 Conditional Statements 
 Boolean Logic 
 Standard Input/Output 
Board Positions 
Players enter positions using: 

1 1 | 1 2 | 1 3 
----+-----+---- 
2 1 | 2 2 | 2 3 
----+-----+---- 
3 1 | 3 2 | 3 3 

For example: 
Enter X positions(c,r): 1 1 
This places X in the first row and first column. 
Game Rules 
1. X plays first. 
2. Players select an empty position. 
3. A player wins by getting three symbols in: 
o Horizontal row 
o Vertical column 
o Diagonal 
4. If all positions are filled without a winner, the match is a tie. 
5. Invalid positions are rejected. 
How to Run 
Using GCC 
Compile the program: 
gcc tic_tac_toe.c -o tic_tac_toe 
Run: 
./tic_tac_toe 
Windows 
If using MinGW/GCC: 
gcc tic_tac_toe.c -o tic_tac_toe.exe 
tic_tac_toe.exe 
Sample Output

------|------|------| 
      |      |      |
------|------|------| 
      |      |      |
------|------|------| 
      |      |      |
------|------|------| 

 
Enter X positions(c,r): 1 1 

------|------|------| 
  X   |      |      | 
------|------|------| 
      |      |      | 
------|------|------| 
      |      |      | 
------|------|------| 

 
Enter O positions c and R: 2 2 
Future Improvements 
Possible improvements for future versions: 
 Add a single-player mode. 
 Add computer/AI opponent. 
 Add difficulty levels. 
 Add score tracking. 
 Add replay option. 
 Improve user interface. 
 Add colored console output. 
 Prevent invalid/non-numeric input. 
 Store player scores. 
Author 
Ramamoorth A 
This is my first GitHub project while learning C programming and software development. 
 
