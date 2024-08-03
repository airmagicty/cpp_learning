#include <bits/stdc++.h> 
using namespace std;

int WeekDay (int d, int m, int y) {
    int LeapYears = (int) y/ 4, resWeekDay;
    long a = (y - LeapYears)*365 + LeapYears * 366;
    
    if(m >= 2) a += 31;
    if(m >= 3 && (int)y/4 == y/4) a += 29;
    else if(m >= 3) a += 28;
    if(m >= 4) a += 31;
    if(m >= 5) a += 30;
    if(m >= 6) a += 31;
    if(m >= 7) a += 30;
    if(m >= 8) a += 31;
    if(m >= 9) a += 31;
    if(m >= 10) a += 30;
    if(m >= 11) a += 31;
    if(m == 12) a += 30;
    
    a += d;
    resWeekDay = (a - 2) % 7;
    
    resWeekDay = (a - 2) % 7;
    switch (resWeekDay) {
    	case 0: return 6; break;
    	case 1: return 7; break;
    	case 2: return 1; break;
    	case 3: return 2; break;
    	case 4: return 3; break;
    	case 5: return 4; break;
    	case 6: return 5; break;
    	default: return 0;
	}
}

int main () {
	// Русская раскладка
	setlocale(LC_ALL, "Russian");
	
	cout << "Старт программы" << endl; 
	
	// Инициализация переменных
	int size_input_reserve = 100, count_GroupInput = 0, count_test = 0;
	string GroupInput[size_input_reserve];
	char* FileNameGroupInput = "GroupInput.txt";
	char* FileNameBaseGenerate = "BaseGenerate.txt";
	char* FileNameLogsEdit = "LogsEdit.txt";
	
	cout << "Инициализация переменных готова" << endl;
	
	// Ввод даты
	time_t now = time(0);
	tm *ltm = localtime(&now);
	
	int day = ltm->tm_mday, month = 1 + ltm->tm_mon, year = 1900 + ltm->tm_year, weekday = ltm->tm_wday;
	bool leap = false;
	string year_all[month][day];
	
	cout << "Инициализация указателей дат [ддммгггг]: " << day << " " << month << " " << year << " " << weekday << " готова" << endl;

	if (year % 4 == 0) leap = true;
	
	// Инициализация файлов
	ifstream FileGroupInput;
	ifstream FileBaseGenerate_read;
	ofstream FileBaseGenerate;
	ifstream FileLogsEdit_read;
	ofstream FileLogsEdit;
	
	// Проверка в какой раз прога запускается
	bool first = false;
	string stringTestFirst;
	
	FileLogsEdit_read.open(FileNameLogsEdit);
	getline(FileLogsEdit_read, stringTestFirst);
	FileLogsEdit_read.close();
	
	if (stringTestFirst != "Программа была запущена впервые!") {
		FileLogsEdit.open(FileNameLogsEdit);
		FileLogsEdit << "Программа была запущена впервые!";
		FileLogsEdit.close();
		first = true;
	}
	
	cout << "Инициализация файлов готова" << endl;
	
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
//		system("pause");
		return 0;
	}
	cout << "Создание массива из файла списка людей готово" << endl;
	
	// Заполнение даты + массив database
	int y_count = 0, y_count_clone = 0, month_count = 12, day_count = 31, y_count_next; 
	string year_student_all[month_count][day_count];
	
	int dbBG_section_int = 5, dbBG_section_char = 2, dbBG_day = 365;
	int count_GroupInput_null = count_GroupInput-1, bias = 0;
	if (leap) dbBG_day = 366;
	int databaseBaseGenerate_int[dbBG_section_int][dbBG_day];
	string databaseBaseGenerate_char[dbBG_section_char][dbBG_day];
	
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
			
			// датабаза дат - заполнение
			databaseBaseGenerate_int[0][y_count] = year*10000 + (month_i+1)*100 + day_i+1;
			databaseBaseGenerate_int[1][y_count] = year;
			databaseBaseGenerate_int[2][y_count] = month_i + 1;
			databaseBaseGenerate_int[3][y_count] = day_i + 1;
			databaseBaseGenerate_int[4][y_count] = WeekDay(databaseBaseGenerate_int[3][y_count], databaseBaseGenerate_int[2][y_count], year);
			
			// датабаза имен - заполнение
			if (first == true) {
				databaseBaseGenerate_char[0][y_count] = GroupInput[(y_count_clone + count_GroupInput) % count_GroupInput];
				databaseBaseGenerate_char[1][y_count] = GroupInput[(y_count_clone + count_GroupInput + 1) % count_GroupInput];
				y_count_clone+=2;
			}
			
			y_count++;
		}
	}
	
	if (first == true) {
		cout << "Заполнение даты + Массив database готов в первый раз" << endl;
		// датабаза имен - сортировка  243 121
		int begin_bias = 122;
		string bufferdatabaseBaseGenerate_char[2];
	
		for (int begin_bias_beg = 0; begin_bias_beg < begin_bias; begin_bias_beg++) {
			bufferdatabaseBaseGenerate_char[0] = databaseBaseGenerate_char[0][0];
			bufferdatabaseBaseGenerate_char[1] = databaseBaseGenerate_char[1][0];
			for (int day2_i = 1; day2_i < dbBG_day; day2_i++) {
   	     	databaseBaseGenerate_char[0][day2_i-1] = databaseBaseGenerate_char[0][day2_i];
  	      	databaseBaseGenerate_char[1][day2_i-1] = databaseBaseGenerate_char[1][day2_i];
   	 	} 
			databaseBaseGenerate_char[0][dbBG_day-1] = bufferdatabaseBaseGenerate_char[0];
			databaseBaseGenerate_char[1][dbBG_day-1] = bufferdatabaseBaseGenerate_char[1];
		}
	}
	cout << "Датабаза имен - Сортировка готова " << first << endl;
	
	//						Интерфейс УРАААААААААААААА НАКОНЕЦТАААААААААА
	
