#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n, S = 1; cin >> n;
    for (int i = 1; i <= n; i++) S *= i;
    cout << S;
    return 0;
}