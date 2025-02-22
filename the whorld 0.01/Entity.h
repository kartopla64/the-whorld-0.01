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

