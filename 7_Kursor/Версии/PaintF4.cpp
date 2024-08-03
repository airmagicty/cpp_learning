#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

void Cursor(int x, int y)
{
    COORD position = {x,y}; //позиция x и y
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsole, position);
}
// 113q 114r
/*
void verh()
{
	if (char2 > 96 && char2 < 240) 
	{
		char2++; char1 = char2;
	}
}

void vnis()
{
	if (char2 > 96 && char2 < 240) 
	{
		char2--; char1 = char2;
	}
}*/

int main ()
{
    int x=0, y=0, vbr;
    
    char char1 = 219; // st
    int char2;
    char2 = char1;
    
    Cursor(0,0);
    cout << "|==============================================================================|" <<
			"||                                                                            ||" <<
			"||                                                                            ||" <<
			"||                                                                            ||" <<
			"||                                                                            ||" <<
			"||                                                                            ||" <<
			"||                                                                            ||" <<
			"||                                                                            ||" <<
			"||                                                                            ||" <<
			"||                                                                            ||" <<
			"K|                                                                            ||" <<
			"i|                                                                            ||" <<
			"s|                                                                            ||" << 
			"t|                                                                            ||" << char1 <<
			 "|                                                                            ||" <<
			"||                                                                            ||" <<
			"||                                                                            ||" <<
			"||                                                                            ||" <<
			"||                                                                            ||" <<
			"||                                                                            ||" <<
			"||                                                                            ||" <<
			"||                                                                            ||" <<
			"Y|                                                                            ||" <<
			"||                                                                            ||" <<
			"|====X=========================================================================>";
	Cursor(0,0);
	Cursor(77,23);
	x=77; y=23;
    
    while (true)
    {
	while (x > 1 && x < 78 && y < 24 && y > 0)
    {
    	vbr=getch();
    	switch (vbr)
    	{
    		case 77: x++; Cursor(x,y); break;	// >
    		case 75: x--; Cursor(x,y); break;	// <
    		case 80: y++; Cursor(x,y); break;	// v
    		case 72: y--; Cursor(x,y); break;	// ^
    		// Str
    		case 32: cout << char1; Cursor(x,y); x++; Cursor(x,y); break;			// st
    		case 83: cout << ' '; Cursor(x,y); x++; Cursor(x,y); break;			// del
    		// Dop
			case 119: ; break;
    		case 115: ; break;
    		case 113: char1 = 219; break;
    		// Out
    		case 27: Cursor(x=0,y=24); return 0;	// out
		}
	}
	Cursor(x=39,y=12);
	}
    return 0;
}
