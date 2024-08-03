#include <iostream>
#include <vector>
#include <cstdlib>
#include <conio.h>
 
int main() 
{
    bool running = true;
    int current_item = 0;
    
    std::vector< std::string > menu;
    menu.push_back("item 1");
    menu.push_back("item 2");
    menu.push_back("exit");
    
    char key;
    while(running) {
        for(int i = 0; i < menu.size(); i++) {
            std::cout << (current_item == i ? "-->" : " ");
            std::cout << menu[i] << "\n";
        }
        
        while(true) {
            key = getch();
            
            if(key == 'w') {
                current_item = (current_item <= 0 ? menu.size() - 1 : current_item - 1);
                break;
            }
            
            if(key == 's') {
                current_item = (current_item >= menu.size() - 1 ? 0 : current_item + 1);
                break;
            }
        }
        
        system("cls");
    }
    
    return 0;
}
