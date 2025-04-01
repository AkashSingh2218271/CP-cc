// Include all standard C++ libraries for input/output and other utilities
#include <bits/stdc++.h>
// Use the standard namespace to avoid prefixing std:: before standard library functions
using namespace std;

// Main function - entry point of the program
int main() {
	// Declare variable t to store the number of test cases
	int t;
	// Read the number of test cases from input
	cin >> t;
	
	// Loop that runs t times, handling each test case
	while (t--) {
		// Declare variables: x (units per chapter), y (chapters per subject), z (subjects)
		int x, y, z;
		// Read units per chapter, chapters per subject, and number of subjects from input
		cin >> x >> y >> z;
		
		// Calculate total units across all chapters
		int units = x * y;
		// Calculate total chapters across all subjects
		int chapters = units * z;
		// Output the total number of chapters
		cout << chapters << endl;
	}
	
	// Return 0 to indicate successful program execution
	return 0;
}
