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
		// Declare variables: x (RTP courses), y (Audit courses), z (Non-RTP courses)
		int x, y, z;
		// Read number of courses from input
		cin >> x >> y >> z;

		// Calculate credits for RTP courses (4 credits each)
		x *= 4;
		// Calculate credits for Audit courses (2 credits each)
		y *= 2;
		// Output total credits (RTP + Audit courses)
		cout << x + y << endl;
	}
	// Return 0 to indicate successful program execution
	return 0;
}
