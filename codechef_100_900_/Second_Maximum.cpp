#include <bits/stdc++.h>
using namespace std;

void second_max(int a, int b, int c) {
    if (a > b && a < c || a > c && a < b) {
        cout << a << endl;
    } else if (b > a && b < c || b > c && b < a) {
        cout << b << endl;
    } else if (c > a && c < b || c > b && c < a) {
        cout << c << endl;
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        second_max(a, b, c);
    }

    return 0;
}
