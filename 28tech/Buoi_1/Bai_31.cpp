#include <bits/stdc++.h>
using namespace std;
 
int main() {
    double hs1_1, hs1_2, hs2, hs3;
    cin >> hs1_1 >> hs1_2 >> hs2 >> hs3;
    double diem_trung_binh = (hs1_1 + hs1_2 + hs2*2 + hs3*3) / 7;

    if (diem_trung_binh >= 8) cout << "GIOI";
    else if (diem_trung_binh >= 6.5) cout << "KHA";
    else if (diem_trung_binh >= 5) cout << "TRUNG BINH";
    else cout << "YEU";
    
    return 0;
}