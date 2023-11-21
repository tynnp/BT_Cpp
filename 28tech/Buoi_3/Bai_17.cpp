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
    ll n, dem_chan = 0, dem_le = 0; cin >> n;
    while (n) {
        ((n%10) % 2 == 0) ? dem_chan++ : dem_le++; n /= 10;
    }
    (dem_chan == dem_le) ? cout << "YES" : cout << "NO";
    return 0;
}