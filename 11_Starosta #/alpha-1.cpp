#include <bits/stdc++.h> 

using namespace std;

int main () {
	// ������� ���������
	setlocale(LC_ALL, "Russian");
	
	// ������������� ����������
	int size_input = 28, count_GroupInput = 0;
//	string GroupInput[size_input]; 
//	vector <string> GroupInput;
	string GroupInput[size_input];
	char* FileNameGroupInput = "GroupInput.txt";
	string test1;
	
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
	
	for (int i = 0; i < size_input; i++) {
		cout << GroupInput[i] << endl;
	}
	
}
