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
    int n; cin >> n;
    int result = 0; char arr[n];
    FOR(i, 0, n) {
        cin >> arr[i]; if (i > 0) 
        if (arr[i-1] == arr[i]) result++;
    }
    cout << result;
    return 0;
}