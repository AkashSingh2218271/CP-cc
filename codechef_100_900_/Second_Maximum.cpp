// Include all standard C++ libraries for input/output and other utilities
#include <bits/stdc++.h>
// Use the standard namespace to avoid prefixing std:: before standard library functions
using namespace std;

// Function to find and print the second maximum among three numbers
void second_max(int a, int b, int c) {
    // Check if a is second maximum (greater than one number and less than other)
    if (a > b && a < c || a > c && a < b) {
        // Output a if it's the second maximum
        cout << a << endl;
    } 
    // Check if b is second maximum (greater than one number and less than other)
    else if (b > a && b < c || b > c && b < a) {
        // Output b if it's the second maximum
        cout << b << endl;
    }
    // Check if c is second maximum (greater than one number and less than other)
    else if (c > a && c < b || c > b && c < a) {
        // Output c if it's the second maximum
        cout << c << endl;
    }
}

// Main function - entry point of the program
int main() {
    // Declare variable t to store the number of test cases
    int t;
    // Read the number of test cases from standard input
    cin >> t;

    // Loop that runs t times, handling each test case
    while (t--) {
        // Declare variables a, b, c to store three numbers
        int a, b, c;
        // Read three numbers from input
        cin >> a >> b >> c;
        // Call function to find and print second maximum
        second_max(a, b, c);
    }

    // Return 0 to indicate successful program execution
    return 0;
}
