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
    ll n, S = 0; cin >> n;
    while (n) {
        S += n%10; n /= 10;
    }
    cout << S;
    return 0;
}