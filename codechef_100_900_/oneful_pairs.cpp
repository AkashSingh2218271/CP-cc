/*
Problem: Oneful Pairs
Chef defines a pair of positive integers (a,b) to be a Oneful Pair if:
a + b + (a * b) = 111

Example:
- (1,55) is a Oneful Pair because 1 + 55 + (1 * 55) = 56 + 55 = 111
- (1,56) is not a Oneful Pair because 1 + 56 + (1 * 56) = 57 + 56 = 113 ≠ 111

Input:
- Two positive integers a and b

Output:
- "yes" if (a,b) is a Oneful Pair
- "no" otherwise
*/

#include <iostream>  // Standard input/output library
using namespace std;

int main() {
    int a, b;  // Two positive integers to check
    cin >> a >> b;  // Read input values
    
    // Calculate the Oneful Pair condition
    int res = a + b + a * b;
    
    // Check if the result equals 111
    if (res == 111) {
        cout << "yes\n";  // Print yes if it's a Oneful Pair
    } else {
        cout << "no\n";   // Print no if it's not a Oneful Pair
    }
    
    return 0;
}