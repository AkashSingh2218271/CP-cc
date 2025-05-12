#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        
        a -= c;
        b -= d;
        
        if (a > b) {
            cout << "second\n";
        } else if (b > a) {
            cout << "first\n";
        } else {
            cout << "any\n";
        }
    }
    
    return 0;
}

