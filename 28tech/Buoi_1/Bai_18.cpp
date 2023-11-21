#include <iostream>
using namespace std;
 
int main() {
    char ch; cin >> ch;
    (ch >= 'a' && ch <= 'z') ? cout << "YES" : cout << "NO";
    return 0;
}