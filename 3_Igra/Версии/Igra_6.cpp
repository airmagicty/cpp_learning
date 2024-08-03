#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

// b, c, a, d, e


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
	int a, b, c, d;
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
	// 2
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

a:	printImage("img/igra8.cpp");
	cout << "Enter: " ;
	cin >> b;
	
        if (b == 1)
        {printImage("img/igra10.cpp");
        system("pause");
    	}
    	else
    	{
			if (b == 2)
       		{
            	printImage("img/igra11.cpp");
				system("pause");
				goto a;
			}
			else
			{
				if (b == 3)
				{
            		printImage("img/igra9.cpp"); 
            		system("pause");
					goto a;
				}

        		else
        			{
        			cout << "Error! Go back... " ;
        			system("pause");
        			b=0;
        			goto a;
					}
				}
			}
			
	printImage("img/igra12.cpp"); 
    system("pause");
    // 3
d:	printImage("img/igra21.cpp");
	cout << "Enter: " ;
	cin >> c;
	
        if (c == 1)
        {printImage("img/igra19.cpp");
        system("pause");
        goto d;
    	}
    	else
    	{
			if (c == 2)
       		{
            	printImage("img/igra13.cpp");
				system("pause");
			}
			else
			{
				if (c == 3)
				{
            		printImage("img/igra22.cpp"); 
            		system("pause");
					goto d;
				}

        		else
        			{
        			cout << "Error! Go back... " ;
        			system("pause");
        			c=0;
        			goto d;
					}
				}
			}
	// 4
	printImage("img/igra14.cpp"); 
    system("pause");
    printImage("img/igra15.cpp"); 
    system("pause");
    
e:	printImage("img/igra16.cpp");
	cout << "Enter: " ;
	cin >> d;
	
        if (d == 1)
        {printImage("img/igra20.cpp");
        system("pause");
        goto e;
    	}
    	else
    	{
			if (d == 2)
       		{
            	printImage("img/igra20.cpp");
				system("pause");
				goto e;
			}
			else
			{
				if (d == 3)
				{
            		printImage("img/igra17.cpp"); 
            		system("pause");
				}

        		else
        			{
        			cout << "Error! Go back... " ;
        			system("pause");
        			d=0;
        			goto e;
					}
				}
			}
	// 5
	printImage("img/igra18.cpp"); 
    system("pause");
    
    
	// end
c:	printImage("img/test6.cpp");
	system("pause");
	return 0;
}

