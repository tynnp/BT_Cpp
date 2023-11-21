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
    int n; cin >> n;
    int so_tuan = n/7, ngay_du = n%7;
    int min = so_tuan*2, max = min;
    if (ngay_du == 6) min++;
    if (ngay_du < 2) max += ngay_du;
    else max += 2;
    cout << min << " " << max;
    return 0;
}