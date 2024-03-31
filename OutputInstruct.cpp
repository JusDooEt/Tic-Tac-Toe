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
 * OutputInstruct
 * This function outputs instructions to the users. There are no input
 * or output parameters for this function as it only displays text to
 * the screen.
 *
 * RETURNS: nothing
 *  --> Displays the instructions to the user
 * _____________________________________________________________________________
 * 	PRE-CONDTIONS:
 * 		<none>
 *
 * 	POST-CONDITIONS:
 * 		Will output a box of text instructing the player how to use the program
 *******************************************************************************/
void OutputInstruct()
{
	cout << "***********************************************\n";
	cout << "*" << setw(47) << "*\n";
	cout << "* Welcome to Tic Tac Toe!" << setw(23) << "*\n";
	cout << "* You can play either against the computer or *\n";
	cout << "* against a friend! In order to select a spot,*\n";
	cout << "* enter the grid coordinates of the desired   *\n";
	cout << "* location. For example, to select the middle *\n";
	cout << "* square enter \"2 2\". Get 3 in a row to       *\n";
	cout << "* win! Good luck and have fun!                *\n";
	cout << "*" << setw(47) << "*\n";
	cout << "***********************************************\n";

}