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
	int a;
	system("pause");
	printImage("img/test.cpp");
	system("pause");
	printImage("img/test2.cpp");
	system("pause");
	printImage("img/test3.cpp");
	system("pause");
	printImage("img/test4.cpp");
	system("pause");
	printImage("img/test5.cpp");
	cout << "Enter:  ";
	cin >> a; 
	if (a > 0 && a < 2)
	{
		printImage("img/test7.cpp");
		system("pause");	
		// ����	
		printImage("img/test9.jpg");
	}
	else
	{
		printImage("img/test8.cpp");
		system("pause");
		goto a;	
	}
	
a:	printImage("img/test6.cpp");
	system("pause");
	return 0;
}

