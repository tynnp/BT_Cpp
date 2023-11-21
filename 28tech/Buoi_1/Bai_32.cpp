#include <bits/stdc++.h>
using namespace std;
  
int main() {
    int a, b, c, d, e; 
    cin >> a >> b >> c >> d >> e;

    int so_nho_nhat = a;
    if (so_nho_nhat > b) so_nho_nhat = b;
    if (so_nho_nhat > c) so_nho_nhat = c;
    if (so_nho_nhat > d) so_nho_nhat = d;
    if (so_nho_nhat > e) so_nho_nhat = e;

    int so_nho_nhi = 999;
    if (so_nho_nhi > a && a > so_nho_nhat) so_nho_nhi = a;
    if (so_nho_nhi > b && b > so_nho_nhat) so_nho_nhi = b;
    if (so_nho_nhi > c && c > so_nho_nhat) so_nho_nhi = c;
    if (so_nho_nhi > d && d > so_nho_nhat) so_nho_nhi = d;
    if (so_nho_nhi > e && e > so_nho_nhat) so_nho_nhi = e;

    cout << so_nho_nhi;
    return 0;
}