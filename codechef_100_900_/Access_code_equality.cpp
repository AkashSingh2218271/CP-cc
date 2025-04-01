// Include all standard C++ libraries for input/output and other utilities
#include <bits/stdc++.h>
// Use the standard namespace to avoid prefixing std:: before standard library functions
using namespace std;

// Main function - entry point of the program
int main() {
    // Declare string variable to store the input access code
    string s;
    // Read the access code from standard input
    cin >> s;
    
    // Define the correct access code for Web Club
    string code = "WECNITK";    
    // Check if input matches the correct access code
    if (code == s) {
        // Output welcome message if access code is correct
        cout << "Welcome to Web Club!\n";
    } else {
        // Output access denied message if access code is incorrect
        cout << "Access denied\n";
    }
    
    // Return 0 to indicate successful program execution
    return 0;
}
