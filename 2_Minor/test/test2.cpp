#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
 
int main()
{
	int r = {};
	srand(time(NULL));
	r = rand(); 
//	cout << r << endl;
	while (r > 400)
	{
		r = rand();
//		cout << r << endl;
	}
	cout << r;
}
