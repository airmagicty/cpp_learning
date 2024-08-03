#include <bits/stdc++.h> 

using namespace std;

int main () {
	// Русская раскладка
	setlocale(LC_ALL, "Russian");
	
	// Инициализация переменных
	int size_input = 28, count_GroupInput = 0;
//	string GroupInput[size_input]; 
//	vector <string> GroupInput;
	string GroupInput[size_input];
	char* FileNameGroupInput = "GroupInput.txt";
	string test1;
	
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
	
	for (int i = 0; i < size_input; i++) {
		cout << GroupInput[i] << endl;
	}
	
}
