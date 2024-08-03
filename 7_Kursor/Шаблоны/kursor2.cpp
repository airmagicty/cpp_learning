#include <iostream>
#include <conio.h>
#include <windows.h>
 
int main()
{
        int x=0, y=0;
        int step=10;
        char c;
 
        SetCursorPos(x, y);
        do {
                c=getch();
                switch(c){
                        case 75: SetCursorPos(x-=step, y); break;
                        case 77: SetCursorPos(x+=step, y); break;
                        case 72: SetCursorPos(x, y-=step); break;
                        case 80: SetCursorPos(x, y+=step); break;
                }
        } while(c != 27); // Esc
 
        system("pause");
        return 0;
}
