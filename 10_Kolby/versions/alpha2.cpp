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
	
	int kolba1[4], kolba2[4], kolba3[4], kolba4[4], kolba5[4];
	int kolba6[4], kolba7[4], kolba8[4], kolba9[4];
	int kolba10[4], kolba11[4];
	
	//sapoln random
	int r = 0 + (rand() % (9 - 0));;
	
	int rasd1[9]; r = 0 + (rand() % (9 - 0));
	for (int i = 0; i < 9; i++) rasd1[i] = -1;
	for (int i = 0; i < 9; i++) {
		while (rasd1[r] != -1) {
			r = 0 + (rand() % (9 - 0));	
		}
		rasd1[r] = i;
	}
	
	int rasd2[9]; r = 0 + (rand() % (9 - 0));
	for (int i = 0; i < 9; i++) rasd2[i] = -1;
	for (int i = 0; i < 9; i++) {
		while (rasd2[r] != -1) {
			r = 0 + (rand() % (9 - 0));	
		}
		rasd2[r] = i;
	}
	
	int rasd3[9]; r = 0 + (rand() % (9 - 0));
	for (int i = 0; i < 9; i++) rasd3[i] = -1;
	for (int i = 0; i < 9; i++) {
		while (rasd3[r] != -1) {
			r = 0 + (rand() % (9 - 0));	
		}
		rasd3[r] = i;
	}
	
	int rasd4[9]; r = 0 + (rand() % (9 - 0));
	for (int i = 0; i < 9; i++) rasd4[i] = -1;
	for (int i = 0; i < 9; i++) {
		while (rasd4[r] != -1) {
			r = 0 + (rand() % (9 - 0));	
		}
		rasd4[r] = i;
	}
	
	// sapoln kolb
	
	kolba1[0] = rasd1[0];
	kolba1[1] = rasd2[0];
	kolba1[2] = rasd3[0];
	kolba1[3] = rasd4[0];
	
	kolba2[0] = rasd1[1];
	kolba2[1] = rasd2[1];
	kolba2[2] = rasd3[1];
	kolba2[3] = rasd4[1];
	
	kolba3[0] = rasd1[2];
	kolba3[1] = rasd2[2];
	kolba3[2] = rasd3[2];
	kolba3[3] = rasd4[2];
	
	kolba4[0] = rasd1[3];
	kolba4[1] = rasd2[3];
	kolba4[2] = rasd3[3];
	kolba4[3] = rasd4[3];
	
	kolba5[0] = rasd1[4];
	kolba5[1] = rasd2[4];
	kolba5[2] = rasd3[4];
	kolba5[3] = rasd4[4];
	
	kolba6[0] = rasd1[5];
	kolba6[1] = rasd2[5];
	kolba6[2] = rasd3[5];
	kolba6[3] = rasd4[5];
	
	kolba7[0] = rasd1[6];
	kolba7[1] = rasd2[6];
	kolba7[2] = rasd3[6];
	kolba7[3] = rasd4[6];
	
	kolba8[0] = rasd1[7];
	kolba8[1] = rasd2[7];
	kolba8[2] = rasd3[7];
	kolba8[3] = rasd4[7];
	
	kolba9[0] = rasd1[8];
	kolba9[1] = rasd2[8];
	kolba9[2] = rasd3[8];
	kolba9[3] = rasd4[8];
	
	for (int i = 0; i < 4; i ++) {
		kolba10[i] = -1;
		kolba11[i] = -1;
	}
	
	// end
	
	for (int i = 0; i < 4; i++) cout << kolba1[i]; cout << endl;
	for (int i = 0; i < 4; i++) cout << kolba2[i]; cout << endl;
	for (int i = 0; i < 4; i++) cout << kolba3[i]; cout << endl;
	for (int i = 0; i < 4; i++) cout << kolba4[i]; cout << endl;
	for (int i = 0; i < 4; i++) cout << kolba5[i]; cout << endl;
	for (int i = 0; i < 4; i++) cout << kolba6[i]; cout << endl;
	for (int i = 0; i < 4; i++) cout << kolba7[i]; cout << endl;
	for (int i = 0; i < 4; i++) cout << kolba8[i]; cout << endl;
	for (int i = 0; i < 4; i++) cout << kolba9[i]; cout << endl;
	for (int i = 0; i < 4; i++) cout << kolba10[i]; cout << endl;
	for (int i = 0; i < 4; i++) cout << kolba11[i]; cout << endl;
	
	return 0;
}
