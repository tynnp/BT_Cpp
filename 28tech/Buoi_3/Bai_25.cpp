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
    int n, res = 0; cin >> n;
    for (int i = 5; n/i >= 1; i *= 5) {
        res += n/i;
    }
    cout << res;
    return 0;
}