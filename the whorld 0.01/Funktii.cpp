#include "Functii.h"

#pragma once

const int LOCAL_HEIGHTOFCONSOLE = 30;
const int LOCAL_WIGHTOFCONSOLE = 120;

int genereting_ID()
{
	int a = 0;
	return a;
}
void Itn_To_Char_Screen(std::vector<std::vector<int>> int_Screen)
{
	char Screen_Char[(LOCAL_HEIGHTOFCONSOLE*LOCAL_WIGHTOFCONSOLE)+1];

	for (int i = LOCAL_HEIGHTOFCONSOLE - 1;i >= 0;i--/*int i = 0; i < LOCAL_HEIGHTOFCONSOLE; i++*/)
	{
		for (int j=0;j<LOCAL_WIGHTOFCONSOLE;j++)
		{
			switch (int_Screen[j][i])
			{
			case 0:
				Screen_Char[i * LOCAL_WIGHTOFCONSOLE + j] = ' ';
				break;
			case 1:
				Screen_Char[i*LOCAL_WIGHTOFCONSOLE + j]  = '1';
				break;
			case 2:
				Screen_Char[i * LOCAL_WIGHTOFCONSOLE + j] = '2';
				break;
			default:
				Screen_Char[i * LOCAL_WIGHTOFCONSOLE + j] = '?';
				break;
			}
			
		}
	}
	Screen_Char[LOCAL_HEIGHTOFCONSOLE * LOCAL_WIGHTOFCONSOLE] = '\0';
	printf("%s",Screen_Char);
}
bool Check_Distans(int Objekt_x, int Objekt_y, int Center_x, int Center_y)
{
	int X_Distans = Objekt_x - Center_x;
	int Y_Distans = Objekt_y - Center_y;
	if (fabs(X_Distans) < LOCAL_WIGHTOFCONSOLE/2 && fabs(Y_Distans) < LOCAL_HEIGHTOFCONSOLE/2)
	{
		return true;
	}
	else
	{
		return false;
	}
}