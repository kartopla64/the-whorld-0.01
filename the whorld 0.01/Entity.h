#include <iostream>
#include <string>
#pragma once
class Entity
{
protected:
	std::string E_name;
	int E_x;
	int E_y;
	int E_ID;
	int E_age;
public:
	Entity();
	Entity(std::string,int x,int y, int ID);
	int take_x();
	int take_y();
	int take_E_ID();

};


class human : public Entity
{
	bool h_pol;
	short int h_character;
	int h_protection;
	int h_heal;
	int h_speed;
	int h_strench;
public:
	human();
	human(bool pol, short int charakter, int protection, int heal, int speed, int strenght);
	human(bool pol, short int charakter, int protection, int heal, int speed, int strenght, std::string name, int x, int y, int ID);
	void take_damage(int);
	void restore_lives(int);
	void go(int, int, int, int);
	void goUp(int, int);
	void goLeft(int, int);
	void goDown(int, int);
	void goReight(int, int);
};

