#include <iostream>
#include <string>

#include "Player.h"

using namespace std;


void Player::ClassOption() {

	cout << "Which class to you with to play?" << endl;
	cout << "(H)unter, (M)age, (W)arrior" << endl;
	do {
		cout << ">>" << endl;
		cin >> input;
		switch (input){
			case 'H':
				Class = "Hunter";
				//Hunter::something;
				break;
			case 'M':
				Class = "Mage";
				//Hunter::something;
				break;
			case 'W':
				Class = "Warrior";
				//Hunter::something;
				break;
			default:
				cout << "Invalid input";
		}


	}while (input != 'Q');



}

void Player::RaceOptions() {

	cout << "Which race to you with to play?" << endl;
	cout << "(E)lf, (D)warf or (H)uman" << endl;
	do {
		cout << ">>" << endl;
		cin >> input;
		switch (input) {
		case 'E':
			Race = "Elf";
			//Hunter::something;
			break;
		case 'D':
			Race = "Dwarf";
			//Hunter::something;
			break;
		case 'H':
			Race = "Human";
			//Hunter::something;
			break;
		default:
			cout << "Invalid input";
		}


	} while (input != 'Q');

}

void Player::NameCollect() {

	cout << "What is your name?" << endl;
	cin >> Name;

}

