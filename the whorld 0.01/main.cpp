#include <iostream>
#include <Windows.h>
#include "Map.h"
#include "Entity.h"
const int HEIGHTOFCONSOLE = 48;
const int WIGHTOFCONSOLE = 208;
int main() {

	Map Word;
	Entity Armorstend("Armorstend",1, 1, 001);
	human Lona(false, 1, 100, 1, 5, "Lona", 0,0, 307);
	human minivan50(true, 1, 100,10, 5, "minivan50", 10, 10, 1917);
	while (true)
	{
		if (GetAsyncKeyState(0x57))
		{
			//������� W (�����)
			Word.goUp();
		}
		if (GetAsyncKeyState(0x41))
		{
			//������� A (�����)
			Word.goLeft();
		}
		if (GetAsyncKeyState(0x53))
		{
			//������� S (����)
			Word.goDown();
		}
		if (GetAsyncKeyState(0x44))
		{
			//������� D (������)
			Word.goReight();
		}

		Sleep(100);
	}
	//std::cout << x;
	return 0;
}