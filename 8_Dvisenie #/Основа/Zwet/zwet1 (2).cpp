#include <iostream> 	//int x, y, vbr
#include <conio.h>		//char char1
#include <windows.h>	//goto m
#include <stdio.h>

using namespace std;

/*

HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(handle, FOREGROUND_RED);
cout << "Hello!";

0 � ������
1 � �����
2 � �������
3 � �������
4 � �������
5 � �������
6 � ������
7 � �����
8 � �����
9 � �����-�����
A � ������-�������
B � ������-�������
� � ������-�������
E � ������-������
F � ����-�����
��� ���� ������

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
