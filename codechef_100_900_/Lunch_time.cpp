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
        // Declare variable time to store the current time
        int time;
        // Read the current time from input
        cin >> time;
        
        // Check if time is between 1 and 4 (lunch time)
        if (time >= 1 && time <= 4) {
            // Output "yes" if it's lunch time
            cout << "yes\n";
        } else {
            // Output "no" if it's not lunch time
            cout << "no\n";
        }
    }
    
    // Return 0 to indicate successful program execution
    return 0;
}
