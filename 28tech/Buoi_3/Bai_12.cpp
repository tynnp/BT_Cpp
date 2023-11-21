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
    ll n, dem = 0; cin >> n;
    while (n) {
        dem++; n /= 10;
    }
    cout << dem;
    return 0;
}