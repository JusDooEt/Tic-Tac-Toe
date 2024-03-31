#pragma once
/*******************************************************************************
 * AUTHOR        : Cameron Abo
 * STUDENT ID    : 387130
 * ASSIGNMENT #2 : Functions - GCD
 * CLASS         : CS1B
 * SECTION       : MW: 7:30p
 * DUE DATE      : 3/5/23
 ******************************************************************************/

#ifndef HEADERA2_H_
#define HEADERA2_H_

#include <iostream> /* cin, cout, cerr */
#include <iomanip>	/* setw, setfill */
#include <string>	/* length() */
#include <cstring>  /* atoi */
#include <limits>	/* numerical_limit */
#include <ios>		/* streamsize */
#include <cstdlib>  /* system("CLS") */
#include <stdlib.h> /* srand, rand */
#include <time.h>   /* time */
using namespace std;

const int NUM_COLS = 3;
const int NUM_ROWS = 3;

/******************************************************************************
* OutputInstruct
* This function outputs instructions to the users. There are no input
* or output parameters for this function as it only displays text to
* the screen.
*
* RETURNS: nothing
* 	--> Displays the instructions to the user
*****************************************************************************/
void OutputInstruct();

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
*
*******************************************************************************/
int GetAndCheckInt(string prompt, //IN - Message to prompt user for input
	int min,		  //IN - Min integer range
	int max);	  //IN - Max integer range


/******************************************************************************
* InitBoard
* This function initializes each spot in the board to a space ' '.
*
* RETURNS: Board initialized with all spaces
*****************************************************************************/
void InitBoard(char boardAr[][NUM_COLS]); // OUT - tic tac toe board


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
ASSIGNMENT	#2 Multi-Dimensional	Arrays	– TIC	TAC	TOE CS1B
4 of	5
*****************************************************************************/
void DisplayBoard(const char boardAr[][NUM_COLS]); // IN - tic tac toe board


/******************************************************************************
* GetPlayers
* This function prompts the user and gets the input for the players’ names.
* playerX will always contain the name of the player that is using the X token.
* playerO will always contain the name of the player that is using the O token.
*
* RETURNS: the players names through the variables playerX and playerO.
*****************************************************************************/
void GetPlayers(string& playerX,  // OUT - player X’s name
	string& playerO); // OUT - player O’x name


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
*
*******************************************************************************/
void GetAndCheckInp(char boardAr[][NUM_COLS], // IN - tic tac toe board
	char token,		 //IN - current player’s token ('X' or 'O')
	string playerX,  //IN - Name of playerX
	string playerO); //IN - Name of playerO


/******************************************************************************
* SwitchToken
* This function switches the active player.
* It takes in a parameter representing the current player's token
* as a character value (either an X or an O) and returns the opposite.
* For example, if this function receives an X it returns an 0. If it
* receives and O it returns and X.
*
* RETURNS: the token opposite of the one in which it receives.
*****************************************************************************/
char SwitchToken(char token); // IN - current player’s token ('X' or 'O')


/******************************************************************************
* CheckWin
* This function checks to see if either player has run. Once it is
* possible for a win condition to exist, this should run after each a
* player makes a play.
*
* RETURNS the character value of the player that won or a value that
* indicates a tie.
*****************************************************************************/
char CheckWin(const char boardAr[][NUM_COLS]); // IN - tic tac toe board


/******************************************************************************
* OutputWinner
* This function receives as input a character indicating which player won
* or if the game was a tie and outputs an appropriate message. This function
* does not return anything as it simply outputs the appropriate message to
* the screen.
*
* RETURNS: nothing
* à Displays the winner’s name
*****************************************************************************/
void OutputWinner(char whoWon, 	   // IN - represents the winner or a value
	// indicating a tied game.
	string playerX,  // OUT - player X’s name
	string playerO); // OUT - player O’x name


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
*
*******************************************************************************/
void GetCompPlay(char boardAr[][NUM_COLS], // IN  - tic tac toe board
	int& rowRet, 			   // OUT - Row of play
	int& colRet);			   // OUT - Column of play

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
 *
 ******************************************************************************/
void OutputMenu();


#endif /* HEADERA2_H_ */