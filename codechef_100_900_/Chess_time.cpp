#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
    
    while (t--) {
        int hrs;
        cin >> hrs;
        
        hrs *= 60;
        cout << hrs / 20 << endl;
    }
    return 0;
}
