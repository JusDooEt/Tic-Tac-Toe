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
  * Tic Tac Toe
  * -----------------------------------------------------------------------------
  * This program will display a text box of instructions on how to play Tic Tac
  * 		Toe and will then display a menu of selection for the user. The user
  * 		can choose to modify the names of playerX and playerO, player a game
  * 		against the computer, or play against another user. They will also have
  * 		the option to exit the program. The program will then display an
  * 		interface representing a board of Tic Tac Toe and ask the user to
  * 		enter a grid coordinate of the board to assign their token to the
  * 		right element in the array representing a spot on the board. If the
  * 		user chooses to play against the computer, the program will dynamically
  * 		pick a spot on the board that either blocks the player from winning or
  * 		allows the computer to win. After a game the program will display
  * 		the selection menu until the user exits the program.
  * -----------------------------------------------------------------------------
  * INPUT:
  *    playerX  : The name of playerX
  *    playerO  : The name of playerO
  *    menuSelec: The user's menu selection
  *
  * OUTPUT:
  * 	  boardAr : Tic Tac Toe board
  * 	  playerX : The name of playerX
  * 	  playerO : The name of playerO
  ******************************************************************************/


int main()
{
	const int MAX_ROUNDS = 9;

	char   boardAr[NUM_COLS][NUM_ROWS]; //IN & OUT - 2 Dimensional Array that
	//			 represents a board of tic
	//			 tac toe.
	int    menuSelec;	//IN & CALC   - Users menu selection 0-3
	int    rounds;		//CALC & CALC - Number of rounds in 1 game
	int    row;			//CALC & OUT  - Row of computer selection
	int    col;			//CALC & OUT  - Column of computer selection
	char   token;		//CALC & CALC - current player’s token ('X' or 'O')
	char   winner;		//CALC & CALC - Winner of the game
	string playerX;		//IN   & OUT  - Name of playerX
	string playerO;		//IN   & OUT  - Name of PlayerO
	string comp;		//CALC & OUT  - Name of computer
	bool   winCond;		//CALC & CALC - True if someone has won the game

	// INITIALIZATIONS
	srand(time(NULL));
	playerX = "X";
	playerO = "O";
	comp = "Computer";

	OutputInstruct();
	OutputMenu();
	menuSelec = GetAndCheckInt("Enter selection here: ", 0, 3);

	while (menuSelec != 0)
	{

		// Set Names mode
		if (menuSelec == 1)
		{
			GetPlayers(playerX, playerO);
			system("cls");
		}

		// Single-Player Mode
		else if (menuSelec == 2)
		{
			InitBoard(boardAr);
			winCond = false;
			token = 'X';
			rounds = 0;
			winner = 'T';

			DisplayBoard(boardAr);
			while (!winCond && rounds < MAX_ROUNDS)
			{
				if (token == 'X')
				{
					GetAndCheckInp(boardAr, token, playerX, comp);
					DisplayBoard(boardAr);
				}
				else
				{
					GetCompPlay(boardAr, row, col);
					DisplayBoard(boardAr);
					cout << "The Computer selected " << row + 1
						<< '-' << col + 1 << ".\n";

				} //if(token == 'X')
				token = SwitchToken(token);

				if (rounds > 1)
				{
					winner = CheckWin(boardAr);

					if (winner != 'T')
					{
						winCond = true;
					} //if(winner != 'T')

				} //if (rounds > 1)

				rounds++;
			} //while(!winCond && rounds < MAX_ROUNDS)

			OutputWinner(winner, playerX, comp);
			system("pause");
			system("cls");
		} //else if(menuSelec == 2)

		//Two-Player mode
		else if (menuSelec == 3)
		{

			InitBoard(boardAr);
			winCond = false;
			token = 'X';
			rounds = 0;
			winner = 'T';

			DisplayBoard(boardAr);

			while (!winCond && rounds < MAX_ROUNDS)
			{
				GetAndCheckInp(boardAr, token, playerX, playerO);
				token = SwitchToken(token);
				DisplayBoard(boardAr);

				if (rounds > 1)
				{
					winner = CheckWin(boardAr);

					if (winner != 'T')
					{
						winCond = true;
					} //if(winner != 'T')

				} //if (rounds > 1)

				rounds++;
			} //while(!winCond && rounds < MAX_ROUNDS)

			OutputWinner(winner, playerX, playerO);
			system("pause");
			system("cls");
		} //else if(menuSelec == 3)

		OutputMenu();
		menuSelec = GetAndCheckInt("Enter selection here: ", 0, 3);
	} //while (menuSelec != 0)

	return 0;
}