#include <iostream>
using namespace std;
 
int main() {
    char ch; cin >> ch;
    (ch >= 'a' && ch <= 'z') ? cout << char(ch - 32) : cout << ch;
    return 0;
}