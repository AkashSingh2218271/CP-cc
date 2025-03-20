#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	
	while (t--) {
	    int x, y, z;
	    cin >> x >> y >> z;
	    
	    int units = x * y;
	    int chapters = units * z;
	    cout << chapters << endl;
	}
	
    return 0;
}
