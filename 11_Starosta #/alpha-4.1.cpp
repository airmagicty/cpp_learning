#include <bits/stdc++.h> 

using namespace std;

int returnWeekDay (int d, int m, int y) {
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
    
    switch (resWeekDay) {
    	case 1: return 7; break;
    	case 2: return 1; break;
    	case 3: return 2; break;
    	case 4: return 3; break;
    	case 5: return 4; break;
    	case 6: return 5; break;
    	case 7: return 6; break;
    	default: return 0;
	}
}

int main () {
	// ������� ���������
	setlocale(LC_ALL, "Russian");
	
	// ������������� ����������
	int size_input_reserve = 100, count_GroupInput = 0, count_test = 0;
//	string GroupInput[size_input_reserve]; 
//	vector <string> GroupInput;
	string GroupInput[size_input_reserve];
	char* FileNameGroupInput = "GroupInput.txt";
	char* FileNameBaseGenerate = "BaseGenerate.txt";
	char* FileNameLogsEdit = "LogsEdit.txt";
//	string test1;
	
	// ���� ����
	time_t now = time(0);
	tm *ltm = localtime(&now);
	
	int day = ltm->tm_mday, month = 1 + ltm->tm_mon, year = 1900 + ltm->tm_year, weekday = -1;
	bool leap = false;
	cout << "������� ����: [���� ����� ���]: " << day << " " << month << " " << year << endl;
	string year_all[month][day];
	
	weekday = returnWeekDay(day, month, year);
	if (year % 4 == 0) leap = true;
	
	// ������� �����
	
	// ������������� ������
	ifstream FileGroupInput;
	ofstream FileBaseGenerate;
	ofstream FileLogsEdit;
	
	FileGroupInput.open(FileNameGroupInput);
	
	// ���� ���� ����� �������
	if (FileGroupInput.is_open()) {
		while (!FileGroupInput.eof()) {
			// ��������� � ������ �����
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
	
	// ���������� ���� + �������
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
			if (y_count >= count_GroupInput) y_count = 0;
			year_student_all[month_i][day_i] = GroupInput[y_count];
			
			FileBaseGenerate << year << "." << month_i+1 << "." << day_i+1 << " " << GroupInput[y_count] << endl;
			
			y_count++;
			y_count_clone++;
		}
	}
	
//	// ����� ���������� � ����
//	FileBaseGenerate.open(FileNameBaseGenerate);
//	// ���� ���� ����� �������
//	if (FileBaseGenerate.is_open()) {
//		// �������� � ������� �����
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
	
	// �����
	cout << "�������� ���������; " << weekday;
	return 0;
}
