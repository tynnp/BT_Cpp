#include <iostream>
using namespace std;
 
int main() {
    char ch; cin >> ch;
    (ch >= 'A' && ch <= 'Z') ? cout << char(ch + 32) : cout << ch;
    return 0;
}