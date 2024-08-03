#include <iostream> 	//int x, y, vbr, c
#include <conio.h>		//char char1
#include <windows.h>	//goto m
#include <stdio.h>
#include <fstream>
#include <cstdlib>
#include <cstddef>
#include <cmath>

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

void kvadrat(int x, int y, int x1, int y1, int x2, int y2, char char1)
{
	Cursor (x1,y1);
	if (x1 != x2 && y1 != y2 && x1 > 1 && x1 < 78 && y1 < 24 && y1 > 0 && x2 > 1 && x2 < 78 && y2 < 24 && y2 > 0)
	{
// 1
		if (x1 < x2 && y1 < y2)
		{
			while (x1 < x2)
			{
				Cursor(x1++,y1);
				cout << char1;
			}
		
//			cout << x1 << " " << y1 << " " << x2 << " " << y2;
		
			while (y1 < y2)
			{
				Cursor(x1,y1++);
				cout << char1;
			}
			
			Cursor(x,y);
		}
// 2
		if (x1 > x2 && y1 > y2)
		{
			while (x1 > x2)
			{
				Cursor(x1--,y1);
				cout << char1;
			}
		
//			cout << x1 << " " << y1 << " " << x2 << " " << y2;
		
			while (y1 > y2)
			{
				Cursor(x1,y1--);
				cout << char1;
			}
			
			Cursor(x,y);
		}
// 3
		if (x1 < x2 && y1 > y2)
		{
			while (x1 < x2)
			{
				Cursor(x1++,y1);
				cout << char1;
			}
		
//			cout << x1 << " " << y1 << " " << x2 << " " << y2;
		
			while (y1 > y2)
			{
				Cursor(x1,y1--);
				cout << char1;
			}
			
			Cursor(x,y);
		}
// 4
		if (x1 > x2 && y1 < y2)
		{
			while (x1 > x2)
			{
				Cursor(x1--,y1);
				cout << char1;
			}
		
//			cout << x1 << " " << y1 << " " << x2 << " " << y2;
		
			while (y1 < y2)
			{
				Cursor(x1,y1++);
				cout << char1;
			}
			
			Cursor(x,y);
		}
		x1=0; x2=0; y1=0; y2=0;
	}
}

void kvadrat2(int x, int y, int x1, int y1, int x2, int y2, char char1)
{
	Cursor (x1,y1);
	if (x1 != x2 && y1 != y2 && x1 > 1 && x1 < 78 && y1 < 24 && y1 > 0 && x2 > 1 && x2 < 78 && y2 < 24 && y2 > 0)
	{
// 1
		if (x1 > x2 && y1 > y2)
		{
			while (x1 > x2)
			{
				Cursor(x1--,y1);
				cout << char1;
			}
		
//			cout << x1 << " " << y1 << " " << x2 << " " << y2;
		
			while (y1 > y2)
			{
				Cursor(x1,y1--);
				cout << char1;
			}
			
			Cursor(x,y);
		}
// 2
		if (x1 < x2 && y1 < y2)
		{
			while (x1 < x2)
			{
				Cursor(x1++,y1);
				cout << char1;
			}
		
//			cout << x1 << " " << y1 << " " << x2 << " " << y2;
		
			while (y1 < y2)
			{
				Cursor(x1,y1++);
				cout << char1;
			}
			
			Cursor(x,y);
		}
// 3
		if (x1 > x2 && y1 < y2)
		{
			while (x1 > x2)
			{
				Cursor(x1--,y1);
				cout << char1;
			}
		
//			cout << x1 << " " << y1 << " " << x2 << " " << y2;
		
			while (y1 < y2)
			{
				Cursor(x1,y1++);
				cout << char1;
			}
			
			Cursor(x,y);
		}
// 4
		if (x1 < x2 && y1 > y2)
		{
			while (x1 < x2)
			{
				Cursor(x1++,y1);
				cout << char1;
			}
		
//			cout << x1 << " " << y1 << " " << x2 << " " << y2;
		
			while (y1 > y2)
			{
				Cursor(x1,y1--);
				cout << char1;
			}
			
			Cursor(x,y);
			x1=0; x2=0; y1=0; y2=0;
		}
		
	}
}

