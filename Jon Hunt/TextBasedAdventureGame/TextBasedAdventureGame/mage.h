#pragma once
#include "player.h"



class Mage : public Player {

public:
	Mage(string Name, string Class, string Race);
	virtual ~Mage() override;
	void attackAction();

};