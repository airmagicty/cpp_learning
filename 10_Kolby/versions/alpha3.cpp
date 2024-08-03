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

int main() {	
	//random
	
	srand(time(NULL));
	
//	int min=0, max=8;
//	int random = min + (rand() % (max - min + 1));
	
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
	//game
		for (int x = 0; x < 4; x++) {
		for (int y = 0; y < 11; y++)
			cout << kolba[x][y] << " ";
		cout << endl;
	}
	
	int A = 0, B = 0;
	
	cin >> A;
	switch (A) {
		case 1: cout << kolba[0][0]<< kolba[1][0] << kolba[2][0] << kolba[3][0]; break;
		case 2: cout << kolba[0][1]<< kolba[1][1] << kolba[2][1] << kolba[3][1]; break;
	}
	
	
	//output 
//	for (int x = 0; x < 4; x++) {
//		for (int y = 0; y < 11; y++)
//			cout << kolba[x][y] << " ";
//		cout << endl;
//	}
	// end
	return 0;
}
