#include <string>
#include "Entity.h"
#pragma once
class human: public Entity
{
	bool h_pol;
	short int h_character;
	int h_heal;
	int h_speed;
	int h_strench;
public:
	human();
	human(bool pol, short int charakter, int heal, int speed, int strenght);
	human(bool pol, short int charakter, int heal, int speed, int strenght,std::string name,int x,int y,int ID);
	void take_damage(int);
	void go(int,int,int,int);
	void goUp(int, int);
	void goLeft(int, int);
	void goDown(int, int);
	void goReight(int, int);
};

