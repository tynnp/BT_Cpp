#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string str, str2; cin >> str;
    set<char> DSKT; char tmp;
    int count = 0, tmp2 = 0; 

    for (auto x : str) DSKT.insert(x);
    for (auto a : DSKT) {
        int k = 0;

        for (auto b : str) 
            if (a == b) k++;
        if (k % 2 != 0) tmp = a, tmp2 = k, count++;
        else str2.insert(str2.size()/2, k, a);
        
        if (count > 1) {
            cout << "NO SOLUTION";
            return 0;
        }
    }
    
    str2.insert(str2.size()/2, tmp2, tmp);
    cout << str2;
    return 0;
}