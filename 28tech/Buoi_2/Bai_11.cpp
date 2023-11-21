#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long k, n, w; cin >> k >> n >> w;
    long long S = (w*(w+1))/2; S *= k;
    (S <= n) ? cout << 0 : cout << S - n;
    return 0;
}