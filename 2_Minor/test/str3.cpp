#include <iostream>
using namespace std;

void matriza(int a, int b, int c, int d, int e, int f, int g, int h, int i)
{
	cout << "=======" << endl
	<< "=" << a << "=" << b << "=" << c << "=" << endl
	<< "=" << d << "=" << e << "=" << f << "=" << endl
	<< "=" << g << "=" << h << "=" << i << "=" << endl
	<< "=======" << endl << endl;
}

int main ()
{
	int s=0, r;
	int a=0, b=0, c=0, d=0, e=0, f=0, g=0, h=0, i=0;
	
	matriza(a, b, c, d, e, f, g, h, i);
	
	m: cout << endl;
	cout << "Enter: ";
	cin >> r;
	
	while (s != 9)
	{
			
		if (r == 0 || r > 9)
		{
			cout << "Error!" << endl;
			system ("pause");
			goto m;
		}
			
		if (r == 1)
		{
			a = 1;
			cout << endl;
			matriza(a, b, c, d, e, f, g, h, i);
			cout << "Enter: ";
			s++;
			cin >> r;
		}
		
		if (r == 2)
		{
			b = 1; 
			cout << endl;
			matriza(a, b, c, d, e, f, g, h, i);
			cout << "Enter: ";
			s++;
			cin >> r;
		}
		
		if (r == 3)
		{
			c = 1; 
			cout << endl;
			matriza(a, b, c, d, e, f, g, h, i);
			cout << "Enter: ";
			s++;
			cin >> r;
		}
			
		if (r == 4)
		{
			d = 1; 
			cout << endl;
			matriza(a, b, c, d, e, f, g, h, i);
			cout << "Enter: ";
			s++;
			cin >> r;
		}
		
		if (r == 5)
		{
			e = 1; 
			cout << endl;
			matriza(a, b, c, d, e, f, g, h, i);
			cout << "Enter: ";
			s++;
			cin >> r;
		}
			
		if (r == 6)
		{
			f = 1; 
			cout << endl;
			matriza(a, b, c, d, e, f, g, h, i);
			cout << "Enter: ";
			s++;
			cin >> r;
		}
		
		if (r == 7)
		{
			g = 1; 
			cout << endl;
			matriza(a, b, c, d, e, f, g, h, i);
			cout << "Enter: ";
			s++;
			cin >> r;
		}
			
		if (r == 8)
		{
			h = 1; 
			cout << endl;
			matriza(a, b, c, d, e, f, g, h, i);
			cout << "Enter: ";
			s++;
			cin >> r;
		}
			
		if (r == 9)
		{
			i = 1; 
			cout << endl;
			matriza(a, b, c, d, e, f, g, h, i);
			cout << "Enter: ";
			s++;
			cin >> r;
		}
			
		cout << endl;
	}
	cout << "Go!";
}
