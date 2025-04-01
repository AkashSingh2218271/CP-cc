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
		// Declare variables a and b to store the scores of both players
		int a, b;
		// Read the scores of both players from standard input
		cin >> a >> b;
		
		// Calculate minimum points needed to win:
		// 7 is the winning score, subtract the maximum of current scores
		int min_points = 7 - max(a, b);
		// Output the minimum points needed and add a newline
		cout << min_points << endl;
	}
	
	// Return 0 to indicate successful program execution
	return 0;
}
