#include <iostream>
using namespace std;
 
int main() {
    int n; cin >> n;
    cout << n/365 << " " << (n%365)/7 << " " << (n%365)%7;
    return 0;
}