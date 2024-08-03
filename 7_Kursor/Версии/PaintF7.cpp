#include <iostream> 	//int x, y, vbr, c
#include <conio.h>		//char char1
#include <windows.h>	//goto m
#include <stdio.h>

using namespace std;

void Color(int c)
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(handle, c);
}

void Cursor(int x, int y)
{
    COORD position = {x,y}; //позиция x и y
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsole, position);
}

int main ()
{
	
m:	
	system("color 07");
	int x = 0, y = 0, vbr;
    
    char char1 = 219; // st
    
    Cursor(0,0);
    cout << "|==[Menu:]=[W->][S-<][Q-revers][R-restart][ESC-exit][SPACE-paint][DEL-delete]==|" <<
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
			"|=X============================================================================|";
	Cursor(0,0);
	Cursor(77,23);
	x=77; y=23;
    
    while (true)
    {
	while (x > 1 && x < 78 && y < 24 && y > 0)
    {
    	vbr = getch();
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
			case 119: char1++; Cursor(0,7); cout << char1 << "I"; Cursor(x,y); break; // w - ^
    		case 115: char1--; Cursor(0,7); cout << char1 << "I"; Cursor(x,y); break; // s - v
    		case 113: char1 = 219; Cursor(0,7); cout << char1 << "I"; Cursor(x,y); break; // q - revers
    		// Color fon
    		case 59: system("color 07"); break;
    		case 60: system("color 0F"); break;
    		case 61: system("color F0"); break;
    		case 62: system("color 03"); break;
    		case 63: system("color 91"); break;
    		case 64: system("color 24"); break;
    		case 65: system("color 9E"); break;
    		case 66: system("color E5"); break;
    		case 67: system("color 6A"); break;
			case 68: system("color 97"); break;
    		case 133: system("color A8"); break;
    		case 134: system("color B9"); break;
    		// Color sch
    		case 48: Color(7); cout << char1; Cursor(x,y); x++; Cursor(x,y); break;
    		case 49: Color(15); cout << char1; Cursor(x,y); x++; Cursor(x,y); break;
    		case 50: Color(12); cout << char1; Cursor(x,y); x++; Cursor(x,y); break;
    		case 51: Color(6); cout << char1; Cursor(x,y); x++; Cursor(x,y); break;
    		case 52: Color(14); cout << char1; Cursor(x,y); x++; Cursor(x,y); break;
    		case 53: Color(10); cout << char1; Cursor(x,y); x++; Cursor(x,y); break;
    		case 54: Color(11); cout << char1; Cursor(x,y); x++; Cursor(x,y); break;
    		case 55: Color(9); cout << char1; Cursor(x,y); x++; Cursor(x,y); break;
    		case 56: Color(5); cout << char1; Cursor(x,y); x++; Cursor(x,y); break;
			case 57: Color(13); cout << char1; Cursor(x,y); x++; Cursor(x,y); break;
    		// Out	
			case 114: goto m; break; // R - restart
    		case 27: x = 0; y = 24; Cursor(x, y); return 0;	// esc - out
		}
	}
	Cursor(x=39,y=12);
	}
    return 0;
}
