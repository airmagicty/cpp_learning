#include <iostream>
#include <fstream>
#include <iostream>

using namespace std;
 
int main(int argc, char* argv[])
{
	// ���� ������
	int i, j;
	char buff[100];
	
	for (i=0; i<100; i++)
	{
		buff[i] = ' ';
	}
	// ��������� ������ �� �����
	setlocale(LC_ALL, "rus");
    ifstream fin("name_dir\\input.txt");
    
    fin.getline(buff, 100); 
    fin.close(); 
    cout << buff << endl; 

    system("pause");
    // ��������� ������ �� ����� (� �������)
    for (i=0; i<100; i++)
	{
		buff[i] = buff[i] - 175;
	}
	// �������� ������ ('!' == ' ')
	for (i=0; i<100; i++)
	{
		if (buff[i] == ' ')
		buff[i] = ' ';
	}
    // ����� ����, ��� ����������
    for (i=0; i<100; i++)
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
            cout << "Stroka b fail sapisana uspesno!" << endl; 
    }
    else
    cout << "Net dostupa k failu!" << endl;
    fclose(file);
	
	system ("pause");
}
