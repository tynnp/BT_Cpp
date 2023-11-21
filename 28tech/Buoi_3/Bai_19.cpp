#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef unsigned long long ull;
typedef double db;
typedef long double ld;
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
 
int main() {
    int n, t; cin >> n >> t;
    if (n == 1 && t == 10) cout << -1;
    else if (n >= 2 && t == 10) {
        for (int i = 1; i < n; i++) cout << 1;
        cout << 0;
        
    } else {
        for (int i = 1; i <= n; i++) cout << t;
    }
    return 0;
}