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
		// Declare variables: x (students), y (chairs available)
		int x, y;
		// Read number of students and available chairs from input
		cin >> x >> y;
		
		// Calculate additional chairs needed (students minus available chairs)
		int ans = x - y;
		// Check if more chairs are needed
		if (ans > 0) {
			// Output number of additional chairs needed
			cout << ans << endl;   
		} else {
			// Output 0 if no additional chairs needed
			cout << 0 << endl;
		}
	}

	// Return 0 to indicate successful program execution
	return 0;
}