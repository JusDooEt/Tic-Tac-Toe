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
 * OutputWinner
 * This function receives as input a character indicating which player won
 * or if the game was a tie and outputs an appropriate message. This function
 * does not return anything as it simply outputs the appropriate message to
 * the screen.
 *
 * RETURNS: nothing
 * 		--> Displays the winner’s name
 * _____________________________________________________________________________
 * 	PRE-CONDITIONS:
 * 		whoWon : Must be previously defined
 * 		playerX: Must be previously defined
 * 		playerO: Must be previously defined
 *
 * 	POST-CONDITIONS:
 * 		This function will output either the winner of the game or that
 * 		the game resulted in a tie.
 *****************************************************************************/
void OutputWinner(char whoWon, 	  // IN - represents the winner or a value
	// indicating a tied game.
	string playerX, // OUT - player X’s name
	string playerO) // OUT - player O’x name
{
	switch (whoWon)
	{
	case 'X':
		cout << "\t" << setfill('-') << setw(playerX.length() + 11)
			<< "-\n";
		cout << "\t-" << playerX << " WINS!!!-\n";
		cout << "\t" << setfill('-') << setw(playerX.length() + 11)
			<< "-\n";
		cout << endl;
		break;

	case 'O':
		cout << "\t" << setfill('-') << setw(playerO.length() + 11)
			<< "-\n";
		cout << "\t-" << playerO << " WINS!!!-\n";
		cout << "\t" << setfill('-') << setw(playerO.length() + 11)
			<< "-\n";
		cout << endl;
		break;

	case 'T':
		cout << "\t" << setfill('-') << setw(7) << "-\n";
		cout << "\t-TIE!-\n";
		cout << "\t" << setfill('-') << setw(7) << "-\n";
		cout << endl;
		break;

	default:
		cout << "<Error(OutputWinner)>\n";

	}
	cout << setfill(' ');
}