//Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include "GMN.h"
#include "mainMenu.h"

using namespace std;



int GMN()

{
	int userSwitch;

	int num, guess, tries = 0;

	srand(time(0));

	//Generates number from 1 to 100
	num = rand() % 100 + 1;

	//Start Screen
cout << " .--.                          .-..-.       .-..-.               .-.              \n"
		": .--'                         : `' :       : `: :               : :              \n"
		": : _ .-..-. .--.  .--.  .--.  : .. :.-..-. : .` :.-..-.,-.,-.,-.: `-.  .--. .--. \n"
		": :; :: :; :' '_.'`._-.'`._-.' : :; :: :; : : :. :: :; :: ,. ,. :' .; :' '_.': ..'\n"
		"`.__.'`.__.'`.__.'`.__.'`.__.' :_;:_;`._. ; :_;:_;`.__.':_;:_;:_;`.__.'`.__.':_;  \n"
		"                                     .-. :                                      \n"
		"                                     `._.'                                        " << endl;

cout << "Guess My Number" << endl;

	//User Input Name
	string userName;

	cout << "What is your name?" << endl;
	cout << "> ";
	cin.ignore(400, '\n');
	getline(cin,userName);

	do

	{

		//User Enters Guess
		cout << userName << ", please enter a guess between 1 and 100: ";

		cin >> guess;

		tries++;

		if (guess > num)

			//Too High
			cout << "Too high!\n\n";

		else if (guess < num)

			//Too Low
			cout << "Too low!\n\n";

		else

			//Final Results
			cout << "\nGreat Job," << userName << "! You got it in " << tries << " guesses!\n";

	} while (guess != num);



	cin.ignore();

	cin.get();

	//Go back to the Main Menu

	cout << "To go back to the Main Menu, press 1." << endl;
	cin >> userSwitch;
	switch (userSwitch)
	{
	case 1:
		mainMenu();
		break;

		return 0;

	}
}