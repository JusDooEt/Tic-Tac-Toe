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
 * FUNCTION GetCompPlay
 * ______________________________________________________________________________
 *
 * This function receives an array of characters representing a tic tac toe board
 * 	It then uses an assortment of if statements to determine if the player or
 * 	computer can win in the next move and will choose the spot to either block
 * 	a player from winning or to win itself. It will also pass the row and
 * 	column number of the spot that was played back to main.
 *
 * 	For example, if The player has played on positions 1-1 and 1-2 the computer
 * 	will play 1-3 if possible to block the players win. Otherwise, if the
 * 	computer has played on 1-1 and 2-2, and 3-3 is open The computer will play
 * 	3-3 to win the game.
 *
 * RETURNS: nothing
 *_______________________________________________________________________________
 *	PRE-CONDITIONS:
 *		boardAr: Must be previously defined
 *		rowRet : Must be previously declared
 *		colRet : Must be previously declared
 *
 *	POST-CONDTIONS:
 *		rowRet : Row of play will be passed back to main
 *		colRet : Column of play will be passed back to main
 *******************************************************************************/
void GetCompPlay(char boardAr[][NUM_COLS], // IN  - tic tac toe board
	int& rowRet, 			   // OUT - Row of play
	int& colRet)			   // OUT - Column of play
{
	int row;	  //CALC - Row of array
	int col;	  //CALC - Column of array
	bool played;  //CALC - If the computer has played or not
	//cerr << "/nGetCompPlay\n";

	played = false;


	if (!played &&
		!isspace(boardAr[0][0]) &&
		!isspace(boardAr[2][2]) &&
		isspace(boardAr[1][1]) &&
		boardAr[0][0] == boardAr[2][2])

	{
		//cerr << "1\n";
		boardAr[1][1] = 'O';
		rowRet = 1;
		colRet = 1;
		played = true;


	}
	else if (!played &&
		!isspace(boardAr[1][1]) &&
		!isspace(boardAr[2][2]) &&
		isspace(boardAr[0][0]) &&
		boardAr[1][1] == boardAr[2][2])
	{
		//cerr << "2\n";
		boardAr[0][0] = 'O';
		rowRet = 0;
		colRet = 0;
		played = true;

	}
	else if (!played &&
		!isspace(boardAr[0][0]) &&
		!isspace(boardAr[1][1]) &&
		isspace(boardAr[2][2]) &&
		boardAr[0][0] == boardAr[1][1])
	{
		//cerr << "3\n";
		boardAr[2][2] = 'O';
		rowRet = 2;
		colRet = 2;
		played = true;

	}
	else if (!played &&
		!isspace(boardAr[0][2]) &&
		!isspace(boardAr[2][0]) &&
		isspace(boardAr[1][1]) &&
		boardAr[0][2] == boardAr[2][0])
	{
		//cerr << "4\n";
		boardAr[1][1] = 'O';
		rowRet = 1;
		colRet = 1;
		played = true;

	}
	else if (!played &&
		!isspace(boardAr[1][1]) &&
		!isspace(boardAr[2][0]) &&
		isspace(boardAr[0][2]) &&
		boardAr[1][1] == boardAr[2][0])
	{
		//cerr << "5\n";
		boardAr[0][2] = 'O';
		rowRet = 0;
		colRet = 2;
		played = true;

	}
	else if (!played &&
		!isspace(boardAr[0][2]) &&
		!isspace(boardAr[1][1]) &&
		isspace(boardAr[2][0]) &&
		boardAr[0][2] == boardAr[1][1])
	{
		//cerr << "6\n";
		boardAr[2][0] = 'O';
		rowRet = 2;
		colRet = 0;
		played = true;

	}
	else
	{
		for (row = 0; row < NUM_ROWS; row++)
		{
			//cerr << "row\n";
			if (!played &&
				!isspace(boardAr[row][0]) &&
				!isspace(boardAr[row][1]) &&
				isspace(boardAr[row][2]) &&
				boardAr[row][0] == boardAr[row][1])
			{
				//cerr << "7\n";
				boardAr[row][2] = 'O';
				rowRet = row;
				colRet = 2;
				played = true;

			}
			else if (!played &&
				!isspace(boardAr[row][1]) &&
				!isspace(boardAr[row][2]) &&
				isspace(boardAr[row][0]) &&
				boardAr[row][1] == boardAr[row][2])
			{
				//cerr << "8\n";
				boardAr[row][0] = 'O';
				rowRet = row;
				colRet = 0;
				played = true;

			}
			else if (!played &&
				!isspace(boardAr[row][0]) &&
				!isspace(boardAr[row][2]) &&
				isspace(boardAr[row][1]) &&
				boardAr[row][0] == boardAr[row][2])
			{
				//cerr << "9\n";
				boardAr[row][1] = 'O';
				rowRet = row;
				colRet = 1;
				played = true;

			}
		}



		for (col = 0; col < NUM_COLS; col++)
		{
			//cerr << "col\n";
			if (!played &&
				!isspace(boardAr[0][col]) &&
				!isspace(boardAr[1][col]) &&
				isspace(boardAr[2][col]) &&
				boardAr[0][col] == boardAr[1][col])
			{
				//cerr << "10\n";
				boardAr[2][col] = 'O';
				rowRet = 2;
				colRet = col;
				played = true;

			}
			else if (!played &&
				!isspace(boardAr[1][col]) &&
				!isspace(boardAr[2][col]) &&
				isspace(boardAr[0][col]) &&
				boardAr[1][col] == boardAr[2][col])
			{
				//cerr << "11\n";
				boardAr[0][col] = 'O';
				rowRet = 0;
				colRet = col;
				played = true;

			}
			else if (!played &&
				!isspace(boardAr[0][col]) &&
				!isspace(boardAr[2][col]) &&
				isspace(boardAr[1][col]) &&
				boardAr[0][col] == boardAr[2][col])
			{
				//cerr << "12\n";
				boardAr[1][col] = 'O';
				rowRet = 1;
				colRet = col;
				played = true;

			}

		}



		while (!played)
		{
			//cerr << "13\n";
			row = rand() % 3;
			col = rand() % 3;
			//cerr << row << endl;
			//cerr << col << endl;
			if (isspace(boardAr[row][col]))
			{
				//cerr << "14\n";
				boardAr[row][col] = 'O';
				played = true;
				rowRet = row;
				colRet = col;

			}
		}
	}

}