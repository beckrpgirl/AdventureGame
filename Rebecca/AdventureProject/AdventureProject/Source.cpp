#include <iostream>
#include <string>
#include "rooms.h"


using namespace std;


int main() {

	string Name;
	room Room;
	char input;

	cout << "Welcome to your great adventure." << endl;
	cout << "Please give your name:" << endl;
	cout << ">>";
	cin >> Name;
	cout << endl;
	cout << "Turning on CAPSLOCK would be helpful to yourself" << endl;
	cout << Name << ", Prepare yourself the adventure is about to begin, in which direction do you with to travel?" << endl;



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
			//open new room 
			Room.one();
			break;
		case 'E':
			cout << "You have ran into a wall" << endl;
			break;
		case 'W': 
			cout << "You have ran into a wall" << endl;
			break;
		case 'Q':
			cout << "Goodbye!" << endl;
			break;
		default:
			cout << "Invalid input, please try again." << endl;
			break;
		}
	} while (input != 'Q');




	system("pause");
	return 0;
}