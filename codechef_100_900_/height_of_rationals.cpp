#include <bits/stdc++.h>     // Includes all standard C++ libraries
using namespace std;         // Allows usage of standard namespace without prefixing `std::`

int main() {
    int a, b;                // Declare two integers a and b
    cin >> a >> b;           // Read the input values of a and b from the user

    // Output the Height of the rational number, which is defined as the maximum of a and b
    cout << max(a, b) << endl;

    return 0;                // Indicate successful termination of the program
}
