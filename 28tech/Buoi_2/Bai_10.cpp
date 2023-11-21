#include <bits/stdc++.h>
using namespace std;
  
int main() {
    long long d1, d2, d3;
    cin >> d1 >> d2 >> d3;
    
    long long t1, t2, t3, t4;
    t1 = d1*2 + d3*2;
    t2 = d2*2 + d3*2;
    t3 = d2 + d3 + d1;
    t4 = d1*2 + d2*2;

    cout << min(t1, min(t2, min(t3, t4)));

    return 0;
}