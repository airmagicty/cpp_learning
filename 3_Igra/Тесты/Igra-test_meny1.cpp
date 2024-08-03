#include <iostream>
#include <cstdlib> // ??? exit()

using namespace std;

// ??????? ???? ???????????? ? ??????? ????? ????????
int prompt_menu_item()
{
    // ????????? ??????? ?????
    int variant;
    cout << "Menu\n" << endl;
    cout << "1. Nachat' igru\n"
         << "2. Syuzhet\n"
         << "3. Ob igre\n"
         << "4. Vykhod\n" << endl;
    cout << ">>> ";
    cin >> variant;
    return variant;
}

int main(int argc, char* argv[])
{
    int variant = prompt_menu_item(); 

    switch (variant) {
        case 1:
            cout << "Nachinayem..." << endl; 
            
            break;
        case 2:
            cout << "Nakhodim minimal'nyy element..." << endl; 
            break;
        case 3:
            cout << "Nakhodim maksimal'nyy element..." << endl; 
            break;
        case 4:
            cout << "Sortiruyem..." << endl; 
            break;
        default:
            cerr << "Vy vybrali nevernyy variant" << endl; 
            exit(EXIT_FAILURE);
    }
    return 0;
}
