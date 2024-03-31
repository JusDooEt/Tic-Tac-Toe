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
 * DisplayBoard
 * This function outputs the tic tac toe board including the tokens
 * played in the proper format (as described below).
 *
 *  		     1       2       3
 * 		  [1][1] | [1][2] | [1][3]
 * 				 | 		  |
 * 1 			 | 		  |
 * 				 | 		  |
 * 		--------------------------
 *		 [2][1] | [2][2] | [2][3]
 * 				 | 		  |
 * 2 			 | 		  |
 * 				 | 		  |
 * 		--------------------------
 *		 [3][1] | [3][2] | [3][3]
 * 				 |		  |
 * 3 			 |		  |
 * 				 |		  |
 *
 * RETURNS: nothing
 * --> outputs the current state of the board
 * _____________________________________________________________________________
 * 	PRE-CONDITIONS
 * 		boardAr : Must be previously defined
 *
 * 	POST-CONDITIONS
 * 		Outputs a tic tac toe board interface and the moves that playerX and
 * 			playerO have played.
 *****************************************************************************/
void DisplayBoard(const char boardAr[][NUM_COLS]) //IN - tic tac toe board
{
	int cols;	//CALC - Board columns
	int rows;	//CALC - Board rows

	system("CLS");

	//Label x-axis
	cout << setw(10) << "1" << setw(8) << "2" << setw(9) << "3\n";

	//Label y-axis and create tic tac toe board interface including occupied
	//spaces and the correct token representing which player played in that
	//location.
	for (rows = 0; rows < 3; rows++)
	{
		cout << setw(7) << "[" << rows + 1 << "][1] | " << "[" << rows + 1;
		cout << "][2] | " << "[" << rows + 1 << "][3]" << endl;
		cout << setw(14) << "|" << setw(9) << "|" << endl;

		//Seperates columns
		for (cols = 0; cols < 3; cols++)
		{
			switch (cols)
			{
			case 0: cout << rows + 1 << setw(9) << boardAr[rows][cols];
				cout << setw(4) << "|";
				break;
			case 1: cout << setw(4) << boardAr[rows][cols];
				cout << setw(5) << "|";
				break;
			case 2: cout << setw(4) << boardAr[rows][cols] << endl;
				break;
			default: cout << "ERROR!\n\n";
			}
		}
		cout << setw(14) << "|" << setw(10) << "|\n";

		//Seperates rows
		if (rows != 2)
		{
			cout << setw(32) << "--------------------------\n";
		}
	}
	cout << endl << endl;

}