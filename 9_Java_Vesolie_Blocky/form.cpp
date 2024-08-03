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

void AV(int x, int y, int X[500], int Y[500], int H[2])
{
	Color(27);
	Cursor(21,3); cout << "                                       ";
	Cursor(21,4); cout << "                                       ";
	Cursor(21,5); cout << "                                       ";
	Cursor(21,6); cout << "                                       ";
	Cursor(21,7); cout << "                                       ";
	Cursor(21,8); cout << "                                       ";
	Cursor(21,9); cout << "                                       ";
	Cursor(21,10); cout << "                                       ";
	Cursor(21,11); cout << "                                       ";
	Cursor(21,12); cout << "                                       ";
	Cursor(21,13); cout << "                                       ";
	Cursor(21,14); cout << "                                       ";
	Cursor(21,15); cout << "                                       ";
	Cursor(21,16); cout << "                                       ";
	Cursor(21,17); cout << "                                       ";
	Cursor(21,18); cout << "                                       ";
	Cursor(21,19); cout << "                                       ";
	Cursor(21,20); cout << "                                       ";
	Cursor(21,21); cout << "                                       ";
	Color(7);
	//
	int i, i2;
	for (i=0; i<501; i++)
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
		
		if (X[i] == x && Y[i] == y)
		{
			X[i] = -1;
			Y[i] = -1;
		}
		//
		Cursor(X[i],Y[i]);
		Color(28);
		cout << "#";
		Color(7);
	}
	Color(196); 
	Cursor(20,2); cout << "====================v====================";
	Cursor(20,3); cout << "|"; Cursor(40,3); Color(162); cout << "H"; Color(196); Cursor(60,3); cout << "|";
	Cursor(20,4); cout << "|"; Cursor(60,4); cout << "|";
	Cursor(20,5); cout << "|"; Cursor(60,5); cout << "|";
	Cursor(20,6); cout << "|"; Cursor(60,6); cout << "|";
	Cursor(20,7); cout << "|"; Cursor(60,7); cout << "|";
	Cursor(20,8); cout << "|"; Cursor(60,8); cout << "|";
	Cursor(20,9); cout << "|"; Cursor(60,9); cout << "|";
	Cursor(20,10); cout << "|"; Cursor(60,10); cout << "|";
	Cursor(20,11); cout << "|"; Cursor(60,11); cout << "|";
	Cursor(20,12); cout << ">"; Color(162); cout << "H"; Cursor(59,12); cout << "H"; Color(196); cout << "<";
	Cursor(20,13); cout << "|"; Cursor(60,13); cout << "|";
	Cursor(20,14); cout << "|"; Cursor(60,14); cout << "|";
	Cursor(20,15); cout << "|"; Cursor(60,15); cout << "|";
	Cursor(20,16); cout << "|"; Cursor(60,16); cout << "|";
	Cursor(20,17); cout << "|"; Cursor(60,17); cout << "|";
	Cursor(20,18); cout << "|"; Cursor(60,18); cout << "|";
	Cursor(20,19); cout << "|"; Cursor(60,19); cout << "|";
	Cursor(20,20); cout << "|"; Cursor(60,20); cout << "|";
	Cursor(20,21); cout << "|"; Cursor(40,21); Color(162); cout << "H"; Color(196); Cursor(60,21); cout << "|";
	Cursor(20,22); cout << "====================^====================";
	Color(7);

	H[1] = rand();
	while (H[1] < 20 || H[1] > 60)
	H[1] = rand();
	
	H[2] = rand();
	while (H[2] < 2 || H[2] > 22)
	H[2] = rand();
	
}

