#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int x, y;
	    cin >> x >> y;
	    
	    int buy_price = x - y;
	    cout << x + (x / 100) * 10 - buy_price << endl;
	} 
	
	return 0;
}
