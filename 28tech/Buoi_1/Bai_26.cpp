#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
    int a, b, c; cin >> a >> b >> c;
    if (a < 1 || b < 1 || c < 1 || a+b < c || a+c < b || b+c < a) cout << "INVALID";
    else if (sqrt(a*a + b*b) == c || sqrt(a*a + c*c) == b || sqrt(b*b + c*c) == a) cout << 3;
    else if (a == b && b == c) cout << 1;
    else if ((a == b && b != c) || (a == c && c != b) || (b == c && c != a)) cout << 2;
    else cout << 4;
    return 0;
}