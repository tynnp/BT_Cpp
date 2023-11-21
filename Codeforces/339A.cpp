#include <bits/stdc++.h>
using namespace std;
 
//typedef long long ll;
//typedef unsigned long long ull;
//typedef double db;
//typedef long double ld;
//typedef pair<ll,ll> ii;
//typedef vector<ll> vi;
//typedef vector<ii> vii;
 
#define mod 1e9 + 7
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define rFOR(i, a, b) for (int i = (a) - 1; i >= (b); i--)
 
int main() {
    int n; char ch; string str;
    multiset<int> arr;
    while (cin >> n) arr.insert(n), cin >> ch; 
    for (auto x : arr) str += to_string(x) + '+';
    str.erase(str.end()-1); cout << str;
    return 0;
}