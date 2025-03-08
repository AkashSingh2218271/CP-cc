#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int x;
        cin >> x;

        if (x < 3) {
            cout << "light\n";  
        } else if (x >= 3 && x < 7) {
            cout << "moderate\n";
        } else {
            cout << "heavy\n";
        }
    }
    
    return 0;
}
