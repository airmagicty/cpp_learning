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

void AV(int x, int y, int X[270], int Y[270])
{
	int i;
	for (i=0; i<271; i++)
	{
		X[i] = rand();
		while (X[i] < 20 || X[i] > 60)
		{
			X[i] = rand();
		}
		
		Y[i] = rand();
		while (Y[i] < 2 || Y[i] > 22)
		{
			Y[i] = rand();
		}
	}
}

int main()
{
	srand(time(NULL));
    int x=40, y=12, i;
    int a, aV, X[270], Y[270];
    AV(x, y, X, Y);
    for (i=0; i<271; i++)
	{
		cout << i << "[" << X[i] << " " << Y[i] << "]; ";
	}
}
