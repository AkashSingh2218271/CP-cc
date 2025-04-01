// Include input/output stream library
#include <iostream>
// Use the standard namespace to avoid prefixing std:: before standard library functions
using namespace std;

// Main function - entry point of the program
int main() {
    // Declare variables x and y to store Alice's marks in two subjects
    int x,y;
    // Read Alice's marks in two subjects from standard input
    cin>>x>>y;
    
    // Check if Alice's marks in first subject are at least twice the marks in second subject
    if (x >= (2 * y)) {
        // Output "yes" if condition is satisfied
        cout << "yes\n";
    } else {
        // Output "no" if condition is not satisfied
        cout << "no\n";
    }
    
    // Return 0 to indicate successful program execution
    return 0;
}
