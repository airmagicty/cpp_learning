#include <bits/stdc++.h> 

using namespace std;

int main () {
	// Русская раскладка
	setlocale(LC_ALL, "Russian");
	
	// Инициализация переменных
	int size_input_reserve = 100, count_GroupInput = 0, count_test = 0;
	string GroupInput[size_input_reserve];
	char* FileNameGroupInput = "GroupInput.txt";
	char* FileNameBaseGenerate = "BaseGenerate.txt";
	char* FileNameLogsEdit = "LogsEdit.txt";
	
	// Ввод даты
	time_t now = time(0);
	tm *ltm = localtime(&now);
	
	int day = ltm->tm_mday, month = 1 + ltm->tm_mon, year = 1900 + ltm->tm_year, weekday = ltm->tm_wday + 1;
	bool leap = false;
	cout << "Введите дату: [день месяц год]: " << day << " " << month << " " << year << endl;
	string year_all[month][day];

	if (year % 4 == 0) leap = true;
	
	// Инициализация файлов
	ifstream FileGroupInput;
	ofstream FileBaseGenerate;
	ofstream FileLogsEdit;
	
	// Создание массива из файла списка людей
	FileGroupInput.open(FileNameGroupInput);
	
	if (FileGroupInput.is_open()) {
		while (!FileGroupInput.eof()) {
			// Считывать в массив сроки
			getline(FileGroupInput, GroupInput[count_GroupInput]);
			count_GroupInput++;
		}
		FileGroupInput.close();
	}  else {
		cout << "Unable to open file: " << FileNameGroupInput << endl;
		return 0;
	}
	
	// Заполнение даты + массив database
	int y_count = 0, y_count_clone = 0, month_count = 12, day_count = 31, y_count_next; 
	string year_student_all[month_count][day_count];
	
	int dbBG_section_int = 5, dbBG_section_char = 2, dbBG_day = 365;
	int count_GroupInput_null = count_GroupInput-1, bias = 0;
	if (leap) dbBG_day = 366;
	int databaseBaseGenerate_int[dbBG_section_int][dbBG_day];
	string databaseBaseGenerate_char[dbBG_section_char][dbBG_day];
	
//	FileBaseGenerate.open(FileNameBaseGenerate);
	
	for (int month_i = 0; month_i < month_count; month_i++) {
		switch (month_i) {
			case  1: day_count = 31; break;
			case  2: day_count = 28; if (leap) day_count = 29; break;
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
//			year_student_all[month_i][day_i] = GroupInput[y_count];
			
			// датабаза дат - заполнение
			databaseBaseGenerate_int[0][y_count] = year*10000 + (month_i + 1)*100 + day_i + 1;
			databaseBaseGenerate_int[1][y_count] = year;
			databaseBaseGenerate_int[2][y_count] = month_i + 1;
			databaseBaseGenerate_int[3][y_count] = day_i + 1;
			
			
			// датабаза имен - заполнение
			databaseBaseGenerate_char[0][y_count] = GroupInput[(y_count_clone + count_GroupInput) % count_GroupInput];
			databaseBaseGenerate_char[1][y_count] = GroupInput[(y_count_clone + count_GroupInput + 1) % count_GroupInput];

			y_count_clone+=2;
			y_count++;
		}
	}
	
	// Заполнение ряда дней недели
//	for (int day_i = 0; day_i < dbBG_day; day_i++)
//	databaseBaseGenerate_int[4][day_i];
	
	
	// Вывод результата в файл
	FileBaseGenerate.open(FileNameBaseGenerate);
	for (int output_i = 0; output_i < dbBG_day; output_i++) {
		FileBaseGenerate << databaseBaseGenerate_int[0][output_i] << " " <<
							databaseBaseGenerate_int[1][output_i] << "." <<
							databaseBaseGenerate_int[2][output_i] << "." <<
							databaseBaseGenerate_int[3][output_i] << " " <<
							databaseBaseGenerate_char[0][output_i] << " + " <<
							databaseBaseGenerate_char[1][output_i] << endl;
	} 
	FileBaseGenerate.close();

	// Конец
	cout << "Операция выполнена.";
	return 0;
}
