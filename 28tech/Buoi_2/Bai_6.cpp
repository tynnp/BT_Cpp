#include <bits/stdc++.h>
using namespace std;
  
int main() {
    long long n, a, b; cin >> n >> a >> b;
    (a*2 > b) ? cout << b*(n/2) + a*(n%2) : cout << a*n;
    return 0;
}