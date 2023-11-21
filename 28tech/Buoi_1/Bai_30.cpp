#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int a, b, c; cin >> a >> b >> c;
    (a/b == c || c/a == b || b/c == a) ? cout << "/" : cout << "NOSOL";
    return 0;
}