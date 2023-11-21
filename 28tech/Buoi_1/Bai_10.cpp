#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    double n; cin >> n;
    cout << fixed << setprecision(2) << 1 - 1/(n + 1);
    return 0;
}