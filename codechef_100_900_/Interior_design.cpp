// Include all standard C++ libraries for input/output and other utilities
#include <bits/stdc++.h>
// Use the standard namespace to avoid prefixing std:: before standard library functions
using namespace std;

// Main function to solve Chef's interior design cost problem
int main() {
    // Declare variable t to store the number of test cases (different design scenarios)
    int t;
    // Read the number of test cases from input
    cin >> t;
    
    // Process each test case (different design scenario)
    while (t--) {
        // Declare variables:
        // x1: cost of tiling floor in first style (in rupees)
        // y1: cost of painting walls in first style (in rupees)
        // x2: cost of tiling floor in second style (in rupees)
        // y2: cost of painting walls in second style (in rupees)
        int x1, y1, x2, y2;
        // Read the costs for both interior design styles
        cin >> x1 >> y1 >> x2 >> y2;
        
        // Calculate the minimum total cost between the two styles:
        // First style total = floor tiling (x1) + wall painting (y1)
        // Second style total = floor tiling (x2) + wall painting (y2)
        int ans = min(x1 + y1, x2 + y2);
        // Output the minimum amount Chef will need to pay for the interior design
        cout << ans << endl;
    }
    
    // Return 0 to indicate successful program execution
    return 0;
}
