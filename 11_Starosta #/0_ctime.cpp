#include <iostream>
#include <ctime>

using namespace std;

int main() {
   // ������� ���� / ����� �� ������ ������� �������
   time_t nowdate = time(0);
   
   // ������������� ������ � ��������� �����
   char* dt = ctime(&nowdate);

   cout << "The local date and time is: " << dt << endl;
   
}
