#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, m;
        cin >> n >> m;
        
        n *= 2;
        m *= 4;
        
        cout << n + m << endl;
    }
}
