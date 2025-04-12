#include <bits/stdc++.h>
using namespace std;

/*
Problem: Spice Level
- Each menu item has a spice level from 1 to 10
- Categories based on spice level:
  - MILD: spice level < 4
  - MEDIUM: 4 ≤ spice level < 7
  - HOT: spice level ≥ 7
- Given spice level X, determine its category
*/

int main() {
	// Read number of test cases
	int t;
	cin >> t;
	
	// Process each test case
	while (t--) {
		// Read spice level of the item
		int x;
		cin >> x;
		
		// Determine and print category based on spice level
		if (x < 4) {
			// Spice level less than 4 is MILD
			cout << "mild\n";
		} else if (x >= 4 && x < 7) {
			// Spice level between 4 and 6 is MEDIUM
			cout << "medium\n";
		} else {
			// Spice level 7 or above is HOT
			cout << "hot\n";
		}
	}
	
	return 0;
}
