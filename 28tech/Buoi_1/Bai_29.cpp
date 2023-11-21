#include <bits/stdc++.h>
using namespace std;
 
int main() {
    double a, b; cin >> a >> b;
    if (a != (int)a) a = (int)a + 1;
    int so_luong = 0;
    for (int i = a; i <= (int)b; i++) so_luong++;
    cout << so_luong;
    return 0;
}