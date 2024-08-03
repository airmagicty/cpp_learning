#include <iostream>
using namespace std;

#define MATRIX_SIZE_X 20
#define MATRIX_SIZE_Y 20
#define MATRIX_SIZE MATRIX_SIZE_X * MATRIX_SIZE_Y

void matrix_print(int matrix[])
{
	cout << "=======" << endl;
	
	for (int i = 0; i < MATRIX_SIZE; i++)
	{
		cout << "=" << matrix[i];
		if ((i + 1) % MATRIX_SIZE_X == 0)
		{
			cout << "=" << endl;
		}
	}
	cout << "=======" << endl << endl;
}

int main ()
{
	int s=0, r;
	int matrix[MATRIX_SIZE];
	
	for (int i = 0; i < MATRIX_SIZE; i++)
		matrix[i] = 0;
	
	matrix_print(matrix);
	
	m: cout << endl;
	cout << "Enter: ";
	cin >> r;
	
	while (s != MATRIX_SIZE)
	{
		if (r <= 0 || r > MATRIX_SIZE || matrix[r - 1] == 1)
		{
			cout << "Error!" << endl;
			goto m;
		}
		
		matrix[r - 1] = 1;
		cout << endl;
		matrix_print(matrix);
		cout << "Enter: ";
		s++;
		cin >> r;
	}
	
	cout << "Go!";
}
