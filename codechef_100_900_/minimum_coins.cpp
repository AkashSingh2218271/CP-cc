#include <bits/stdc++.h>
using namespace std;

/*
Problem: Minimum Coins
- Two types of denominations:
  1. Coins worth 1 rupee each
  2. Notes worth 10 rupees each
- Need to pay exactly X rupees
- Goal: Find minimum number of coins needed
- Solution: Use maximum number of 10-rupee notes possible
- Remaining amount will be paid using 1-rupee coins
- Therefore, minimum coins = X % 10 (remainder when divided by 10)
*/

int main() {
    // Read number of test cases
    int t;
    cin >> t;
    
    // Process each test case
    while (t--) {
        // Read amount to be paid
        int x;
        cin >> x;
        
        // Calculate and print minimum coins needed:
        // x % 10 gives the remainder when x is divided by 10
        // This represents the number of 1-rupee coins needed
        // after using maximum possible 10-rupee notes
        cout << x % 10 << endl;
    }
    
    return 0;
}
