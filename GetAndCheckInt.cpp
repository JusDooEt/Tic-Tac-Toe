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
 * FUNCTION GetAndCheckInt
 * ______________________________________________________________________________
 *
 * This function receives a string representing a prompt and two integers
 * 	representing a minimum and maximum range of a valid integer. The functions
 * 	then prompts the user and determines if an input is a valid integer and
 * 	within range of the min and max.
 *
 * RETURNS:
 *	--> A valid integer
 *______________________________________________________________________________
 *	PRE-CONDITIONS:
 *		min: must be an integer value
 *		max: must be an integer value
 *
 *	POST-CONDTIONS:
 *		returns a valid integer to main
 *******************************************************************************/
int GetAndCheckInt(string prompt, //IN - Message to prompt user for input
	int min,		  //IN - Min integer range
	int max)		  //IN - Max integer range
{
	int num;			//OUT  - Integer input by user
	bool valid = false;	//CALC - Valid integer

	do
	{
		cout << prompt;
		if (!(cin >> num))
		{
			cout << "\n\t<Please enter an integer between "
				<< min << " and " << max << ".>\n\n";
			cin.clear();

			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		else if (num < min || num > max)
		{
			cout << "\n\t<Please enter an integer between "
				<< min << " and " << max << ".>\n\n";
		}
		else
		{
			valid = true;
		}
	} while (!valid);
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	return num;
}