#include <iostream>
#include <stdio.h> 
#include <ctime>
#include <cstdlib>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

// London, Moskva, Kiev, Paris, Rim, New-York, Chikago, Tokio, Vasington, Varsava

// Сколько с.
// На что с.
// Результат

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

//		printImage("img/kopia1.cpp");


void payse ()
{
	int i=1, j=1;
	for (i=1; i<100000; i++)
	{
		for (j=1; j<3000; j++);
	}
}

void Id1 ()
{
	system("pause");
	printImage("img/kopia11.cpp");
	payse();
	printImage("img/kopia12.cpp");
	payse();
	printImage("img/kopia1.cpp");
	
	system ("pause");
}

void Id2 ()
{
	system ("pause");
	printImage("img/kopia11.cpp");
	payse();
	printImage("img/kopia12.cpp");
	payse();
	printImage("img/kopia1.cpp");
	payse();
	printImage("img/kopia2.cpp");
	
	system ("pause");
}

void Id3 ()
{
	system("pause");
	printImage("img/kopia11.cpp");
	payse();
	printImage("img/kopia12.cpp");
	payse();
	printImage("img/kopia1.cpp");
	payse();
	printImage("img/kopia2.cpp");
	payse();
	printImage("img/kopia3.cpp");
	
	system("pause");
}

void Id4 ()
{
	system("pause");
	printImage("img/kopia11.cpp");
	payse();
	printImage("img/kopia12.cpp");
	payse();
	printImage("img/kopia1.cpp");
	payse();
	printImage("img/kopia2.cpp");
	payse();
	printImage("img/kopia3.cpp");
	payse();
	printImage("img/kopia4.cpp");
	
	system("pause");
}

void Id5 ()
{
	system("pause");
	printImage("img/kopia11.cpp");
	payse();
	printImage("img/kopia12.cpp");
	payse();
	printImage("img/kopia1.cpp");
	payse();
	printImage("img/kopia2.cpp");
	payse();
	printImage("img/kopia3.cpp");
	payse();
	printImage("img/kopia4.cpp");
	payse();
	printImage("img/kopia5.cpp");
	
	system("pause");
}

void Id6 ()
{
	system("pause");
	printImage("img/kopia11.cpp");
	payse();
	printImage("img/kopia12.cpp");
	payse();
	printImage("img/kopia1.cpp");
	payse();
	printImage("img/kopia2.cpp");
	payse();
	printImage("img/kopia3.cpp");
	payse();
	printImage("img/kopia4.cpp");
	payse();
	printImage("img/kopia5.cpp");
	payse();
	printImage("img/kopia6.cpp");
	
	system("pause");
}

void Id7 ()
{
	system("pause");
	printImage("img/kopia11.cpp");
	payse();
	printImage("img/kopia12.cpp");
	payse();
	printImage("img/kopia1.cpp");
	payse();
	printImage("img/kopia2.cpp");
	payse();
	printImage("img/kopia3.cpp");
	payse();
	printImage("img/kopia4.cpp");
	payse();
	printImage("img/kopia5.cpp");
	payse();
	printImage("img/kopia6.cpp");
	payse ();
	printImage("img/kopia7.cpp");
	
	system("pause");
}

void Id8 ()
{
	system("pause");
	printImage("img/kopia11.cpp");
	payse();
	printImage("img/kopia12.cpp");
	payse();
	printImage("img/kopia1.cpp");
	payse();
	printImage("img/kopia2.cpp");
	payse();
	printImage("img/kopia3.cpp");
	payse();
	printImage("img/kopia4.cpp");
	payse();
	printImage("img/kopia5.cpp");
	payse();
	printImage("img/kopia6.cpp");
	payse ();
	printImage("img/kopia7.cpp");
	payse();
	printImage("img/kopia8.cpp");
	
	system("pause");
}

void Id9 ()
{
	system("pause");
	printImage("img/kopia11.cpp");
	payse();
	printImage("img/kopia12.cpp");
	payse();
	printImage("img/kopia1.cpp");
	payse();
	printImage("img/kopia2.cpp");
	payse();
	printImage("img/kopia3.cpp");
	payse();
	printImage("img/kopia4.cpp");
	payse();
	printImage("img/kopia5.cpp");
	payse();
	printImage("img/kopia6.cpp");
	payse ();
	printImage("img/kopia7.cpp");
	payse();
	printImage("img/kopia8.cpp");
	payse();
	printImage("img/kopia9.cpp");
	
	
	system("pause");
}

void Id10 ()
{
	system("pause");
	printImage("img/kopia11.cpp");
	payse();
	printImage("img/kopia12.cpp");
	payse();
	printImage("img/kopia1.cpp");
	payse();
	printImage("img/kopia2.cpp");
	payse();
	printImage("img/kopia3.cpp");
	payse();
	printImage("img/kopia4.cpp");
	payse();
	printImage("img/kopia5.cpp");
	payse();
	printImage("img/kopia6.cpp");
	payse ();
	printImage("img/kopia7.cpp");
	payse();
	printImage("img/kopia8.cpp");
	payse();
	printImage("img/kopia9.cpp");
	payse();
	printImage("img/kopia10.cpp");
	
	
	system("pause");
}

