#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
 
int main()
{
	int Ra={}, Rb={}, Rc={}, Rd={}, Re={}, Rf={}, Rg={}, a;
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
	cout << Ra << endl << Rb << endl << Rc << endl << Rd << endl << Re << endl << Rf << endl << Rg << endl;
	// Mina rand
}
