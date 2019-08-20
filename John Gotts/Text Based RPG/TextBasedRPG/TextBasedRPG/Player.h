
#ifndef PLAYER_H
#define PLAYER_H
#include <string>


class Player {

	public:
		std::string Name;
		std::string Race;
		std::string Class;
		char input;

		void ClassOption();
		void RaceOptions();
		void NameCollect();


};

#endif