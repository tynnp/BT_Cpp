#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n, m, a; cin >> n >> m >> a;

    //? Nếu lát không đủ thì lát thêm 1 viên
    if (n % a) n = n/a + 1;
    else n = n/a;

    //? m và n lúc sau là số gạch cần lát...
    if (m % a) m = m/a + 1;
    else m = m/a;

    cout << m*n;
    return 0;
}