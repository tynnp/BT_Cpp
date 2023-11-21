#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
 
int main() {
    double a, b, c, delta, x1, x2; cin >> a >> b >> c;
    if (a == 0) {
        if (b == 0) (c == 0) ? cout << "INF" : cout << "NO";
        else (c == 0) ? cout << fixed << setprecision(2) << 0.0 : cout << fixed << setprecision(2) << - c/b;
    } else {
        delta = b*b - 4*a*c;
        if (delta < 0) cout << "NO";
        else if (delta == 0) cout << fixed << setprecision(2) << - b/(2*a);
        else cout << fixed << setprecision(2) << (- b + sqrt(delta))/(2*a) << " " << (- b - sqrt(delta))/(2*a);
    }
    return 0;
}