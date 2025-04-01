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
		// Declare variables: x (initial population), y (people who left), z (people who joined)
		int x, y, z;
		// Read initial population, people who left, and people who joined from input
		cin >> x >> y >> z;
		
		// Subtract people who left from initial population
		x -= y;
		// Add people who joined to the current population
		x += z;
		
		// Output the final population
		cout << x << endl;
	}
	
	// Return 0 to indicate successful program execution
	return 0;
}
