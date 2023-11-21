#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n, S = 0; cin >> n;
    for (int i = 1; i <= n; i++) S += pow(i, 3);
    cout << S;
    return 0;
}