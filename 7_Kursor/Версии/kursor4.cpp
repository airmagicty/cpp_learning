#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

void Cursor(int x, int y)
{
    COORD position = {x,y}; //позиция x и y
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsole, position);
}

int main ()
{
    int x=0, y=0, a;
    
    Cursor(0,0);
    cout << "|==============================================================================|" <<
			"||                                                                            ||" <<
			"||                                                                            ||" <<
			"||                                                                            ||" <<
			"||                                                                            ||" <<
			"||                                                                            ||" <<
			"||                                                                            ||" <<
			"||                                                                            ||" <<
			"Y|                                                                            ||" <<
			"||                                                                            ||" <<
			"||                                                                            ||" <<
			"||                                                                            ||" <<
			"||                                                                            ||" <<
			"||                                                                            ||" <<
			"||                                                                            ||" <<
			"||                                                                            ||" <<
			"||                                                                            ||" <<
			"||                                                                            ||" <<
			"||                                                                            ||" <<
			"||                                                                            ||" <<
			"||                                                                            ||" <<
			"||                                                                            ||" <<
			"||                                                                            ||" <<
			"||                                                                            ||" <<
			"|================================================X=============================>";
	Cursor(0,0);
	Cursor(77,23);
	x=77; y=23;
//	cout << "W";
    
    char char1 = 219;
    
    while (x!=1 && x!=78 && y!=24 && y != 1)
    {
    	a=getch();
    	
    	if (a == 77)
    	{
    		x++;
    		Cursor(x,y);
    		cout << "";
		}
    	
    	if (a == 75)
    	{
    		x--;
    		Cursor(x,y);
		}
		
		if (a == 80)
    	{
    		y++;
    		Cursor(x,y);
		}
		
		if (a == 72)
    	{
    		y--;
    		Cursor(x,y);
		}
		
		if (a == 13)
    	{
    		cout << char1;
		}
		
	}
    
    return 0;
}
