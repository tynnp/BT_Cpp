#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef unsigned long long ull;
typedef double db;
typedef long double ld;
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
 
#define mod 1000000009
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define rFOR(i, a, b) for (int i = (a) - 1; i >= (b); i--)
 
int main() {
    int x = 0, n; cin >> n;
    while (n--) {
        char a, b, c; cin >> a >> b >> c;
        switch (a) {
            case '+': ++x; break;
            case '-': --x; break;
            default: 
                switch (b) {
                    case '+': x++; break;
                    case '-': x--; break;
                }
        }
    }
    cout << x;
    return 0;
}