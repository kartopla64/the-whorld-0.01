#include "Map.h"

Map::Map()
{
}

std::vector<std::vector<int>> Map::Map_Render()
{
	std::vector<std::vector<int>> Screen(WIGHTOFCONSOLE, std::vector <int>(HEIGHTOFCONSOLE));
	for (int i = 0; i < M_Entitys_List.size(); i++)
	{
			Screen[(M_Entitys_List[i].take_x() - M_Centr_x) + WIGHTOFCONSOLE/2][(M_Entitys_List[i].take_y() - M_Centr_y + HEIGHTOFCONSOLE/2)] = 1;
	}
	std::vector<std::vector<int>> Screen(WIGHTOFCONSOLE, std::vector <int>(HEIGHTOFCONSOLE));
	for (int i = 0; i < M_Human_List.size(); i++)
	{
		Screen[(M_Human_List[i].take_x() - M_Centr_x) + WIGHTOFCONSOLE / 2][(M_Human_List[i].take_y() - M_Centr_y + HEIGHTOFCONSOLE / 2)] = 1;
	}
}

void Map::create_new_Entity(Entity New_Entity)
{
	M_Entitys_List.push_back(New_Entity);
}

void Map::delete_ntt()
{
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
