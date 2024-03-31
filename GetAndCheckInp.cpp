/*******************************************************************************
 * AUTHOR        : Cameron Abo
 * STUDENT ID    : 387130
 * ASSIGNMENT #2 : Multi-Dimensional Array - Tic Tac Toe
 * CLASS         : CS1B
 * SECTION       : MW: 7:30p
 * DUE DATE      : 3/5/23
 ******************************************************************************/
#include "Header.h"

 /*******************************************************************************
 * FUNCTION GetAndCheckInp
 * ______________________________________________________________________________
 *
 * This function receives an array of characters, a token representing which
 * 	player is playing, and the names of playerX and playerO. If the token is
 * 	equal to 'X' then the function will ask for playerX's play or playerX's play
 * 	if the token  is equal to 'O' and verify if the play is an integer value,
 * 	if it is within range of the board, and if the space is empty. If all these
 * 	are true then the token will be assigned to the space chosen by the
 * 	respective player.
 *
 * RETURNS: nothing
 *______________________________________________________________________________
 *	PRE-CONDITIONS:
 *		boardAr : Must be previously defined
 *		token   : Must be previously defined
 *		playerX : Must be previously defined
 *		playerO : Must be previously defined
 *
 *	POST-CONDITIONS:
 *		boardAr : Will assign a token to the selected position on the board
 *******************************************************************************/
void GetAndCheckInp(char boardAr[][NUM_COLS], // IN - tic tac toe board
	char token,		 //IN - current player’s token ('X' or 'O')
	string playerX,  //IN - Name of playerX
	string playerO)  //IN - Name of playerO
{
	int  row;	//CALC - Row of the array
	int  col;	//CALC - Column of the array
	bool valid = false;
	do {
		if (token == 'X')
		{
			cout << playerX;
		}
		else
		{
			cout << playerO;
		}
		cout << "\'s turn! What is your play?: ";

		//check to see if input is an integer
		if (!(cin >> row >> col))
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "\nPlease enter two integers (ex. \"2 2\")\n\n";
		}
		//Validates that the coordinate is within range and not taken
		else
		{
			row--;
			col--;

			//validates rows of board
			if (row > NUM_ROWS - 1 || row < 0)
			{
				cout << "\nInvalid row - Please try again!\n\n";
			}
			//validates columns of board
			else if (col > NUM_COLS - 1 || col < 0)
			{
				cout << "\nInvalid column - Please try again!\n\n";
			}
			//validates the coordinates are empty
			else if (!isspace(boardAr[row][col]))
			{
				cout << "\nThat spot is taken already - try again!\n\n";
			}
			else
			{
				valid = true;
			}
		}

	} while (!valid);

	//Assigns the correct token to valid board coordinates
	boardAr[row][col] = token;
	cin.ignore(1000, '\n');

}