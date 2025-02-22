#include "Map.h"

Map::Map()
	: map_p(),Entites_List()
{
}

void Map::create_new_ntt(int ID)
{
	Entites_List.push_front(ID);
}
