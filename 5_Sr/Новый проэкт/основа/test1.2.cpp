#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    setlocale(0,""); 
    char * fileName = "name_dir\\new_file.txt";
    FILE * file = fopen(fileName, "w");
    if (file) 
    {
        char * str = "I Like The Coding!"; 
        bool result = fputs(str, file);
        if (!result) 
            cout << "������ � ���� �������� �������!" << endl; 
    }

    else
    cout << "��� ������� � �����!" << endl;
    fclose(file);
    return 0;
}
