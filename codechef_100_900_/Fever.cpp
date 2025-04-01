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
        // Declare variable temp to store the body temperature
        int temp;
        // Read the body temperature from input
        cin >> temp;
        
        // Check if temperature is above 98 degrees (indicating fever)
        if (temp > 98) {
            // Output "yes" if fever is present
            cout << "yes\n";
        } else {
            // Output "no" if no fever
            cout << "no\n";
        }
    }
    
    // Return 0 to indicate successful program execution
    return 0;
}