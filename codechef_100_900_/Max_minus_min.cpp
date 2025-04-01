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
		
		// Find maximum value among the three numbers
		int maxV = max(max(a, b), c);
		// Find minimum value among the three numbers
		int minV = min(min(a, b), c);
		// Calculate and output the difference between max and min
		cout << maxV - minV << endl;
	}
	
	// Return 0 to indicate successful program execution
	return 0;
}
