#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int a, b, c;
	    cin >> a >> b >> c;
	    
	    if (a >= 10 && b >= 10 && c >= 10) {
	        if ((a + b + c) >= 100) {
	            cout << "pass\n";
	        } else {
	            cout << "fail\n";
	        }
	    } else {
	        cout << "fail\n";
	    }
	}
	
    return 0;
}
