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
    while (t--)
    {
        // Declare variable x to store the rainfall amount
        int x;
        // Read the rainfall amount from input
        cin >> x;

        // Check rainfall ranges and determine intensity
        if (x < 3) {
            // Output "light" for low rainfall
            cout << "light\n";  
        } else if (x >= 3 && x < 7) {
            // Output "moderate" for medium rainfall
            cout << "moderate\n";
        } else {
            // Output "heavy" for high rainfall
            cout << "heavy\n";
        }
    }
    
    // Return 0 to indicate successful program execution
    return 0;
}
