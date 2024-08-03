#include <iostream>
#include <string>
using namespace std;

#define HEIGHT 5

int main()
{
	cout <<"Welcome user! "<<"The program was created by Athanasius  "<<"                [Beta 1.1]"
		<<endl<< "Enter 8 numbers (NOT MORE !!!) from 0 to 9" << endl
		<< "Zeros at the beginning of a number are not read by the program:[00523 = 523]" << endl
		<< "Write ONLY the numbers (WITHOUT SPACES!) [The program can get stuck] !!!" << endl;
	
	long num, num2, digit, length=0;
	
	{
		cout << "===============================================================================" << endl
			<< "Enter: "; //  Строка перед вводом (Enter:)
		// Заполняем массив с изображениями цифр
		string font[][HEIGHT] =
		{
			{
				"  000  ",
				" 0   0 ",
				" 0   0 ",
				" 0   0 ",
				"  000  "
			},
			{
				"    11 ",
				" 11 11 ",
				"    11 ",
				"    11 ",
				"    11 "
			},
			{
				"  222  ",
				" 2   2 ",
				"    2  ",
				"  22   ",
				" 22222 "
			},
			{
				" 3333  ",
				"     3 ",
				"  333  ",
				"     3 ",
				" 3333  "
			},
			{
				" 4   4 ",
				" 4   4 ",
				" 44444 ",
				"     4 ",
				"     4 "
			},
			{
				" 55555 ",
				" 5     ",
				" 5555  ",
				"     5 ",
				" 5555  "
			},
			{
				"  666  ",
				" 6     ",
				" 6666  ",
				" 6   6 ",
				"  666  "
			},
			{
				" 77777 ",
				"    7  ",
				"   7   ",
				"  7    ",
				" 7     "
			},
			{
				"  888  ",
				" 8   8 ",
				"  888  ",
				" 8   8 ",
				"  888  "
			},
			{
				"  999  ",
				" 9   9 ",
				"  9999 ",
				"     9 ",
				"  999  "
			}
		};
		// Получаем число
n:		cin >> num;
//		num = num + 1; num = num - 1; //  Защита от ввода букв
		num2 = num; // Копия исходного числа, чтобы не потерять его во время определения длины
//		cout <<"("<<num<<")";
		
		if (num > 99999999) //  Что бы не вводили больше 8 цифр
		{
		cout <<"Error! It was necessary to enter 8 characters! Now run the program again! End! "; cout << endl;
		}
		else{
		// Определяем кол-во цифр в числе
		while (num2 > 0)
		{
			num2 /= 10;
			length++;
		}
		
		// Разбиваем число на цифры и складываем их в массив digits
		int digits[length];
		for (int i = 0; i < length; i++)
		{
			digits[length - (i + 1)] = num % 10; // "length - (i + 1)" - сразу распологаем цифры в правильном порядке
			num /= 10;
		}
		
		// Выводим число
		cout <<"===============================================================================" << endl; // Строка перед цифрами  
		for (int i = 0; i < HEIGHT; i++) // для каждой строки
		{
			for (int k = 0; k < length; k++) // Для каждой цифры из исходного числа
			{
				cout << font[digits[k] /* <-- забираем цифру из digits */ ][i] << "  ";
			}
			cout << endl; 
		}
//		cout <<endl;
		length = 0;
		
		cout << "===============================================================================" << endl
			 << "Enter: "; //  Строка перед вводом (Enter:)  
//		num=0; num2=0;
		if (num == 0)
		{goto n;}
		else
		{cout <<"Error!";}
		}
	}
		
	}
