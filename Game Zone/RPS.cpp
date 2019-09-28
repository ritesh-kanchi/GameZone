//Libraries
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "RPS.h"
#include "mainMenu.h"
#include <string>

using namespace std;

int RPS()
{

	int userName;
	//Start Screen

cout << " ______              __      ______                           _______        __                               \n"
		"|   __ \\.-----.----.|  |--. |   __ \\.---.-.-----.-----.----. |     __|.----.|__|.-----.-----.-----.----.-----.\n"
		"|      <|  _  |  __||    <  |    __/|  _  |  _  |  -__|   _| |__     ||  __||  ||__ --|__ --|  _  |   _|__ -- \n"
		"|___|__||_____|____||__|__| |___|   |___._|   __|_____|__|   |_______||____||__||_____|_____|_____|__| |_____|\n"
		"                                          |__|                                                               " << endl;

cout << "Rock Paper Scissors" << endl;

	//Starting Scores
	int wins = 0;
	int losses = 0;
	int ties = 0;


	string namePlayer;

	cout << "What is your name?" << endl;
	cout << "> ";
	cin.ignore(400, '\n');
	getline(cin, namePlayer);


	srand(time(NULL));
	while (true)
	{


		//Choice Buttons
		int playerChoice;
		cout << "Choose a move:" << endl;
		cout << "1)Rock" << endl;
		cout << "2)Paper" << endl;
		cout << "3)Scissors" << endl;
		cout << "4)Main Menu" << endl;


		//Player Choices
		cin >> playerChoice; 
		 
		switch (playerChoice) 
			 
		{ 
		case 1:
			cout << namePlayer << " chose Rock!" << endl;
			break; 
		case 2:
			cout << namePlayer << " chose Paper!" << endl;
			break; 
		case 3:  
			cout << namePlayer <<  " chose Scissors!" << endl;
			break; 

		case 4:
			mainMenu();
			break;
			
		default: 
			cout << namePlayer << " chose an incorrect move!" << endl;
		} 
		 
		//Enemy Choices 
		int enemyChoice = rand() % 3; 
		 
		switch (enemyChoice) 
		{ 
		case 0: 
			cout << "Your enemy chose Rock!" << endl;
			break; 
		case 1: 
			cout << "Your enemy chose Paper!" << endl;
			break; 
		case 2: 
			cout << "Your enemy chose Scissors!" << endl;
			break; 
			 
		}  
		if (playerChoice == enemyChoice) ties++; 
		else {

			//Rock = 1, Paper = 2, Siccsors = 3

			//Rock Options          Rock
			     if (playerChoice == 1 && enemyChoice == 1) ties++;//Rock
			else if (playerChoice == 1 && enemyChoice == 2) losses++;//Paper
			else if (playerChoice == 1 && enemyChoice == 3) wins++;//Scissors

			//Paper Options         Paper
			else if (playerChoice == 2 && enemyChoice == 1) wins++;//Rock
			else if (playerChoice == 2 && enemyChoice == 2) ties++;//Paper
			else if (playerChoice == 2 && enemyChoice == 3) losses++;//Scissors

			//Scissors Options    Scissors
			else if (playerChoice == 3 && enemyChoice == 1) losses++;//Rock
			else if (playerChoice == 3 && enemyChoice == 2) wins++;//Paper
			else if (playerChoice == 3 && enemyChoice == 3) ties++;//Scissors

			//Scoreboard
			cout << "WINS:" << wins << endl;
			cout << "LOSSES:" << losses << endl;
			cout << "TIES:" << ties << endl;
		} 
	} 
} 