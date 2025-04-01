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
        // Declare variables: x (chocolates), y (candies)
        int x, y;
        // Read number of chocolates and candies from input
        cin >> x >> y;

        // Calculate total value of chocolates (2 rupees each)
        x *= 2;
        // Calculate total value of candies (5 rupees each)
        y *= 5;
        // Compare values to determine which is more economical
        if (x == y) {
            // Output "either" if both cost the same
            cout << "either\n";
        } else if (x > y) {
            // Output "chocolate" if chocolates cost more
            cout << "chocolate\n";
        } else {
            // Output "candy" if candies cost more
            cout << "candy\n";
        }
    }

    // Return 0 to indicate successful program execution
    return 0;
}
