#include <iostream>
#include <fstream>
#include <iostream>
#include <string>

using namespace std;
 
int main(int argc, char* argv[])
{
    // ����������
    int pass, st=1;
    cout << "[0] == Enter password: ";
    cin >> pass;
    while (pass != 123)
    {
        cout << "[" << st <<"] Re-Enter password: ";
        cin >> pass;
        st++;
        if (st == 5)
        {
            cout << "You entered more than 5 times! Close the program!" << endl;
            system ("pause");
            return 0;
        }
    }
	// ���� ������
	int i, j;
	char buff[100];
	
	for (i=0; i<100; i++)
	{
		buff[i] = ' ';
	}
	// ��������� ������ �� �����
	setlocale(LC_ALL, "rus");
    ifstream fin("input.cpp");
    
    fin.getline(buff, 100); 
    fin.close(); 
    cout << buff << endl; 

    cout << "430jojgghghhghghjsuskdru0yr,hds,0,9";

//    system("pause");
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
/*    for (i=0; i<100; i++)
	{
		cout << buff[i];
	}*/
	// ����� � ��� ������� ������
//	system ("pause");
	setlocale(0," "); 
	cout << "suru89u0e5n9n0e58e0,987-ru78969";
    char * fileName = "output.cpp";
    FILE * file = fopen(fileName, "w");
    if (file) 
    {
        char * str = buff;
        bool result = fputs(str, file);
        if (!result) 
            cout << endl << "gwt6498w60556e906850e-609!" << endl; 
    }
    else
    cout << endl << "Net dostupa k failu!" << endl;
    fclose(file);
	
//	system ("pause");
}
