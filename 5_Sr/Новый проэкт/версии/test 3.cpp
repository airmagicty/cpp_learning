#include <iostream>
#include <fstream>
#include <iostream>

using namespace std;
 
int main(int argc, char* argv[])
{
	// Ввод данных
	int i, j;
	char buff[500];
	
	for (i=0; i<500; i++)
	{
		buff[i] = ' ';
	}
	// Получение данных из файла
	setlocale(LC_ALL, "rus");
    ifstream fin("name_dir\\input.txt");
    
    fin.getline(buff, 500); 
    fin.close(); 
    cout << buff << endl; 

    system("pause");
    // Обработка данных из файла (в массиве)
    for (i=0; i<500; i++)
	{
		buff[i] = buff[i] + 1;
	}
	// Очищение данных ('!' == ' ')
	for (i=0; i<500; i++)
	{
		if (buff[i] == '!')
		buff[i] = ' ';
	}
    // Вывод того, что получилось
    for (i=0; i<500; i++)
	{
		cout << buff[i];
	}
	// Вывод в фал готовые данные
	system ("pause");
	setlocale(0," "); 
    char * fileName = "name_dir\\output.txt";
    FILE * file = fopen(fileName, "w");
    if (file) 
    {
        char * str = buff;
        bool result = fputs(str, file);
        if (!result) 
            cout << "Строка в файл записана успешно!" << endl; 
    }
    else
    cout << "Нет доступа к файлу!" << endl;
    fclose(file);
	
	system ("pause");
}
