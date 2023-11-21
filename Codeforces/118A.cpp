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
 
bool check(char c) {
    if (c == 'a') return false;
    else if (c == 'o') return false;
    else if (c == 'y') return false;
    else if (c == 'e') return false;
    else if (c == 'u') return false;
    else if (c == 'i') return false;
    return true;
}

int main() {
    char ch; 
    while (cin >> ch) 
        if (check(tolower(ch))) cout << "." << (char) tolower(ch);
    return 0;
}