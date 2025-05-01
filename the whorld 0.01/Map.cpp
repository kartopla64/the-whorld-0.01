#include "Map.h"
#pragma once

Map::Map()
: M_HEIGHTOFCONSOLE(120), M_WIGHTOFCONSOLE(40),M_Screen(M_HEIGHTOFCONSOLE,std::vector<int> (M_WIGHTOFCONSOLE)) ,M_Centr_x(0),M_Centr_y(0),M_Colision(true),M_Speed(0)
{
}

std::vector<std::vector<int>> Map::Map_Render()
{
	std::vector<std::vector<int>> Screen(M_WIGHTOFCONSOLE, std::vector <int>(M_HEIGHTOFCONSOLE));
	std::vector<std::vector<int>> Screen_invers(M_WIGHTOFCONSOLE, std::vector <int>(M_HEIGHTOFCONSOLE));
	for (int i = 0; i < M_Entitys_List.size(); i++)//перебор списка всех энтити
	{
		if (Check_Distans(M_Entitys_List[i].take_x(), M_Entitys_List[i].take_y(), M_Centr_x, M_Centr_y))//проверка,попадает ли объект в зону рендеринга
		{
			Screen[(M_Entitys_List[i].take_x() - M_Centr_x) + M_WIGHTOFCONSOLE/2][(M_Entitys_List[i].take_y() - M_Centr_y + M_HEIGHTOFCONSOLE/2)] = 1;//все энтити обозначены как "1"
		}
			
	}
	for (int i = 0; i < M_Human_List.size(); i++)//перебор всех объектов класса "Human"
	{
		if (Check_Distans(M_Human_List[i].take_x(), M_Human_List[i].take_y(), M_Centr_x, M_Centr_y))//ѕопадают ли они в зону видимости?
		{
		Screen[(M_Human_List[i].take_x() - M_Centr_x) + M_WIGHTOFCONSOLE / 2][(M_Human_List[i].take_y() - M_Centr_y + M_HEIGHTOFCONSOLE / 2)] = 2;
		}
	}
	/*¬ св€зи с тем что двумерный массив считываетьс€ как то так     
		  --------->         
		 |
		 |
		 |
		 |
		 V
	  приходитс€ его переворачивать, что бы он был как нормальный график,а не с инвертированным у
	  это как раз и происходит в цикле под этим коментарием
	*/
	Screen[M_WIGHTOFCONSOLE/2][M_HEIGHTOFCONSOLE/2] = 1; //игрок будет тоже отображатьс€ как "Human" ибо таковым и €вл€етьс€
	for (int i = 0;i < M_HEIGHTOFCONSOLE;i++)
	{
		for (int j = 0;j < M_WIGHTOFCONSOLE;j++)
		{
			Screen_invers[j][i] = Screen[j][M_HEIGHTOFCONSOLE - (i + 1)];
		}
	}
	
	M_Screen = Screen;
	return Screen_invers;
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

void Map::spawn_entity(char viev)
{
	switch (viev)
	{
	case 'u':
		if (M_Screen[M_WIGHTOFCONSOLE / 2][M_HEIGHTOFCONSOLE / 2 + 1] == 0)
		{
			Entity Block("Block", M_Centr_x, M_Centr_y + 1, 6);

			add_new_Entity(Block);
		}
		break;
	case 'r':
		if (M_Screen[M_WIGHTOFCONSOLE / 2 + 1][M_HEIGHTOFCONSOLE / 2] == 0)
		{
			Entity Block("Block", M_Centr_x + 1, M_Centr_y, 6);
			add_new_Entity(Block);
		}
		break;
	case 'l':
		if (M_Screen[M_WIGHTOFCONSOLE / 2 - 1][M_HEIGHTOFCONSOLE / 2] == 0)
		{
			Entity Block("Block",M_Centr_x - 1,M_Centr_y, 6);
			add_new_Entity(Block);
		}
		break;
	case 'd':
		if (M_Screen[M_WIGHTOFCONSOLE / 2][M_HEIGHTOFCONSOLE / 2 - 1] == 0)
		{
			Entity Block("Block", M_Centr_x, M_Centr_y - 1, 6);
			add_new_Entity(Block);
		}
		break;
	default:
		
		break;
	}
}

void Map::goUp()
{
	if (M_Screen[M_WIGHTOFCONSOLE / 2][M_HEIGHTOFCONSOLE/2 + 1] == 0 || !M_Colision)
	M_Centr_y++;
	//Sleep(100 - M_Speed);
}

void Map::goLeft()
{
	if (M_Screen[M_WIGHTOFCONSOLE / 2 - 1][M_HEIGHTOFCONSOLE / 2] == 0 || !M_Colision)
	M_Centr_x--;
	//Sleep(100 - M_Speed);
}

void Map::goDown()
{
	if (M_Screen[M_WIGHTOFCONSOLE / 2][M_HEIGHTOFCONSOLE / 2 - 1] == 0 || !M_Colision)
	M_Centr_y--;
	//Sleep(100 - M_Speed);
}

void Map::goReight()
{
	if (M_Screen[M_WIGHTOFCONSOLE / 2+ 1][M_HEIGHTOFCONSOLE / 2 ] == 0 || !M_Colision)
	M_Centr_x++;
	//Sleep(100 - M_Speed);
}

void Map::revers_colision()
{
	M_Colision = !M_Colision;
}

void Map::set_speed(int speed)
{
	M_Speed = speed;
}
