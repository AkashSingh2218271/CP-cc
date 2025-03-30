#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int n, x, k;
	    cin >> n >> x >> k;
	    
	    int total = n * x;
	    
	    if (total <= k) {
	        cout << "yes\n";
	    } else {
	        cout << "no\n";
	    }
	}
	
	return 0;
}
