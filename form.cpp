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
			cout << endl << line;
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
	
}
