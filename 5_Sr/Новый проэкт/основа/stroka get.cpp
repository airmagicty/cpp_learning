#include <iostream>
#include <conio.h>
#include <string>
#include <windows.h>

using namespace std;

int main()
{
	char a;
	int i;
    for (i=0; i<1024; i++)
	{
		a = getch();
		cout << a;
	}
    
}
