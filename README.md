#Tic-Toc-Toe

Tic-tac-toe  noughts and crosses  or Xs and Os  is a paper-and-pencil game for two players who take turns marking the spaces in a three-by-three grid with X or O. The player who succeeds in placing three of their marks in a horizontal, vertical, or diagonal row is the winner. It is a solved game, with a forced draw assuming best play from both players.


Approach used:

A 3x3 matrix is used to represent position of 'x' or '0' filled by players one by one.
Each position of the matrix is represented by 1 to 9 char digit. i.e position (0,0) is 1, position(0,1) is 2 and so on.
Position can be filled by player when it is empty i.e niether 'x' nor '0' is present at that position.
The player who succeeds in placing three of their marks in a horizontal, vertical, or diagonal row is the winner and game stops.
In other case  game will continue till all the positions are not filled.
A bool type 'tie' variable is used to keep track of draw, when bool value of 'tie' is 'TRUE' it will show result as "it's a draw".

