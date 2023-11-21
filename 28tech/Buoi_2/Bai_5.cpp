#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long a, b, k; cin >> a >> b >> k;
    long long x = abs(a) + abs(b);
    if (x == k) cout << "Yes";
    else if (x > k) cout << "No";
    else (x % 2 == k % 2) ? cout << "Yes" : cout << "No";
    return 0;
}