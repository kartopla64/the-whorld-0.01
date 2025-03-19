#include "Map.h"

Map::Map()
{
}

void Map::Map_Render()
{
	std::vector<std::vector<int>> Screen(WIGHTOFCONSOLE, std::vector <int>(HEIGHTOFCONSOLE));
	for (int i = 0; i < HEIGHTOFCONSOLE; i++)
	{
		for (int j = 0; j < WIGHTOFCONSOLE; j++)
		{
			Screen[1][1];
		}
	}
}

void Map::create_new_Entity(Entity New_Entity)
{
	M_Entitys_List.push_back(New_Entity);
}

void Map::delete_ntt()
{
}
