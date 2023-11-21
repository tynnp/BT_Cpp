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
    int n, k, count = 0; cin >> n >> k;
    int arr[n]; for (auto& x : arr) cin >> x;
    for (auto x : arr) if (x >= arr[k-1] && x != 0) count++;
    cout << count;
    return 0;
}