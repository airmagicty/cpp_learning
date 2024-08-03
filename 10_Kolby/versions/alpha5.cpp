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

int pust (int h0, int h1, int h2, int h3) {
	int res = 0;
	if (h0 == -1) res++;
	if (h1 == -1) res++;
	if (h2 == -1) res++;
	if (h3 == -1) res++;
	return res;
}

int verh (int h0, int h1, int h2, int h3) {
	if (h0 != -1) return h0;
	if (h0 != -1) return h1;
	if (h0 != -1) return h2;
	if (h0 != -1) return h3;
	return -1;
}

int kverh (int h0, int h1, int h2, int h3) {
	int p = 0;

	if (h0 == -1) p++;
	if (h1 == -1) p++;
	if (h2 == -1) p++;
	if (h3 == -1) p++;
	
	if (p == 4) return 0;
	
	if (p == 3) return 1;
	
	if (p == 2) {
		if (h2 == h3) return 2;
		if (h2 != h3) return 1;
	}
	
	if (p == 1) {
		if (h1 == h2 && h2 == h3) return 3;
		if (h1 == h2 && h2 != h3) return 2;
		if (h1 != h2 && h2 != h3) return 1;
	}
	
	if (p == 0) {
		if (h0 == h1 && h1 == h2 && h2 == h3) return 4;
		if (h0 == h1 && h1 == h2 && h2 != h3) return 3;
		if (h0 == h1 && h1 != h2 && h2 != h3) return 2;
		if (h0 != h1 && h1 != h2 && h2 != h3) return 1;
	}
	return 0;
}

int main() {	
	//random
	
	srand(time(NULL));
	
	//vvod kolb
	
	int kolba[4][11];
	
	//sapoln random
	
	int r = 0 + (rand() % (9 - 0));;
	
	for (int x = 0; x < 4; x++) 
	for (int y = 0; y < 11; y++)
	kolba[x][y] = -1;
	
	for (int j = 0; j < 4; j++) {
			for (int i = 0; i < 9; i++) {
				while (kolba[j][r] != -1) {
					r = 0 + (rand() % (9 - 0));	
				}
			kolba[j][r] = i;
		}
	}
	
	//game int
	
	int A = 0, B = 0;
	int pustA = 0, verhA = 0, kverhA = 0;
	int pustB = 0, verhB = 0, kverhB = 0;
	
	//game
	
		for (int x = 0; x < 4; x++) {
		for (int y = 0; y < 11; y++)
			cout << kolba[x][y] << " ";
		cout << endl;
	}
	
	cin >> A;
	
	switch (A) {
		case 1: pustA = pust(kolba[0][0],kolba[1][0],kolba[2][0],kolba[3][0]); 
			  kverhA = kverh(kolba[0][0],kolba[1][0],kolba[2][0],kolba[3][0]); 
				verhA = verh(kolba[0][0],kolba[1][0],kolba[2][0],kolba[3][0]); break;
		case 2: pustA = pust(kolba[0][1],kolba[1][1],kolba[2][1],kolba[3][1]); 
			  kverhA = kverh(kolba[0][1],kolba[1][1],kolba[2][1],kolba[3][1]); 
				verhA = verh(kolba[0][1],kolba[1][1],kolba[2][1],kolba[3][1]); break;
		case 3: pustA = pust(kolba[0][2],kolba[1][2],kolba[2][2],kolba[3][2]);
			  kverhA = kverh(kolba[0][2],kolba[1][2],kolba[2][2],kolba[3][2]); 
				verhA = verh(kolba[0][2],kolba[1][2],kolba[2][2],kolba[3][2]); break;
		case 4: pustA = pust(kolba[0][3],kolba[1][3],kolba[2][3],kolba[3][3]); 
			  kverhA = kverh(kolba[0][3],kolba[1][3],kolba[2][3],kolba[3][3]);
				verhA = verh(kolba[0][3],kolba[1][3],kolba[2][3],kolba[3][3]); break;
		case 5: pustA = pust(kolba[0][4],kolba[1][4],kolba[2][4],kolba[3][4]); 
			  kverhA = kverh(kolba[0][4],kolba[1][4],kolba[2][4],kolba[3][4]); 
				verhA = verh(kolba[0][4],kolba[1][4],kolba[2][4],kolba[3][4]); break;
		case 6: pustA = pust(kolba[0][5],kolba[1][5],kolba[2][5],kolba[3][5]); 
			  kverhA = kverh(kolba[0][5],kolba[1][5],kolba[2][5],kolba[3][5]); 
				verhA = verh(kolba[0][5],kolba[1][5],kolba[2][5],kolba[3][5]); break;
		case 7: pustA = pust(kolba[0][6],kolba[1][6],kolba[2][6],kolba[3][6]); 
			  kverhA = kverh(kolba[0][6],kolba[1][6],kolba[2][6],kolba[3][6]); 
				verhA = verh(kolba[0][6],kolba[1][6],kolba[2][6],kolba[3][6]); break;
		case 8: pustA = pust(kolba[0][7],kolba[1][7],kolba[2][7],kolba[3][7]); 
			  kverhA = kverh(kolba[0][7],kolba[1][7],kolba[2][7],kolba[3][7]); 
				verhA = verh(kolba[0][7],kolba[1][7],kolba[2][7],kolba[3][7]); break;
		case 9: pustA = pust(kolba[0][8],kolba[1][8],kolba[2][8],kolba[3][8]); 
			  kverhA = kverh(kolba[0][8],kolba[1][8],kolba[2][8],kolba[3][8]); 
				verhA = verh(kolba[0][8],kolba[1][8],kolba[2][8],kolba[3][8]); break;
		case 10: pustA = pust(kolba[0][9],kolba[1][9],kolba[2][9],kolba[3][9]); 
			  kverhA = kverh(kolba[0][9],kolba[1][9],kolba[2][9],kolba[3][9]); 
				 verhA = verh(kolba[0][9],kolba[1][9],kolba[2][9],kolba[3][9]); break;
		case 11: pustA = pust(kolba[0][10],kolba[1][10],kolba[2][10],kolba[3][10]); 
			  kverhA = kverh(kolba[0][10],kolba[1][10],kolba[2][10],kolba[3][10]); 
				 verhA = verh(kolba[0][10],kolba[1][10],kolba[2][10],kolba[3][10]); break;
	}
	
	cout << pustA << " " << verhA << " " << kverhA;

	// end
	return 0;
}
