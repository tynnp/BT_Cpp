#include <bits/stdc++.h>
using namespace std;
 
double tongS(double n) {
    if (n == 1) return 1.0/2;
    return 1/(2*n) + tongS(n - 1);
}

int main() {
    double n; cin >> n;
    cout << fixed << setprecision(2) << tongS(n);
    return 0;
}