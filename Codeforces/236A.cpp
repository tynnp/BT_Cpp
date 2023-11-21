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
    char ch; set<char> arr;
    while (cin >> ch) arr.insert(ch);
    if (arr.size() % 2 != 0) cout << "IGNORE HIM!";
    else cout << "CHAT WITH HER!";
    return 0;
}