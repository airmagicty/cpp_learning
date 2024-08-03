#include <iostream>		// INT   xp, gg, s, r, i, k
#include <cstdlib>		// Ra, Rb, Rc, Rd, Re, Rf, Rg, Rh, Ri, Rj, Rk, Rl, Rm, Rn, Ro, Rp, Rq, Rr, Rs, Rt, Ru, Rv, Rw, Rx, Ry, Rz
#include <ctime>		// FUNC  MATRIX_SIZE, MATRIX_SIZE_X, MATRIX_SIZE_Y, matrix_print, matrix, BOOM_end
#include <limits>		// GOTO  m, n
						// ra, rb, rc, rd, re, rf, rg, rh
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

// Func Boom
void BOOM_end()
{
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl
		 << "  ===========================================" << endl <<
			"  ||X  BBBBBB   X=X=X=X=X=X=X=X=        X=X||" << endl <<
			"  ||X  BB   BB  X=X=X=X=X=X=X=      W     =||" << endl <<
			"  ||X  BBBBBB   X=X=X=X=X=X=X    WW   WW   ||" << endl <<
			"  ||X  BB   BB   =X=X=X=X=X=X  <W   #   W> ||" << endl <<
			"  ||X  BBBBBB           X=X=X    WW   WW   ||" << endl <<
			"  ||X         OOOOO     X=X=X=      W      ||" << endl <<
			"  ||X=X=X=   OO   OO    X=X=X=X=         =X||" << endl <<
			"  ||X=X=X=   OO   OO    X=X=X=X=X=X=X=X=X=X||" << endl <<
			"  ||X=X=X=   OO   OO     =X=X=X=X=X=X=X=X=X||" << endl <<
			"  ||X=X=X=    OOOOO             X=X=X=X=X=X||" << endl <<
			"  ||X=X=X=              OOOOO   X=X=X=X=X=X||" << endl <<
			"  ||X=X=X=X=X=X=X=X=   OO   OO  X=X=X=X=X=X||" << endl <<
			"  ||X=X=X=X     X=X=X  OO   OO  X=X=X=X=X=X||" << endl <<
			"  ||X=X=X   QQQ  =X=X  OO   OO   =X=X=X=X=X||" << endl <<
			"  ||X=X    Q     =X=X   OOOOO              ||" << endl <<
			"  ||X   QQQQQQ   =X=X          MMM     MMM ||" << endl <<
			"  ||X  Q      Q  =X=X=X=X=X=   MM MM MM MM ||" << endl <<
			"  ||X  Q      Q  =X=X=X=X=X    MM  MMM  MM ||" << endl <<
			"  ||X   QQQQQQ   =X=X=X=X=X=X  MM   M   MM ||" << endl <<
			"  ||X=X         X=X=X=X=X=X=X  MM       MM ||" << endl <<
			"  ===========================================" << endl;
}
// Func Boom 

