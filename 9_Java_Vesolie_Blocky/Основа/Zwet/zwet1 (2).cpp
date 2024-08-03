#include <iostream> 	//int x, y, vbr
#include <conio.h>		//char char1
#include <windows.h>	//goto m
#include <stdio.h>

using namespace std;

/*

HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(handle, FOREGROUND_RED);
cout << "Hello!";

0 Ч черный
1 Ч синий
2 Ч зеленый
3 Ч голубой
4 Ч красный
5 Ч лиловый
6 Ч желтый
7 Ч белый
8 Ч серый
9 Ч свело-синий
A Ч светло-зеленый
B Ч светло-голубой
— Ч светло-красный
E Ч светло-желтый
F Ч €рко-белый
фон цвет шрифта

	Black = 0,
	Blue = 1,
	Green = 2,
	Cyan = 3,
	Red = 4,
	Magenta = 5,
	Brown = 6,
	LightGray = 7,
	DarkGray = 8,
	LightBlue = 9,
	LightGreen = 10,
	LightCyan = 11,
	LightRed = 12,
	LightMagenta = 13,
	Yellow = 14,
	White = 15
*/
int main()
{
	int i;
	for (i=0; i<287; i++)
	{
		HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(handle, i);
		cout << "[" << i << "] Hello!" << endl;
	}
}
//0 = 7
//1 = 15
//2 = 12
//3 = 6
//4 = 14
//5 = 10
//6 = 11
//7 = 9
//8 = 5
//9 = 13
