#include <iostream>
#include <stdio.h> 
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
	srand(time(NULL));
	int a, b, c, aa, j;
	cout << "Skolko ras igraete? [max - 20] : ";
	cin >> aa;
	aa++;
	if (aa > 20)
	{
		cout << "Uncorrect... [20]" << endl; 
		aa = 20;
	}
	
	for (j=1; j<aa; j++)
	{
		a = rand();
		while (a > 7)
		{
			a = rand();
		}
		b = rand();
		while (b > 7)
		{
			b = rand();
		}
		c = rand();
		while (c > 7)
		{
			c = rand();
		}
		cout << endl << "===========" << endl << "===" << a << "=" << b << "=" << c << "===" << endl << "===========" << endl;
		
		if (a==b && b==c && a==c)
		{
			cout << "vy vyigrali!" << endl << endl; 
			goto m;
		}
		
		cout << "vy proigrali..." << endl << endl;
			
		system ("pause");
	}
	
	
m:	cout << "End" << endl;
system ("pause");
}
