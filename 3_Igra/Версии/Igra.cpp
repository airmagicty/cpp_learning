#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void printImage (char* fileName) {
	string line;
	ifstream myfile (fileName);
	
	if (myfile.is_open())
	{
		while (!myfile.eof())
		{
			getline (myfile, line);
			cout << endl << line;
		}
		myfile.close();
	}
	else cout << "Unable to open file: " << fileName << endl;
}

int main ()
{
	printImage("img/test.bin");
	system("pause");
	return 0;
}

