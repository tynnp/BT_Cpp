#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long

void chuoinhiphan(ll n, string str, ll &count) {
    if (n == 0) {
        count++; return;
    }
    else 
        chuoinhiphan(n - 1, str + "0", count),
        chuoinhiphan(n - 1, str + "1", count);
}

int main() {
    ll n, count = 0; cin >> n;
    chuoinhiphan(n, "", count);
    cout << count % mod;
    return 0;
}

