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

int main ()
{
    int x=0, y=0, vbr;
    
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
			"||                                                                            ||" <<
			"||                                                                            ||" <<
			"||                                                                            ||" <<
			"||                                                                            ||" <<
			"||                                                                            ||" <<
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
    
    char char1 = 219; // st
    char char2 = ' ';
    char char3 = 178; // st-1
    
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
    		case 32: cout << char1; Cursor(x,y); x++; Cursor(x,y); break;		// st
    		case 83: cout << char2; Cursor(x,y); x++; Cursor(x,y); break;		// del
    		case 13: cout << char3; Cursor(x,y); x++; Cursor(x,y); break;		// st-1
    		//178 177 176
		}
	}
	Cursor(x=39,y=12);
	}
    return 0;
}
