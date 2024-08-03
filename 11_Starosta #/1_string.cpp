#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    string inp = "102";
    cout << "Input String: " << inp << endl;
 
    // Use std::stoi() to convert string to integer
    int res = stoi(inp);
 
    cout << "Integer: " << res << endl;
    return 0;
}
