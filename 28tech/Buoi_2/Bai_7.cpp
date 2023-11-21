#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n, S; cin >> n >> S;
    if (n >= S) cout << 1;
    else if (S % n) cout << S/n + 1;
    else cout << S/n; 
    return 0;
}