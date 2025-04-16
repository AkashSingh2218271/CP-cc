#include <bits/stdc++.h> // Include standard libraries for input/output and other utilities
using namespace std; // Use the standard namespace

int main() { // Main function where execution starts
    int t; // Declare an integer variable to store the number of test cases
    cin >> t; // Read the number of test cases from input
    
    while (t--) { // Loop through each test case
        int x, y; // Declare two integer variables: x for fuel in litres, y for distance to home in kilometres
        cin >> x >> y; // Read the values of x and y from input
        
        if (y <= x * 5) { // Check if the distance to home is less than or equal to the maximum distance Chef can travel with the available fuel
            cout << "yes\n"; // Output "yes" if Chef can reach home
        } else { // If the distance to home is greater than the maximum distance Chef can travel
            cout << "no\n"; // Output "no" if Chef cannot reach home
        }
    }
    
    return 0; // Return 0 to indicate successful execution
}