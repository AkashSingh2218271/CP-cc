#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int a[6];
        a[5] = 0;
        for (int i = 0; i < 5; i++) { cin >> a[i]; a[5] += a[i]; }
        
        if (a[5] >= 4) {
            cout << "yes\n";
        } else {
            cout << "no\n";
        }
    }
    
    return 0;
}
