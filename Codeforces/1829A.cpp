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
    string str = "codeforces";
    int testcase; cin >> testcase;
    while (testcase--) {
        int count = 0, i = 0; 
        while (i < 10) {
            char ch; cin >> ch;
            if (str[i++] != ch) count++;
        }
        cout << count << endl;
    }
    return 0;
}