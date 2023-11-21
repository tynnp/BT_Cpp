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
    cin.ignore();
    while (testcase--) {
        string str; cin >> str;
        if (str.size() <= 10) cout << str << endl;
        else cout << str[0] << str.size()-2 << str[str.size()-1] << endl;
    }
    return 0;
}