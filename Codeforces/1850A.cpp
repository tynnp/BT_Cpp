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
    int testcase; cin >> testcase;
    while (testcase--) {
        int a, b, c; cin >> a >> b >> c;
        if (a + b >= 10) cout << "YES";
        else if (a + c >= 10) cout << "YES";
        else if (b + c >= 10) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    return 0;
}