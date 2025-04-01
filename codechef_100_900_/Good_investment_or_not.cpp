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
        // Declare variables: x (current value), y (initial investment)
        int x, y;
        // Read current value and initial investment from standard input
        cin >> x >> y;
        
        // Check if current value is at least twice the initial investment
        if (x >= (2 * y)) {
            // Output "yes" if investment has doubled or more
            cout << "yes\n";  
        } else {
            // Output "no" if investment has not doubled
            cout << "no\n";
        }
    }
    
    // Return 0 to indicate successful program execution
    return 0;
}
