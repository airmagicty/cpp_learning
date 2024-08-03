#include <iostream>		// INT   xp, gg, Ra, Rb, Rc, Rd, Re, Rf, Rg, Rh, Ri, Rj, Rk, Rl, Rm, Rn, Ro, s, r, i
#include <cstdlib>		// FUNC  MATRIX_SIZE, MATRIX_SIZE_X, MATRIX_SIZE_Y, matrix_print, matrix, BOOM_end
#include <ctime>		// GOTO  m, n
#include <limits>

using namespace std;

#define MATRIX_SIZE_X 20
#define MATRIX_SIZE_Y 20
#define MATRIX_SIZE MATRIX_SIZE_X * MATRIX_SIZE_Y

// Func Pole
void matrix_print(int matrix[])
{
	int gg = 0;
	int xp = 0;
	cout << "==============================================" << endl << "0  |";
	for (int i = 0; i < MATRIX_SIZE; i++)
	{
		cout << "*" << matrix[i];
		if ((i + 1) % MATRIX_SIZE_X == 0)
		{
			gg = gg + 20;
			cout << "*|" << endl; 
			
			if (gg == 420)
			{
				gg = 0;
				cout << "00";
			}
			
			if (gg == 20 || gg == 40 || gg == 60 || gg == 80)
			{
				cout << gg << " |";
			}
			else
			{
				cout << gg << "|";
			}
		}

	}
	cout << "=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=+" << endl
		 << "---- 1 2 3 4 5 6 7 8 9 1 1 1 1 1 1 1 1 1 1 2 " << "              <XP: " << xp << ">" << endl
		 << "---------------------- 0 1 2 3 4 5 6 7 8 9 0 " << endl;
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
	int Ra={}, Rb={}, Rc={}, Rd={}, Re={}, Rf={}, Rg={}, Rh={}, Ri={}, Rj={}, Rk={}, Rl={}, Rm={}, Rn={}, Ro={};
	srand(time(NULL));
	
	// Mina rand
	Ra = rand();	while (Ra > 400)	{Ra = rand();}
	Rb = rand();	while (Rb > 400)	{Rb = rand();}
	Rc = rand();	while (Rc > 400)	{Rc = rand();}
	Rd = rand();	while (Rd > 400)	{Rd = rand();}
	Re = rand();	while (Re > 400)	{Re = rand();}
	Rf = rand();	while (Rf > 400)	{Rf = rand();}
	Rg = rand();	while (Rg > 400)	{Rg = rand();}
	Rh = rand();	while (Rh > 400)	{Rh = rand();}
	Ri = rand();	while (Ri > 400)	{Ri = rand();}
	Rj = rand();	while (Rj > 400)	{Rj = rand();}
	Rk = rand();	while (Rk > 400)	{Rk = rand();}
	Rl = rand();	while (Rl > 400)	{Rl = rand();}
	Rm = rand();	while (Rm > 400)	{Rm = rand();}
	Rn = rand();	while (Rn > 400)	{Rn = rand();}
	Ro = rand();	while (Ro > 400)	{Ro = rand();}
	// Mina rand
	
	// Pole
	int s=0, r, xp = 0;
	int matrix[MATRIX_SIZE];
	
	for (int i = 0; i < MATRIX_SIZE; i++)
		matrix[i] = 0;
	
	matrix_print(matrix);
	
	m: cout << "Enter: ";
	//
	bool good = true;
    do
    {
        cin >> r ;																													// r
		
        if ( !(good=cin.good()) )
            cout << "Correct: " ;
        cin.clear() ;
        cin.ignore( numeric_limits<streamsize>::max() , '\n') ;
    }
	while( !good );

    cout << "You enter: " << r << "? Re-Enter>" << endl;
	// Pole
	
	// Mina
	if (r == Ra)	{BOOM_end(); goto n;}
	if (r == Rb)	{BOOM_end(); goto n;}
	if (r == Rc)	{BOOM_end(); goto n;}
	if (r == Rd)	{BOOM_end(); goto n;}
	if (r == Re)	{BOOM_end(); goto n;}
	if (r == Rf)	{BOOM_end(); goto n;}
	if (r == Rg)	{BOOM_end(); goto n;}
	if (r == Rh)	{BOOM_end(); goto n;}
	if (r == Ri)	{BOOM_end(); goto n;}
	if (r == Rj)	{BOOM_end(); goto n;}
	if (r == Rk)	{BOOM_end(); goto n;}
	if (r == Rl)	{BOOM_end(); goto n;}
	if (r == Rm)	{BOOM_end(); goto n;}
	if (r == Rn)	{BOOM_end(); goto n;}
	if (r == Ro)	{BOOM_end(); goto n;}
	// Mina
	
	// Matrix
	while (s != MATRIX_SIZE)
	{
		if (r <= 0 || r > MATRIX_SIZE || matrix[r - 1] == 1)
		{
			cout << "Error! Correct your number! ";
			goto m;
		}
		
		matrix[r - 1] = 1;
		cout << endl;
		matrix_print(matrix);
		cout << "Enter: ";
		s++;
		xp++;
		cin >> r;																													// r2
	}
	// Matrix
	
	// End
n:	cout << "Go!";
	// End
}
