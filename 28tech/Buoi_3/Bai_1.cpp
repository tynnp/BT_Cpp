#include <bits/stdc++.h>
using namespace std;

int tinh_Tong(int n) {
    if (n == 1) return 1;
    return n + tinh_Tong(n - 1);
}
 
int main() {
    int n; cin >> n;
    cout << tinh_Tong(n);
    return 0;
}