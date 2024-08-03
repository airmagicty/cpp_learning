#include <bits/stdc++.h> 

using namespace std;

int main () {
	// Русская раскладка
	setlocale(LC_ALL, "Russian");
	
	// Инициализация переменных
	int size_input_reserve = 100, count_GroupInput = 0, count_test = 0;
//	string GroupInput[size_input_reserve]; 
//	vector <string> GroupInput;
	string GroupInput[size_input_reserve];
	char* FileNameGroupInput = "GroupInput.txt";
//	string test1;
	// Счетчик строк
	
	// Инициализация файлов
	ifstream FileGroupInput;
	FileGroupInput.open(FileNameGroupInput);
	
	// Если файл можно открыть
	if (FileGroupInput.is_open()) {
		while (!FileGroupInput.eof()) {
			// Считывать в массив сроки
			getline(FileGroupInput, GroupInput[count_GroupInput]);
			count_GroupInput++;
		}
		FileGroupInput.close();
	} else cout << "Unable to open file: " << FileNameGroupInput << endl; 
	
	for (int i = 0; i < count_GroupInput; i++) {
		cout << GroupInput[i] << endl;
	}
	
}
