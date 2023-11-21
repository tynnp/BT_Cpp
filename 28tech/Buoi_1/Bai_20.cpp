#include <iostream>
using namespace std;
 
int main() {
    char ch; cin >> ch;
    ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) ? cout << "YES" : cout << "NO";
    return 0;
}