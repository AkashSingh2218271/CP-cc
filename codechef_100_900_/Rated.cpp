// Include all standard C++ libraries for input/output and other utilities
#include <bits/stdc++.h>
// Use the standard namespace to avoid prefixing std:: before standard library functions
using namespace std;

// Main function - entry point of the program
int main() {
	// Declare variables x and y to store the two ratings
	int x, y;
	// Read the two ratings from input
	cin >> x >> y;

	// Calculate sum of ratings
	int ans = x + y;
	// Check if combined rating meets the threshold (2000)
	if (ans >= 2000) {
		// Output "yes" if rating threshold is met
		cout << "yes\n";
	} else {
		// Output "no" if rating threshold is not met
		cout << "no\n";
	}
	
	// Return 0 to indicate successful program execution
	return 0;
}
