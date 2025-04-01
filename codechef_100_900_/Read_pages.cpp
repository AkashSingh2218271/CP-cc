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
		// Declare variables: n (total pages), x (pages per day), y (days)
		int n, x, y;
		// Read total pages, pages per day, and number of days from input
		cin >> n >> x >> y;
		
		// Check if total reading capacity (pages per day * days) is sufficient
		if (x * y >= n) {
			// Output "yes" if can read all pages in given time
			cout << "yes\n";
		} else {
			// Output "no" if cannot read all pages in given time
			cout << "no\n";
		}
	}
	
	// Return 0 to indicate successful program execution
	return 0;
}
