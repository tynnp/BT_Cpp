#include <bits/stdc++.h>
using namespace std;
 
//typedef long long ll;
//typedef unsigned long long ull;
//typedef double db;
//typedef long double ld;
//typedef pair<ll,ll> ii;
//typedef vector<ll> vi;
//typedef vector<ii> vii;
 
#define mod 1000000009
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define rFOR(i, a, b) for (int i = (a) - 1; i >= (b); i--)
 
int main() {
    int n; cin >> n;
    vector<int> So(n);
    vector<int> ChiSo(n+1);
    FOR(i, 0, n) {
        cin >> So[i]; ChiSo[So[i]] = i+1;
    }
    int count = 1;
    FOR(i, 2, n+1) if (ChiSo[i] < ChiSo[i-1]) count++;
    cout << count;
    return 0;
}