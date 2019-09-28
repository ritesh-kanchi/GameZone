//Libraries
#include <iostream>
#include <string>
#include "TTT.h"
#include "RPS.h"
#include "GMN.h"
#include "credits.h"

using namespace std;

//Function
int mainMenu() {

	//Start Screen
	int playerChoice;
	cout << "   ____   ____  ___ ___    ___      _____   ___   ____     ___ \n"
		" /    | /    ||   |   |  /  _]    |     | /   \\ |    \\   /  _]\n"
		"|   __||  o  || _   _ | /  [_     |__/  ||     ||  _  | /  [_ \n"
		"|  |  ||     ||  \\_/  ||    _]    |   __||  O  ||  |  ||    _]\n"
		"|  |_ ||  _  ||   |   ||   [_     |  /  ||     ||  |  ||   [_ \n"
		"|     ||  |  ||   |   ||     |    |     ||     ||  |  ||     |\n"
		"|___,_||__|__||___|___||_____|    |_____| \\___/ |__|__||_____|\n"
		" By  Ritesh Kanchi                                             \n"
		"                                                                " << endl;
                                                              
	cout << " Choose a game(1-3):" << endl;

	//Choices
	cout << "1)RockPaperScissors(1 PLayer)" << endl;
	cout << "2)Tic-Tac-Toe(2 Players)" << endl;
	cout << "3)Guess my Number(1 Player)" << endl;
	cout << "4)Credits" << endl;
	cout << "5)Quit Program" << endl;


	cin >> playerChoice;
	switch (playerChoice)
	{
	case 1:
		RPS();
		break;

	case 2:
		TTT();
		break;

	case 3:
		GMN();
		break;

	case 4:
		credits();
		break;

	case 5:
		exit(0);
		
	} return 0;
}