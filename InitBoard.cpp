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
 * InitBoard
 * This function initializes each spot in the board to a space ' '.
 *
 * RETURNS: Board initialized with all spaces
 * ______________________________________________________________________________
 * 	PRE-CONDITIONS:
 * 		boardAr : Must be previously declared
 *
 * 	POST-CONDITIONS:
 * 		boardAr : Initializes array with all spaces
 *****************************************************************************/
void InitBoard(char boardAr[][NUM_COLS]) // OUT - tic tac toe board
{
	int row;	//CALC - Row of array
	int col;	//CALC - Column of array

	for (row = 0; row < NUM_ROWS; row++)
	{
		for (col = 0; col < NUM_COLS; col++)
		{
			boardAr[row][col] = ' ';
		}
	}
}