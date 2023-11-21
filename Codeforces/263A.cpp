#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef unsigned long long ull;
typedef double db;
typedef long double ld;
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
 
#define mod 1000000009
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define rFOR(i, a, b) for (int i = (a) - 1; i >= (b); i--)
 
int main() {
    int arr[5][5], i = 0, j;
    for(i; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            cin >> arr[i][j]; 
            if (arr[i][j]) {
                int result = abs(2 - i) + abs(2 - j);
                cout << result;
                return 0;
            }
        }
    }
}