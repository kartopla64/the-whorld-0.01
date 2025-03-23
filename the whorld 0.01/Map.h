#include <iostream>
#include <list>
#include <vector>
#include "Entity.h"
#pragma once



class Map
{
	std::vector<Entity> M_Entitys_List;
	std::vector<human> M_Human_List;
	int M_HEIGHTOFCONSOLE;
	int M_WIGHTOFCONSOLE;
	int M_Centr_x;
	int M_Centr_y;

public:
	Map();
	std::vector<std::vector<int>> Map_Render();
	void add_new_Entity(Entity);
	void Set_Wight_And_Height_Of_Console(int, int);
	void delete_ntt();
	void goUp();
	void goLeft();
	void goDown();
	void goReight();
};

