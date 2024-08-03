#include <iostream>
#include <cstring>
#include <windows.h>
#include <conio.h>

using namespace std;

main ()
{
	int a, i;
	for (i=0; i< 1024; i++)
	{
		a = getch();
		cout  << "[" << i << "] Vasa klavisa == " << a << endl;
	}
}
