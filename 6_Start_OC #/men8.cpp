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

//==============================================================================
void c1()
{
	Color(143);
	Cursor(2,3);
	Color(248);
	cout << "*Ubuntu                                                                    ";
	Cursor(2,4);
	Color(143);
	cout << " Дополнительные параметры для Ubuntu                                       ";
	Cursor(2,5);
	cout << " Memory test (memtest86+)                                                  ";
	Cursor(2,6);
	cout << " Memory test (memtest86+, serial console 115200)                           ";
	Cursor(2,7);
	cout << " Windows 7 (loader) (на /dev/sdal)                                         ";
	Cursor(59,18);
}
//
void c2()
{
	Color(143);
	Cursor(2,3);
	cout << " Ubuntu                                                                    ";
	Cursor(2,4);
	Color(248);
	cout << "*Дополнительные параметры для Ubuntu                                       ";
	Cursor(2,5);
	Color(143);
	cout << " Memory test (memtest86+)                                                  ";
	Cursor(2,6);
	cout << " Memory test (memtest86+, serial console 115200)                           ";
	Cursor(2,7);
	cout << " Windows 7 (loader) (на /dev/sdal)                                         ";
	Cursor(59,18);
}
//
void c3()
{
	Color(143);
	Cursor(2,3);
	cout << " Ubuntu                                                                    ";
	Cursor(2,4);
	cout << " Дополнительные параметры для Ubuntu                                       ";
	Cursor(2,5);
	Color(248);
	cout << "*Memory test (memtest86+)                                                  ";
	Cursor(2,6);
	Color(143);
	cout << " Memory test (memtest86+, serial console 115200)                           ";
	Cursor(2,7);
	cout << " Windows 7 (loader) (на /dev/sdal)                                         ";
	Cursor(59,18);
}
//
void c4()
{
	Color(143);
	Cursor(2,3);
	cout << " Ubuntu                                                                    ";
	Cursor(2,4);
	cout << " Дополнительные параметры для Ubuntu                                       ";
	Cursor(2,5);
	cout << " Memory test (memtest86+)                                                  ";
	Cursor(2,6);
	Color(248);
	cout << "*Memory test (memtest86+, serial console 115200)                           ";
	Cursor(2,7);
	Color(143);
	cout << " Windows 7 (loader) (на /dev/sdal)                                         ";
	Cursor(59,18);
}
//
void c5()
{
	Color(143);
	Cursor(2,3);
	cout << " Ubuntu                                                                    ";
	Cursor(2,4);
	cout << " Дополнительные параметры для Ubuntu                                       ";
	Cursor(2,5);
	cout << " Memory test (memtest86+)                                                  ";
	Cursor(2,6);
	cout << " Memory test (memtest86+, serial console 115200)                           ";
	Cursor(2,7);
	Color(248);
	cout << "*Windows 7 (loader) (на /dev/sdal)                                         ";
	Color(143);
	Cursor(59,18);
}
//==============================================================================
void c11()
{
	Cursor(4,9);
	Color(100);
	cout << "Ubuntu User OC";
	Cursor(4,14);
	Color(96);
	cout << "Гостевой сеанс";
	Color(96);
	Cursor(0,0);
}

