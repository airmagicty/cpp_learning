#include <iostream>
#include <conio.h>
#include <windows.h>
#include <stdio.h>
#include <fstream>
#include <cstdlib>
#include <cstddef>
#include <cmath>

using namespace std;

// Вывод из файла
// printImage("*/*.cpp");
void printImage (char* fileName) {
	string line;
	ifstream myfile (fileName);
	
	if (myfile.is_open())
	{
		while (!myfile.eof())
		{
			getline (myfile, line);
			cout << line;
		}
		myfile.close();
	}
	else cout << "Unable to open file: " << fileName << endl;
}

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

// Пауза
void Pause(int n)
{
	int i, j;
	n = n*10000;
	for (i=0; i<n; i++)
	for (j=0; j<4000; j++);
}



void exid2()
{
	Cursor(0,0);
	Color(7);
	cout << "                                                                                " << 
			"                                                                                " << 
			"                                                                                " << 
			"                                                                                " << 
			"                                                                                " << 
			"                                                                                " << 
			"                                                                                " << 
			"                                                                                " << 
			"                                                                                " << 
			"                                                                                " << 
			"                                                                                " << 
			"                                                                                " << 
			"                                                                                " << 
			"                                                                                " << 
			"                                                                                " << 
			"                                                                                " << 
			"                                                                                " << 
			"                                                                                " << 
			"                                                                                " << 
			"                                                                                " << 
			"                                                                                " << 
			"                                                                                " << 
			"                                                                                " << 
			"                                                                                " << 
			"                                                                                " << 
			"                                                                                " << 
			"                                                                                ";
	Cursor(0,0);
}
//==============================================================================
void windows()
{
	char aaa=0;
	int aV=0;
	int x=0, y=0;
	Color(176);
	Cursor(0,0);
	cout << "                                                                                " << 
			"                                                                                " << 
			"                                                                                " << 
			"                                                                                " << 
			"                                                                                " << 
			"                                                                                " << 
			"                                                                                " << 
			"                                                                                " << 
			"                                                                                " << 
			"                                                                                " << 
			"                                                                                " << 
			"                                                                                " << 
			"                                                                                " << 
			"                                                                                " << 
			"                                                                                " << 
			"                                                                                " << 
			"                                                                                " << 
			"                                                                                " << 
			"                                                                                " << 
			"                                                                                " << 
			"                                                                                " << 
			"                                                                                " << 
			"                                                                                " << 
			"                                                                                " << 
			"                                                                                " << 
			"                                                                                " << 
			"                                                                                ";
	Cursor(0,0);
	cout << "===============================================================================" << endl <<  
			"| //TT    #__  ----                                                      LLLL |" << endl << 
			"| //TY   /ZZZ  H12H                                                      <BB> |" << endl << 
			"| //TT   TZZZ  ++++                                                      TTTT |" << endl << 
			"| Blok-  Pa-   Kal-                                                      Pro- |" << endl << 
			"| not    int   kula-                                                     vod- |" << endl << 
			"|              tor                                                       nik  |" << endl << 
			"|                                                                             |" << endl << 
			"|                                                                             |" << endl << 
			"|                                                                             |" << endl << 
			"|                                                                             |" << endl << 
			"|                                Windows XP                                   |" << endl << 
			"|                                   ...                                       |" << endl << 
			"|                                                                             |" << endl << 
			"|                                                                       ----  |" << endl << 
			"|                                                                       V_PK  |" << endl << 
			"|                                                                       ----  |" << endl << 
			"|                                                                      Moi PK |" << endl << 
			"| ____                                                           ----   ____  |" << endl << 
			"| {Gg}                                                           HCCH   HPPH  |" << endl << 
			"| ^--^                                                           TTTT   ^HH^  |" << endl << 
			"|Google                                                        Console Korsina|" << endl << 
			"===============================================================================" << endl << 
			"|{#}  (|)  ПП  [П]                        EN  ^  HD  |^  =K  00:00  15.03.2018|" << endl << 
			"===============================================================================";
	
	Cursor();
	
	Cursor(37,12);
	x = 37;
	y = 12;
	while (true)
	{
		aV = getch();
		switch (aV)
		{
			case 77: x++; Cursor(x,y); break;
    		case 75: x--; Cursor(x,y); break;
    		case 80: y++; Cursor(x,y); break;
    		case 72: y--; Cursor(x,y); break;
//    		case 13: ; break;
		}
	}
			
	aaa = getch();
}
//==============================================================================

int main()
{
	windows();
}


//==============================================================================


//			"       ==          A   M[ ]M EEE RRR III CC}   A   NN  N                       " << endl << 
//			"      ====        A_A  M M M E== R_R  I  C    A_A  N N N                       " << endl << 
//			"     ======      A   A M   M EEE R } III CC} A   A N  NN                       " << endl << 
//			"    ==    ==                                                                   " << endl << 
//			"   == =  = ==    M} {M EEE [GG]   A  TTTTT RRR EEE NN  N DDD  SSS]             " << endl << 
//			"  ==   ==   ==   M M M E== G -'  A_A   T   R_R E== N N N D  D  {{              " << endl <<
//			" ==============  M   M EEE [GGG A   A  T   R [ EEE N  NN DDD  [SSS             " << endl << 
//			"                                                                               " << endl << 
//			"AMIBIOS (C) 2006 American Megatrends. Inc                                      " << endl << 
//			"ASUS PSB-VM ACPI BIOS Revision 1004                                            " << endl << 
//			"CPU : Intel (R) Core(IM) 2 Quad CPU Q6600 @ 2.40GHz                            " << endl << 
//			" Speed : 2.41 GHz                                                              " << endl << 
//			"                                                                               " << endl << 
//			"Press DEL to run Setup                                                         " << endl << 
//			"Press F8 for BBS POPUP                                                         " << endl << 
//			"Press ALT+F2 to boot from System Recovery                                      " << endl << 
//			"PC2-6400 Dual Channel Inter leaved                                             " << endl << 
//			"Initaizing USB Controllers .. Done.                                            " << endl << 
//			"8128MB OK                                                                      " << endl << 
//			"USB Device(s) : 1 Keyboard                                                     " << endl << 
//			"                                                                               " << endl << 
//			"                                                                               " << endl << 
//			"                                                                               " << endl << 
//			"                                                                               " << endl << 
//			"                                                                               ";



//cout << "                                                                                " << 
//			"                                                                                " << 
//			"                                                                                " << 
//			"                                                                                " << 
//			"                                                                                " << 
//			"                                                                                " << 
//			"                                                                                " << 
//			"                                                                                " << 
//			"                                                                                " << 
//			"                                                                                " << 
//			"                                                                                " << 
//			"                                                                                " << 
//			"                                                                                " << 
//			"                                                                                " << 
//			"                                                                                " << 
//			"                                                                                " << 
//			"                                                                                " << 
//			"                                                                                " << 
//			"                                                                                " << 
//			"                                                                                " << 
//			"                                                                                " << 
//			"                                                                                " << 
//			"                                                                                " << 
//			"                                                                                " << 
//			"                                                                                " << 
//			"                                                                                " << 
//			"                                                                                ";
