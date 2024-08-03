#include <iostream>		
#include <cstdlib>		
#include <ctime>		// FUNC  MATRIX_SIZE, MATRIX_SIZE_X, MATRIX_SIZE_Y, matrix_print, matrix
#include <limits>
						
using namespace std;

#define MATRIX_SIZE_X 20
#define MATRIX_SIZE_Y 20
#define MATRIX_SIZE MATRIX_SIZE_X * MATRIX_SIZE_Y

// Func Pole
void matrix_print(char matrix[])
{
	int gg = 0;
	cout << "þþþþ···········································" << endl << "0ÍÍÍ¹";
	for (int i = 0; i < MATRIX_SIZE; i++)
	{
		cout << " " << matrix[i];
		if ((i + 1) % MATRIX_SIZE_X == 0)
		{
			gg = gg + 20;
			cout << " ¶" << endl; 
			
			if (gg == 420)
			{
				gg = 0;
				cout << "00";
			}
			
			if (gg == 20 || gg == 40 || gg == 60 || gg == 80)
			{
				cout << gg << "ÍÍ¹";
			}
			else
			{
				cout << gg << "Í¹";
			}
		}
//  ±
	}
	cout << "·¶·¶·¶·¶·¶·¶·¶·¶·¶·¶·¶·¶·¶·¶·¶·¶·¶·¶·¶·¶·¶" << endl
		 << "ÉÍÍÍÊ 1 2 3 4 5 6 7 8 9 1 1 1 1 1 1 1 1 1 1 2 ¶" << endl
		 << "ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ 0 1 2 3 4 5 6 7 8 9 0 ¶" << endl;
}
// Func Pole



int main ()
{
	srand(time(NULL));
	
	// Pole
	int s=0, r;
	char matrix[MATRIX_SIZE];
	
	for (int i = 0; i < MATRIX_SIZE; i++)
		matrix[i] = ' ';
	
//	matrix_print(matrix);	
	
	// Matrix
	while (s != MATRIX_SIZE)
	{
		if (r <= 0 || r > MATRIX_SIZE || matrix[r - 1] == 1)
		{
			cout << "Error! Correct your number! ";
		}
		matrix[r - 1] = 4;
		cout << endl;
		matrix_print(matrix);
		cout << "Enter: ";
		s++;
		cin >> r;																													// r2
	}
	// Matrix
	

}
