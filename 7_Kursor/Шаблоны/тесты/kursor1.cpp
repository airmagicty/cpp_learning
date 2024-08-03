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
    
    Cursor(5,5);
    cout << "g";
    a=getch();
    
    Cursor(6,6);
    cout << "g";
    a=getch();
    
    return 0;
}
