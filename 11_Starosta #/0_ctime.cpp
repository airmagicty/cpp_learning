#include <iostream>
#include <ctime>

using namespace std;

int main() {
   // текущая дата / время на основе текущей системы
   time_t nowdate = time(0);
   
   // преобразовать сейчас в строковую форму
   char* dt = ctime(&nowdate);

   cout << "The local date and time is: " << dt << endl;
   
}
