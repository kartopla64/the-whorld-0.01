#include <iostream>
#include <Windows.h>
#include "Map.h"
#include "Entity.h"
#include "Functii.h"
#pragma once

int main() {
	int HEIGHTOFCONSOLE = 48;
	int WIGHTOFCONSOLE = 208;
	Map Word;
	Entity Armorstend("Armorstend",1, 1, 001);
	human Lona(false, 1, 100, 1, 5, "Lona", 0,0, 307);
	human minivan50(true, 1, 100,10, 5, "minivan50", 10, 10, 1917);
	Word.Set_Wight_And_Height_Of_Console(WIGHTOFCONSOLE, HEIGHTOFCONSOLE);
	std::vector<std::vector<int>> Screen(HEIGHTOFCONSOLE, std::vector<int>(WIGHTOFCONSOLE));
	while (true)
	{
		if (GetAsyncKeyState(0x57))
		{
			//клавеша W (вверх)
			Word.goUp();
		}
		if (GetAsyncKeyState(0x41))
		{
			//клавеша A (влево)
			Word.goLeft();
		}
		if (GetAsyncKeyState(0x53))
		{
			//клавеша S (вниз)
			Word.goDown();
		}
		if (GetAsyncKeyState(0x44))
		{
			//клавеша D (вправо)
			Word.goReight();
		}
		Itn_To_Char_Screen(Word.Map_Render());
		Sleep(100);
	}
	//std::cout << x;
	return 0;
}