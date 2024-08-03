#include <iostream>
#include <conio.h>
#include <windows.h>
#include <stdio.h>
#include <fstream>
#include <cstdlib>
#include <cstddef>
#include <cmath>
#include <ctime>
#include <string>

using namespace std;

// Цвет
void Color(int c)
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(handle, c);
}

// Курсор
void Cursor(int x, int y)
{
    COORD position = {x,y}; //позиция x и y
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsole, position);
}

// Вывод
void printImage (char* fileName) {
	Cursor(0,0);
	string line;
	ifstream myfile (fileName);
	
	if (myfile.is_open())
	{
		while (!myfile.eof())
		{
			getline (myfile, line);
			cout << endl << line;
		}
		myfile.close();
	}
	else cout << "Unable to open file: " << fileName << endl;
	// printImage("путь к файлу");
}

void Pause(int P)
{
	int i, j;
	P = P * 1000;
	for (i=1; i<P; i++)
	{
		for (j=1; j<3500; j++);
	}
}

void pole(int x, int y)
{
/*	int i;
	Cursor(0,0);
	for (i=1;i<80;i++,cout << "/");
	cout << endl;
	for (i=1;i<80;i++,cout << "/");
	cout << endl;*/
	
	cout << "////////////////////////////////////////////////////////////////////////////////" << 
			"//                                                                            //" << 
			"//                                                                            //" << 
			"//                                                                            //" << 
			"//                                                                            //" << 
			"//                                                                            //" << 
			"//                                                                            //" << 
			"//                                                                            //" << 
			"//                                                                            //" << 
			"//                                                                            //" << 
			"//                                                                            //" << 
			"//                                                                            //" << 
			"//                                                                            //" << 
			"//                                                                            //" << 
			"//                                                                            //" << 
			"//                                                                            //" << 
			"//                                                                            //" << 
			"//                                                                            //" << 
			"//                                                                            //" << 
			"//                                                                            //" << 
			"//                                                                            //" << 
			"//                                                                            //" << 
			"//                                                                            //" << 
			"//VVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV//" << 
			"///////////////////////////////////////////////////////////////////////////////";
			Cursor(x,y); 
}

void vistrel(int x, int y)
{
	y--; 
	Cursor(x,y); 
	cout << "|"; 
	Pause(1); 
	Cursor(x,y); 
	cout << " "; 
}

int main ()
{
	int x=35, y=23, vbr;
	int x2, y2;
	
	pole(x,y);

	while (true)
	{
		while (x > 1 && x < 78 && y == 23)
			{	
				vbr = getch();
				switch (vbr)
				{
					// Strelki
   		 			case 77: x++; Cursor(x,y); break;	// >
  		  			case 75: x--; Cursor(x,y); break;	// <
					case 32: x2=x; y2=y; vistrel(x,y); x=x2; y=x2; break;
				}
			}
		x = 39; y = 23; Cursor(x,y);
	}
}
