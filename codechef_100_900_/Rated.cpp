#include <bits/stdc++.h>
using namespace std;

int main() {
	int x, y;
    cin >> x >> y;

    int ans = x + y;
    if (ans >= 2000) {
        cout << "yes\n";
    } else {
        cout << "no\n";
    }
    
    return 0;
}
