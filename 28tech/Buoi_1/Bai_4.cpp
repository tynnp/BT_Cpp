#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    int a, b; cin >> a >> b;
    cout << a + b << " " << a - b << " " << (long long) a*b << " " << fixed << setprecision(2) << (float) a/b;
    return 0;
}