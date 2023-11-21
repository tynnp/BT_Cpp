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
    ll n, dem = 0; cin >> n;
    
    while (n) {
        
        if ((n%10) < 2) {
            n /= 10; continue;
        } else if ((n%10) == 2) {
            dem++; n /= 10; continue;
        }
        
        int k = 0;
        for (int i = 2; i <= sqrt(n%10); i++) {
            if ((n%10) % i == 0) k++;
        }
        
        if (!k) dem++; n /= 10;
    }
    
    cout << dem;
    return 0;
}