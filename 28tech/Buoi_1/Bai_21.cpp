#include <iostream>
using namespace std;
 
int main() {
    char ch; cin >> ch;
    (ch <= '9' && ch >= '0') ? cout << "YES" : cout << "NO";
    return 0;
}