// Include the standard C++ library header that includes most of the commonly used libraries
#include <bits/stdc++.h>

// Use the standard namespace to avoid writing std:: before every standard object
using namespace std;

// Main function where the execution of the program starts
int main() {
    // Declare an integer variable to store the number of test cases
    int t;

    // Take input from the user for the number of test cases
    cin >> t;

    // Run a loop for each test case
    while (t--) {
        // Declare two integer variables x and y
        int x, y;

        // Take input for x and y
        cin >> x >> y;

        // Check if y is greater than or equal to x and less than or equal to x + 200
        if (y >= x && y <= (x + 200)) {
            // If the condition is true, print "yes"
            cout << "yes\n";
        } else {
            // If the condition is false, print "no"
            cout << "no\n";
        }
    }

    // Return 0 to indicate that the program ended successfully
    return 0;
}
