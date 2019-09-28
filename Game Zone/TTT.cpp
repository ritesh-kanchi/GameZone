#include <iostream>
#include <string>
#include "TTT.h"
#include "mainMenu.h"

using namespace std;

bool checkWin(char);

void displayBoard();
//Tic-Tac-Toe Board Display

char display[5][5] = { { ' ', '|', ' ', '|', ' ' },{ '-', '+', '-', '+', '-' },{ ' ', '|', ' ', '|', ' ' },{ '-', '+', '-', '+', '-' },{ ' ', '|', ' ', '|', ' ' } };

char board[3][3] = { { ' ', ' ', ' ' },{ ' ', ' ', ' ' },{ ' ', ' ', ' ' } };
int TTT()
{
	int playSwitch;

	
		 char player[2] = { ' ', ' ' },
		again = 'y';

	bool gameWon = false;

	while (again != 'n')
	{
		//Start Screen
		cout << "___________.__     ___________           ___________            \n"
			"\\__    ___/|__| ___\\__    ___/____    ___\\__    ___/___   ____  \n"
			"  |    |   |  |/ ___\|    |  \\__  \\ _/ ___\\ |    | /  _ \_/ __ \\ \n"
			"  |    |   |  \\  \\___|    |   / __ \\\\  \\___|    |(  <_> )  ___/ \n"
			"  |____|   |__|\\___  >____|  (____  /\\___  >____| \\____/ \\___  >\n"
			"                   \\/             \\/     \\/                  \\/ " << endl;

		cout << "Tic Tac Toe" << endl;

		//Player 1 Selections
		string playerName;

		cout << "What is Player 1's name?" << endl;
		cin.ignore(400, '\n');
		getline(cin, playerName);
		


		int turns = 0;
		cout << playerName << ", please add the character you are going to use. ";
		cin >> player[0];
		while (player[0] == ' ' || player[0] == '	')
		{
			cout << "I couldn't recognize that. Please re-enter a new character: ";
			cin >> player[0];
		}

		//Player 2 Selections
		string playerName2;

		cout << "What is Player 2's name?" << endl;
		cout << "> ";
		cin.ignore(400, '\n');
		getline(cin, playerName2);

		cout << endl << playerName2 << ", please enter the character you are going to use (no spaces): ";
		cin >> player[1];
		while (player[1] == ' ' || player[1] == '	')
		{
			cout << "I couldn't recognize that. Please re-enter a new character: ";
			cin >> player[1];
		}
		while (turns != 9 && !gameWon)
		{
			unsigned short x, y;
			cout << endl << endl;
			bool p1turn = true, p2turn = true;
			while (p1turn && turns != 9)
			{
				//Player 1 Enter
				p1turn = false;
				displayBoard();
				cout << endl << endl << playerName << ": Enter 2 numbers (1-3) to place your character: ";
				cin >> x >> y;
				while (x > 3 || x < 1 || y > 3 || y < 1)
				{
					cout << "Please re-enter your numbers(1-3): ";
					cin >> x >> y;
				}
				if (board[x - 1][y - 1] != ' ')
				{
					p1turn = true;
					cout << "You entered a space that has been already taken." << endl << endl;
				}
				else
				{
					board[x - 1][y - 1] = player[0];
					x = (x * 2) - 1;
					y = (y * 2) - 1;
					display[x - 1][y - 1] = player[0];
					if (checkWin(player[0])) gameWon = true;
					turns++;
				}
			}
			while (p2turn && turns != 9 && !gameWon)
			{
				//Player 2 Enter
				p2turn = false;
				cout << endl;
				displayBoard();
				cout << endl << endl << playerName2 << ": Enter 2 numbers (1-3) to place your character: ";
				cin >> x >> y;
				while (x > 3 || x < 1 || y > 3 || y < 1)
				{
					cout << "Please re-enter your numbers(1-3): ";
					cin >> x >> y;
				}
				if (board[x - 1][y - 1] != ' ')
				{
					p2turn = true;
					cout << "You entered a space that was already taken." << endl << endl;
				}
				else
				{
					board[x - 1][y - 1] = player[1];
					x = (x * 2) - 1;
					y = (y * 2) - 1;
					display[x - 1][y - 1] = player[1];
					if (checkWin(player[1])) gameWon = true;
					turns++;
				}
			}
		}
		//Choosing Winners
		cout << endl << endl;
		displayBoard();
		if (checkWin(player[0]))
			cout << endl << endl << "And the winner is:" << playerName << "!!!" << endl << endl;
		else if (checkWin(player[1]))
			cout << endl << endl << "And the winner is:" << playerName2 << "!!!" << endl << endl;
		else cout << endl << endl << "And it we have a tie!" << endl << endl;

		//Return to Main Menu
		cout << "To go back to the Main Menu, press 1." << endl;
		cin >> playSwitch;
		switch (playSwitch)
		{
		case 1:
			mainMenu();
			break;


		}
	}
	return 0;
} 

//Display Board and Check Win
void displayBoard()
{
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j) {

			cout << display[i][j];
		}

		cout << endl;

	}
}

bool checkWin(char player){

		//Winning Patterns
			//Diagonal
			if (player == board[0][0] && player == board[1][1] && player == board[2][2]) {
				return true;
			}
			else if (player == board[0][2] && player == board[1][1] && player == board[2][0]) {
				return true;
			}

			//Side to Side
			else if (player == board[0][0] && player == board[1][0] && player == board[2][0]) {
				return true;
			}
			else if (player == board[0][1] && player == board[1][1] && player == board[2][1]) {
				return true;
			}
			else if (player == board[0][2] && player == board[1][2] && player == board[2][2]) {
				return true;
			}

			//Up and Down
			else if (player == board[0][0] && player == board[0][1] && player == board[0][2]) {
				return true;
			}
			else if (player == board[1][0] && player == board[1][1] && player == board[2][2]) {
				return true;
			}
			else if (player == board[2][0] && player == board[2][1] && player == board[2][2]) {
				return true;
			}
			else { return false; }

		}