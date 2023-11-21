#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n, m, k = 0; cin >> n >> m;

    if (m > n) {
        cout << -1; return 0;
    }

    if (n % 2) k = n/2 + 1;
    else k = n/2;

    while(k % m) k++;
    cout << k;
    return 0;
}