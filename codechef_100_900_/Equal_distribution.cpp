#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;

        int sum = a + b;
        if (sum % 2 == 0) {
            cout << "yes\n";
        } else {
            cout << "no\n";
        }
    }  

    return 0;
}
