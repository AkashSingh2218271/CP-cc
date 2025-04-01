// Include all standard C++ libraries for input/output and other utilities
#include <bits/stdc++.h>
// Use the standard namespace to avoid prefixing std:: before standard library functions
using namespace std;

// Main function - entry point of the program
int main() {
    // Declare variables: x (capacity), a (apples), b (oranges)
    int x, a, b;
    // Read capacity, number of apples, and number of oranges from input
    cin >> x >> a >> b;
    
    // Check if total fruits (apples + oranges) can fit in the capacity
    if ((a + b) <= x) {
        // Output "yes" if all fruits can fit
        cout << "yes\n";
    } else {
        // Output "no" if fruits cannot fit
        cout << "no\n";    
    }
    
    // Return 0 to indicate successful program execution
    return 0;
}
