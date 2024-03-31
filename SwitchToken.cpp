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
 * SwitchToken
 * This function switches the active player.
 * It takes in a parameter representing the current player's token
 * as a character value (either an X or an O) and returns the opposite.
 * For example, if this function receives an X it returns an 0. If it
 * receives and O it returns and X.
 *
 * RETURNS: the token opposite of the one in which it receives.
 * ___________________________________________________________________________
 * 	PRE-CONDITION
 * 		token: Must be previously defined
 *
 * 	POST-CONDITIONS
 * 		newToken: returns to main
 *****************************************************************************/
char SwitchToken(char token) // IN - current player’s token ('X' or 'O')
{
	char newToken; //OUT - Switched token
	if (token == 'X')
	{
		newToken = 'O';
	}
	else
	{
		newToken = 'X';
	}
	return newToken;
}