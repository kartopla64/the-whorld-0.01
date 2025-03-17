#include "Entity.h"
#include <string>

Entity::Entity()
{
	std::cout << "Entity "<< E_name <<" successfully created with auto initialization\n";
}

Entity::Entity(std::string name,int x, int y, int ID)
	: E_name(name), E_x(x),E_y(y),E_ID(ID),E_age(0)
{
	std::cout << "Entity " << E_name << " successfully created with manual initialization\n";
}

int Entity::take_x()
{
	return E_x;
}

int Entity::take_y()
{
	return E_y;
}

int Entity::take_E_ID()
{
	return E_ID;
}

human::human()
{
	std::cout << "Human " << E_name << " successfully created with auto initialization\n";
}

human::human(bool pol, short int charakter, int heal, int speed, int strench)
	: h_pol(pol), h_character(charakter), h_heal(heal), h_speed(speed), h_strench(strench)
{
	std::cout << "Human " << E_name << " successfully created with manual initialization\n";
}

human::human(bool pol, short int charakter, int heal, int speed, int strenght, std::string name, int x, int y, int ID)
	: h_pol(pol), h_character(charakter), h_heal(heal), h_speed(speed), h_strench(strenght), Entity(name, x, y, ID)
{
}

void human::take_damage(int damage)
{
	h_heal -= damage;
}

void human::go(int x, int y, int mesto, int constantagranizi)
{
	if (mesto != 0 or 0 > x or x > constantagranizi or 0 > y or y > constantagranizi)
	{
		std::cout << "You can't go here";
		return;
	}
	std::cout << "You go here\n";
	E_x = x;
	E_y = y;
}

void human::goUp(int mesto, int constantagranizi)
{
	if (mesto != 0 or 0 > E_x or E_x > constantagranizi or 0 > E_y - 1 or E_y - 1 > constantagranizi)
	{
		std::cout << "You can't go here(U)\n";
		return;
	}

	E_y--;
	std::cout << "You go here(" << E_x << ":" << E_y << ")\n";
}

void human::goLeft(int mesto, int constantagranizi)
{
	if (mesto != 0 or 0 > E_x - 1 or E_x - 1 > constantagranizi or 0 > E_y or E_y > constantagranizi)
	{
		std::cout << "You can't go here(L)\n";
		return;
	}

	E_x--;
	std::cout << "You go here(" << E_x << ":" << E_y << ")\n";
}
void human::goDown(int mesto, int constantagranizi)
{
	if (mesto != 0 or 0 > E_x or E_x > constantagranizi or 0 > E_y + 1 or E_y + 1 > constantagranizi)
	{
		std::cout << "You can't go here(D)\n";
		return;
	}

	E_y++;
	std::cout << "You go here(" << E_x << ":" << E_y << ")\n";
}
void human::goReight(int mesto, int constantagranizi)
{
	if (mesto != 0 or 0 > E_x + 1 or E_x + 1 > constantagranizi or 0 > E_y or E_y > constantagranizi)
	{
		std::cout << "You can't go here(R)\n";
		return;
	}

	E_x++;
	std::cout << "You go here(" << E_x << ":" << E_y << ")\n";
}