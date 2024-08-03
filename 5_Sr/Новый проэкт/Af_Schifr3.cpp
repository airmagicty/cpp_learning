#include <iostream>
#include <fstream>
#include <iostream>
#include <string>

using namespace std;
 
int main(int argc, char* argv[])
{
    // Запоролить
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
	// Ввод данных
	int i, j;
	char buff[100];
	
	for (i=0; i<100; i++)
	{
		buff[i] = ' ';
	}
	// Получение данных из файла
	setlocale(LC_ALL, "rus");
    ifstream fin("input.cpp");
    cout << "gbm04m6wa=w60mes056845w-06u897e0e0ush";
    fin.getline(buff, 100); 
    fin.close(); 
    cout << buff << endl; 

//    system("pause");
    // Обработка данных из файла (в массиве)
    for (i=0; i<100; i++)
	{
		buff[i] = buff[i] + 175;
	}
	// Очищение данных ('!' == ' ')
	for (i=0; i<100; i++)
	{
		if (buff[i] == ' ')
		buff[i] = ' ';
	}
    // Вывод того, что получилось
/*    for (i=0; i<100; i++)
	{
		cout << buff[i];
	}*/
	// Вывод в фал готовые данные
//	system ("pause");
	setlocale(0," "); 
	cout << "gu3509h60w964-80578e=-4-6-99hh,ggl";
    char * fileName = "output.cpp";
    FILE * file = fopen(fileName, "w");
    if (file) 
    {
        char * str = buff;
        bool result = fputs(str, file);
        if (!result) 
            cout << endl <<"b89m68e96895e06096e8u00k8!" << endl; 
    }
    else
    cout << endl << "Net dostupa k failu!" << endl;
    fclose(file);
	
//	system ("pause");
}