int main()
{
	srand(time(NULL));
    int x, y, j, J, J2 = 46, K;
    int a, aV, X[500], Y[500], H[2];
    char A = 7;
    Cursor(0, 0);
    Color(59);
    cout << "+==============================================================================+" <<
        "|                                                                              |" <<
        "|                   ====================H====================                  |" <<
        "|        ^          |                   H                   |         ^        |" <<
        "|      < + >        |                                       |       < + >      |" <<
        "|        v          |                                       |         v        |" <<
        "|                   |                                       |                  |" <<
        "|                   |                                       |         W        |" <<
        "|                   |                                       |       A + D      |" <<
        "|   Hodov ostalos:  |                                       |         S        |" <<
        "|     >             |                                       |                  |" <<
        "|                   |                                       |       ^ ^ ^      |" <<
        "|                   HH                  0                  HH     < 7 8 9 >    |" <<
        "|      Uroven:      |                                       |     < 4 + 6 >    |" <<
        "|      >            |                                       |     < 1 2 3 >    |" <<
        "|                   |                                       |       v v v      |" <<
        "|   Rekord - 20     |                                       |                  |" <<
        "|                   |                                       |                  |" <<
        "|                   |                                       |                  |" <<
        "|                   |                                       |                  |" <<
        "|                   |                                       |                  |" <<
        "|                   |                   H                   |                  |" <<
        "|                   ====================H====================                  |" <<
        "|                              Hodov: __________                               |" <<
        "+==============================================================================+";
        Cursor(0,0);
        Color(7);
m:	J=0;
	K=0;
d:  cout << A;
	Cursor(40, 13);
    AV(x, y, X, Y, H);
    Color(18);
    Cursor (H[1], H[2]);
    cout << "+";
    Color(7);
	Cursor(40, 12);
    x = 40;
    y = 12;
    Cursor(x, y); 
    Color(155);
	cout << "0";
	Color(7);
	Cursor(9, 4);
    //
    while (true)
    {
   		while (x > 20 && y > 2 && x < 60 && y < 22)
    	{
			J++;
     	    aV = getch();
     	    Color(155);
     	    switch (aV)
    	    {
    	      case 77: Cursor(x, y); cout << " "; x++; Cursor(x, y); cout << "0"; Cursor(7, 1); Color(59); cout << x << " " << y << " "; break; //>
    	      case 75: Cursor(x, y); cout << " "; x--; Cursor(x, y); cout << "0"; Cursor(7, 1); Color(59); cout << x << " " << y << " "; break; //<
    	      case 80: Cursor(x, y); cout << " "; y++; Cursor(x, y); cout << "0"; Cursor(7, 1); Color(59); cout << x << " " << y << " "; break; //v
    	      case 72: Cursor(x, y); cout << " "; y--; Cursor(x, y); cout << "0"; Cursor(7, 1); Color(59); cout << x << " " << y << " "; break; //^
    	      //
    	      case 55: Cursor(x, y); cout << " "; y--; x--; Cursor(x, y); cout << "0"; Cursor(7, 1); Color(59); cout << x << " " << y << " "; break; //^<
			  case 56: Cursor(x, y); cout << " "; y--; Cursor(x, y); cout << "0"; Cursor(7, 1); Color(59); cout << x << " " << y << " "; break; //^
			  case 57: Cursor(x, y); cout << " "; y--; x++; Cursor(x, y); cout << "0"; Cursor(7, 1); Color(59); cout << x << " " << y << " "; break; //^>
			  case 52: Cursor(x, y); cout << " "; x--; Cursor(x, y); cout << "0"; Cursor(7, 1); Color(59); cout << x << " " << y << " "; break; //<
			  case 54: Cursor(x, y); cout << " "; x++; Cursor(x, y); cout << "0"; Cursor(7, 1); Color(59); cout << x << " " << y << " "; break; //>
			  case 49: Cursor(x, y); cout << " "; y++; x--; Cursor(x, y); cout << "0"; Cursor(7, 1); Color(59); cout << x << " " << y << " "; break; //v<
			  case 50: Cursor(x, y); cout << " "; y++; Cursor(x, y); cout << "0"; Cursor(7, 1); Color(59); cout << x << " " << y << " "; break; //v
			  case 51: Cursor(x, y); cout << " "; y++; x++; Cursor(x, y); cout << "0"; Cursor(7, 1); Color(59); cout << x << " " << y << " "; break; //v>
    	      case 230: Cursor(x, y); cout << " "; y--; Cursor(x, y); cout << "0"; Cursor(7, 1); Color(59); cout << x << " " << y << " "; break;
			  case 235: Cursor(x, y); cout << " "; y++; Cursor(x, y); cout << "0"; Cursor(7, 1); Color(59); cout << x << " " << y << " "; break;
			  case 228: Cursor(x, y); cout << " "; x--; Cursor(x, y); cout << "0"; Cursor(7, 1); Color(59); cout << x << " " << y << " "; break;
			  case 162: Cursor(x, y); cout << " "; x++; Cursor(x, y); cout << "0"; Cursor(7, 1); Color(59); cout << x << " " << y << " "; break;
			  case 165: goto m; break;
			  case 114: goto m; break;
    	      //
    	      case 27: goto s; break;
    	      default: J--; break;
    	    }
    	    Color(7);
    	    //
    	    Cursor(8,10); 
    	    J2 = 300 - J;
    	    
    	    if (J2 > 200)
    	    Color(58);
    	    if (J2 < 201 && J2 > 100)
    	    Color(62);
    	    if (J2 < 101 && J2 > 10)
    	    Color(60);
    	    if (J2 < 11)
    	    Color(48);
    	    //
    	    if (J2 > 9)
    	    cout << J2 << "   ";
    	    
    	    if (J2 < 10)
    	    cout << J2 << "    ";
    	    Color(7);
    	    //
    	    if (J2 == 0)
    	    {
    	    	goto s;
    	    }
    	    Color(59);
    	    Cursor(9,4);
    	    //
     	   if (x==21 && y==12)
			{
				K++;
				Cursor (9,14);
				//
				if (K > 29)
    	    	Color(61);
    			if (K > 19 && K < 30)
    	   		Color(58);
    	    	if (K > 9 && K < 20)
    	    	Color(62);
    	    	if (K < 10)
    	    	Color(60);
    	    	//
				cout << K;
				cout << A << A;
				goto d;
			}
			
      		if (x==40 && y==21)
			{
				K++;
				Cursor (9,14);
				//
				if (K > 29)
    	    	Color(61);
    			if (K > 19 && K < 30)
    	   		Color(58);
    	    	if (K > 9 && K < 20)
    	    	Color(62);
    	    	if (K < 10)
    	    	Color(60);
    	    	//
				cout << K;
				cout << A << A;
				goto d;
			}
		
        	if (x==59 && y==12)
			{
				K++;
				Cursor (9,14);
				//
				if (K > 29)
    	    	Color(61);
    			if (K > 19 && K < 30)
    	   		Color(58);
    	    	if (K > 9 && K < 20)
    	    	Color(62);
    	    	if (K < 10)
    	    	Color(60);
    	    	//
				cout << K;
				cout << A << A;
				goto d;
			}
			
       	 	if (x==40 && y==3)
       		{
				K++;
				Cursor (9,14);
				//
				if (K > 29)
    	    	Color(61);
    			if (K > 19 && K < 30)
    	   		Color(58);
    	    	if (K > 9 && K < 20)
    	    	Color(62);
    	    	if (K < 10)
    	    	Color(60);
    	    	//
				cout << K;
				cout << A << A;
				goto d;
			}
			
			if (x == H[1] && y == H[2])
			{
				J = J - 15;
				Cursor(8,10);
				J2 = 400 - J;
    	    
				if (J2 > 9)
				cout << J2 << "   ";
    	    
				if (J2 < 10)
				cout << J2 << "    ";
    	    
				K++;
			}
			//
			for (j=0; j<501; j++)
			{
				if (x == X[j] && y == Y[j])
				{
					if (x != H[1] && y != H[2])
					Cursor(x,y);
					cout << " ";
					J2  = J2 - 10;
					goto d;
				}
			}
			//
			if (J == 10)
			{
				J = 0;
				AV(x, y, X, Y, H);
				Cursor(x, y); 
				Color(59);
				cout << "0";
				Color(7);
				Cursor(9, 4);
			}
			
    	}
    	
    	Cursor(x,y);
		cout << " ";
		J2  = J2 - 10;
    	goto d;
	}
s:	Cursor(x,y);
    Cursor(5, 8);
    cout << "Game over";
    //
	ofstream fout;
	fout.open("Resultat.txt", ios::out);
	fout << K;
	fout.close();
    //
    a = getch();
    return 0;
}
