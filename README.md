# TIC TAC TOE
![buildV1](https://github.com/JusDooEt/Tic-Tac-Toe/assets/152052216/ece0e874-91be-4e55-be18-bc79e52286e3)

## About
This program is a classic game of tic tac toe. This program can support a single player game or a two player game of tic tac toe. When running the program the user will be prompted with the menu below. If the user chooses to set the player's names the program will prompt the user for the new players names and will return to the menu after. If the user chooses a two player game, the program will use the stored user's names and have each player take turns. If the names are not changed, the program will default the names to 'X' and 'O'. If the user chooses a single player game, the program will use an algorithm to determine the computer's play after the user has played their turn.

```
|                 Menu                  |
|_______________________________________|
|       Set Player Names (Enter 1)      |
|       Single Player    (Enter 2)      |
|       Two Player       (Enter 3)      |
|       Exit Game        (Enter 0)      |
|_______________________________________|
Enter selection here:
```

## Functionality 
- Input Checking
  - There are two functions in the program to verify the user's input.
  - GetAndCheckInt
    - This function is used only to verify the user's input when prompted with the game menu.
    - This function receives a string to prompt the user with and two ints representing the min and max range that is valid. In the case for the menu the range is set from 0 to 3.
    - If the integer that is input by the user is out of range, the function will display an error message declaring the range, and prompt the user to make another choice. If the user input is not an integer data type the function will ask the user to enter an integer.
  - GetAndCheckInp
    - This function is used to validate the user's input when playing a game.
    - It will verify if the user's input is an integer.
    - It will verify if the two integers input are in range of the game board.
    - It will verify that the position the user is selecting is an open spot on the board.
    - If the input defies any of these statements, an appropriate error message will be displayed to the user.
- GetCompPlay
  - This function is the logic that determines the spot on the board the "computer" will select.
  - The logic consists of if statements to check the state of the board.
  - The computer will prioritize and win, a defensive play and a random play in that order.
  - The if statements check to see what values are contained in two adjacent spots on the board and will command the computer to react accordingly.
  - If none of the conditions are met in the if statements, the function will generate random spots on the board until one is found to be empty and is therefore selected.
