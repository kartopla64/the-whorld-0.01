#include <iostream>
#include <list>
#include <vector>
#include "Entity.h"
#pragma once

const int HEIGHTOFCONSOLE = 48;
const int WIGHTOFCONSOLE = 208;
int M_Centr_x;
int M_Centr_y;

class Map
{
	std::vector<Entity> M_Entitys_List;
	std::vector<human> M_Human_List;

public:
	Map();
	std::vector<std::vector<int>> Map_Render();
	void create_new_Entity(Entity);
	void delete_ntt();
	void goUp();
	void goLeft();
	void goDown();
	void goReight();
};

