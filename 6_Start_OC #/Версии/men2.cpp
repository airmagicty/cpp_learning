#include <iostream>
#include <conio.h>
#include <windows.h>
#include <stdio.h>
#include <fstream>
#include <cstdlib>
#include <cstddef>
#include <cmath>

using namespace std;

// ����� �� �����
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

// ����
void Color(int c)
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(handle, c);
}

// ������
void Cursor(int x, int y)
{
    COORD position = {x,y}; //������� x � y
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsole, position);
}

// �����
void Pause(int n)
{
	int i, j;
	n = n*10000;
	for (i=0; i<n; i++)
	for (j=0; j<4000; j++);
}

int main()
{
	setlocale(LC_ALL, "rus");
	int a;
	int x, y;
	char b=7;
	//
	cout << "                                 Start - Enter";
	a=getch();
	Cursor(0,0);
	cout << "                                               ";
	Cursor(0,0);
	Pause (10);
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
	Pause(20);
	//
	Cursor(1,0);
	Pause(20);
	Cursor(1,1);
	Pause(20);
	//
	Cursor(0,0);
	Color(143);
	cout << "                                                                               " << endl << 
			"         GNU: TO SELECT the operating system, click on the arrows              " << endl << 
			" ============================================================================= " << endl << 
			" | Ubuntu                                                                    | " << endl << 
			" | �������������� ��������� ��� Ubuntu                                       | " << endl << 
			" | Memory test (memtest86+)                                                  | " << endl <<
			" | Memory test (memtest86+, serial console 115200)                           | " << endl << 
			" | Windows 7 (loader) (�� /dev/sdal)                                         | " << endl << 
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
			"       ����������� ������� ^ � v ��� ����������� �� �������                    " << endl << 
			"       ������� <enter> ��� �������� ��������� OC, <e> ���                      " << endl << 
			"       �������������� ������ �� �������� ��� <c> ��� ���������                 " << endl << 
			"       ��������� ������                                                        " << endl << 
			"  ���������� ����� ����� �������� ������������� ����� 8s.                      " << endl << 
			"                                                                               " << endl << 
			"                                                                               ";
	//
	//
	Cursor(0,0);
	cout << ".";
	a = getch();
}







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
