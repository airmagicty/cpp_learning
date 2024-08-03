#include <iostream>
using namespace std;

#define MATRIX_SIZE 9

void matrix_print(int matrix[])
{
	cout << "=======" << endl;
	
	for (int i = 0; i < MATRIX_SIZE; i++)
	{
		cout << "=" << matrix[i];
		if ((i + 1) % 3 == 0)
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
	
	while (s != 9)
	{
		if (r <= 0 || r > MATRIX_SIZE)
		{
			cout << "Error!" << endl;
			system ("pause");
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
