// Include all standard C++ libraries for input/output and other utilities
#include <bits/stdc++.h>
// Use the standard namespace to avoid prefixing std:: before standard library functions
using namespace std;

// Main function - entry point of the program
int main() {
    // Declare variables: cost1 (cost of one ice cream), y (total money)
    int cost1, y;
    // Read the cost of one ice cream and total money from input
    cin >> cost1 >> y;
    
    // Check if cost of two ice creams is more than available money
    if ((cost1 + cost1) > y) {
        // Output "no" if cannot afford two ice creams
        cout << "no\n";
    } else {
        // Output "yes" if can afford two ice creams
        cout << "yes\n";
    }
    
    // Return 0 to indicate successful program execution
    return 0;
}
