#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef unsigned long long ull;
typedef double db;
typedef long double ld;
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
 
int main() {
    int k, i = 1, mishka = 0, chris = 0; cin >> k;

    while (i <= k) {
        int a, b; cin >> a >> b;
        if (a > b) mishka++;
        if (a < b) chris++;
        i++;
    }

    if (mishka > chris) cout << "Mishka";
    else if (mishka < chris) cout << "Chris";
    else cout << "Friendship is magic!^^";

    return 0;
}