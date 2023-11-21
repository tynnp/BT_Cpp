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
    ll n, k = 2; cin >> n;

    if (n % 2 != 0) {
        n /= 2; n--;
        cout << n + 1 << endl;

        for (int i = 0; i < n; i++) {
            cout << 2 << " ";
        }
        cout << 3;

    } else {
        n /= 2; cout << n << endl;
        for (int i = 0; i < n; i++) {
            cout << 2 << " ";
        }
    }

    return 0;
}