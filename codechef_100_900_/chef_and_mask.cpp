#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int x, y;
        cin >> x >> y;
        
        int c1 = x * 100;
        int c2 = y * 10;
        if (c1 == c2) {
            cout << "cloth" << endl;
        } else if (c1 > c2) {
            cout << "cloth" << endl;
        } else {
            cout << "disposable" << endl;
        }
    }
    
    return 0;	
}
