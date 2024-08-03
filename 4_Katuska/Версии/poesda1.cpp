#include <iostream>
#include <stdio.h> 
#include <ctime>
#include <cstdlib>

using namespace std;

// London, Moskva, Kiev, Paris, Rim, New-York, Chikago, Tokio, Vasington, Varsava

// Сколько с.
// На что с.
// Результат

int main()
{
	srand(time(NULL));
	// Game
	int pay, gorod, vibor, random;
	int a=0, b=0, c=0, d=0, e=0, f=0, g=0, h=0, i=0, j=0, k=0, l=0;
	cout << "Vvedite balans ==>" << endl << "Enter pay [EUR]: ";
	cin >> pay;
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
		<< "[13]Nachat igry" << endl
		<< "==================" << endl
		<< endl << endl << endl << endl << endl << endl << endl;
	//
		cout << "Vvedite na chto stavite: ";
		cin >> vibor;
		cout << "Vvedite skolko stavite[EUR]: ";
		cin >> gorod;
		cout << "(Dla starta vvedite '13')" << endl;
		pay = pay - gorod;
		switch (vibor)
		{
			case 1: a=gorod; break;
			case 2: b=gorod; break;
			case 3: c=gorod; break;
			case 4: d=gorod; break;
			case 5: e=gorod; break;
			case 6: f=gorod; break;
			case 7: g=gorod; break;
			case 8: h=gorod; break;
			case 9: i=gorod; break;
			case 10: j=gorod; break;
			case 11: k=gorod; break;
			case 12: l=gorod; break;
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
		<< "[13]Nachat igry" << endl
		<< "==================" << endl
		<< endl << endl << endl << endl << endl << endl << endl;
			
			cout << "Vvedite na chto stavite: ";
			cin >> vibor;
			cout << "Vvedite skolko stavite[EUR]: ";
			cin >> gorod;
			cout << "(Dla starta vvedite '13')" << endl;
			pay = pay - gorod;
			switch (vibor)
			{
				case 1: a=gorod; break;
				case 2: b=gorod; break;
				case 3: c=gorod; break;
				case 4: d=gorod; break;
				case 5: e=gorod; break;
				case 6: f=gorod; break;
				case 7: g=gorod; break;
				case 8: h=gorod; break;
				case 9: i=gorod; break;
				case 10: j=gorod; break;
				case 11: k=gorod; break;
				case 12: l=gorod; break;
				default: vibor = 13;
			}
		}
		//
		random = rand();
		while (random > 11)
		{random = rand();}
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
		cout << "; Pay : " << pay << endl << endl;
		// G
	}

	// Game
cout << endl << "End" << endl;
system ("pause");
}
