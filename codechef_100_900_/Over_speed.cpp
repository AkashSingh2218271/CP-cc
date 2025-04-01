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
        // Declare variable speed to store the vehicle speed
        int speed;
        // Read the vehicle speed from input
        cin >> speed;
    
        // Check speed ranges and determine fine amount
        if (speed <= 70) {
            // No fine for speed within limit
            cout << 0 << endl;  
        } else if (speed > 70 && speed <= 100) {
            // Fine of 500 for moderate speeding
            cout << 500 << endl;
        } else {
            // Fine of 2000 for severe speeding
            cout << 2000 << endl;
        }
    }
    
    // Return 0 to indicate successful program execution
    return 0;
}
