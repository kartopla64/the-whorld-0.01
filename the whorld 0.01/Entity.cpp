#include "Entity.h"

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
