/*
Problem: Run for Fun
Chef is participating in a race of Y kilometers.
- Chef needs to take a rest after every X kilometers
- Determine how many times Chef will stop to rest before reaching the finish line

Input:
- X: Distance after which Chef needs to rest
- Y: Total race distance

Output:
- Number of rest stops before reaching the finish line
*/

#include <bits/stdc++.h>  // Includes all standard C++ libraries
using namespace std;

int main() {
    // Read input values
    int x, y;  // x: rest interval, y: total distance
    cin >> x >> y;
    
    // Decrease total distance by 1 to exclude the finish line
    y--;
    
    // Calculate number of rest stops by integer division
    cout << y / x << endl;
    
    return 0;
}