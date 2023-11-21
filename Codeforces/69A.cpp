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
    int n, result = 0; cin >> n;  
    bool check = true; int arr[n][3];  
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < 3; j++)
            cin >> arr[i][j];

    for (int i = 0; i < 3; i++) {
        result = 0;
        for (int j = 0; j < n; j++) result += arr[j][i];
        if (result) check = false;
    }
    if (check) cout << "YES";
    else cout << "NO";
    return 0;
}