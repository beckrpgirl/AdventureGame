#include <iostream>
#include <string>

#include "main.h"

using namespace std;

string action;
string choice;

Main m;

int main() {

	m.welcome();

	if (choice == "enter" || choice == "1") {

		m.roomText();

	}
	else if (choice == "Quit" || choice == "2") {

		cout << "\t\tCome again when you are ready adventurer!\n\n";
		return 0;

	}
	else {

		cout << "\nNot a valid choice, try again: ";
		cin >> choice;

	}

}

void Main::roomText() {

	cout << "You enter a dark room, hearing creatures in the distance.\n";
	cout << "1 - look\n2 - move\n3 - run\n";
	cout << "What do you do adventurer (type the word)? ";
	cin >> action;

	m.actions();

}

void Main::actions() {

	while (action != "run" || action != "r") {

		if (action == "look") {

			cout << "\nYou look around the room and see claw marks and scratches all over the walls lit up only by\n";
			cout << "the faint light coming from your torch.What could have made these? What now? ";
			cin >> action;

		}
		else if (action == "move") {

			cout << "\nYou push deeper into the catacombs, only to find a sleeping dragon! what do you do?\n";
			cout << "1 - sneak\n2 - hide\n3 - run\n";
			cin >> action;

		}
		else if (action == "run" || action == "r") {

			cout << "\n\n\t\tHAHAHA scaredy cat!\n\n";
			exit(0);

		}
		else if (action == "sneak") {

			cout << "You sneak past the sleeping dragon with ease to find a beautiful maiden on the other side and a hole\n";
			cout << "in the wall as she was planning to escape!\n\n\t\tYou did it adventurer!\n\n";
			exit(0);

		}
		else if (action == "hide") {

			cout << "You hear crying from beyond the dragon, it sounds like someone is in trouble!\n";
			cout << "grow a back bone scaredy cat and stop hiding!\nWhat now?";
			cin >> action;

		}
		else {

			cout << "Not a valid input scaredy cat, you might as well run! What will it be? ";
			cin >> action;

		}


	}

}

void Main::welcome() {

	cout << "\tWelcome to the game adventurer!\n\n";
	cout << "In this game you will explore a very brief dungeon!\n";
	cout << "Would you like to enter?\n1 - Enter\n2 - Quit\n";
	cin >> choice;

}