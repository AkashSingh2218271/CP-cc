// Include all standard C++ libraries for input/output and other utilities
#include <bits/stdc++.h>
// Use the standard namespace to avoid prefixing std:: before standard library functions
using namespace std;

// Main function - entry point of the program
int main() {
	// Declare variable t to store the number of test cases
	int t;
	// Read the number of test cases from standard input
	cin >> t;

	// Loop that runs t times, handling each test case
	while (t--) {
		// Declare variables a, b, c to store three numbers
		int a, b, c;
		// Read three numbers from input
		cin >> a >> b >> c;

		// Check if sum of first two numbers equals the third
		if (a + b == c) {
			// Output "yes" if sum equation is satisfied
			cout << "yes" << endl;
		} else {
			// Output "no" if sum equation is not satisfied
			cout << "no" << endl;
		}
	}

	// Return 0 to indicate successful program execution
	return 0;
}