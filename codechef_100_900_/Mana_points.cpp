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
        // Declare variables: x (mana cost per spell), y (total mana points)
        int x, y;
        // Read mana cost and total mana points from input
        cin >> x >> y;

        // Calculate and output maximum number of spells possible
        cout << y / x << endl;
    }

    // Return 0 to indicate successful program execution
    return 0;
}
