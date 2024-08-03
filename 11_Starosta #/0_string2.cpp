#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    string input, char1, char2;
    cin >> input;
    sscanf(input.c_str(), "%d|%d", &char1, &char2);
    cout << char1 << " " << char2;
    return 0;
}
