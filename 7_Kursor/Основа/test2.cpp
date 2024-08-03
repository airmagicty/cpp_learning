#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstddef>
#include <cmath>

using namespace std;

int main()
{
	int a=55;
	ofstream fout;
	fout.open("form.txt");
	fout << a;
	fout.close();
	return 0;
}
