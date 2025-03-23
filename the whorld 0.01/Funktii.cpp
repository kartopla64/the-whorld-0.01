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
	char Screen_Char[LOCAL_HEIGHTOFCONSOLE*LOCAL_WIGHTOFCONSOLE+1];
	for (int i = 0;i < LOCAL_HEIGHTOFCONSOLE;i++)
	{
		for (int j=0;j<LOCAL_WIGHTOFCONSOLE;j++)
		{
			Screen_Char[i*j]  =  int_Screen[j][i];
		}
	}
	Screen_Char[LOCAL_HEIGHTOFCONSOLE * LOCAL_WIGHTOFCONSOLE + 1] = '\0';
	printf(Screen_Char);
}