int main ()
{
	
	// Nachalo
	char H=173, U=168;
    cout << "Sdravstvui polsovatel!                                               [Beta 1.1]" << endl 
	<< "Dobro posalovat v igru 'M" << U << H << "ep'" << endl 
	<< "Sozdatel - Athanasius" << endl 
	<< "Chtobi vibrat, kuda bit, nado vvesti koordinatu." << endl 
	<< "Ih mosno opredelit po skale sleva i snisu." << endl 
	<< "Chtobi ih opredelit, nado slosit zifru po stolbzu snizu i strochke sleva..." << endl 
	<< "Sdes igraut po ocheredi: " << endl 
	<< "kto 1 hodit - gamer1; Kto 2 hodit - gamer2" << endl
	<< "V konve igri napishut kto viigral..." << endl
	<< "Udachi!" << endl;
	system ("pause");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    // Nachalo
	
	int Ra={}, Rb={}, Rc={}, Rd={}, Re={}, Rf={};
	int Rg={}, Rh={}, Ri={}, Rj={}, Rk={}; 
	int Rl={}, Rm={}, Rn={}, Ro={}, Rp={}; 
	int Rq={}, Rr={}, Rs={}, Rt={}, Ru={};
	int Rv={}, Rw={}, Rx={}, Ry={}, Rz={};
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
	Rp = rand();	while (Re > 400)	{Rp = rand();}
	Rq = rand();	while (Rf > 400)	{Rq = rand();}
	Rr = rand();	while (Rg > 400)	{Rr = rand();}
	Rs = rand();	while (Rh > 400)	{Rs = rand();}
	Rt = rand();	while (Ri > 400)	{Rt = rand();}
	Ru = rand();	while (Rj > 400)	{Ru = rand();}
	Rv = rand();	while (Rk > 400)	{Rv = rand();}
	Rw = rand();	while (Rl > 400)	{Rw = rand();}
	Rx = rand();	while (Rm > 400)	{Rx = rand();}
	Ry = rand();	while (Rn > 400)	{Ry = rand();}
	Rz = rand();	while (Ro > 400)	{Rz = rand();}
	// Mina rand
	
	// Pole
	int s=0, r, ra, rb, rc, rd, re, rf, rg, rh, xp = 0, v=1, x, k;
	char matrix[MATRIX_SIZE];
	
	for (int i = 0; i < MATRIX_SIZE; i++)
		matrix[i] = '*';
	
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
	if (r == Ra || r == Rb || r == Rc || r == Rd || r == Re)	{BOOM_end(); goto n;}
	if (r == Rf || r == Rg || r == Rh || r == Ri || r == Rj)	{BOOM_end(); goto n;}
	if (r == Rk || r == Rl || r == Rm || r == Rn || r == Ro)	{BOOM_end(); goto n;}
	if (r == Rp || r == Rq || r == Rr || r == Rs || r == Rt)	{BOOM_end(); goto n;}
	if (r == Ru || r == Rv || r == Rw || r == Rx || r == Ry || r == Rz)	{BOOM_end(); goto n;}
	// Mina
	
	// Matrix
	while (s != MATRIX_SIZE)
	{
		if (r <= 0 || r > MATRIX_SIZE || matrix[r - 1] == 1)
		{
			cout << "Error! Correct your number! ";
			goto m;
		}
		matrix[r - 1] = 4;
		// =>
		
		ra = r + 19;
		rb = r - 20;
		rc = r + 0;
		rd = r - 1;
		re = r - 21;
		rf = r - 19;
		rg = r + 18;
		rh = r + 20;
		
	
		matrix[r + 19] = 4;
	if (ra == Ra || ra == Rb || ra == Rc || ra == Rd || ra == Re)	{matrix[r + 19] = 5; x++;}
	if (ra == Rf || ra == Rg || ra == Rh || ra == Ri || ra == Rj)	{matrix[r + 19] = 5; x++;}
	if (ra == Rk || ra == Rl || ra == Rm || ra == Rn || ra == Ro)	{matrix[r + 19] = 5; x++;}
	if (ra == Rp || ra == Rq || ra == Rr || ra == Rs || ra == Rt)	{matrix[r + 19] = 5; x++;}
	if (ra == Ru || ra == Rv || ra == Rw || ra == Rx || ra == Ry || ra == Rz)	{matrix[r + 19] = 5; x++;}	
		
	
		matrix[r - 21] = 4;
	if (rb == Ra || rb == Rb || rb == Rc || rb == Rd || rb == Re)	{matrix[r - 21] = 5; x++;}
	if (rb == Rf || rb == Rg || rb == Rh || rb == Ri || rb == Rj)	{matrix[r - 21] = 5; x++;}
	if (rb == Rk || rb == Rl || rb == Rm || rb == Rn || rb == Ro)	{matrix[r - 21] = 5; x++;}
	if (rb == Rp || rb == Rq || rb == Rr || rb == Rs || rb == Rt)	{matrix[r - 21] = 5; x++;}
	if (rb == Ru || rb == Rv || rb == Rw || rb == Rx || rb == Ry || rb == Rz)	{matrix[r - 21] = 5; x++;}
		
	
		matrix[r + 0] = 4;
	if (rc == Ra || rc == Rb || rc == Rc || rc == Rd || rc == Re)	{matrix[r + 0] = 5; x++;}
	if (rc == Rf || rc == Rg || rc == Rh || rc == Ri || rc == Rj)	{matrix[r + 0] = 5; x++;}
	if (rc == Rk || rc == Rl || rc == Rm || rc == Rn || rc == Ro)	{matrix[r + 0] = 5; x++;}
	if (rc == Rp || rc == Rq || rc == Rr || rc == Rs || rc == Rt)	{matrix[r + 0] = 5; x++;}
	if (rc == Ru || rc == Rv || rc == Rw || rc == Rx || rc == Ry || rc == Rz)	{matrix[r + 0] = 5; x++;}
		
	
		matrix[r - 2] = 4;
	if (rd == Ra || rd == Rb || rd == Rc || rd == Rd || rd == Re)	{matrix[r - 2] = 5; x++;}
	if (rd == Rf || rd == Rg || rd == Rh || rd == Ri || rd == Rj)	{matrix[r - 2] = 5; x++;}
	if (rd == Rk || rd == Rl || rd == Rm || rd == Rn || rd == Ro)	{matrix[r - 2] = 5; x++;}
	if (rd == Rp || rd == Rq || rd == Rr || rd == Rs || rd == Rt)	{matrix[r - 2] = 5; x++;}
	if (rd == Ru || rd == Rv || rd == Rw || rd == Rx || rd == Ry || rd == Rz)	{matrix[r - 2] = 5; x++;}
		
	
		matrix[r - 22] = 4;
	if (re == Ra || re == Rb || re == Rc || re == Rd || re == Re)	{matrix[r - 22] = 5; x++;}
	if (re == Rf || re == Rg || re == Rh || re == Ri || re == Rj)	{matrix[r - 22] = 5; x++;}
	if (re == Rk || re == Rl || re == Rm || re == Rn || re == Ro)	{matrix[r - 22] = 5; x++;}
	if (re == Rp || re == Rq || re == Rr || re == Rs || re == Rt)	{matrix[r - 22] = 5; x++;}
	if (re == Ru || re == Rv || re == Rw || re == Rx || re == Ry || re == Rz)	{matrix[r - 22] = 5; x++;}
		
	
		matrix[r - 20] = 4;
	if (rf == Ra || rf == Rb || rf == Rc || rf == Rd || rf == Re)	{matrix[r - 20] = 5; x++;}
	if (rf == Rf || rf == Rg || rf == Rh || rf == Ri || rf == Rj)	{matrix[r - 20] = 5; x++;}
	if (rf == Rk || rf == Rl || rf == Rm || rf == Rn || rf == Ro)	{matrix[r - 20] = 5; x++;}
	if (rf == Rp || rf == Rq || rf == Rr || rf == Rs || rf == Rt)	{matrix[r - 20] = 5; x++;}
	if (rf == Ru || rf == Rv || rf == Rw || rf == Rx || rf == Ry || rf == Rz)	{matrix[r - 20] = 5; x++;}
		
	
		matrix[r + 18] = 4;
	if (rg == Ra || rg == Rb || rg == Rc || rg == Rd || rg == Re)	{matrix[r + 18] = 5; x++;}
	if (rg == Rf || rg == Rg || rg == Rh || rg == Ri || rg == Rj)	{matrix[r + 18] = 5; x++;}
	if (rg == Rk || rg == Rl || rg == Rm || rg == Rn || rg == Ro)	{matrix[r + 18] = 5; x++;}
	if (rg == Rp || rg == Rq || rg == Rr || rg == Rs || rg == Rt)	{matrix[r + 18] = 5; x++;}
	if (rg == Ru || rg == Rv || rg == Rw || rg == Rx || rg == Ry || rg == Rz)	{matrix[r + 18] = 5; x++;}
		
	
		matrix[r + 20] = 4;
	if (rh == Ra || rh == Rb || rh == Rc || rh == Rd || rh == Re)	{matrix[r + 20] = 5; x++;}
	if (rh == Rf || rh == Rg || rh == Rh || rh == Ri || rh == Rj)	{matrix[r + 20] = 5; x++;}
	if (rh == Rk || rh == Rl || rh == Rm || rh == Rn || rh == Ro)	{matrix[r + 20] = 5; x++;}
	if (rh == Rp || rh == Rq || rh == Rr || rh == Rs || rh == Rt)	{matrix[r + 20] = 5; x++;}
	if (rh == Ru || rh == Rv || rh == Rw || rh == Rx || rh == Ry || r == Rz)	{matrix[r + 20] = 5; x++;}
		
		// =>
		cout << endl;
		matrix_print(matrix);
		cout << "Enter: ";
		s++;
		cin >> r;																													// r2
		k++;
		
		// M
	if (r == Ra || r == Rb || r == Rc || r == Rd || r == Re)	{BOOM_end(); goto n;}
	if (r == Rf || r == Rg || r == Rh || r == Ri || r == Rj)	{BOOM_end(); goto n;}
	if (r == Rk || r == Rl || r == Rm || r == Rn || r == Ro)	{BOOM_end(); goto n;}
	if (r == Rp || r == Rq || r == Rr || r == Rs || r == Rt)	{BOOM_end(); goto n;}
	if (r == Ru || r == Rv || r == Rw || r == Rx || r == Ry || r == Rz)	{BOOM_end(); goto n;}
		// M
		
	}
	// Matrix
	
	// End
n:	cout << endl << "Min obnaruseno - "<< x << "; Go!" << endl;

	//gamer1 
	
	if (k % 2 == 0)
	{
		cout << "Viigral gamer2! (kto hodil vtorim)" << endl << "Proigral gamer1 (kto hodil pervim)";
	}
	else
	{
		cout << "Viigral gamer1! (kto hodil pervim)" << endl << "Proigral gamer2 (kto hodil vtorim)";
	}
	
	//gamer1
	cout << endl;
	system ("pause");
	// End
}
