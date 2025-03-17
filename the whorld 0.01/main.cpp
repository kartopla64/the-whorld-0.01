#include <iostream>
#include <Windows.h>
#include "Map.h"
#include "Entity.h"
const int HEIGHTANDWIDHT = 16;
int Last_ID = 0;
void PrintWhorld(int (&map)[HEIGHTANDWIDHT][HEIGHTANDWIDHT])
{
	std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	for (int i =  0; i < HEIGHTANDWIDHT;i++)
	{
		for (int j =  0; j < HEIGHTANDWIDHT; j++)
		{
			std::cout << map[j][i] << " ";
		}
		std::cout << "\n";
	}
	std::cout << "\n\n\n";
}
int main() {

	Map World_1;
	Entity Armorstend("Armorstend",1, 1, 001);
	human Lona(false, 1, 100, 1, 5, "Lona", 0,0, 307);
	human minivan50(true, 1, 100,10, 5, "minivan50", 10, 10, 1917);
	std::cout << Lona.take_x() << "\n";
	std::cout << Lona.take_E_ID() << "\n";
	int WhorldMap[HEIGHTANDWIDHT][HEIGHTANDWIDHT] =
	{
		{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}
	};
	int WhorldMapEntity[HEIGHTANDWIDHT][HEIGHTANDWIDHT] = 
	{ 
		{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1} 
	};
	Lona.go(2, 2, WhorldMap[2][2], HEIGHTANDWIDHT);
	Lona.go(2, -1, WhorldMap[2][2], HEIGHTANDWIDHT);
	while (true)
	{
		if (GetAsyncKeyState(0x57))
		{
			//клавеша W (вверх)
			Lona.goUp(WhorldMap[Lona.take_x()][Lona.take_y()-1], HEIGHTANDWIDHT);
		}
		if (GetAsyncKeyState(0x41))
		{
			//клавеша A (влево)
			Lona.goLeft(WhorldMap[Lona.take_x()-1][Lona.take_y()], HEIGHTANDWIDHT);
		}
		if (GetAsyncKeyState(0x53))
		{
			//клавеша S (вниз)
			Lona.goDown(WhorldMap[Lona.take_x()][Lona.take_y()+1], HEIGHTANDWIDHT);
		}
		if (GetAsyncKeyState(0x44))
		{
			//клавеша D (вправо)
			Lona.goReight(WhorldMap[Lona.take_x()+1][Lona.take_y()], HEIGHTANDWIDHT);
		}
		WhorldMapEntity[minivan50.take_x()][minivan50.take_y()] = 5;
		WhorldMapEntity[Lona.take_x()][Lona.take_y()] = 4;
		system("cls");
		PrintWhorld(WhorldMapEntity);
		WhorldMapEntity[Lona.take_x()][Lona.take_y()] = 0;

		Sleep(100);
	}
	//std::cout << x;
	return 0;
}