void kvadrat(int x, int y, char char1)
{
	int x3, y3;
	x3 = x; y3 = y;
	x3--; y3--;
	Cursor(x3,y3);
	x3++;
	if (x3 > 1 && x3 < 78 && y3 < 24 && y3 > 0)
	{
		Cursor(x3,y3);
		cout << char1;
	}
	x3++;
	if (x3 > 1 && x3 < 78 && y3 < 24 && y3 > 0)
	{
		Cursor(x3,y3);
		cout << char1;
	}
	x3++;
	if (x3 > 1 && x3 < 78 && y3 < 24 && y3 > 0)
	{
		Cursor(x3,y3);
		cout << char1;
	}
	y3++;
	x3=x3-2;
	if (x3 > 1 && x3 < 78 && y3 < 24 && y3 > 0)
	{
		Cursor(x3,y3);
		cout << char1;
	}
	x3++;
	if (x3 > 1 && x3 < 78 && y3 < 24 && y3 > 0)
	{
		Cursor(x3,y3);
		cout << char1;
	}
	x3++;
	if (x3 > 1 && x3 < 78 && y3 < 24 && y3 > 0)
	{
		Cursor(x3,y3);
		cout << char1;
	}
	y3++;
	x3=x3-2;
	if (x3 > 1 && x3 < 78 && y3 < 24 && y3 > 0)
	{
		Cursor(x3,y3);
		cout << char1;
	}
	x3++;
	if (x3 > 1 && x3 < 78 && y3 < 24 && y3 > 0)
	{
		Cursor(x3,y3);
		cout << char1;
	}
	x3++;
	if (x3 > 1 && x3 < 78 && y3 < 24 && y3 > 0)
	{
		Cursor(x3,y3);
		cout << char1;
	}
	x++;
	Cursor(x,y);
}


void kvadrat2(int x, int y, char char2)
{
	int x3, y3;
	x3 = x; y3 = y;
	x3--; y3--;
	Cursor(x3,y3);
	x3++;
	if (x3 > 1 && x3 < 78 && y3 < 24 && y3 > 0)
	{
		Cursor(x3,y3);
		cout << char2;
	}
	x3++;
	if (x3 > 1 && x3 < 78 && y3 < 24 && y3 > 0)
	{
		Cursor(x3,y3);
		cout << char2;
	}
	x3++;
	if (x3 > 1 && x3 < 78 && y3 < 24 && y3 > 0)
	{
		Cursor(x3,y3);
		cout << char2;
	}
	y3++;
	x3=x3-2;
	if (x3 > 1 && x3 < 78 && y3 < 24 && y3 > 0)
	{
		Cursor(x3,y3);
		cout << char2;
	}
	x3++;
	if (x3 > 1 && x3 < 78 && y3 < 24 && y3 > 0)
	{
		Cursor(x3,y3);
		cout << char2;
	}
	x3++;
	if (x3 > 1 && x3 < 78 && y3 < 24 && y3 > 0)
	{
		Cursor(x3,y3);
		cout << char2;
	}
	y3++;
	x3=x3-2;
	if (x3 > 1 && x3 < 78 && y3 < 24 && y3 > 0)
	{
		Cursor(x3,y3);
		cout << char2;
	}
	x3++;
	if (x3 > 1 && x3 < 78 && y3 < 24 && y3 > 0)
	{
		Cursor(x3,y3);
		cout << char2;
	}
	x3++;
	if (x3 > 1 && x3 < 78 && y3 < 24 && y3 > 0)
	{
		Cursor(x3,y3);
		cout << char2;
	}
	x++;
	Cursor(x,y);
}

