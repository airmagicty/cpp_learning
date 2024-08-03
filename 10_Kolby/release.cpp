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

//#define GAME		true
#define DEBUG		false
#define EMPTY 		-1
#define ERRORR 		-2

#define SIZE_X 		4
#define SIZE_Y 		12
#define START_Y 	SIZE_Y - 3

// Вывод из файла
// printImage("*/*.bin"); 
void printImage (char* fileName) {
	string line;
	ifstream myfile (fileName);
	
	if (myfile.is_open())
	{
		while (!myfile.eof())
		{
			getline (myfile, line);
			cout << line << endl;
		}
		myfile.close();
	}
	else cout << "Unable to open file: " << fileName << endl;
}

// color
void Color(int c)
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(handle, c);
}

// cursor
void Cursor(int x, int y)
{
    COORD position = {x,y}; //позиция x и y
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsole, position);
}

// pause (sec)
void Pause(int n)
{
	int i, j;
	n = n*10000;
	for (i=0; i<n; i++)
	for (j=0; j<4000; j++);
}

//empty cells
int pust (int h0, int h1, int h2, int h3) {
	int res = 0;
	if (h0 == EMPTY) res++;
	if (h1 == EMPTY) res++;
	if (h2 == EMPTY) res++;
	if (h3 == EMPTY) res++;
	return res;
}

//posledniu cvet
int verh (int h0, int h1, int h2, int h3) {
	if (h0 != EMPTY) return h0;
	if (h1 != EMPTY) return h1;
	if (h2 != EMPTY) return h2;
	if (h3 != EMPTY) return h3;
	return EMPTY;
}

//povtory sverhy
int kverh (int h0, int h1, int h2, int h3) {
	int p = pust(h0, h1, h2, h3);
	
	if (p == 4) return 0;
	if (p == 3) return 1;
	
	if (p == 2) {
		if (h2 == h3) return 2;
		if (h2 != h3) return 1;
	}
	
	if (p == 1) {
		if (h1 == h2 && h2 == h3) return 3;
		if (h1 == h2) return 2;
		if (h1 != h2) return 1;
	}
	
	if (p == 0) {
		if (h0 == h1 && h1 == h2 && h2 == h3) return 4;
		if (h0 == h1 && h1 == h2) return 3;
		if (h0 == h1) return 2;
		if (h0 != h1) return 1;
	}
	
	return ERRORR;
}

int rand_color() {
	return 0 + (rand() % (START_Y - 0));
}

int** create_matrix(int w, int h) {
	int** matrix = (int**) malloc(sizeof(int*) * w);
	for (int x = 0; x < w; x++)
		matrix[x] = (int*) malloc(sizeof(int*) * h);
	return matrix;
}

void print_matrix(int** matrix) {
	for (int x = 0; x < SIZE_X; x++) {
		for (int y = 0; y < SIZE_Y; y++)
			cout << matrix[x][y] << "\t";
		cout << endl;
	}
	
	cout << endl;
}

void start() {
	printImage("texture_start1.bin");
	Cursor(26,22);
	system("pause");
}

void game_over(int count, bool dop) {
	Cursor(28,22);
	system("pause");
	
	Cursor(0,0);
	if (dop)
	printImage("texture_finish2.bin");
	
	if (!dop)
	printImage("texture_finish1.bin");
	
	Cursor(28,22);
	system("pause");
	Cursor(0,0);
	printImage("texture_finish3.bin");
	
	Cursor(28,21);
	cout << "Score: " << count << "   " << endl << " ";
	
	Cursor(28,22);
	system("pause");
}

