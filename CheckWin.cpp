/*******************************************************************************
 * AUTHOR        : Cameron Abo
 * STUDENT ID    : 387130
 * ASSIGNMENT #2 : Multi-Dimensional Array - Tic Tac Toe
 * CLASS         : CS1B
 * SECTION       : MW: 7:30p
 * DUE DATE      : 3/5/23
 ******************************************************************************/
#include "Header.h"

 /******************************************************************************
 * CheckWin
 * This function checks to see if either player has run. Once it is
 * possible for a win condition to exist, this should run after each a
 * player makes a play.
 *
 * RETURNS the character value of the player that won or a value that
 * indicates a tie.
 * ______________________________________________________________________________
 * 	PRE-CONDITIONS
 * 		boardAr : Must be previously defined
 *
 * 	POST-CONDITIONS
 * 		Returns a character of the winner or 'T' if players tied.
 *******************************************************************************/
char CheckWin(const char boardAr[][NUM_COLS]) // IN - tic tac toe board
{
	char winner; //OUT  - Token of the winner of the game
	int  row;	 //CALC - Row of array
	int  col;	 //CALC - Column of array

	winner = 'T';

	if (!isspace(boardAr[1][1]) &&
		((boardAr[0][0] == boardAr[1][1] && boardAr[1][1] == boardAr[2][2]) ||
			(boardAr[0][2] == boardAr[1][1] && boardAr[1][1] == boardAr[2][0])))
	{
		winner = boardAr[1][1];
	}

	//Check rows
	for (row = 0; row < NUM_ROWS; row++)
	{
		if (!isspace(boardAr[row][0]) &&
			boardAr[row][0] == boardAr[row][1] &&
			boardAr[row][1] == boardAr[row][2])
		{
			winner = boardAr[row][0];
		}
	}

	//check columns
	for (col = 0; col < NUM_COLS; col++)
	{
		if (!isspace(boardAr[0][col]) &&
			boardAr[0][col] == boardAr[1][col] &&
			boardAr[1][col] == boardAr[2][col])
		{
			winner = boardAr[0][col];
		}
	}

	return winner;
}