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
		// Declare variables: n (number of friends), x (cost per person), k (total money)
		int n, x, k;
		// Read the number of friends, cost per person, and total money from input
		cin >> n >> x >> k;
		
		// Calculate total cost for the party
		int total = n * x;
		
		// Check if Chef has enough money for the party
		if (total <= k) {
			// Output "yes" if Chef can afford the party
			cout << "yes\n";
		} else {
			// Output "no" if Chef cannot afford the party
			cout << "no\n";
		}
	}
	
	// Return 0 to indicate successful program execution
	return 0;
}
