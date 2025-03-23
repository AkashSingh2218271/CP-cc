#include <bits/stdc++.h>
using namespace std;

int main() {    
    int x, y;
	cin >> x >> y;
	    
	if (x < y) {
	    cout << "old\n";
    } else if (x > y) {
	    cout << "new\n";
    } else {
	    cout << "same\n";
    }
	    
	return 0;
}
