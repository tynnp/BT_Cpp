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
    string str; char ch;
    int hoa = 0, thuong = 0;
    while (cin >> ch) {
        str += ch;
        if (ch >= 'A' && ch <= 'Z') hoa++;
        else thuong++;
    }
    if (hoa > thuong) 
        for (auto x : str) cout << (char) toupper(x);
    else 
        for (auto x : str) cout << (char) tolower(x);
    return 0;
}