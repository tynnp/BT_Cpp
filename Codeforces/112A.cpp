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
    bool check = false;
    string str1, str2; 
    getline(cin, str1); 
    getline(cin, str2);
    FOR(i, 0, str1.size()) {
        if (tolower(str1[i]) > tolower(str2[i])) {
            check = true, cout << 1;
            break;
        } else if (tolower(str1[i]) < tolower(str2[i])) {
            check = true, cout << -1;
            break;
        } 
    } 
    if (!check) cout << 0;
    return 0;
}