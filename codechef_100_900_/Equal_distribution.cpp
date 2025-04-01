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
        // Declare variables a and b to store the number of chocolates
        int a, b;
        // Read the number of chocolates from input
        cin >> a >> b;

        // Calculate total number of chocolates
        int sum = a + b;
        // Check if total chocolates can be divided equally
        if (sum % 2 == 0) {
            // Output "yes" if chocolates can be divided equally
            cout << "yes\n";
        } else {
            // Output "no" if chocolates cannot be divided equally
            cout << "no\n";
        }
    }  

    // Return 0 to indicate successful program execution
    return 0;
}
