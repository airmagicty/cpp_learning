#include <bits/stdc++.h> 

using namespace std;

int main () {
	// ������� ���������
	setlocale(LC_ALL, "Russian");
	
	// ������������� ����������
	int size_input_reserve = 100, count_GroupInput = 0, count_test = 0;
//	string GroupInput[size_input_reserve]; 
//	vector <string> GroupInput;
	string GroupInput[size_input_reserve];
	char* FileNameGroupInput = "GroupInput.txt";
//	string test1;
	// ������� �����
	
	// ������������� ������
	ifstream FileGroupInput;
	FileGroupInput.open(FileNameGroupInput);
	
	// ���� ���� ����� �������
	if (FileGroupInput.is_open()) {
		while (!FileGroupInput.eof()) {
			// ��������� � ������ �����
			getline(FileGroupInput, GroupInput[count_GroupInput]);
			count_GroupInput++;
		}
		FileGroupInput.close();
	} else cout << "Unable to open file: " << FileNameGroupInput << endl; 
	
	for (int i = 0; i < count_GroupInput; i++) {
		cout << GroupInput[i] << endl;
	}
	
}
