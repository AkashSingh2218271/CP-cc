#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int x, y;
	    cin >> x >> y;
	    
	    if (x == 0 || y == 0) {
	        cout << "no\n";
	    } else {
	        if (x == y) {
	            cout << "yes\n";
	        } else {
	            cout << "no\n";
	        }
	    }
	}
	
    return 0;
}
