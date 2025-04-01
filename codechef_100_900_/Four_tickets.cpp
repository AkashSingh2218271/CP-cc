// Include input/output stream library
#include <iostream>
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
        // Declare variable p to store the price of one ticket
        int p;
        // Read the price of one ticket from input
        cin >> p;
        
        // Check if total cost of 4 tickets is within budget (1000)
        if ((4 * p) <= 1000) {
            // Output "yes" if can afford all tickets
            cout << "yes" << endl;
        } else {
            // Output "no" if cannot afford all tickets
            cout << "no" << endl;
        }
    }

    // Return 0 to indicate successful program execution
    return 0;
}