#include "Functii.h"

#pragma once

const int LOCAL_HEIGHTOFCONSOLE = 48;
const int LOCAL_WIGHTOFCONSOLE = 208;

int genereting_ID()
{
	int a = 0;
	return a;
}
void Itn_To_Char_Screen(std::vector<std::vector<int>> int_Screen)
{
	char Screen_Char[(LOCAL_HEIGHTOFCONSOLE*LOCAL_WIGHTOFCONSOLE)+1];
	for (int i = 0;i < LOCAL_HEIGHTOFCONSOLE;i++)
	{
		for (int j=0;j<LOCAL_WIGHTOFCONSOLE;j++)
		{
			switch (int_Screen[j][i])
			{
			case 1:
				//std::cout << "lol";
				Screen_Char[i*LOCAL_WIGHTOFCONSOLE + j]  = '1';
				break;
			case 2:
				Screen_Char[i * LOCAL_WIGHTOFCONSOLE + j] = '2';
				break;
			default:
				Screen_Char[i * LOCAL_WIGHTOFCONSOLE + j] = ' ';
				break;
			}
			
		}
	}
	Screen_Char[LOCAL_HEIGHTOFCONSOLE * LOCAL_WIGHTOFCONSOLE] = '\0';
	printf("%s",Screen_Char);
}