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
	char* FileNameBaseGenerate = "BaseGenerate.txt";
	char* FileNameLogsEdit = "LogsEdit.txt";
//	string test1;
	
	// Ввод даты
	int day = 0, month = 0, year = 0;
	bool leap = false;
	cout << "Введите дату: [день месяц год] и нажмите Enter: ";
	cin >> day >> month >> year;
	string year_all[month][day];
	
	if (year % 4 == 0) {
		leap = true;
	} 
	
	// Счетчик строк
	
	// Инициализация файлов
	ifstream FileGroupInput;
	ofstream FileBaseGenerate;
	ofstream FileLogsEdit;
	
	FileGroupInput.open(FileNameGroupInput);
	
	// Если файл можно открыть
	if (FileGroupInput.is_open()) {
		while (!FileGroupInput.eof()) {
			// Считывать в массив сроки
			getline(FileGroupInput, GroupInput[count_GroupInput]);
			count_GroupInput++;
		}
		FileGroupInput.close();
	}  
	
	if (FileBaseGenerate.is_open()) cout << "Unable to open file: " << FileNameGroupInput << endl;
	if (FileBaseGenerate.is_open()) cout << "Unable to open file: " << FileNameBaseGenerate << endl;
	if (FileBaseGenerate.is_open()) cout << "Unable to open file: " << FileNameLogsEdit << endl;
	
//	for (int i = 0; i < year_student_all; i++) {
//		cout << GroupInput[i] << endl;
//	}
	
	// Заполнение даты + функция
	int y_count = 0, y_count_clone = 0, month_count = 12, day_count = 31; 
	string year_student_all[month_count][day_count];
	
	FileBaseGenerate.open(FileNameBaseGenerate);
	
	for (int month_i = 0; month_i < month_count; month_i++) {
		switch (month_i) {
			case  1: day_count = 31; break;
			case  2: day_count = 28; if(leap) day_count = 29; break;
			case  3: day_count = 31; break;
			case  4: day_count = 30; break;
			case  5: day_count = 31; break;
			case  6: day_count = 31; break;
			case  7: day_count = 30; break;
			case  8: day_count = 31; break;
			case  9: day_count = 30; break;
			case 10: day_count = 31; break;
			case 11: day_count = 30; break;
			case 12: day_count = 31; break;
		}

		for (int day_i = 0; day_i < day_count; day_i++) {
			if (y_count >= 28) y_count = 0;
			year_student_all[month_i][day_i] = GroupInput[y_count];
			
			FileBaseGenerate << year << "." << month_i+1 << "." << day_i+1 << " " << GroupInput[y_count] << endl;
			
			y_count++;
			y_count_clone++;
		}
	}
	
//	// Вывод результата в файл
//	FileBaseGenerate.open(FileNameBaseGenerate);
//	// Если файл можно открыть
//	if (FileBaseGenerate.is_open()) {
//		// Записать в строчку файла
//		for (int day_i = 0; day_i < day_count; day_i++) {
//			year_student_all[month_i][day_i] = GroupInput[y_count];
//			y_count++;
//			y_count_clone++;
//			}
//		}
//		FileBaseGenerate.close();
//	} else cout << "Unable to open file: " << FileNameGroupInput << endl; 
	
//	for (int i = 0; i < year_student_all; i++) {
//		cout << GroupInput[i] << endl;
//	}
	
	// Конец
	cout << "Операция успешно выполнена!";
	return 0;
}
