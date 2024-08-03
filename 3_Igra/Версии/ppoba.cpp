#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

// отработать текстурку меню и выбора 

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
	int a, b, c;
	system("pause");
	printImage("img/test.cpp");
	system("pause");
	printImage("img/test2.cpp");
	system("pause");
	printImage("img/test3.cpp");
	system("pause");
	printImage("img/test4.cpp");
	system("pause");
b:	printImage("img/test5.cpp");
	cout << "Enter: " ;
	cin >> a;
	
        if (a == 1)
        {printImage("img/test7.cpp");
        system("pause");
		//  Игра
		printImage("img/igr1.cpp");
		system("pause");
		printImage("img/igr2.cpp");
		system("pause");
		printImage("img/igr3.cpp");
		system("pause");
		printImage("img/igr4.cpp");
		system("pause");
		printImage("img/igr5.cpp");
		system("pause");
		printImage("img/igr6.cpp");
		system("pause");
		printImage("img/igra7.cpp");
		system("pause");
		printImage("img/igra8.cpp");
		system("pause");
		
        //  Игра
        
    	}
    	else
    	{
			if (a == 2)
       		{
            	printImage("img/test8.cpp");
            	system("pause");
				printImage("img/test11.cpp");
				cout << "Go back <==    ";
				system("pause");
				goto b;
			}
			else
			{
				if (a == 3)
				{
            		printImage("img/test9.cpp"); 
            		system("pause");
            		printImage("img/test12.cpp");
            		cout << "Go back <==    ";
            		system("pause");
					goto b;
				}
				else
				{
					if (a == 4)
					{
					cout << "Vykhod..." << endl; 
  		        	printImage("img/test10.cpp");
  		        	cout << "Go back <==    ";
  		        	system("pause");
   			        goto c;
        			}
        			else
        				{
        				cout << "Error! Go back... " ;
        				system("pause");
        				a=0;
        				goto b;
						}
				}
			}
		}

	
	
c:	printImage("img/test6.cpp");
	system("pause");
	return 0;
}

