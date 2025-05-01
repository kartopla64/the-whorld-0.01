#include <iostream>
#include <Windows.h>
#include "Map.h"
#include "Entity.h"
#include "Functii.h"
#pragma once

int main() {
	int HEIGHTOFCONSOLE = 30;
	int WIGHTOFCONSOLE = 120;
	char viev_deriktion = 'u';
	Map Word;
	Entity Armorstend("Armorstend",1, 1, 001);
	human Lona(false, 1,0, 100, 1, 5, "Lona", 0,0, 307);
	human minivan50(true, 1,0, 100,10, 5, "minivan50", 10, 10, 1917);
	Word.Set_Wight_And_Height_Of_Console(WIGHTOFCONSOLE, HEIGHTOFCONSOLE);
	Word.add_new_Entity(Lona);
	Word.add_new_Human(minivan50);
	std::vector<std::vector<int>> Screen(HEIGHTOFCONSOLE, std::vector<int>(WIGHTOFCONSOLE));
	Word.set_speed(99);
	while (true)
	{
		if (GetAsyncKeyState(0x57))
		{
			//клавеша W (вверх)
			viev_deriktion = 'u';
			Word.goUp();
		}
		if (GetAsyncKeyState(0x41))
		{
			//клавеша A (влево)
			viev_deriktion = 'l';
			Word.goLeft();
		}
		if (GetAsyncKeyState(0x53))
		{
			//клавеша S (вниз)
			viev_deriktion = 'd';
			Word.goDown();
		}
		if (GetAsyncKeyState(0x44))
		{
			//клавеша D (вправо)
			viev_deriktion = 'r';
			Word.goReight();
		}

		//=========================

		if (GetAsyncKeyState(0x26))//Стрелочка вверх
		{
			Word.spawn_entity('u'); 
		}
		if (GetAsyncKeyState(0x27))//Стрелочка вправо
		{
			Word.spawn_entity('r');
		}
		if (GetAsyncKeyState(0x25))//Стрелочка влево
		{
			Word.spawn_entity('l');
		}
		if (GetAsyncKeyState(0x28))//Стрелочка вниз
		{
			Word.spawn_entity('d');
		}

		//========================
		if (GetAsyncKeyState(0x45))// Английская Е
		{
			Word.revers_colision();
		}

		Itn_To_Char_Screen(Word.Map_Render());
		Sleep(10);
	}
	//std::cout << x;
	return 0;
}