#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int x, y, z;
	    cin >> x >> y >> z;
	    
	    x -= y;
	    x += z;
	    
	    cout << x << endl;
	}
	
	return 0;
}
