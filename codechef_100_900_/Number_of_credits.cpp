#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin >> t;

    while (t--) {
        int x, y, z;
        cin >> x >> y >> z;

        x *= 4;
        y *= 2;
        cout << x + y << endl;
    }
    return 0;
}
