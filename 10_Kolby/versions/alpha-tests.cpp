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
			cout << line << endl;
		}
		myfile.close();
	}
	else cout << "Unable to open file: " << fileName << endl;
}

// переместить курсор на координаты
void Cursor(int x, int y)
{
    COORD position = {x,y}; //позиция x и y
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsole, position);
}

void Pause(int n)
{
	int i, j;
	n = n*10000;
	for (i=0; i<n; i++)
	for (j=0; j<4000; j++);
}

void game_over(int count, bool dop) {
	Cursor(28,22);
	system("pause");
	
	Cursor(0,0);
	if (dop)
	printImage("texture_finish2.cpp");
	
	if (!dop)
	printImage("texture_finish1.cpp");
	
	Cursor(28,22);
	system("pause");
	Cursor(0,0);
	printImage("texture_finish3.cpp");
	
	Cursor(28,21);
	cout << "Score: " << count << "   " << endl << " ";
	
	Cursor(28,22);
	system("pause");
}

int main() {
	int count = 12;
	bool dop = true;
	
	game_over(count, dop);
	
//	cin >> cc;
//	system("pause");
}
