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

//pusie jacheiki
int pust (int h0, int h1, int h2, int h3) {
	int res = 0;
	if (h0 == -1) res++;
	if (h1 == -1) res++;
	if (h2 == -1) res++;
	if (h3 == -1) res++;
	return res;
}

//posledniu zvet
int verh (int h0, int h1, int h2, int h3) {
	if (h0 != -1) return h0;
	if (h1 != -1) return h1;
	if (h2 != -1) return h2;
	if (h3 != -1) return h3;
	return -1;
}

//povtory sverhy
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
		if (h1 == h2) return 2;
		if (h1 != h2) return 1;
	}
	
	if (p == 0) {
		if (h0 == h1 && h1 == h2 && h2 == h3) return 4;
		if (h0 == h1 && h1 == h2) return 3;
		if (h0 == h1) return 2;
		if (h0 != h1) return 1;
	}
	return -2;
}

int main() {	
	//random
	
	srand(time(NULL));
	
	//vvod kolb
	
	int sizex = 4, sizey = 12;
	int kolba[sizex][sizey];
	int kolba2[sizex][sizey];
	
	//sapoln random
	
	int r = 0 + (rand() % (9 - 0));;
	
	for (int x = 0; x < 4; x++) 
	for (int y = 0; y < 12; y++)
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
	
	int A = 0, B = 0, count = 0;
	int pustA = 0, verhA = 0, kverhA = 0;
	int pustB = 0, verhB = 0, kverhB = 0;
	bool dop = false, help = false;
	
	//game
	while (true) {
		
		// output
		cout << "Xodu = " << count << endl;
		
		if (dop == false) {
			for (int x = 0; x < 4; x++) {
				for (int y = 0; y < 11; y++) {
					if (kolba[x][y] == -1) {
						cout << "# ";
					} else cout << kolba[x][y] << " ";
				}
				cout << endl;
			}
		} else {
			for (int x = 0; x < 4; x++) {
				for (int y = 0; y < 12; y++) {
					if (kolba[x][y] == -1) {
						cout << "# ";
					} else cout << kolba[x][y] << " ";
				}
				cout << endl;
			}
		}
	
		// input
		cout << "Input: "; cin >> A >> B; count++;
		
		if (A == 111 && B == 111) dop = true;
		
		// back
		if (A == 222 && B == 222) {
			for (int x = 0; x < 4; x++) 
			for (int y = 0; y < 12; y++)
			kolba[x][y] = kolba2[x][y];
		}
		
		if (A == 333 || B == 333) help = true;
		
		if (A < 1 || A > 12 || B < 1 || B > 12) {
			A = 0;
			B = 0;
		}
	
	// dop kolba
		if (dop == false) {
			if (A == 12 || B == 12) {
				A = 0;
				B = 0;
			}
		}
	
	// info ob kolbah
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
			case 12: if (dop == true) {
				pustA = pust(kolba[0][11],kolba[1][11],kolba[2][11],kolba[3][11]); 
				kverhA = kverh(kolba[0][11],kolba[1][11],kolba[2][11],kolba[3][11]); 
				verhA = verh(kolba[0][11],kolba[1][11],kolba[2][11],kolba[3][11]); break;
			} break;
		}
		
		switch (B) {
			case 1: pustB = pust(kolba[0][0],kolba[1][0],kolba[2][0],kolba[3][0]); 
				  kverhB = kverh(kolba[0][0],kolba[1][0],kolba[2][0],kolba[3][0]); 
					verhB = verh(kolba[0][0],kolba[1][0],kolba[2][0],kolba[3][0]); break;
			case 2: pustB = pust(kolba[0][1],kolba[1][1],kolba[2][1],kolba[3][1]); 
				  kverhB = kverh(kolba[0][1],kolba[1][1],kolba[2][1],kolba[3][1]); 
					verhB = verh(kolba[0][1],kolba[1][1],kolba[2][1],kolba[3][1]); break;
			case 3: pustB = pust(kolba[0][2],kolba[1][2],kolba[2][2],kolba[3][2]);
				  kverhB = kverh(kolba[0][2],kolba[1][2],kolba[2][2],kolba[3][2]); 
					verhB = verh(kolba[0][2],kolba[1][2],kolba[2][2],kolba[3][2]); break;
			case 4: pustB = pust(kolba[0][3],kolba[1][3],kolba[2][3],kolba[3][3]); 
				  kverhB = kverh(kolba[0][3],kolba[1][3],kolba[2][3],kolba[3][3]);
					verhB = verh(kolba[0][3],kolba[1][3],kolba[2][3],kolba[3][3]); break;
			case 5: pustB = pust(kolba[0][4],kolba[1][4],kolba[2][4],kolba[3][4]); 
				  kverhB = kverh(kolba[0][4],kolba[1][4],kolba[2][4],kolba[3][4]); 
					verhB = verh(kolba[0][4],kolba[1][4],kolba[2][4],kolba[3][4]); break;
			case 6: pustB = pust(kolba[0][5],kolba[1][5],kolba[2][5],kolba[3][5]); 
				  kverhB = kverh(kolba[0][5],kolba[1][5],kolba[2][5],kolba[3][5]); 
					verhB = verh(kolba[0][5],kolba[1][5],kolba[2][5],kolba[3][5]); break;
			case 7: pustB = pust(kolba[0][6],kolba[1][6],kolba[2][6],kolba[3][6]); 
				  kverhB = kverh(kolba[0][6],kolba[1][6],kolba[2][6],kolba[3][6]); 
					verhB = verh(kolba[0][6],kolba[1][6],kolba[2][6],kolba[3][6]); break;
			case 8: pustB = pust(kolba[0][7],kolba[1][7],kolba[2][7],kolba[3][7]); 
				  kverhB = kverh(kolba[0][7],kolba[1][7],kolba[2][7],kolba[3][7]); 
					verhB = verh(kolba[0][7],kolba[1][7],kolba[2][7],kolba[3][7]); break;
			case 9: pustB = pust(kolba[0][8],kolba[1][8],kolba[2][8],kolba[3][8]); 
				  kverhB = kverh(kolba[0][8],kolba[1][8],kolba[2][8],kolba[3][8]); 
					verhB = verh(kolba[0][8],kolba[1][8],kolba[2][8],kolba[3][8]); break;
			case 10: pustB = pust(kolba[0][9],kolba[1][9],kolba[2][9],kolba[3][9]); 
				  kverhB = kverh(kolba[0][9],kolba[1][9],kolba[2][9],kolba[3][9]); 
					 verhB = verh(kolba[0][9],kolba[1][9],kolba[2][9],kolba[3][9]); break;
			case 11: pustB = pust(kolba[0][10],kolba[1][10],kolba[2][10],kolba[3][10]); 
				  kverhB = kverh(kolba[0][10],kolba[1][10],kolba[2][10],kolba[3][10]); 
					 verhB = verh(kolba[0][10],kolba[1][10],kolba[2][10],kolba[3][10]); break;
			case 12: if (dop == true) {
				pustB = pust(kolba[0][11],kolba[1][11],kolba[2][11],kolba[3][11]); 
				kverhB = kverh(kolba[0][11],kolba[1][11],kolba[2][11],kolba[3][11]); 
				verhB = verh(kolba[0][11],kolba[1][11],kolba[2][11],kolba[3][11]); break;
			} break;
		}
		
		
		// massive ab --
		A--; B--;
		
		// help
		if (help == true) {
			cout << "verhA=" << verhA << " kverhA=" << kverhA << " pustA=" << pustA << " A=" << A << "\n";
			cout << "verhB=" << verhB << " kverhB=" << kverhB << " pustB=" << pustB << " B=" << B << "\n";
		}
		
		// save
		for (int x = 0; x < 4; x++) 
		for (int y = 0; y < 12; y++)
		kolba2[x][y] = kolba[x][y];
		
		// logic game
		if (verhA == verhB || (verhB == -1 && pustB == 4)) 
		if (pustB > 0) {
			if (pustB == 4) {
				if (kverhA == 4) {kolba[3][B] = verhA; kolba[2][B] = verhA; kolba[1][B] = verhA; kolba[0][B] = verhA;}
				if (kverhA == 3) {kolba[3][B] = verhA; kolba[2][B] = verhA; kolba[1][B] = verhA;}
				if (kverhA == 2) {kolba[3][B] = verhA; kolba[2][B] = verhA;}
				if (kverhA == 1) {kolba[3][B] = verhA;}
			
				if (pustA == 3) {if (kverhA == 1) {kolba[3][A] = -1;}}
				if (pustA == 2) {if (kverhA == 1) {kolba[2][A] = -1;} if (kverhA == 2) {kolba[2][A] = -1; kolba[3][A] = -1;}}
				if (pustA == 1) {if (kverhA == 1) {kolba[1][A] = -1;} if (kverhA == 2) {kolba[1][A] = -1; kolba[2][A] = -1;} if (kverhA == 3) {kolba[1][A] = -1; kolba[2][A] = -1; kolba[3][A] = -1;}}
				if (pustA == 0) {if (kverhA == 1) {kolba[0][A] = -1;} if (kverhA == 2) {kolba[0][A] = -1; kolba[1][A] = -1;} if (kverhA == 3) {kolba[0][A] = -1; kolba[1][A] = -1; kolba[2][A] = -1;} if (kverhA == 4) {kolba[0][A] = -1; kolba[1][A] = -1; kolba[2][A] = -1; kolba[3][A] = -1;}}
			}
		
			if (pustB == 3) {
				if (kverhA == 3) {kolba[2][B] = verhA; kolba[1][B] = verhA; kolba[0][B] = verhA;}
				if (kverhA == 2) {kolba[2][B] = verhA; kolba[1][B] = verhA;}
				if (kverhA == 1) {kolba[2][B] = verhA;}
			
				if (pustA == 3) {if (kverhA == 1) {kolba[3][A] = -1;}}
				if (pustA == 2) {if (kverhA == 1) {kolba[2][A] = -1;} if (kverhA == 2) {kolba[2][A] = -1; kolba[3][A] = -1;}}
				if (pustA == 1) {if (kverhA == 1) {kolba[1][A] = -1;} if (kverhA == 2) {kolba[1][A] = -1; kolba[2][A] = -1;} if (kverhA == 3) {kolba[1][A] = -1; kolba[2][A] = -1; kolba[3][A] = -1;}}
				if (pustA == 0) {if (kverhA == 1) {kolba[0][A] = -1;} if (kverhA == 2) {kolba[0][A] = -1; kolba[1][A] = -1;} if (kverhA == 3) {kolba[0][A] = -1; kolba[1][A] = -1; kolba[2][A] = -1;}}
			}
		
			if (pustB == 2) {
				if (kverhA == 2) {kolba[1][B] = verhA; kolba[0][B] = verhA;}
				if (kverhA == 1) {kolba[1][B] = verhA;}
				
				if (pustA == 3) {kolba[3][A] = -1;}
				if (pustA == 2) {if (kverhA == 1) {kolba[2][A] = -1;} if (kverhA == 2) {kolba[2][A] = -1; kolba[3][A] = -1;}}
				if (pustA == 1) {if (kverhA == 1) {kolba[1][A] = -1;} if (kverhA == 2) {kolba[1][A] = -1; kolba[2][A] = -1;}}
				if (pustA == 0) {if (kverhA == 1) {kolba[0][A] = -1;} if (kverhA == 2) {kolba[0][A] = -1; kolba[1][A] = -1;}}
			}
			
			if (pustB == 1) {
				kolba[0][B] = verhA;
				
				if (pustA == 3) {kolba[3][A] = -1;}
				if (pustA == 2) {kolba[2][A] = -1;}
				if (pustA == 1) {kolba[1][A] = -1;}
				if (pustA == 0) {kolba[0][A] = -1;}
			}
		}
	}
	
	// end
	return 0;
}
