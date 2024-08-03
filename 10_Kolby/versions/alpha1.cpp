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
			cout << endl << line;
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
int main() {	
	//random
	
	srand(time(NULL));
	
//	int min=0, max=8;
//	int random = min + (rand() % (max - min + 1));
	
	//vvod kolb
	
	int kolba1[4], kolba2[4], kolba3[4], kolba4[4], kolba5[4];
	int kolba6[4], kolba7[4], kolba8[4], kolba9[4];
	int kolba10[4], kolba11[4];
	
	//sapoln kolb 
	
	int rasd[9], r = 0 + (rand() % (9 - 0));
	for (int i = 0; i < 9; i++) rasd[i] = -1;
	for (int i = 0; i < 9; i++) {
		while (rasd[r] != -1) {
			r = 0 + (rand() % (9 - 0));	
		}
		rasd[r] = i;
	}
	
//	for (int i = 0; i < 9; i++) cout << rasd[i] << " ";
	return 0;
}
