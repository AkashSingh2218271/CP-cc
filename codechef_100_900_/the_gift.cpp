#include <bits/stdc++.h>
using namespace std;

/*
Problem: The Gift
- Om has X rupees
- Wants to gift a laptop worth N rupees
- Has access to Gymkhana funds with M rupees
- Can use any amount from the fund
- Need to determine if total money (X + M) is enough to buy laptop
*/

int main() {
    // Read number of test cases
    int t;
    cin >> t;
    
    // Process each test case
    while (t--) {
        // Read values:
        // x = Om's money
        // n = laptop cost
        // m = gymkhana fund
        int x, n, m;
        cin >> x >> n >> m;
        
        // Check if total available money (Om's money + Gymkhana fund)
        // is greater than or equal to laptop cost
        if (x + m >= n) {
            // Can afford the laptop
            cout << "YES\n";
        } else {
            // Cannot afford the laptop
            cout << "NO\n";
        }
    }
    
    return 0;
} 