#include <iostream>
#include <list>
#pragma once
class Map
{
	int map_p[16][16];
	std::list<int> Entites_List;

public:
	Map();
	void output_info();
	void dvizenie();
	void create_new_ntt(int ID);
	void delete_ntt();
};

