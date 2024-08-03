#include <iostream>
using namespace std;
 
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
			"=========================================" << endl << endl << endl;
	system("pause");
}
 
int main()
{
    int r, Ra=1, Rb=2, Rc=3, Rd=4, Re=5, Rf=6, Rg=7;
    cin >> r;
    cout << endl;
    
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
	{
	if (r == Rg)
		BOOM_end(); 
		goto n;
	}
	
n:	cout << "End";
}
