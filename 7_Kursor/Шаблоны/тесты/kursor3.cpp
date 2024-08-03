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
    cout << "  ===========================================" << endl <<
			"  ||X  BBBBBB   X=X=X=X=X=X=X=X=        X=X||" << endl <<
			"  ||X  BB   BB  X=X=X=X=X=X=X=      W     =||" << endl <<
			"  ||X  BBBBBB   X=X=X=X=X=X=X    WW   WW   ||" << endl <<
			"  ||X  BB   BB   =X=X=X=X=X=X  <W   #   W> ||" << endl <<
			"  ||X  BBBBBB           X=X=X    WW   WW   ||" << endl <<
			"  ||X         OOOOO     X=X=X=      W      ||" << endl <<
			"  ||X=X=X=   OO   OO    X=X=X=X=         =X||" << endl <<
			"  ||X=X=X=   OO   OO    X=X=X=X=X=X=X=X=X=X||" << endl <<
			"  ||X=X=X=   OO   OO     =X=X=X=X=X=X=X=X=X||" << endl <<
			"  ||X=X=X=    OOOOO             X=X=X=X=X=X||" << endl <<
			"  ||X=X=X=              OOOOO   X=X=X=X=X=X||" << endl <<
			"  ||X=X=X=X=X=X=X=X=   OO   OO  X=X=X=X=X=X||" << endl <<
			"  ||X=X=X=X     X=X=X  OO   OO  X=X=X=X=X=X||" << endl <<
			"  ||X=X=X   QQQ  =X=X  OO   OO   =X=X=X=X=X||" << endl <<
			"  ||X=X    Q     =X=X   OOOOO              ||" << endl <<
			"  ||X   QQQQQQ   =X=X          MMM     MMM ||" << endl <<
			"  ||X  Q      Q  =X=X=X=X=X=   MM MM MM MM ||" << endl <<
			"  ||X  Q      Q  =X=X=X=X=X    MM  MMM  MM ||" << endl <<
			"  ||X   QQQQQQ   =X=X=X=X=X=X  MM   M   MM ||" << endl <<
			"  ||X=X         X=X=X=X=X=X=X  MM       MM ||" << endl <<
			"  ===========================================" << endl;
    a=getch();
    
    Cursor(0,0);
    cout << "  ===========================================" << endl <<
			"  ||X  BBBBBB   X=X=X=X=X=X=X=X=        X=X||" << endl <<
			"  ||X  BB   BB  X=X=X=X=X=X=X=      W     =||" << endl <<
			"  ||X  BBBBBB   X=X=X=X=X=X=X    WW   WW   ||" << endl <<
			"  ||                                        |" << endl <<
			"  ||X  BBBB              =X=X    WW   WW   ||" << endl <<
			"  ||X                   X X X               |" << endl <<
			"  ||X= =X=   OO   OO    X=X=X=X=         =X||" << endl <<
			"  ||X=X  =   OO   OO    X=X=X=X  =X=X=X=X=X||" << endl <<
			"  ||X=X=X=   OO   OO     =X=X= =X=X=X=X=X=X||" << endl <<
			"  ||X=X=X=    OOOOO             X=X=X=X=X=X||" << endl <<
			"  ||X=X=X=               OOOO   X=X=X=X=X=X||" << endl <<
			"  ||X=X=X X=X=X=X=X=   OO       X=X=X=X=X=X||" << endl <<
			"  ||X=X=X=X     X=X=X  OO   OO       =X=X=X||" << endl <<
			"  ||X=X=X   QQQ  =X=X  OO   OO   =X=X  =X=X||" << endl <<
			"  ||X=X    Q     =X=X   OOOOO              ||" << endl <<
			"  ||X   QQQQQQ   =X=X          MMM     MMM ||" << endl <<
			"  ||X  Q      Q  =X=X=X=X=X=   MM MM MM MM ||" << endl <<
			"  ||X  Q      Q  =X=X=X=X=X    MM  MMM  MM ||" << endl <<
			"  ||X   Q QQQQ   = =X=X=X=X=X  MM   M   MM ||" << endl <<
			"  ||X=X         X=X X=X=X=X=X  MM       MM ||" << endl <<
			"  ===========================================" << endl;
    a=getch();
    
    Cursor(0,0);
    cout << "  ===========================================" << endl <<
			"  ||X  BBBBBB   X=X=X=X=X=X=X=X=        X=X||" << endl <<
			"  ||X                                     =||" << endl <<
			"  ||X  BBBBBB   X=X=X=X=X=X=X    WW   WW   ||" << endl <<
			"  ||                                        |" << endl <<
			"  ||X  BBBB              =X=X    WW   WW   ||" << endl <<
			"  ||X                   X X X               |" << endl <<
			"  ||                                       ||" << endl <<
			"  ||X=X                          =X=X=X=X=X||" << endl <<
			"  ||X=                                   =X||" << endl <<
			"  ||X=                                  X=X||" << endl <<
			"  ||X=X=X=               OOOO   X=X=X=X=X=X||" << endl <<
			"  ||X=                                 =X=X||" << endl <<
			"  ||X=X                              =X=X=X||" << endl <<
			"  ||X=X=X                                =X||" << endl <<
			"  ||X=X    Q     =X=X   OOOOO              ||" << endl <<
			"  ||X                                   MM ||" << endl <<
			"  ||X  Q      Q  =X=X=X=X=X=   MM MM MM MM ||" << endl <<
			"  ||X  Q                                MM ||" << endl <<
			"  ||X   Q QQQQ                          MM ||" << endl <<
			"  ||X=X         X=X X=X=X=X=X  MM       MM ||" << endl <<
			"  ===========================================" << endl;
    a=getch();
    
    Cursor(0,0);
    cout << "  ==== ======================================" << endl <<
			"  ||                                       ||" << endl <<
			"  ||                                       ||" << endl <<
			"  |                                        ||" << endl <<
			"  ||                                        |" << endl <<
			"  ||                                       ||" << endl <<
			"  |                                         |" << endl <<
			"  ||                                       ||" << endl <<
			"  ||                                       ||" << endl <<
			"  |                                        ||" << endl <<
			"  ||                                       ||" << endl <<
			"  ||                                       ||" << endl <<
			"  |                                        ||" << endl <<
			"  ||                                       ||" << endl <<
			"  ||                                        |" << endl <<
			"  ||                                       ||" << endl <<
			"  ||                                       ||" << endl <<
			"  ||                                       ||" << endl <<
			"  ||                                       ||" << endl <<
			"  |                                        ||" << endl <<
			"  ||                                       ||" << endl <<
			"  ============================== ============" << endl;
    a=getch();
    
    return 0;
}
