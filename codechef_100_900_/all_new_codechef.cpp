// Include all standard C++ libraries for input/output and other utilities
#include <bits/stdc++.h>
// Use the standard namespace to avoid prefixing std:: before standard library functions
using namespace std;

// Main function - entry point of the program
int main() {    
    // Declare variables: x (current version), y (latest version)
    int x, y;
    // Read current version and latest version numbers from input
    cin >> x >> y;
    
    // Compare version numbers to determine status
    if (x < y) {
        // Output "old" if current version is older than latest
        cout << "old\n";
    } else if (x > y) {
        // Output "new" if current version is newer than latest
        cout << "new\n";
    } else {
        // Output "same" if versions are equal
        cout << "same\n";
    }
    
    // Return 0 to indicate successful program execution
    return 0;
}
