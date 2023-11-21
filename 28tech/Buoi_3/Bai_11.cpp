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
    ll n, m, S = 1; cin >> n >> m;
    for (int i = 1; i <= m; i++) S *= n;
    cout << S;
    return 0;
}