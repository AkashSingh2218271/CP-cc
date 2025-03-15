#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int n, x, y;
	    cin >> n >> x >> y;
	    
	    if (x * y >= n) {
	        cout << "yes\n";
	    } else {
	        cout << "no\n";
	    }
	}
	
    return 0;
}
