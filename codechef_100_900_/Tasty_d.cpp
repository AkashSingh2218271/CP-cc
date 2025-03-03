#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x, y;
        cin >> x >> y;

        x *= 2;
        y *= 5;
        if (x == y) {
            cout << "either\n";
        } else if (x > y) {
            cout << "chocolate\n";
        } else {
            cout << "candy\n";
        }
    }

    return 0;
}
