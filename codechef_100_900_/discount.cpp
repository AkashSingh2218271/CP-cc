#include <bits/stdc++.h> // Include all standard C++ libraries
using namespace std;     // Use the standard namespace to avoid prefixing std::

int main() {
    int t;               // Declare variable to store number of test cases
    cin >> t;            // Read the number of test cases

    // Loop through each test case
    while (t--) {
        int x;           // Declare variable to store discount percentage
        cin >> x;        // Read the discount value for the current test case

        // Calculate and print the price Alice has to pay after discount
        cout << 100 - x << endl; // Selling price is 100, discount is x%
    }

    return 0; // Indicate that the program ended successfully
}
