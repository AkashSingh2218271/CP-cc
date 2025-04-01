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
        // Declare variables: x (current score), y (target score)
        int x, y;
        // Read current score and target score from input
        cin >> x >> y;
        
        // Calculate the difference between target and current score
        int ans = y - x;
        
        // Check if more points are needed
        if (ans > 0) {
            // Output the number of points needed if positive
            cout << ans << endl;  
        } else {
            // Output 0 if no more points needed
            cout << 0 << endl;
        }
    }
    
    // Return 0 to indicate successful program execution
    return 0;
}
