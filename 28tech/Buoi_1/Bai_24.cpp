#include <iostream>
using namespace std;
 
int main() {
    char ch; cin >> ch;
    if (ch >= 'A' && ch <= 'Z') ch += 32;
    if (ch == 'z') cout << 'a';
    else if (ch >= 'a' && ch <= 'z' - 1) cout << char(ch + 1);
    else cout << "INVALID";
    return 0;
}