void c12()
{
	Cursor(4,9);
	Color(96);
	cout << "Ubuntu User OC";
	Cursor(4,14);
	Color(100);
	cout << "Гостевой сеанс";
	Color(96);
	Cursor(0,0);
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

int main()
{
	setlocale(LC_ALL, "rus");
	int a;
	int x, y;
	char b=7;
	int v, v2, ca=1;
	int c=1;
	int ab;
	char abc;
	int abc2;
ex:	//
	a = 0;
	x = 0;
	y = 0;
	b = 7;
	v = 0;
	v2 = 0;
	ca = 1;
	c = 1;
	ab = 0;
	//
	cout << "                                 Start - Enter";
	a=getch();
	Cursor(0,0);
	cout << "                                               ";
	Cursor(0,0);
	Pause (5);
	//
	Pause(3);
	cout << b;
	Pause(7);
	//
	Cursor(0,0); 
	cout << " "; Color(12); 
	cout << "      ==       "; Color(15); 
	cout << "   A   M[ ]M EEE RRR III CC}   A   NN  N                       " << endl << 
			" "; Color(12); 
			cout << "     ====      "; Color(15); 
			cout << "  A_A  M M M E== R_R  I  C    A_A  N N N                       " << endl << 
			" "; Color(12); 
			cout << "    ======     "; Color(15); 
			cout << " A   A M   M EEE R } III CC} A   A N  NN                       " << endl << 
			" "; Color(12); 
			cout << "   ==    ==    "; Color(15); 
			cout << "                                                               " << endl << 
			" "; Color(12); 
			cout << "  == =  = ==   "; Color(15); 
			cout << " M} {M EEE [GG]   A  TTTTT RRR EEE NN  N DDD  SSS]             " << endl << 
			" "; Color(12); 
			cout << " ==   ==   ==  "; Color(15); 
			cout << " M M M E== G -'  A_A   T   R_R E== N N N D  D  {{              " << endl <<
			" "; Color(12); 
			cout << "============== "; Color(15); 
			cout << " M   M EEE [GGG A   A  T   R [ EEE N  NN DDD  [SSS             " << endl << 
			"        "; Color(7); 
			cout << "                                                                       " << endl << 
			"AMIBIOS (C) 2006 American Megatrends. Inc                                      " << endl << 
			"ASUS PSB-VM ACPI BIOS Revision 1004                                            " << endl << 
			"CPU : Intel (R) Core(IM) 2 Quad CPU Q6600 @ 2.40GHz                            " << endl << 
			" Speed : 2.41 GHz                                                              " << endl << 
			"                                                                               " << endl << 
			"Press DEL to run Setup                                                         " << endl << 
			"Press F8 for BBS POPUP                                                         " << endl << 
			"Press ALT+F2 to boot from System Recovery                                      " << endl << 
			"PC2-6400 Dual Channel Inter leaved                                             " << endl << 
			"Initaizing USB Controllers .. Done.                                            " << endl << 
			"8128MB OK                                                                      " << endl << 
			"USB Device(s) : 1 Keyboard                                                     " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               ";
	//
	Pause(2);
	Cursor (0, 21);
	cout << "Auto-Detecting Sata 1..IDE Hard Disk";
	Pause(2);
	Cursor (0, 22);
	cout << "Auto-Detecting Sata 2..IDE Hard Disk";
	Pause(2);
	Cursor (0, 23);
	cout << "Auto-Detecting Sata 3..IDE Hard Disk";
	Pause(20);
	Cursor (0, 24);
	cout << "PC2-6400 Dual Channel Inter leaved" << endl << "Initaizing USB Controllers .. Done." << endl << 
	"                     Press ALT+F2 to boot Initaizing USB Controllers .. Done.";
	Pause(4);
	//
	Cursor(0,0);
	cout << "                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl <<
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               ";
			Pause(3); 
	//
	Cursor(2,0);
	Pause(2);
	cout << "PC2-6400 Dual Channel Inter leaved AMIBIOS (C) 2006 American Megatrends";
	Cursor(2,1);
	Pause(2);
	cout << "USB Device(s) : 1 Keyboard Press ALT+F2 to boot from System Recovery";
	Cursor(6,3);
	Pause(2);
	cout << "Auto-Detecting Sata 4..IDE Hard Disk";
	Pause(15);
	Cursor(29,3);
	cout << " run Setup    ";
	Pause(8);
	//
	Cursor(0,0);
	cout << "                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl <<
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               ";
			Pause(5);
	//
	Cursor(0,0);
	cout << "AMIBIOS (C) Megatrends. Inc                                                    " << endl << 
			"ASUS PSB-VM ACPI  Revision 104                                                 " << endl << 
			"CPU : Intel (R) Core(IM) 2 Quad CPU Q6600                                      " << endl << 
			" Speed : 2.41 GHz                                                              " << endl << 
			"                                                                               " << endl << 
			"Press DEL to run Setup                                                         " << endl << 
			" F8 PUP                                                                        " << endl << 
			"Press ALT+F2 to boot m Recovery                                                " << endl << 
			"PC2-6400 Dual Channel Inter leaved                                             " << endl << 
			"Initaizing USB .. Done.                                                        " << endl << 
			"8128MB OK                                                                      " << endl << 
			"USB Device(s) : 7                                                              " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl <<
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               ";
			Pause(5);
			//
	Cursor(0,0);
	cout << "                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"Press ALT+F2 (C)  Inc Initaizing                                               " << endl << 
			"USB Device(s) : 7                                                              " << endl << 
			"PC2-6400 Dual Channel Inter leaved                                             " << endl << 
			"Megatrends. (R) to run Setup 2 Quad CPU Q6600                                  " << endl << 
			"PC2-6400 Dual Done Inter leaved                                                " << endl <<
			"8128MB OK                                                                      " << endl << 
			"Megatrends. USB .. Channel.                                                    " << endl << 
			"AMIBIOS to boot m Recovery                                                     " << endl << 
			"ASUS PSB-VM ACPI  Revision 104                                                 " << endl << 
			"AMIBIOS (C) CPU : Intel Inc                                                    " << endl << 
			"Press DEL Core(IM)                                                             " << endl << 
			" Speed : 2.41 GHz                                                              ";
			Pause(5);
			cout << endl;
			cout << "ASUS PSB-VM ACPI Press Revision 1004" << endl;
			Pause(3); 
			cout << " to boot BIOS from Recovery System";
			Pause(8);
	//
	Cursor(0,0);
	Color(143);
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
	Pause(10);
	//
	Cursor(1,0);
	Pause(20);
	Cursor(1,2);
	Pause(20);
	//
	
	Color(143);
	Cursor(0,0);
	cout << "                                                                               " << endl << 
			"         GNU: TO SELECT the operating system, click on the arrows              " << endl << 
			" ============================================================================= " << endl << 
			" |"; Color(248);
			cout << " Ubuntu                                                                    "; Color(143);
			cout << "| " << endl << 
			" | Дополнительные параметры для Ubuntu                                       | " << endl << 
			" | Memory test (memtest86+)                                                  | " << endl <<
			" | Memory test (memtest86+, serial console 115200)                           | " << endl << 
			" | Windows 7 (loader) (на /dev/sdal)                                         | " << endl << 
			" |                                                                           | " << endl << 
			" |                                                                           | " << endl << 
			" |                                                                           | " << endl << 
			" |                                                                           | " << endl << 
			" |                                                                           | " << endl << 
			" |                                                                           | " << endl << 
			" |                                                                           | " << endl << 
			" |                                                                           | " << endl << 
			" ============================================================================= " << endl << 
			"                                                                               " << endl << 
			"       Используйте клавиши ^ и v для перемещения по пунктам                    " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               ";
			
	v = getch();
	
	while (v != 77 || v != 13)
	{
		v = getch();
		switch (v)
		{
			case 72: c--; break;
			case 80: c++; break;
			case 77: goto m; break;
			case 13: goto m; break;
		}
		
		if (c < 1)
		{
			c = 5;
		}
		
		if (c > 5)
		{
			c = 1;
		}
		
		switch (c)
		{
			case 1: c1(); break;
			case 2: c2(); break;
			case 3: c3(); break;
			case 4: c4(); break;
			case 5: c5(); break;
			default: c1();
		}
	}
	//
m:	Color(7);
	Pause(3);
	
	// Ubuntu
	
	if (c == 1)
	{
		Cursor(0,0);
		Color(100);
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
		Color(100); // 100 108
		Cursor(0,0);
		cout << "                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl <<
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                      @@      @@      @@     @@     @@                         " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               ";
			Color(108);
			Pause(9);
			Cursor(22,12);
			cout << "@@";
			Pause(9);
			Cursor(30,12);
			cout << "@@";
			Pause(9);
			Cursor(38,12);
			cout << "@@";
			Pause(9);
			Cursor(45,12);
			cout << "@@";
			Pause(9);
			Cursor(52,12);
			cout << "@@";
			Color(96);
			Cursor(0,0);
			cout << "===============================================================================" << endl << 
					"|Ubuntu|                                                 @  ####  =K  00:00  Q|" << endl << 
					"===============================================================================" << endl << 
					"|                                                                             |" << endl << 
					"|                                                                             |" << endl << 
					"|                                                                             |" << endl <<
					"|                                                                             |" << endl << 
					"|                                                                             |" << endl << 
					"|  ================                                                           |" << endl << 
					"|  |"; Color(100);
			cout << "Ubuntu User OC"; Color(96);
			cout << "|                                                           |" << endl << 
					"|  |Password:     |                                                           |" << endl << 
					"|  ================                                                           |" << endl << 
					"|                                                                             |" << endl << 
					"|  ================                                                           |" << endl << 
					"|  |Гостевой сеанс|                                                           |" << endl << 
					"|  |Войти =>      |                                                           |" << endl << 
					"|  ================                                                           |" << endl << 
					"|                                                                             |" << endl << 
					"|                                                                             |" << endl << 
					"|                                                                             |" << endl << 
					"|                                                                             |" << endl << 
					"|                                                                             |" << endl << 
					"|                                                                    _________|" << endl << 
					"| ubuntu* 12.04 LTS                                                  |esc-exid|" << endl << 
					"===============================================================================";
					
v:			v2 = getch();
			while (v2 != 13 || v2 != 27)
			{
				v2 = getch();
				switch (v2)
				{
					case 72: ca--; break;
					case 80: ca++; break;
					case 13: goto u; break;
					case 27: exid2(); goto ex; break;
				}
		
				if (ca < 1)
				{
					ca = 2;
				}
		
				if (ca > 2)
				{
					ca = 1;
				}
		
				switch (ca)
				{
					case 1: c11(); break;
					case 2: c12(); break;
					default: c11();
				}
			}
u:			Cursor(0,0);
			if (ca == 1)
			{
				char aa;
				int I;
				Color(100);
				Cursor(35,13);
				cout << "Enter password: [________]";
				Cursor(52,13);
				
				for (I=0; I<8; I++)
				{
					aa = getch();
					cout << aa;
				}
				Cursor(35,14);
				cout << "Error: incorrect password!";
				Pause (15);
				Color(96);
				Cursor(35,13);
				cout << "                           ";
				Cursor(35,14);
				cout << "                           ";
				Cursor(0,0);
				goto v;
			}
			
			if (ca == 2)
			{
				Color(100);
				Cursor(35,13);
				cout << "Error: OS locked!";
				Pause (15);
				Color(96);
				Cursor(35,13);
				cout << "                           ";
				Cursor(35,14);
				cout << "                           ";
				Cursor(0,0);
				goto v;
				Color(96);
			}
	}
	
	// Настройки
	
	if (c == 2)
	{
		Cursor(0,0);
	Color(12);
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
		
		Color(12);
		Cursor(0,0);
		cout << "===============================================================================" << endl << 
			"|       -----------           ------------           -----------              |" << endl << 
			"|      [           ]         [   |        ]         [           ]             |" << endl << 
			"|      [    ++     ]         [    |++     ]         [    ++     ]             |" << endl << 
			"|      [   { ++    ]         [     ++     ]         [    ++}    ]             |" << endl << 
			"|      [  {        ]         [            ]         [       }   ]             |" << endl <<
			"|       -----------           ------------           -----------              |" << endl << 
			"|      MM MM * NN  N           A   V   V           MM MM   A   X X            |" << endl << 
			"|      M M M M N N N          A_A   V V            M M M  A_A   X             |" << endl << 
			"|      M   M M N  NN         A   A   V             M   M A   A X X            |" << endl << 
			"|                                                                             |" << endl << 
			"|                                                                             |" << endl << 
			"|      =======       ========                                                 |" << endl << 
			"|      |i c 7|       |Nvidea|                                                 |" << endl << 
			"|      =======       ========                                                 |" << endl << 
			"|                                                                             |" << endl << 
			"|    sss   ppp    eee      eee      d        222    4   4   11 GGG  H H       |" << endl << 
			"|   s   s  p  p  e   e    e   e     d       2   2   4   4  1 1 G  G H H       |" << endl << 
			"|     ss   ppp  eeeeeee  eeeeeee dddd  ====    2    44444    1 G _  HHH ZZZ   |" << endl << 
			"|   ss     p     e       e       d  d         2         4    1 G  G H H _=    |" << endl << 
			"|    sss   p      eee     eee    dddd       22222 @@    4    1 GGGG H H ZZZ   |" << endl << 
			"|                                                                             |" << endl << 
			"|                                                                     ________|" << endl << 
			"|                                                                    |esc-exid|" << endl << 
			"===============================================================================";
			Color(7);
			ab = getch();
			while (ab != 27)
			{
				ab = getch();
			}
			exid2();
			goto ex;
	} 
	
	// Test
	
	if (c == 3 || c == 4)
	{
		Cursor(0,0);
		Color(10);
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
		
		Pause(5);
		Color(10);
		Cursor(0,0);
		cout << "                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                               ========                                        " << endl << 
			"                              [ X    X ]                                       " << endl << 
			"                              [  ____  ]                                       " << endl <<
			"                              [ [    ] ]                                       " << endl << 
			"                               ========                                        " << endl << 
			"                                                                               " << endl << 
			"                         Приносим свои извинения!                              " << endl << 
			"                                                                               " << endl << 
			"           Данный тест был удалён и использовался для настройки                " << endl << 
			"           ubuntu и windows. После настройки и отладки этих ОС                 " << endl << 
			"           центр отладки был заблокирован.                                     " << endl << 
			"                                                                               " << endl << 
			"                          Благодарим за внимание!                              " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                     Администратор.            " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                       ________" << endl << 
			"                                                                      |esc-exid";
			Color(7);
			ab = getch();
			while (ab != 27)
			{
				ab = getch();
			}
			exid2();
			goto ex;
	}
	
	// Windows 7
	
	if (c == 5)
	{
		Cursor(0,0);
		Color(191);
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
		Pause(3);
		Color(191);
		cout << "                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl <<
			"    ЗЗЗЗ        АА      ГГГГГГ  РРРРР   УУ   УУ   ЗЗЗЗ    КК  КК      АА       " << endl << 
			"   ЗЗ  ЗЗ      АААА     ГГ      РР  РР   УУ УУ   ЗЗ  ЗЗ   КК КК      АААА      " << endl << 
			"      ЗЗ      АА  АА    ГГ      РРРРР     УУУ       ЗЗ    КККК      АА  АА     " << endl << 
			"   ЗЗ  ЗЗ    АААААААА   ГГ      РР        УУ     ЗЗ  ЗЗ   КК КК    АААААААА    " << endl << 
			"    ЗЗЗЗ    АА      АА  ГГ      РР       УУ       ЗЗЗЗ    КК  КК  АА      АА   " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                            000      000      000                              " << endl << 
			"                            000      000      000                              " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               ";
			
		Cursor(0,0);
		Pause(10);
		
		Cursor(0,0);
		Color(176);
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
		
		Color(176);
		Cursor(0,0);
		cout << "                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl <<
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                _                              " << endl << 
			"                             Добро пожаловать! <@>                             " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                 ######     W     W * NN  N DDD   OOO  W     W  SSS   77777    " << endl << 
			"                ########     W W W  I N N N D  D O   O  W W W   _]^      7     " << endl << 
			"                ########      W W   I N  NN DDD   OOO    W W    SSS     7      " << endl << 
			"                 ######                                                        ";
		Cursor(17,21);
		Color(204);
		cout << "###";
		Color(34);
		cout << "###";
		Cursor(16,22);
		Color(204);
		cout << "####";
		Color(34);
		cout << "####";
		Cursor(16,23);
		Color(153);
		cout << "####";
		Color(238);
		cout << "####";
		Cursor(17,24);
		Color(153);
		cout << "###";
		Color(238);
		cout << "###";
		Cursor(0,0);
		Pause(15);
	//
		Color(185);
		Cursor(0,0);
	cout << "                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                              ================                                 " << endl << 
			"                              ||---      ---||                                 " << endl << 
			"                              ||  --___--   ||                                 " << endl <<
			"                              ||    000=====||                                 " << endl << 
			"                              ||  --^^^--   ||                                 " << endl << 
			"                              ||---     ----||                                 " << endl << 
			"                              ================                                 " << endl << 
			"                                                                               " << endl << 
			"                             +=====+========+                                  " << endl << 
			"                             |Pass:|________|                                  " << endl << 
			"                             +=====+========+                                  " << endl << 
			"                                                                               " << endl << 
			"                          Пользователь: AltairTY ^                             " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                                                                               " << endl << 
			"                 ######     W     W * NN  N DDD   OOO  W     W  SSS   77777    " << endl << 
			"                ########     W W W  I N N N D  D O   O  W W W   _]^      7     " << endl << 
			"                ########      W W   I N  NN DDD   OOO    W W    SSS    _7______" << endl << 
			"                 ######                                               |esc-exid";
		//
		Cursor(17,21);
		Color(204);
		cout << "###";
		Color(34);
		cout << "###";
		Cursor(16,22);
		Color(204);
		cout << "####";
		Color(34);
		cout << "####";
		Cursor(16,23);
		Color(153);
		cout << "####";
		Color(238);
		cout << "####";
		Cursor(17,24);
		Color(153);
		cout << "###";
		Color(238);
		cout << "###";
		Cursor(26,15);
		Color(177);
		cout << "Пользователь: AltairTY ^";
		Cursor(0,0);
		int abcd = 0;
vs:		abc = getch();
		abcd = getch();
		if (abc == 27)
			{
				exid2();
				goto ex;
			}
		
		
		Cursor(36,12);
		for (abc2=0; abc2<8; abc2++)
		{	
			abc = getch();
			cout << abc;
		}
		
		Pause(3);
		Cursor(36,14);
		Color(188);
		cout << "No!";
		Color(185);
		Pause(5);
		Cursor(36,14);
		cout << "   ";
		Cursor(36,12);
		cout << "________";
		Cursor(0,0);
		goto vs;
	}
	// 
	Cursor(0,0);
	a = getch();
}


//======================================================================================================


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
