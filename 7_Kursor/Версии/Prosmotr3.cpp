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
    int buff;
    
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
    int j=0;
	int a[50000] = {
/*=============================================Tut-Pisat======v============================*/
	0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,72,0,72,0,72,0,72,0,72,0,72,0,72,0,72,51,52,53,122,0,80,122,0,80,122,0,80,122,0,80,122,0,80,122,0,80,122,0,80,122,0,80,122,0,72,0,72,0,72,0,72,0,72,0,72,0,72,0,72,0,72,122,0,72,122,55,54,0,72,122,0,72,122,0,72,122,0,72,122,0,72,122,0,72,122,0,72,122,0,72,122,0,72,122,0,72,122,0,72,122,0,72,122,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,80,0,80,0,72,0,75,51,52,98,0,77,0,77,98,0,77,98,0,80,0,75,0,75,0,75,0,75,98,0,77,0,77,98,0,77,0,77,98,0,75,0,75,0,75,0,72,0,72,0,75,0,77,98,0,75,98,48,0,77,0,77,0,77,0,77,0,77,0,77,122,120,0,80,0,80,0,80,0,80,0,80,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,80,0,80,0,80,0,80,0,80,0,80,0,80,0,80,0,80,0,80,0,80,0,80,0,80,0,80,0,80,0,80,0,80,122,120,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,72,0,72,0,72,0,72,0,72,0,72,50,51,0,72,0,72,0,72,0,72,0,72,0,72,0,72,0,72,99,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,80,0,80,0,80,0,80,0,80,0,80,0,80,118,99,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,72,0,72,0,72,0,72,0,72,0,72,0,72,0,75,0,75,118,0,77,118,0,77,118,0,77,118,0,77,118,0,77,118,0,77,118,0,77,118,0,77,118,0,77,118,0,77,118,0,77,118,0,77,118,0,77,0,80,32,0,75,0,80,32,0,80,0,75,32,0,80,0,75,32,0,80,0,75,32,0,75,0,80,32,0,72,0,72,0,72,0,72,0,72,0,72,0,72,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,32,32,32,32,32,32,32,32,32,32,32,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,77,0,72,32,32,32,32,32,32,32,32,0,75,55,54,32,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,52,51,0,72,0,77,0,77,32,32,32,32,0,75,0,72,0,80,54,32,0,75,0,75,0,75,0,72,52,51,32,0,80,0,80,0,80,0,80,0,80,0,80,53,54,55,0,80,0,75,0,75,0,75,0,75,0,75,0,75,32,32,32,32,0,80,0,75,0,75,0,75,0,75,32,32,32,32,48,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,80,0,80,0,80,0,72,32,0,75,0,75,32,0,72,0,75,32,32,0,72,0,75,0,75,32,32,0,75,0,75,0,75,32,0,75,0,80,32,0,80,0,75,32,0,72,0,72,0,72,0,72,0,72,0,72,53,54,55,52,0,75,0,75,0,75,0,75,0,75,0,75,0,72,32,32,0,80,0,75,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,80,0,80,0,80,0,80,51,0,77,0,77,0,80,0,80,0,80,32,0,72,32,0,72,32,0,72,32,0,72,32,0,72,32,0,80,32,0,80,32,0,80,32,0,80,32,0,80,32,0,80,32,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,32,48,0,72,0,72,0,72,0,72,0,77,0,77,0,77,0,77,0,77,0,72,32,0,80,0,75,32,0,80,0,75,32,0,80,0,75,32,0,80,0,75,32,32,0,75,0,75,0,75,32,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,51,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,72,99,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,80,0,80,0,80,0,80,118,99,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,72,0,72,0,72,0,72,0,77,0,77,0,77,118,52,0,77,0,80,99,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,80,0,80,118,0,75,118,0,75,0,75,0,75,0,75,0,75,0,75,0,75,118,0,77,118,0,77,118,0,77,118,0,77,118,0,77,118,0,77,118,0,75,0,75,0,75,0,75,0,75,0,75,0,75,32,0,72,0,75,32,50,0,72,0,72,0,72,0,72,0,75,0,75,0,75,0,75,32,0,80,0,80,0,80,0,80,0,80,0,80,0,80,0,80,32,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,32,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,32,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,32,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,32,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,32,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,80,0,80,0,80,0,80,0,80,0,80,0,80,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,32,0,77,32,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,32,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,32,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,32,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,32,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,75,0,80,0,80,0,80,0,80,0,80,0,80,0,72,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,32,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,32,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,32,0,77,0,77,0,72,0,72,0,72,0,77,0,77,0,75,32,0,75,0,75,0,75,0,75,0,75,32,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,32,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,32,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,77,0,77,32,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,72,0,72,48,0,72,0,72,0,72,0,72,0,72,0,72,0,72,0,72,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,72,0,75,49,0,75,0,75,0,75,0,75,0,80,0,80,98,0,77,0,77,0,77,98,0,77,0,77,0,77,98,0,77,0,77,0,77,98,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,80,0,80,98,0,77,0,77,98,0,77,0,77,0,77,98,0,77,0,77,0,77,98,0,75,0,75,0,75,0,75,0,75,0,75,0,80,0,80,32,32,32,32,32,32,32,0,72,0,72,0,72,0,72,0,75,0,75,0,75,0,75,32,32,32,32,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,80,0,80,32,32,32,32,32,0,72,0,72,0,72,0,72,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,0,75,32,32,32,32,32,0,80,0,80,0,75,0,75,0,75,0,75,0,75,0,75,32,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,32,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,80,0,80,32,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,0,77,32,
/*=============================================Tut-Pisat======^============================*/
	999999};
    int I;
	for (I = 0; I < 50000; I++)
	{
		while (x > 1 && x < 78 && y < 24 && y > 0 && a[j] != 999999)
    		{
    		vbr = a[j];
			j++;
		
    		switch (vbr)
    		{
    			// Strelki
    			case 77: x++; Cursor(x,y); break;	// >
    			case 75: x--; Cursor(x,y); break;	// <
    			case 80: y++; Cursor(x,y); break;	// v
    			case 72: y--; Cursor(x,y); break;	// ^
    			// Str
    			case 32: cout << char1; Cursor(x,y); x++; Cursor(x,y); break;			// st
    			case 83: cout << char2; Cursor(x,y); x++; Cursor(x,y); break;			// del
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
    			// Viguri
    			case 225: cout << char1; Cursor(x,y); x1=x; y1=y; break;	// c
    			case 172: cout << char1; Cursor(x,y); x2=x; y2=y; kvadrat(x, y, x1, y1, x2, y2, char1); kvadrat2(x, y, x1, y1, x2, y2, char1); break;	// v
    			case 99: cout << char1; Cursor(x,y); x1=x; y1=y; break;	// с
    			case 118: cout << char1; Cursor(x,y); x2=x; y2=y; kvadrat(x, y, x1, y1, x2, y2, char1); kvadrat2(x, y, x1, y1, x2, y2, char1); break;	// м
				case 98: kvadrat(x, y, char1); Cursor(x,y); break;
				case 168: kvadrat(x, y, char1); Cursor(x,y); break;
				case 66: kvadrat(x, y, char2); Cursor(x,y); break;
				case 136: kvadrat(x, y, char2); Cursor(x,y); break;
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

    /////////////////////////////////////////////
    
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
    		case 77: x++; Cursor(x,y); buff = 77; break;	// >
    		case 75: x--; Cursor(x,y); buff = 75; break;	// <
    		case 80: y++; Cursor(x,y); buff = 80; break;	// v
    		case 72: y--; Cursor(x,y); buff = 72; break;	// ^
    		// Str
    		case 32: cout << char1; Cursor(x,y); x++; Cursor(x,y); buff = 32; break;			// st
    		case 83: cout << char2; Cursor(x,y); x++; Cursor(x,y); buff = 83; break;			// del
    		// Dop
			case 119: char1++; Cursor(0,7); cout << char1 << "I"; Cursor(x,y); buff = 119; break; // w - ^
    		case 115: char1--; Cursor(0,7); cout << char1 << "I"; Cursor(x,y); buff = 115; break; // s - v
    		case 113: char1 = 219; Cursor(0,7); Color(7); cout << char1 << "I"; Cursor(x,y); buff = 113; break; // q - revers
    		case 230: char1++; Cursor(0,7); cout << char1 << "I"; Cursor(x,y); buff = 230; break; // ц - ^
    		case 235: char1--; Cursor(0,7); cout << char1 << "I"; Cursor(x,y); buff = 235; break; // ы - v
    		case 169: char1 = 219; Cursor(0,7); Color(7); cout << char1 << "I"; Cursor(x,y); buff = 169; break; // й - revers
    		// Figuri
    		case 239: Cursor(2,y); for (i=0; i<76; i++) {cout << char1;}; Cursor(x,y); buff = 239; break;	// z - ====
    		case 122: Cursor(2,y); for (i=0; i<76; i++) {cout << char1;}; Cursor(x,y); buff = 122; break;	// € - ====
    		case 231: Cursor(x,1); for (i=1; i<24; i++) {Cursor(x,i);cout << char1;}; Cursor(x,y); buff = 231; break;	// x - ||
    		case 120: Cursor(x,1); for (i=1; i<24; i++) {Cursor(x,i); cout << char1;}; Cursor(x,y); buff = 120; break;	// ч - ||
    		// Viguri
    		case 225: cout << char1; Cursor(x,y); x1=x; y1=y; buff = 225; break;	// c
    		case 172: cout << char1; Cursor(x,y); x2=x; y2=y; kvadrat(x, y, x1, y1, x2, y2, char1); kvadrat2(x, y, x1, y1, x2, y2, char1); buff = 172; break;	// v
    		case 99: cout << char1; Cursor(x,y); x1=x; y1=y; buff = 99; break;	// с
    		case 118: cout << char1; Cursor(x,y); x2=x; y2=y; kvadrat(x, y, x1, y1, x2, y2, char1); kvadrat2(x, y, x1, y1, x2, y2, char1); buff = 118; break;	// м
			case 98: kvadrat(x, y, char1); Cursor(x,y); buff = 98; break;
			case 168: kvadrat(x, y, char1); Cursor(x,y); buff = 168; break;
			case 66: kvadrat(x, y, char2); Cursor(x,y); buff = 66; break;
			case 136: kvadrat(x, y, char2); Cursor(x,y); buff = 136; break;
    		// Color simvolov
    		case 48: Color(7); Cursor(0,7); cout << char1; Color(7); cout << "I"; Cursor(x,y); Color(7); buff = 48; break;
    		case 49: Color(15); Cursor(0,7); cout << char1; Color(7); cout << "I"; Cursor(x,y); Color(15); buff = 49; break;
    		case 50: Color(12); Cursor(0,7); cout << char1; Color(7); cout << "I"; Cursor(x,y); Color(12); buff = 50; break;
    		case 51: Color(6); Cursor(0,7); cout << char1; Color(7); cout << "I"; Cursor(x,y); Color(6); buff = 51; break;
    		case 52: Color(14); Cursor(0,7); cout << char1; Color(7); cout << "I"; Cursor(x,y); Color(14); buff = 52; break;
    		case 53: Color(10); Cursor(0,7); cout << char1; Color(7); cout << "I"; Cursor(x,y); Color(10); buff = 53; break;
    		case 54: Color(11); Cursor(0,7); cout << char1; Color(7); cout << "I"; Cursor(x,y); Color(11); buff = 54; break;
    		case 55: Color(9); Cursor(0,7); cout << char1; Color(7); cout << "I"; Cursor(x,y); Color(9); buff = 55; break;
    		case 56: Color(5); Cursor(0,7); cout << char1; Color(7); cout << "I"; Cursor(x,y); Color(5); buff = 56; break;
			case 57: Color(13); Cursor(0,7); cout << char1; Color(7); cout << "I"; Cursor(x,y); Color(13); buff = 57; break;
    		// Out	
			case 114: Color(7); goto m; buff = 114; break; // R - restart
			case 170: Color(7); goto m; buff = 170; break; // к - restart
    		case 27: x = 0; y = 24; Cursor(x, y); buff = 27; return 0;	// esc - out
		}
//
		ofstream fout;
		fout.open("form.txt", ios::app);
		fout << buff << ",";
		fout.close();
		buff = 0;
//
	}
	Cursor(x=39,y=12);
	}
    return 0;
}
