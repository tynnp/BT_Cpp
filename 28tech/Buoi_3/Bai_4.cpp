#include <bits/stdc++.h>
using namespace std;
 
double tongS(double n) {
    if (n == 1) return 1;
    return 1/n + tongS(n - 1);
}

int main() {
    double n; cin >> n;
    cout << fixed << setprecision(3) << tongS(n);
    return 0;
}