#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, x;
        cin >> n >> x;
        
        if (n % 2 == 0) {
            if (x >= (n / 2)) {
            cout << "yes\n";
            } else {
                cout << "no\n";
            }
        } else {
            if (x >= (n / 2) + 1) {
            cout << "yes\n";
            } else {
                cout << "no\n";
            }
        }
    }
    
    return 0;
}
