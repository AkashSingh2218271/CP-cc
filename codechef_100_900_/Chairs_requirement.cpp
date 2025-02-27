#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin >> t;
    
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        
        int ans = x - y;
        if (ans > 0) {
            cout << ans << endl;   
        } else {
            cout << 0 << endl;
        }
    }

    return 0;
}