// Include all standard C++ libraries
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Declare an integer variable 't' to store the number of test cases
    int t;
    cin >> t; // Read the number of test cases

    // Loop over all test cases
    while (t--) {
        // Declare two integer variables x and y
        // x = cost of the first cab, y = cost of the second cab
        int x, y;
        cin >> x >> y; // Read the costs of both cab services

        // Compare the two cab costs
        if (x > y) {
            // If first cab is more expensive, second is cheaper
            cout << "second\n";
        } else if (y > x) {
            // If second cab is more expensive, first is cheaper
            cout << "first\n";
        } else {
            // If both cabs cost the same
            cout << "any\n";
        }
    }

    // Return 0 to indicate successful completion
    return 0;
}
