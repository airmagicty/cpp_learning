#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

#define MATRIX_SIZE_X 20
#define MATRIX_SIZE_Y 20
#define MATRIX_SIZE MATRIX_SIZE_X * MATRIX_SIZE_Y

// Func Pole
void matrix_print(int matrix[])
{
	cout << "=========================================" << endl;
	for (int i = 0; i < MATRIX_SIZE; i++)
	{
		cout << "=" << matrix[i];
		if ((i + 1) % MATRIX_SIZE_X == 0)
		{
			cout << "=" << endl;
		}
	}
	cout << "=========================================" << endl << endl;
}
// Func Pole

// Func Boom
void BOOM_end()
{
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "=========================================" << endl <<
			"=X=X BBBBB  =X=X=X=X=X=X=X=X=    W      =" << endl <<
			"=X=X B    B =X=X=X=X=X=X=X=X  W W W W   =" << endl <<
			"=X=X BBBBB  =X=X=X=X=X=X=X=  W W W W W  =" << endl <<
			"=X=X B    B =X=X=X=X=X=X=X W W W W W W W=" << endl <<
			"=X=X BBBBB   X=X=X=X=X=X=X=  W W W W W  =" << endl <<
			"=X=X=X=X=X  OOOOO  X=X=X=X=X  W W W W   =" << endl <<
			"=X=X=X=X=X O     O X=X=X=X=X=     W     =" << endl <<
			"=X=X=X=X=X O     O X=X=X=X=X=X=X=   =X=X=" << endl <<
			"=X=X=X=X=X O     O X=X=X=X=X=X=X=X=X=X=X=" << endl <<
			"=X=X=X=X=X  OOOOO   =X=X=X=X=X=X=X=X=X=X=" << endl <<
			"=X=X=X=X=X=X=X=X=X   OOOOO  =X=X=X=X=X=X=" << endl <<
			"=X=X=X=X=X=X=X=X=X= O     O =X=X=X=X=X=X=" << endl <<
			"=X=X=X=X=X=X=X=X=X= O     O =X=X=X=X=X=X=" << endl <<
			"=X=X=X   QQQ X=X=X= O     O =X=X=X=X=X=X=" << endl <<
			"=X=X=   Q    X=X=X=  OOOOO   X=X=X=X=X=X=" << endl <<
			"=X=  QQQQQQ  X=X=X=X=X=X=X=X MM     MM X=" << endl <<
			"=X= Q      Q X=X=X=X=X=X=X=X M M   M M X=" << endl <<
			"=X= Q      Q X=X=X=X=X=X=X=X M  M M  M X=" << endl <<
			"=X=  QQQQQQ  X=X=X=X=X=X=X=X M   M   M X=" << endl <<
			"=X=X=X=X=X=X=X=X=X=X=X=X=X=X M       M X=" << endl <<
			"=========================================" << endl << endl  << endl;
	system("pause");
}
// Func Boom

int main ()
{
	int Ra={}, Rb={}, Rc={}, Rd={}, Re={}, Rf={}, Rg={};
	srand(time(NULL));
	
	// Mina rand
	//1
	Ra = rand(); 
	while (Ra > 400)
	{
		Ra = rand();
	}
	//2
	Rb = rand(); 
	while (Rb > 400)
	{
		Rb = rand();
	}
	//3
	Rc = rand(); 
	while (Rc > 400)
	{
		Rc = rand();
	}
	//4
	Rd = rand(); 
	while (Rd > 400)
	{
		Rd = rand();
	}
	//5
	Re = rand(); 
	while (Re > 400)
	{
		Re = rand();
	}
	//6
	Rf = rand(); 
	while (Rf > 400)
	{
		Rf = rand();
	}
	//7
	Rg = rand(); 
	while (Rg > 400)
	{
		Rg = rand();
	}
	// Mina rand
	
	// Pole
	int s=0, r;
	int matrix[MATRIX_SIZE];
	
	for (int i = 0; i < MATRIX_SIZE; i++)
		matrix[i] = 0;
	
	matrix_print(matrix);
	
	m: cout << endl;
	cout << "Enter: ";
	cin >> r;
	// Pole
	
	// Mina
if (r == Ra)
	{
		BOOM_end(); 
		goto n;
	}
	
	if (r == Rb)
	{
		BOOM_end(); 
		goto n;
	}
	
	if (r == Rc)
	{
		BOOM_end(); 
		goto n;
	}
	
	if (r == Rd)
	{
		BOOM_end(); 
		goto n;
	}
	
	if (r == Re)
	{
		BOOM_end(); 
		goto n;
	}
	
	if (r == Rf)
	{
		BOOM_end(); 
		goto n;
	}
	
	if (r == Rg)
	{
		BOOM_end(); 
		goto n;
	}
	// Mina
	
	// Matrix
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
	// Matrix
	
	// End
n:	cout << "Go!";
	// End
}
