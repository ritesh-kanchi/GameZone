#include <iostream>
#include <string>
#include "mainMenu.h"
#include "credits.h"

using namespace std;

int credits() {

	int userChoice;

	cout << "MM'\"\"\"\"'YMM                         dP oo   dP            \n"
		    "M' .mmm. `M                         88      88            \n"
			"M  MMMMMooM 88d888b. .d8888b. .d888b88 dP d8888P .d8888b. \n"
			"M  MMMMMMMM 88'  `88 88ooood8 88'  `88 88   88   Y8ooooo. \n"
			"M. `MMM' .M 88       88.  ... 88.  .88 88   88         88 \n"
			"MM.     .dM dP       `88888P' `88888P8 dP   dP   `88888P' \n"
			"MMMMMMMMMMM " << endl;
		
	cout << "Credits" << endl;
		
	cout << "Game Zone, Copyright 2016, Ritesh Kanchi" << endl;

	cout << "To use, press the numbers. If you don't see a next button, press enter. Enter gives what you type into the system." << endl;

	cout << "Please do not do anything the program asks you to do. Even a simple right click can crash the program." << endl;

	cout << "To go back to the Main Menu, press 1." << endl;
	
	
	cin >> userChoice;
	switch (userChoice)
	{
	case 1:
		mainMenu();
		break;

		return 0;
	}
}