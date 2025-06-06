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
	while (t--)
	{
		// Declare variable x to store the number of hours spent watching
		int x;
		// Read the number of hours from input
		cin >> x;
		// Check if watching time exceeds 24 hours
		if (x > 24) {
			// Output "yes" if watching time is unhealthy
			cout << "yes\n";
		} else {
			// Output "no" if watching time is within limits
			cout << "no\n";
		}
	}
	
	// Return 0 to indicate successful program execution
	return 0;
}