int main()
{
	srand(time(NULL));
	// Game
	int pay, gorod, vibor, random, igra=0;
	int a=0, b=0, c=0, d=0, e=0, f=0, g=0, h=0, i=0, j=0, k=0, l=0;
	cout << "Vvedite balans [ ne bolse 1000] ==>" << endl << "Enter pay [EUR]: ";
	cin >> pay;
	if (pay > 1000 || pay < 1)
	{pay = 500;}
	
	//
	while (pay > 0)
	{
		// G
		cout << "==================" << " Pay: " << pay << endl
		<< "[1]London:     ["<< a << "]" << endl
		<< "[2]Moskva:     ["<< b << "]" << endl
		<< "[3]Kiev:       ["<< c << "]" << endl
		<< "[4]Paris:      ["<< d << "]" << endl
		<< "[5]Rim:        ["<< e << "]" << endl
		<< "[6]New-York:   ["<< f << "]" << endl
		<< "[7]Chikago:    ["<< g << "]" << endl
		<< "[8]Tokio:      ["<< h << "]" << endl
		<< "[9]Vasington:  ["<< i << "]" << endl
		<< "[10]Varsava:   ["<< j << "]" << endl
		<< "[11]Chotnoe:   ["<< k << "]" << endl
		<< "[12]Nechotnoe: ["<< l << "]" << endl
		<< "[13]Nachat igry !" << endl
		<< "==================" << endl
		<< endl << endl << endl << endl << endl << endl << endl;
	//
		cout << "Vvedite na chto stavite: ";
		cin >> vibor;
		if (vibor != 13)
		{
			cout << "Vvedite skolko stavite[EUR]: ";
			cin >> gorod;
			if (gorod > pay)
				gorod = pay;
			cout << "(Dla starta vvedite '13')" << endl;
		}
//		 pay = pay - gorod;
		
		switch (vibor)
		{
			case 1: a=gorod+a; break;
			case 2: b=gorod+b; break;
			case 3: c=gorod+c; break;
			case 4: d=gorod+d; break;
			case 5: e=gorod+e; break;
			case 6: f=gorod+f; break;
			case 7: g=gorod+g; break;
			case 8: h=gorod+h; break;
			case 9: i=gorod+i; break;
			case 10: j=gorod+j; break;
			case 11: k=gorod+k; break;
			case 12: l=gorod+l; break;
			default: vibor = 13;
		}
	//
		while (vibor != 13)
		{
		cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl 
		<< "==================" << " Pay: " << pay << endl
		<< "[1]London:     ["<< a << "]" << endl
		<< "[2]Moskva:     ["<< b << "]" << endl
		<< "[3]Kiev:       ["<< c << "]" << endl
		<< "[4]Paris:      ["<< d << "]" << endl
		<< "[5]Rim:        ["<< e << "]" << endl
		<< "[6]New-York:   ["<< f << "]" << endl
		<< "[7]Chikago:    ["<< g << "]" << endl
		<< "[8]Tokio:      ["<< h << "]" << endl
		<< "[9]Vasington:  ["<< i << "]" << endl
		<< "[10]Varsava:   ["<< j << "]" << endl
		<< "[11]Chotnoe:   ["<< k << "]" << endl
		<< "[12]Nechotnoe: ["<< l << "]" << endl
		<< "[13]Nachat igry !" << endl
		<< "==================" << endl
		<< endl << endl << endl << endl << endl << endl << endl;
			
			cout << "Vvedite na chto stavite: ";
			cin >> vibor;
			if (vibor != 13)
			{
				cout << "Vvedite skolko stavite[EUR]: ";
				cin >> gorod;
				if (gorod > pay)
					gorod = pay;
				cout << "(Dla starta vvedite '13')" << endl;
			}
			pay = pay - gorod;
			switch (vibor)
			{
				case 1: a=gorod+a; break;
				case 2: b=gorod+b; break;
				case 3: c=gorod+c; break;
				case 4: d=gorod+d; break;
				case 5: e=gorod+e; break;
				case 6: f=gorod+f; break;
				case 7: g=gorod+g; break;
				case 8: h=gorod+h; break;
				case 9: i=gorod+i; break;
				case 10: j=gorod+j; break;
				case 11: k=gorod+k; break;
				case 12: l=gorod+l; break;
				default: vibor = 13;
			}
		}
		
		//
		random = rand();
		while (random > 11 || random < 1)
		{random = rand();}
		
		igra++;
		
		//			
		switch (random)
		{
			case 1: Id1(); break;
			case 2: Id2(); break;
			case 3: Id3(); break;
			case 4: Id4(); break;
			case 5: Id5(); break;
			case 6: Id6(); break;
			case 7: Id7(); break;
			case 8: Id8(); break;
			case 9: Id9(); break;
			case 10: Id10(); break;
//			default: ;
		}
		//
		
		if (random % 2 == 0)
		{
			k = k * 2;
			pay = pay + k;
		}
		else
		{
			l = l * 2;
			pay = pay + l;
		}
		//
		switch (random)
		{
			case 1: a = a*a; pay = pay + a; break;
			case 2: b = b*b; pay = pay + b; break;
			case 3: c = c*c; pay = pay + c; break;
			case 4: d = d*d; pay = pay + d; break;
			case 5: e = e*e; pay = pay + e; break;
			case 6: f = f*f; pay = pay + f; break;
			case 7: g = g*g; pay = pay + g; break;
			case 8: h = h*h; pay = pay + h; break;
			case 9: i = i*i; pay = pay + i; break;
			case 10: j = j*j; pay = pay + j; break;
		}
		//
		a=0; b=0; c=0; d=0; e=0; f=0; g=0; h=0; i=0; j=0; k=0; l=0;
		cout << "Viigral: " << random;
		cout << " (/2); Igr sigrano: " << igra << endl << endl;
		// G
	}

	// Game
cout << endl << "End" << endl;
system ("pause");
}