int main ()
{
	
m:	
	system("color 07");
	int x = 0, y = 0, vbr, i;
    int x1, y1, x2, y2;
    char char1 = 219; // st
    char char2 = ' ';
    char buff;
    
    // Pole
    Cursor(0,0);
    Color (7);
//	char pole [x] [y];
    cout << "|[="; Color(15); cout << "[Menu:]"; Color(7); cout << "="; Color(15); 
	cout << "[W->][S-<][Q-revers][R-restart][ESC-exit][SPACE-paint][DEL-delete]"; Color(7); cout << "=]|" <<
			"||                                                                            ||" <<
			"||                                                                            ||" <<
			"||                                                                            ||" <<
			"||                                                                            ||" <<
			"||                                                                            ||";
			Color(15); cout << "II"; Color(07); 
			cout << "                                                                            ||" << char1;
			Color(15); cout << "I"; Color(07); 
			cout << "                                                                            ||";
			Color(15); cout << "II"; Color(07); 
			cout << "                                                                            ||"
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
			"|[=X==="; Color(15); cout << "[Enter 0-9 = Color]"; Color(7); cout << "=="; Color(15); cout << "[z/x-=/|]"; 
			Color(7); cout << "=="; Color(15); cout << "[x/c-||]"; Color(7); cout <<"=="; Color(15); 
			cout << "[b/b+shift-+/-]"; Color(7); cout << "==============]|";

	Cursor(0,0);
	Cursor(77,23);
	x=77; y=23;
    
    /////////////////////////////////////////////
    ifstream in("form.cpp");
	if(!in) 
	{
		cout << "Cannot open file.\n";
		return 1;
	}

	char a[50000];
	int lines=0;
	int j=0;
    int I;
	while(in)
	{
		in.getline(a,50000);
		lines++;
	}

	for (I = 0; I < 5000; I++)
	cout << a[I];
	
    ////////////////////////////////
	for (I = 0; I < 5000; I++)
	{
		while (x > 1 && x < 78 && y < 24 && y > 0 && a[j] != 'Z')
    		{
    		vbr = a[j];
			j++;
		
    		switch (vbr)
    		{
    			// Strelki
    		case 'a': x++; Cursor(x,y); break;	// >
    		case 'b': x--; Cursor(x,y); break;	// <
    		case 'c': y++; Cursor(x,y); break;	// v
    		case 'd': y--; Cursor(x,y); break;	// ^
    		// Str
    		case 'e': cout << char1; Cursor(x,y); x++; Cursor(x,y); break;			// st
    		case 'f': cout << char2; Cursor(x,y); x++; Cursor(x,y); break;			// del
    		// Dop
			case 'g': char1++; Cursor(0,7); cout << char1 << "I"; Cursor(x,y); break; // w - ^
    		case 'h': char1--; Cursor(0,7); cout << char1 << "I"; Cursor(x,y); break; // s - v
    		case 'i': char1 = 219; Cursor(0,7); Color(7); cout << char1 << "I"; Cursor(x,y); break; // q - revers
    		case 'j': char1++; Cursor(0,7); cout << char1 << "I"; Cursor(x,y); break; // ц - ^
    		case 'k': char1--; Cursor(0,7); cout << char1 << "I"; Cursor(x,y); break; // ы - v
    		case 'l': char1 = 219; Cursor(0,7); Color(7); cout << char1 << "I"; Cursor(x,y); break; // й - revers
    		// Figuri
    		case 'm': Cursor(2,y); for (i=0; i<76; i++) {cout << char1;}; Cursor(x,y); break;	// z - ====
    		case 'n': Cursor(2,y); for (i=0; i<76; i++) {cout << char1;}; Cursor(x,y); break;	// € - ====
    		case 'o': Cursor(x,1); for (i=1; i<24; i++) {Cursor(x,i);cout << char1;}; Cursor(x,y); break;	// x - ||
    		case 'p': Cursor(x,1); for (i=1; i<24; i++) {Cursor(x,i); cout << char1;}; Cursor(x,y); break;	// ч - ||
    		// Viguri
    		case 'q': cout << char1; Cursor(x,y); x1=x; y1=y; break;	// c
    		case 'r': cout << char1; Cursor(x,y); x2=x; y2=y; kvadrat(x, y, x1, y1, x2, y2, char1); kvadrat2(x, y, x1, y1, x2, y2, char1); break;	// v
    		case 's': cout << char1; Cursor(x,y); x1=x; y1=y; break;	// с
    		case 't': cout << char1; Cursor(x,y); x2=x; y2=y; kvadrat(x, y, x1, y1, x2, y2, char1); kvadrat2(x, y, x1, y1, x2, y2, char1); break;	// м
			case 'u': kvadrat(x, y, char1); Cursor(x,y); break;
			case 'v': kvadrat(x, y, char1); Cursor(x,y); break;
			case 'w': kvadrat(x, y, char2); Cursor(x,y); break;
			case 'x': kvadrat(x, y, char2); Cursor(x,y); break;
    		// Color simvolov
    		case 'y': Color(7); Cursor(0,7); cout << char1; Color(7); cout << "I"; Cursor(x,y); Color(7); break;
    		case 'z': Color(15); Cursor(0,7); cout << char1; Color(7); cout << "I"; Cursor(x,y); Color(15); break;
    		case 'A': Color(12); Cursor(0,7); cout << char1; Color(7); cout << "I"; Cursor(x,y); Color(12); break;
    		case 'B': Color(6); Cursor(0,7); cout << char1; Color(7); cout << "I"; Cursor(x,y); Color(6); break;
    		case 'C': Color(14); Cursor(0,7); cout << char1; Color(7); cout << "I"; Cursor(x,y); Color(14); break;
    		case 'D': Color(10); Cursor(0,7); cout << char1; Color(7); cout << "I"; Cursor(x,y); Color(10); break;
    		case 'E': Color(11); Cursor(0,7); cout << char1; Color(7); cout << "I"; Cursor(x,y); Color(11); break;
    		case 'F': Color(9); Cursor(0,7); cout << char1; Color(7); cout << "I"; Cursor(x,y); Color(9); break;
    		case 'G': Color(5); Cursor(0,7); cout << char1; Color(7); cout << "I"; Cursor(x,y); Color(5); break;
			case 'H': Color(13); Cursor(0,7); cout << char1; Color(7); cout << "I"; Cursor(x,y); Color(13); break;
    		// Out	
			case 'I': Color(7); goto m; break; // R - restart
			case 'J': Color(7); goto m; break; // к - restart
    		case 'K': x = 0; y = 24; Cursor(x, y); goto d;	// esc - out
			}
		}
		Cursor(x=39,y=12);
	}
d:
    /////////////////////////////////////////////
    
    Cursor(0,0);
	Cursor(77,23);
	x=77; y=23;
	int vbr2;
    
    while (true)
    {
	while (x > 1 && x < 78 && y < 24 && y > 0)
    {
    	vbr2 = getch();
    	switch (vbr2)
    	{
    		// Strelki
    		case 77: x++; Cursor(x,y); buff = 'a'; break;	// >
    		case 75: x--; Cursor(x,y); buff = 'b'; break;	// <
    		case 80: y++; Cursor(x,y); buff = 'c'; break;	// v
    		case 72: y--; Cursor(x,y); buff = 'd'; break;	// ^
    		// Str
    		case 32: cout << char1; Cursor(x,y); x++; Cursor(x,y); buff = 'e'; break;			// st
    		case 83: cout << char2; Cursor(x,y); x++; Cursor(x,y); buff = 'f'; break;			// del
    		// Dop
			case 119: char1++; Cursor(0,7); cout << char1 << "I"; Cursor(x,y); buff = 'g'; break; // w - ^
    		case 115: char1--; Cursor(0,7); cout << char1 << "I"; Cursor(x,y); buff = 'h'; break; // s - v
    		case 113: char1 = 219; Cursor(0,7); Color(7); cout << char1 << "I"; Cursor(x,y); buff = 'i'; break; // q - revers
    		case 230: char1++; Cursor(0,7); cout << char1 << "I"; Cursor(x,y); buff = 'j'; break; // ц - ^
    		case 235: char1--; Cursor(0,7); cout << char1 << "I"; Cursor(x,y); buff = 'k'; break; // ы - v
    		case 169: char1 = 219; Cursor(0,7); Color(7); cout << char1 << "I"; Cursor(x,y); buff = 'l'; break; // й - revers
    		// Figuri
    		case 239: Cursor(2,y); for (i=0; i<76; i++) {cout << char1;}; Cursor(x,y); buff = 'm'; break;	// z - ====
    		case 122: Cursor(2,y); for (i=0; i<76; i++) {cout << char1;}; Cursor(x,y); buff = 'n'; break;	// € - ====
    		case 231: Cursor(x,1); for (i=1; i<24; i++) {Cursor(x,i);cout << char1;}; Cursor(x,y); buff = 'o'; break;	// x - ||
    		case 120: Cursor(x,1); for (i=1; i<24; i++) {Cursor(x,i); cout << char1;}; Cursor(x,y); buff = 'p'; break;	// ч - ||
    		// Viguri
    		case 225: cout << char1; Cursor(x,y); x1=x; y1=y; buff = 'q'; break;	// c
    		case 172: cout << char1; Cursor(x,y); x2=x; y2=y; kvadrat(x, y, x1, y1, x2, y2, char1); kvadrat2(x, y, x1, y1, x2, y2, char1); buff = 'r'; break;	// v
    		case 99: cout << char1; Cursor(x,y); x1=x; y1=y; buff = 's'; break;	// с
    		case 118: cout << char1; Cursor(x,y); x2=x; y2=y; kvadrat(x, y, x1, y1, x2, y2, char1); kvadrat2(x, y, x1, y1, x2, y2, char1); buff = 't'; break;	// м
			case 98: kvadrat(x, y, char1); Cursor(x,y); buff = 'u'; break;
			case 168: kvadrat(x, y, char1); Cursor(x,y); buff = 'v'; break;
			case 66: kvadrat(x, y, char2); Cursor(x,y); buff = 'w'; break;
			case 136: kvadrat(x, y, char2); Cursor(x,y); buff = 'x'; break;
    		// Color simvolov
    		case 48: Color(7); Cursor(0,7); cout << char1; Color(7); cout << "I"; Cursor(x,y); Color(7); buff = 'y'; break;
    		case 49: Color(15); Cursor(0,7); cout << char1; Color(7); cout << "I"; Cursor(x,y); Color(15); buff = 'z'; break;
    		case 50: Color(12); Cursor(0,7); cout << char1; Color(7); cout << "I"; Cursor(x,y); Color(12); buff = 'A'; break;
    		case 51: Color(6); Cursor(0,7); cout << char1; Color(7); cout << "I"; Cursor(x,y); Color(6); buff = 'B'; break;
    		case 52: Color(14); Cursor(0,7); cout << char1; Color(7); cout << "I"; Cursor(x,y); Color(14); buff = 'C'; break;
    		case 53: Color(10); Cursor(0,7); cout << char1; Color(7); cout << "I"; Cursor(x,y); Color(10); buff = 'D'; break;
    		case 54: Color(11); Cursor(0,7); cout << char1; Color(7); cout << "I"; Cursor(x,y); Color(11); buff = 'E'; break;
    		case 55: Color(9); Cursor(0,7); cout << char1; Color(7); cout << "I"; Cursor(x,y); Color(9); buff = 'F'; break;
    		case 56: Color(5); Cursor(0,7); cout << char1; Color(7); cout << "I"; Cursor(x,y); Color(5); buff = 'G'; break;
			case 57: Color(13); Cursor(0,7); cout << char1; Color(7); cout << "I"; Cursor(x,y); Color(13); buff = 'H'; break;
    		// Out	
			case 114: Color(7); goto m; buff = 'I'; break; // R - restart
			case 170: Color(7); goto m; buff = 'J'; break; // к - restart
    		case 27: x = 0; y = 24; Cursor(x, y); buff = 'K'; return 0;	// esc - out
		}
//
		if (buff != ' ')
		{
			ofstream fout;
			fout.open("form.cpp", ios::app);
			fout << buff;
			fout.close();
		}
		buff = 32;
//
	}
	Cursor(x=39,y=12);
	}
    return 0;
}
