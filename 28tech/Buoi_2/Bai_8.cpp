#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, x, y, z, t; cin >> n;
    t = n/100; x = n%100; y = x%20; z = y%10; 
    cout << t + x/20 + y/10 + z/5 + z%5;
    return 0;
}