/*******************************************************************************
 * GetPlayers.cpp
 ******************************************************************************/
#include "Header.h"

 /******************************************************************************
 * GetPlayers
 * This function prompts the user and gets the input for the players’ names.
 * playerX will always contain the name of the player that is using the X token.
 * playerO will always contain the name of the player that is using the O token.
 *
 * RETURNS: the players names through the variables playerX and playerO.
 * _____________________________________________________________________________
 * 	PRE-CONDITIONS:
 * 		playerX : Must be previously declared
 * 		playerO : Must be previously declared
 *
 * 	POST-CONDITIONS:
 * 		playerX : Passes the inputed name back to main
 * 		playerO : Passes the inputed name back to main.
 *****************************************************************************/
void GetPlayers(string& playerX,  // OUT - player X’s name
	string& playerO)  // OUT - player O’x name
{
	bool valid = false; //CALC - Valid input
	do
	{
		cout << "\nEnter the name of player X: ";
		getline(cin, playerX);
		if (atoi(playerX.c_str()) != 0)
		{
			cout << "\n\t<Please enter a name>\n\n";
		}
		else
		{
			valid = true;
		}

	} while (!valid);


	do
	{
		cout << "\nEnter the name of player O: ";
		getline(cin, playerO);
		if (atoi(playerX.c_str()) != 0)
		{
			cout << "\n\t<Please enter a name>\n\n";
		}
		else
		{
			valid = true;
		}
	} while (!valid);
}