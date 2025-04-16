#include <bits/stdc++.h> // Include standard libraries for input/output and other utilities
using namespace std; // Use the standard namespace

int main() { // Main function where execution starts
    int t; // Declare an integer variable to store the number of test cases
    cin >> t; // Read the number of test cases from input
    
    while (t--) { // Loop through each test case
        int x; // Declare an integer variable to store the number of donations
        cin >> x; // Read the number of donations from input
        
        if (x <= 33) { // Check if the number of donations is less than or equal to 33
            cout << "bronze\n"; // Output "bronze" if the condition is true
        } else if (x > 33 && x <= 66) { // Check if the number of donations is more than 33 but less than or equal to 66
            cout << "silver\n"; // Output "silver" if the condition is true
        } else { // If the number of donations is greater than 66
            cout << "gold\n"; // Output "gold"
        }
        
    }
    
    return 0; // Return 0 to indicate successful execution
}