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
        // Declare variables x and y to store the time complexities
        int x, y;
        // Read the time complexities from standard input
        cin >> x >> y;
        
        // Check if first algorithm is slower (has higher time complexity)
        if (x > y) {
            // Output "yes" if first algorithm is slower
            cout << "yes\n";
        } else {
            // Output "no" if first algorithm is not slower
            cout << "no\n";
        }
    }
    
    // Return 0 to indicate successful program execution
    return 0;
}