//	string databaseBaseGenerate_char_clone[dbBG_day*2];
//	vector <string> databaseLogsEdit;

	if (first == false) {
		// Восстановление из файла в датабазу
		int date_return_count = 0, date_return_count_clone = 0;
		
		FileBaseGenerate_read.open(FileNameBaseGenerate);
		while (!FileBaseGenerate_read.eof()) {
			// Считывать в массив сроки
			getline(FileBaseGenerate_read, databaseBaseGenerate_char[date_return_count%2][date_return_count/2]);
			date_return_count++;
		}
		FileBaseGenerate_read.close();
		
//		int date_return_count_clone = 0, date_return_count = 0;
//		FileBaseGenerate_read.open(FileNameBaseGenerate);
//		cout << "Стадия1" << endl;
//		while (!FileGroupInput.eof()) {
//			// работа со строками
//			getline(FileBaseGenerate_read, databaseBaseGenerate_char_clone[date_return_count]);
//			date_return_count++;
//			cout << "Стадия2" << endl;
//		}
//		cout << "Стадия3" << endl;
//		FileBaseGenerate_read.close();
		cout << "Копирование успешно" << endl;
	}
	
	// Вывод результата в файл
	FileBaseGenerate.open(FileNameBaseGenerate);
	for (int output_i = 0; output_i < dbBG_day; output_i++) {
		FileBaseGenerate << // output_i << " " <<
//							databaseBaseGenerate_int[0][output_i] << " " <<
//							databaseBaseGenerate_int[1][output_i] << "." <<
//							databaseBaseGenerate_int[2][output_i] << "." <<
//							databaseBaseGenerate_int[3][output_i] << ":" <<
//							databaseBaseGenerate_int[4][output_i] << " " <<
							databaseBaseGenerate_char[0][output_i] << endl <<
							databaseBaseGenerate_char[1][output_i];
							if (output_i != dbBG_day-1) FileBaseGenerate << endl;
//		if (output_i % 36 == 0) cout << "+";
	} 
	FileBaseGenerate.close();

	// Конец
	cout << "Операция выполнена. " << first;
//	cout << endl; system("pause");
	return 0;
}
