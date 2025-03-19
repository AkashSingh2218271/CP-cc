#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int x, y;
        cin >> x >> y;
        
        int ans = y - x;
        
        if (ans > 0) {
            cout << ans << endl;  
        } else {
            cout << 0 << endl;
        }
    }
    
    return 0;
}
