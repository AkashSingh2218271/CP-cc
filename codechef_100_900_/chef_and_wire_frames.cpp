#include <bits/stdc++.h>
using namespace std;

/*
Problem: Chef and Wire Frames
- Chef has a rectangular plate of length N cm and width M cm
- Needs to make a wireframe around the plate
- Cost of wireframe is X rupees per cm
- We need to calculate total cost
- Formula: Total cost = Perimeter * Cost per cm
- Perimeter = 2 * (Length + Width)
*/

int main() {
    // Read number of test cases
    int t;
    cin >> t;
    
    // Process each test case
    while (t--) {
        // Read dimensions and cost per cm
        int n, m, x;  // n = length, m = width, x = cost per cm
        cin >> n >> m >> x;
        
        // Calculate total cost:
        // 2 * (n + m) = perimeter of rectangle
        // Multiply by x to get total cost
        int cost = 2 * (n + m) * x;
        cout << cost << endl;
    }
    
    return 0;
}
