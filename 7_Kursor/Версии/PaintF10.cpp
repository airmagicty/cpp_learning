#include <iostream> 	//int x, y, vbr, c
#include <conio.h>		//char char1
#include <windows.h>	//goto m
#include <stdio.h>

using namespace std;

// ÷вет
void Color(int c)
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(handle, c);
}

//  урсор
void Cursor(int x, int y)
{
    COORD position = {x,y}; //позици€ x и y
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsole, position);
}

int main ()
{
	
m:	
	system("color 07");
	int x = 0, y = 0, vbr, i;
    
    char char1 = 219; // st
    
    // Pole
    Cursor(0,0);
    Color (7);
    cout << "|[=[Menu:]=[W->][S-<][Q-revers][R-restart][ESC-exit][SPACE-paint][DEL-delete]=]|" <<
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
			"|[=X===[Enter 0-9 = Color]====================================================]|";
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
    		// Strelki
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
    		case 113: char1 = 219; Cursor(0,7); Color(7); cout << char1 << "I"; Cursor(x,y); break; // q - revers
    		case 230: char1++; Cursor(0,7); cout << char1 << "I"; Cursor(x,y); break; // ц - ^
    		case 235: char1--; Cursor(0,7); cout << char1 << "I"; Cursor(x,y); break; // ы - v
    		case 169: char1 = 219; Cursor(0,7); Color(7); cout << char1 << "I"; Cursor(x,y); break; // й - revers
    		// Figuri
    		case 239: Cursor(2,y); for (i=0; i<76; i++) {cout << char1;}; Cursor(x,y); break;	// z - ====
    		case 122: Cursor(2,y); for (i=0; i<76; i++) {cout << char1;}; Cursor(x,y); break;	// € - ====
    		case 231: Cursor(x,1); for (i=1; i<24; i++) {Cursor(x,i);cout << char1;}; Cursor(x,y); break;	// x - ||
    		case 120: Cursor(x,1); for (i=1; i<24; i++) {Cursor(x,i); cout << char1;}; Cursor(x,y); break;	// ч - ||
    		// Color simvolov
    		case 48: Color(7); Cursor(0,7); cout << char1; Color(7); cout << "I"; Cursor(x,y); Color(7); break;
    		case 49: Color(15); Cursor(0,7); cout << char1; Color(7); cout << "I"; Cursor(x,y); Color(15); break;
    		case 50: Color(12); Cursor(0,7); cout << char1; Color(7); cout << "I"; Cursor(x,y); Color(12); break;
    		case 51: Color(6); Cursor(0,7); cout << char1; Color(7); cout << "I"; Cursor(x,y); Color(6); break;
    		case 52: Color(14); Cursor(0,7); cout << char1; Color(7); cout << "I"; Cursor(x,y); Color(14); break;
    		case 53: Color(10); Cursor(0,7); cout << char1; Color(7); cout << "I"; Cursor(x,y); Color(10); break;
    		case 54: Color(11); Cursor(0,7); cout << char1; Color(7); cout << "I"; Cursor(x,y); Color(11); break;
    		case 55: Color(9); Cursor(0,7); cout << char1; Color(7); cout << "I"; Cursor(x,y); Color(9); break;
    		case 56: Color(5); Cursor(0,7); cout << char1; Color(7); cout << "I"; Cursor(x,y); Color(5); break;
			case 57: Color(13); Cursor(0,7); cout << char1; Color(7); cout << "I"; Cursor(x,y); Color(13); break;
    		// Out	
			case 114: Color(7); goto m; break; // R - restart
			case 170: Color(7); goto m; break; // к - restart
    		case 27: x = 0; y = 24; Cursor(x, y); return 0;	// esc - out
		}
	}
	Cursor(x=39,y=12);
	}
    return 0;
}
