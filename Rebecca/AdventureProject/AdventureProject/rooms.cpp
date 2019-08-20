#include <iostream>
#include <string>
#include "rooms.h"


using namespace std;

void room::one() {

	cout << "As you walk into the new room, you hear a door behind you close and the clicking of a lock, you look about, finding yourself in another hallway." << endl;
	cout <<"In which direction do you with to travel?" << endl;
	cout << "(N)orth, (S)outh, (E)ast, (W)est" << endl;
	cout << ">>";
	cin >> input;


	do {
		cout << "(N)orth, (S)outh, (E)ast, (W)est" << endl;
		cout << ">>";
		cin >> input;

		switch (input)
		{
		case 'N':
			cout << "There is a large locked door behind you." << endl;
			break;
		case 'S':
			cout << "You have ran into a wall" << endl;
			break;
		case 'E':
			cout << "You have ran into a wall" << endl;
			break;
		case 'W':
			//new room
			two();
			break;
		case 'Q':
			cout << "Goodbye!" << endl;
			break;
		default:
			cout << "Invalid input, please try again." << endl;
			break;
		}
	} while (input != 'Q');
}

void room::two() {

	cout << "Walking into the room, you run straight into a dragon! He slowly lifts his head, and looks at you, not very happy to be woken from his nap." << endl;
	cout << "What do you wish to do next?" << endl;
	do {
		cout << "(A)ttack, (R)un away, (S)ay your sorry" << endl;
		cout << ">>";
		cin >> input;
		switch (input)
		{
		case 'A':
			cout << "Taking out your sword you try to attack the dragon!" << endl;
			cout << "The dragon just looks at you as if he's laughing and then eats you in one bite, commenting what a small snack you are." << endl;
			died();
			break;
		case 'R':
			cout << "You turn quickly and run back the way you came." << endl;
			one();
			break;
		case 'S':
			cout << "You quickly mutter that your sorry for waking the dragon, he nods to you, 'No harm done, let me get out of your way' with that he moves his tail and exposes the door to the south." << endl;
			three();
			break;
		case 'Q':
			cout << "Goodbye!" << endl;
			break;
		default:
			cout << "Invalid input, please try again." << endl;
			break;
		}
	} while (input != 'Q');
}

void room::three() {

	cout << "Past the dragon you are now safely on your way home. Hope you enjoyed your adventure!" << endl;


}

void room::died() {

	cout << "You have died" << endl;
}