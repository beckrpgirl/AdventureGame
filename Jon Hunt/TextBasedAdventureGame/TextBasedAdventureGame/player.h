#pragma once
#include <string>

class Player {

public:
	Player(string Name, string Class, string Race);
	virtual ~Player();

	void chooseClass();
	void setName();
	void setRace();
	virtual void attackAction() = 0;

private:
	std::string pName;
	std::string pClass;
	std::string pRace;
	int playerRace;
	int playerClass;

};