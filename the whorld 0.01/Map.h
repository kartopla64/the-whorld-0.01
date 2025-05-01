#include <iostream>
#include <list>
#include <vector>
#include <Windows.h>
#include "Entity.h"
#include "Functii.h"
#pragma once



class Map
{
	std::vector<Entity> M_Entitys_List;
	std::vector<human> M_Human_List;
	std::vector<std::vector <int>> M_Screen;
	int M_HEIGHTOFCONSOLE;
	int M_WIGHTOFCONSOLE;
	int M_Centr_x;
	int M_Centr_y;
	int M_Speed;
	bool M_Colision;

public:
	Map();
	std::vector<std::vector<int>> Map_Render();
	void add_new_Entity(Entity);
	void add_new_Human(human);
	void Set_Wight_And_Height_Of_Console(int, int);
	void spawn_entity(char);
	void delete_ntt();
	void goUp();
	void goLeft();
	void goDown();
	void goReight();
	void revers_colision();
	void set_speed(int);
};

