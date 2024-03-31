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
  * FUNCTION OutputMenu
  * _____________________________________________________________________________
  *
  * This function receives nothing and outputs a menu for the user to select from
  *  Ex.
  *  	_________________________________________
  *  	|                 Menu                  |
  *		|_______________________________________|
  *		|	Set Player Names (Enter 1)			|
  *		|	Single Player    (Enter 2)			|
  *		|	Two Player       (Enter 3)			|
  *		|	Exit Game        (Enter 0)			|
  *		|_______________________________________|
  *
  * 		==> returns nothing. Outputs a menu
  *______________________________________________________________________________
  *	PreConditions:
  *		None
  *
  *	PostConditions:
  *		This function will display a menu of options to the console.
  ******************************************************************************/
void OutputMenu()
{
	cout << endl;
	cout << "_________________________________________\n";
	cout << '|' << setw(21) << "Menu" << setw(20) << "|\n";
	cout << "|_______________________________________|\n";
	cout << "|\tSet Player Names (Enter 1)\t|\n";
	cout << "|\tSingle Player    (Enter 2)\t|\n";
	cout << "|\tTwo Player       (Enter 3)\t|\n";
	cout << "|\tExit Game        (Enter 0)\t|\n";
	cout << "|_______________________________________|\n";
}