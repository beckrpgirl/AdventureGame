#include <iostream>

using namespace std;

int main()
{

	/*Player mainCharacter = new Player();
	Warrior mainCharacter = new Warrior();*/
		int choiceOne_Path;
		cout << " Your friends dared you to enter a haunted house...what will you do?" << endl;
		cout << "\t >> Enter '1' to enter to living room?" << endl;
		cout << "\t >> Enter '2' chicken out" << endl;
retry:
		cout << "\nEnter your choice: ";
			cin >> choiceOne_Path;
	if (choiceOne_Path == 1)
	{
		cout << "You are now in the living room" << endl;
		cout << "Oh no, something is moving the chair in the corner" << endl;
		cout << "The chair has now been thrown across the room." << endl;
		cout << "Enter '3' to run to the kitchen" << endl;
		cout << "Enter 4 to run upstairs" << endl;
		cin >> choiceOne_Path;
		
		
			if (choiceOne_Path == 3)
			{
				cout << "you ran to the kitchen" << endl;
				cout << "There is a knife thrown at you from the cupboard" << endl;
				cout << "You dodged the knife" << endl;
				cout << "Enter 5 to run to the cupboard" << endl;
				cout << "Enter 6 to run out of the house" << endl;
				cin >> choiceOne_Path;

				if (choiceOne_Path == 5)
				{
					cout << "you ran to the cupboard" << endl;
					cout << "Another knife was thrown at you" << endl;
					cout << "You ducked just in time" << endl;
					cout << "Yet another knife was thrown" << endl;
					cout << "You died" << endl;

					system("pause");
					return 0;
				}

				else if (choiceOne_Path == 6)
				{
					cout << "you ran out of the house just in time" << endl;
					
					system("pause");
					return 0;
				}
					
			}

			else if (choiceOne_Path == 4)
			{
				cout << "you ran upstairs" << endl;
				cout << "A creepy ghost lady comes rushing at you down the hall" << endl;
				cout << "Enter 7 to jump out of window" << endl;
				cout << "Enter 8 to rush to the ghost lady" << endl;

				if (choiceOne_Path == 7)
				{
					cout << "you jumped out of the window" << endl;
					cout << "You broke your leg but saved your life" << endl;
					system("pause");
					return 0;
				}

				else if (choiceOne_Path == 8)
				{
					cout << "you ran to the creepy ghost lady" << endl;
					cout << "she killed you" << endl;

					system("pause");
					return 0;
				}
			}
	
	}
	else if (choiceOne_Path == 2)
	{

		cout << "You chickened out" << endl;
			system("pause");
		   return 0;
		
	}
	else
	{
		cout << " Press either '1' or '2', nothing else!" << endl;
		goto retry;
	}

	
	


	
	


}

