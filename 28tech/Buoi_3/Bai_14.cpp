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
    ll n, tong_chan = 0, tong_le = 0; cin >> n;
    while (n) {
        ((n%10) % 2 == 0) ? tong_chan += (n%10) : tong_le += (n%10);
        n /= 10;
    }
    cout << tong_chan << " " << tong_le;
    return 0;
}