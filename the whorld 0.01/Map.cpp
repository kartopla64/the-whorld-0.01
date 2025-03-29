#include "Map.h"
#pragma once

Map::Map()
: M_HEIGHTOFCONSOLE(0), M_WIGHTOFCONSOLE(0),M_Centr_x(0),M_Centr_y(0)
{
}

std::vector<std::vector<int>> Map::Map_Render()
{
	std::vector<std::vector<int>> Screen(M_WIGHTOFCONSOLE, std::vector <int>(M_HEIGHTOFCONSOLE));
	for (int i = 0; i < M_Entitys_List.size(); i++)
	{
		if (Check_Distans(M_Entitys_List[i].take_x(), M_Entitys_List[i].take_y(), M_Centr_x, M_Centr_y))
		{
			Screen[(M_Entitys_List[i].take_x() - M_Centr_x) + M_WIGHTOFCONSOLE/2][(M_Entitys_List[i].take_y() - M_Centr_y + M_HEIGHTOFCONSOLE/2)] = 1;
		}
			
	}
	for (int i = 0; i < M_Human_List.size(); i++)
	{
		if (Check_Distans(M_Human_List[i].take_x(), M_Human_List[i].take_y(), M_Centr_x, M_Centr_y))
		{
		Screen[(M_Human_List[i].take_x() - M_Centr_x) + M_WIGHTOFCONSOLE / 2][(M_Human_List[i].take_y() - M_Centr_y + M_HEIGHTOFCONSOLE / 2)] = 2;
		}
	}
	return Screen;
}

void Map::add_new_Entity(Entity New_Entity)
{
	M_Entitys_List.push_back(New_Entity);
}

void Map::add_new_Human(human New_Human)
{
	M_Human_List.push_back(New_Human);
}

void Map::delete_ntt()
{
}
void Map::Set_Wight_And_Height_Of_Console(int Wight,int Height)
{
	M_HEIGHTOFCONSOLE = Height;
	M_WIGHTOFCONSOLE = Wight;
}

void Map::goUp()
{
	M_Centr_y++;
}

void Map::goLeft()
{
	M_Centr_x--;
}

void Map::goDown()
{
	M_Centr_y--;
}

void Map::goReight()
{
	M_Centr_x++;
}
