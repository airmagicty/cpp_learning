#include <iostream>
#include <stdio.h>
#include <fstream>
#include <cstdlib>
#include <cstddef>
#include <cmath>
#include <ctime>
#include <string>

using namespace std;

#define DEBUG		false
#define EMPTY 		-1
#define ERRORR 		-2

#define SIZE_X 		4
#define SIZE_Y 		12
#define START_Y 	SIZE_Y - 3

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

int main() {	
	//random
	
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
	
	int A = 0, B = 0, count = 0;
	int pustA = 0, verhA = 0, kverhA = 0;
	int pustB = 0, verhB = 0, kverhB = 0;
	bool dop = false, help = DEBUG;
	
	//game
	while (true) {
		if (help) {
			print_matrix(kolba);
			print_matrix(kolba2);
		}
		
		// output
		cout << "Xodu = " << count << endl;
		
		// matrix
		int active = SIZE_Y - 1;
		if (dop) active++;
		
		for (int x = 0; x < SIZE_X; x++) {
			for (int y = 0; y < active; y++) {
				if (kolba[x][y] == EMPTY) {
					cout << "# ";
				} else cout << kolba[x][y] << " ";
			}
			cout << endl;
		}
	
		// input
		cout << "Input: "; cin >> A >> B; count++;
		
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
		if (A == 333 && B == 333)
			help = !help;
		
		// input test
		if (A < 1 || A > SIZE_Y || B < 1 || B > SIZE_Y) {
			A = 0;
			B = 0;
		}
	
		// dop kolba
		if (dop == false) {
			if (A == SIZE_Y || B == SIZE_Y) {
				A = 0;
				B = 0;
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
			cout << "verhA=" << verhA << " kverhA=" << kverhA << " pustA=" << pustA << " A=" << A << "\n";
			cout << "verhB=" << verhB << " kverhB=" << kverhB << " pustB=" << pustB << " B=" << B << "\n";
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
	}
	
	// end
	return 0;
}
