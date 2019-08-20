#include "player.h"
#include <string>
#include <iostream>

using namespace std;


Player::Player(string Name, string Class, string Race){

	chooseClass();
	setRace();
	setName();

}

void Player::chooseClass() {

	cout << "Please choose a class to play as:\n";
	cout << "\t1 - Mage\n";
	cout << "\t2 - Warrior\n";
	cout << "\t3 - Ghost Buster\n";
	cout << "\t0 - Quit\n";

	do {

		cin >> playerClass;

		switch (playerClass) {

		case 1:
			//pClass = "Mage";
			break;
		case 2:
			//pClass = "Warrior";
			break;
		case 3:
			//pClass = "Ghost Buster";
			break;
		default:
			cout << "Not valid, try again, this time pick a valid one!\n";

		}

	} while (playerClass != 0);

}

void Player::setName(){

	cout << "What is your name? ";
	//cin >> //pName;

}

void Player::setRace(){

	cout << "What race would you like to be?\n";
	cout << "\t1 - Human\n";
	cout << "\t2 - Ghost\n";
	cout << "\t3 - Alien\n";
	

	do {

		cin >> playerRace;

		switch (playerRace) {

		case 1:
			//pRace = "Human";
			break;
		case 2:
			//pRace = "Ghost";
			break;
		case 3:
			//pRace = "Alien";
			break;
		default:
			cout << "Not valid, try again, this time pick a valid one!\n";

		}

	} while (playerClass != 0);

}

void Player::attackAction(){


}
