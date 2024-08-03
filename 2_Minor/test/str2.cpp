#include <stdlib.h>
#include <iostream>
using namespace std;

int main ()
{
	char a;
	int b;
	a = rand();
	cin >> b;
	cout << endl;
	while (b != 0)
	{
	b = b - 1; 
	a = rand();
	cout << a;
	cout << endl;
	}
	cout <<endl<<"Go!";
}
