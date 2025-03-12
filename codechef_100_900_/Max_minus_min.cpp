#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int a, b, c;
	    cin >> a >> b >> c;
	    
	    int maxV = max(max(a, b), c);
	    int minV = min(min(a, b), c);
	    cout << maxV - minV << endl;
	}
	
    return 0;
}
