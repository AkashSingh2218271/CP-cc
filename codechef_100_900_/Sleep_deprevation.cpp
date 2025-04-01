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
		// Declare variable hrs to store the hours of sleep
		int hrs;
		// Read the hours of sleep from input
		cin >> hrs;
		
		// Check if sleep hours are less than recommended (7 hours)
		if (hrs < 7) {
			// Output "yes" if sleep deprived
			cout << "yes" << endl;
		} else {
			// Output "no" if not sleep deprived
			cout << "no" << endl;
		}
	}
	
	// Return 0 to indicate successful program execution
	return 0;
}
