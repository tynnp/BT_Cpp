#include <bits/stdc++.h>
using namespace std;
 
int main() {
    double s1, s2, s3; cin >> s1 >> s2 >> s3;
    double c1 = sqrt(s1*s2*s3)/s1;
    double c2 = sqrt(s1*s2*s3)/s2;
    double c3 = sqrt(s1*s2*s3)/s3;
    cout << (c1 + c2 + c3)*4;
    return 0;
}