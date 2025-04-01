// Include all standard C++ libraries for input/output and other utilities
#include <bits/stdc++.h>
// Use the standard namespace to avoid prefixing std:: before standard library functions
using namespace std;

// Main function - entry point of the program
int main() {
    // Declare variable x to store the participant's rank
    int x;
    // Read the participant's rank from input
    cin >> x;

    // Check rank ranges and determine medal type
    if (x < 3) {
        // Output "gold" for top 2 ranks
        cout << "gold\n";
    } else if (x >= 3 && x < 6) {
        // Output "silver" for ranks 3-5
        cout << "silver\n";
    } else {
        // Output "bronze" for ranks 6 and above
        cout << "bronze\n";
    }
    
    // Return 0 to indicate successful program execution
    return 0;
}