int main() {	
	// start
	start();
	
s:	// random
	srand(time(NULL));
	
	//vvod kolb
	int** kolba = create_matrix(SIZE_X, SIZE_Y);
	int** kolba2 = create_matrix(SIZE_X, SIZE_Y);
	
	//fill random
	for (int x = 0; x < SIZE_X; x++) {
		for (int y = 0; y < SIZE_Y; y++) {
			kolba[x][y] = EMPTY;
			kolba2[x][y] = EMPTY;
		}
	}
	
	int r = rand_color();
	for (int j = 0; j < SIZE_X; j++) {
		for (int i = 0; i < START_Y; i++) {
			while (kolba[j][r] != EMPTY) {
				r = rand_color();
			}
			kolba[j][r] = i;
		}
	}
	
	//game int
	int A = 0, B = 0, count = 0, gg = 0;
	int pustA = 0, verhA = 0, kverhA = 0;
	int pustB = 0, verhB = 0, kverhB = 0;
	bool dop = false, help = DEBUG, GAME = true;
	
	//game
	while (GAME == true) {
		gg = 0;
		
		// help true matrix
		if (help) {
			Cursor(0,30);
			print_matrix(kolba);
			print_matrix(kolba2);
		}
		
		// output game
		Cursor(0,0);
		if (!dop) printImage("texture_game1.bin");
		if (dop) printImage("texture_game2.bin");
		
		Cursor(13,9); 
		cout << count;
		
		// matrix
		int right = 23, down = 5;
		for (int i = 1; i <= 6; i++) {
			for (int j = 0; j < 4; j++) {
				Cursor(right,j+down); if (kolba[j][i-1]+3 != 7) {Color(kolba[j][i-1]+3);} else Color(13); if (kolba[j][i-1] != EMPTY) cout << "@@@@";
			}
			right = right + 9;
		}
		
		right = 27, down = 15;
		for (int i = 7; i <= 11; i++) {
			for (int j = 0; j < 4; j++) {
				Cursor(right,j+down); if (kolba[j][i-1]+3 != 7) {Color(kolba[j][i-1]+3);} else Color(13); if (kolba[j][i-1] != EMPTY) cout << "@@@@";
			}
			right = right + 9;
		}
		
		if (dop) {
			right = 78, down = 13;
			for (int j = 0; j < 4; j++) {
				Cursor(right,j+down); if (kolba[j][11]+3 != 7) {Color(kolba[j][11]+3);} else Color(13); if (kolba[j][11] != EMPTY) cout << "@@@@";
			}
		}
		
		Color(7);
		
		// input
		Cursor(53, 23);
		cin >> A >> B; count++;
		
		// dop kolba
		if (A == 111 && B == 111) {
			if (!dop) dop = true;
		}
		
		// back
		if (A == 222 && B == 222) {
			for (int x = 0; x < SIZE_X; x++) 
				for (int y = 0; y < SIZE_Y; y++)
					kolba[x][y] = kolba2[x][y];
		}
		
		// help
		if (A == 2021 && B == 2021)
			help = !help;
		
		// reset
		if (A == 333 && B == 333)
			goto s;
		
		// game over
		if (A == 444 && B == 444)
			gg = 12;
		
		// input test
		if (A < 1 || A > SIZE_Y || B < 1 || B > SIZE_Y ) {
			A = 0;
			B = 0;
		}
		
		if (A == B) {
			A = 0;
			B = 0;
		}
	
		// dop kolba
		if (dop == false) {
			if (A == SIZE_Y || B == SIZE_Y) {
				A = 0;
				B = 00;
			}
		}
		
		// massive ab --
		A--; B--;
	
		// info ob kolbah
		pustA =   pust(kolba[0][A],kolba[1][A],kolba[2][A],kolba[3][A]); 
		kverhA = kverh(kolba[0][A],kolba[1][A],kolba[2][A],kolba[3][A]); 
		verhA =   verh(kolba[0][A],kolba[1][A],kolba[2][A],kolba[3][A]);
		
		pustB =   pust(kolba[0][B],kolba[1][B],kolba[2][B],kolba[3][B]); 
	  	kverhB = kverh(kolba[0][B],kolba[1][B],kolba[2][B],kolba[3][B]); 
		verhB =   verh(kolba[0][B],kolba[1][B],kolba[2][B],kolba[3][B]);
		
		// help
		if (help == true) {
			Cursor(0,28);
			cout << "verhA=" << verhA << " kverhA=" << kverhA << " pustA=" << pustA << " A=" << A << endl;
			cout << "vB=" << verhB << " kvB=" << kverhB << " pB=" << pustB << " B=" << B << " gg=" << gg << endl;
		}
		
		// save
		for (int x = 0; x < SIZE_X; x++) {
			for (int y = 0; y < SIZE_Y; y++) {
				kolba2[x][y] = kolba[x][y];
			}
		}
		
		// logic game
		if (verhA == verhB || (verhB == EMPTY && pustB == SIZE_X)) 
		if (pustB > 0) {
			if (pustB == 4) {
				if (kverhA == 4) {kolba[3][B] = verhA; kolba[2][B] = verhA; kolba[1][B] = verhA; kolba[0][B] = verhA;}
				if (kverhA == 3) {kolba[3][B] = verhA; kolba[2][B] = verhA; kolba[1][B] = verhA;}
				if (kverhA == 2) {kolba[3][B] = verhA; kolba[2][B] = verhA;}
				if (kverhA == 1) {kolba[3][B] = verhA;}
			
				if (pustA == 3) {if (kverhA == 1) {kolba[3][A] = EMPTY;}}
				if (pustA == 2) {if (kverhA == 1) {kolba[2][A] = EMPTY;} if (kverhA == 2) {kolba[2][A] = EMPTY; kolba[3][A] = EMPTY;}}
				if (pustA == 1) {if (kverhA == 1) {kolba[1][A] = EMPTY;} if (kverhA == 2) {kolba[1][A] = EMPTY; kolba[2][A] = EMPTY;} if (kverhA == 3) {kolba[1][A] = EMPTY; kolba[2][A] = EMPTY; kolba[3][A] = EMPTY;}}
				if (pustA == 0) {if (kverhA == 1) {kolba[0][A] = EMPTY;} if (kverhA == 2) {kolba[0][A] = EMPTY; kolba[1][A] = EMPTY;} if (kverhA == 3) {kolba[0][A] = EMPTY; kolba[1][A] = EMPTY; kolba[2][A] = EMPTY;} if (kverhA == 4) {kolba[0][A] = EMPTY; kolba[1][A] = EMPTY; kolba[2][A] = EMPTY; kolba[3][A] = EMPTY;}}
			}
		
			if (pustB == 3) {
				if (kverhA == 3) {kolba[2][B] = verhA; kolba[1][B] = verhA; kolba[0][B] = verhA;}
				if (kverhA == 2) {kolba[2][B] = verhA; kolba[1][B] = verhA;}
				if (kverhA == 1) {kolba[2][B] = verhA;}
			
				if (pustA == 3) {if (kverhA == 1) {kolba[3][A] = EMPTY;}}
				if (pustA == 2) {if (kverhA == 1) {kolba[2][A] = EMPTY;} if (kverhA == 2) {kolba[2][A] = EMPTY; kolba[3][A] = EMPTY;}}
				if (pustA == 1) {if (kverhA == 1) {kolba[1][A] = EMPTY;} if (kverhA == 2) {kolba[1][A] = EMPTY; kolba[2][A] = EMPTY;} if (kverhA == 3) {kolba[1][A] = EMPTY; kolba[2][A] = EMPTY; kolba[3][A] = EMPTY;}}
				if (pustA == 0) {if (kverhA == 1) {kolba[0][A] = EMPTY;} if (kverhA == 2) {kolba[0][A] = EMPTY; kolba[1][A] = EMPTY;} if (kverhA == 3) {kolba[0][A] = EMPTY; kolba[1][A] = EMPTY; kolba[2][A] = EMPTY;}}
			}
		
			if (pustB == 2) {
				if (kverhA == 2) {kolba[1][B] = verhA; kolba[0][B] = verhA;}
				if (kverhA == 1) {kolba[1][B] = verhA;}
				
				if (pustA == 3) {kolba[3][A] = EMPTY;}
				if (pustA == 2) {if (kverhA == 1) {kolba[2][A] = EMPTY;} if (kverhA == 2) {kolba[2][A] = EMPTY; kolba[3][A] = EMPTY;}}
				if (pustA == 1) {if (kverhA == 1) {kolba[1][A] = EMPTY;} if (kverhA == 2) {kolba[1][A] = EMPTY; kolba[2][A] = EMPTY;}}
				if (pustA == 0) {if (kverhA == 1) {kolba[0][A] = EMPTY;} if (kverhA == 2) {kolba[0][A] = EMPTY; kolba[1][A] = EMPTY;}}
			}
			
			if (pustB == 1) {
				kolba[0][B] = verhA;
				
				if (pustA == 3) {kolba[3][A] = EMPTY;}
				if (pustA == 2) {kolba[2][A] = EMPTY;}
				if (pustA == 1) {kolba[1][A] = EMPTY;}
				if (pustA == 0) {kolba[0][A] = EMPTY;}
			}
		}
		
		// game over
		
		if (gg == 12)  {
			GAME = false;
		}
		
		for (int i = 0; i < 12; i++) {
			if (kolba[0][i] == kolba[1][i] && kolba[1][i] == kolba[2][i] && kolba[2][i] == kolba[3][i]) gg++;
		}
		
		if (gg == 12)  {
			GAME = false;
		}
	}
	
	// end
	game_over(count, dop);
	return 0;
}
