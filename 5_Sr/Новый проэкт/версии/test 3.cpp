#include <iostream>
#include <fstream>
#include <iostream>

using namespace std;
 
int main(int argc, char* argv[])
{
	// ���� ������
	int i, j;
	char buff[500];
	
	for (i=0; i<500; i++)
	{
		buff[i] = ' ';
	}
	// ��������� ������ �� �����
	setlocale(LC_ALL, "rus");
    ifstream fin("name_dir\\input.txt");
    
    fin.getline(buff, 500); 
    fin.close(); 
    cout << buff << endl; 

    system("pause");
    // ��������� ������ �� ����� (� �������)
    for (i=0; i<500; i++)
	{
		buff[i] = buff[i] + 1;
	}
	// �������� ������ ('!' == ' ')
	for (i=0; i<500; i++)
	{
		if (buff[i] == '!')
		buff[i] = ' ';
	}
    // ����� ����, ��� ����������
    for (i=0; i<500; i++)
	{
		cout << buff[i];
	}
	// ����� � ��� ������� ������
	system ("pause");
	setlocale(0," "); 
    char * fileName = "name_dir\\output.txt";
    FILE * file = fopen(fileName, "w");
    if (file) 
    {
        char * str = buff;
        bool result = fputs(str, file);
        if (!result) 
            cout << "������ � ���� �������� �������!" << endl; 
    }
    else
    cout << "��� ������� � �����!" << endl;
    fclose(file);
	
	system ("pause");
}
