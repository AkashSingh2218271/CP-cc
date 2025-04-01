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
        // Declare variables: gap1 (gap between 1st and 2nd), gap2 (gap between 2nd and 3rd)
        int gap1, gap2;
        // Read the gaps between positions from input
        cin >> gap1 >> gap2;
        
        // Calculate and output the total gap between 1st and 3rd position
        cout << gap1 + gap2 << endl;
    }
    // Return 0 to indicate successful program execution
    return 0;
}
