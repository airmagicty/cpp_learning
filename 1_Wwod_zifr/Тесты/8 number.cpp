#include <iostream>
using namespace std;

int main ()
{
	long a;
m:	cin >> a;
	if (a > 99999999)
	{cout <<"Error! Change the number to 8 characters..."; a=a /= 10;cout <<endl; goto m;}
	{cout <<a<<" : Chislo podhodit";}
}
