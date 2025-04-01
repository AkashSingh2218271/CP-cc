// Include all standard C++ libraries for input/output and other utilities
#include <bits/stdc++.h>
// Use the standard namespace to avoid prefixing std:: before standard library functions
using namespace std;

// Main function - entry point of the program
int main() {
    // Declare variable t to store the number of test cases
    int t;
    // Read the number of test cases from standard input
    cin >> t;
    
    // Loop that runs t times, handling each test case
    while (t--) {
        // Declare variables: n (number of passes), k (current passes)
        int n, k;
        // Read required passes and current passes from input
        cin >> n >> k;
        
        // Check if current passes are sufficient (need one more than required)
        if (k >= n+1) {
            // Output "yes" if passes are sufficient
            cout << "yes\n";
        } else {
            // Output "no" if passes are insufficient
            cout << "no\n";
        }
    }
    
    // Return 0 to indicate successful program execution
    return 0;
}
