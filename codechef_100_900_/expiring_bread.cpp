#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        
        int days = n / k;
        if ((n % k) > 0) { days++; }
        
        if (days <= m) {
            cout << "yes\n";
        } else {
            cout << "no\n";
        }
    }
    
    return 0;
}
