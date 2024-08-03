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
void verh(char1, char2)
{
	if (char2 > 10 && char2 < 262) 
	{
		char2++; char1 = char2;
	}
}

void vnis(char1, char2) 
{
	if (char2 > 10 && char2 < 262) 
	{
		char2--; char1 = char2;
	}
} */

/*
void revers()
{
	Cursor(0,0);
    cout << "|==============================================================================|" <<
			"||                                                                            ||" <<
			"||                                                                            ||" <<
			"||                                                                            ||" <<
			"||                                                                            ||" <<
			"||                                                                            ||" <<
			"II                                                                            ||" << char1 <<
			 "I                                                                            ||" <<
			"II                                                                            ||" <<
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
			"|=X====[Menu]-|w->|s-<|q-revers|===============================================|";
	Cursor(0,0);
	char1 = 219; 
	Cursor(0,7); 
	cout << char1;
	Cursor(77,23);
	x=77; y=23;
}
*/

int main ()
{
    int x=0, y=0, vbr;
    
    char char1 = 219; // st
//	int char2;
//	char2 = char1;
    
    Cursor(0,0);
    cout << "|==============================================================================|" <<
			"||                                                                            ||" <<
			"||                                                                            ||" <<
			"||                                                                            ||" <<
			"||                                                                            ||" <<
			"||                                                                            ||" <<
			"II                                                                            ||" << char1 <<
			 "I                                                                            ||" <<
			"II                                                                            ||" <<
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
			"|=X====[Menu]-|w->|s-<|q-revers|===============================================|";
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
			case 119: char1++; Cursor(0,7); cout << char1 << "|"; Cursor(x,y); break; // w - ^
    		case 115: char1--; Cursor(0,7); cout << char1 << "|"; Cursor(x,y); break; // s - v
    		case 113: char1 = 219; Cursor(0,7); cout << char1 << "|"; Cursor(x,y); break; // q - revers
    		// Out
//    		case 114: revers(vhar1); break; // R - restart
    		case 27: Cursor(x=0,y=24); return 0;	// esc - out
		}
	}
	Cursor(x=39,y=12);
	}
    return 0;
}
