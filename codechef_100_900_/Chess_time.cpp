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
		// Declare variable hrs to store the hours available
		int hrs;
		// Read the hours available from input
		cin >> hrs;
		
		// Convert hours to minutes
		hrs *= 60;
		// Calculate and output number of games possible (each game takes 20 minutes)
		cout << hrs / 20 << endl;
	}
	// Return 0 to indicate successful program execution
	return 0;
}
