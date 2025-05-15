#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int x, y;
	    cin >> x >> y;
	    
	    if (x > y) {
	        cout << "new phone\n";
	    } else if (y > x) {
	        cout << "repair\n";
	    } else {
	        cout << "any\n";
	    }
	}
	
	return 0;
}
