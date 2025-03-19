#include <iostream>
#include <Windows.h>
#include "Map.h"
#include "Entity.h"
const int HEIGHTOFCONSOLE = 48;
const int WIGHTOFCONSOLE = 208;
int main() {

	Map World_1;
	Entity Armorstend("Armorstend",1, 1, 001);
	human Lona(false, 1, 100, 1, 5, "Lona", 0,0, 307);
	human minivan50(true, 1, 100,10, 5, "minivan50", 10, 10, 1917);
	while (true)
	{
		//if (GetAsyncKeyState(0x57))
		//{
		//	//клавеша W (вверх)
		//	Lona.goUp(WhorldMap[Lona.take_x()][Lona.take_y()-1], HEIGHTANDWIDHT);
		//}
		//if (GetAsyncKeyState(0x41))
		//{
		//	//клавеша A (влево)
		//	Lona.goLeft(WhorldMap[Lona.take_x()-1][Lona.take_y()], HEIGHTANDWIDHT);
		//}
		//if (GetAsyncKeyState(0x53))
		//{
		//	//клавеша S (вниз)
		//	Lona.goDown(WhorldMap[Lona.take_x()][Lona.take_y()+1], HEIGHTANDWIDHT);
		//}
		//if (GetAsyncKeyState(0x44))
		//{
		//	//клавеша D (вправо)
		//	Lona.goReight(WhorldMap[Lona.take_x()+1][Lona.take_y()], HEIGHTANDWIDHT);
		//}

		Sleep(100);
	}
	//std::cout << x;
	return 0;
}