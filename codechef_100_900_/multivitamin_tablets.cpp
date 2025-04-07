/*
Problem: Multivitamin Tablets
The doctor prescribed Chef to take a multivitamin tablet 3 times a day for the next X days.
Chef already has Y multivitamin tablets.

Determine if Chef has enough tablets for these X days or not.

Input:
- t: Number of test cases
- For each test case:
  - x: Number of days
  - y: Number of tablets Chef already has

Output:
- For each test case, print "yes" if Chef has enough tablets, "no" otherwise
*/

#include <bits/stdc++.h>  // Includes all standard C++ libraries
using namespace std;

int main() {
	int t;  // Number of test cases
	cin >> t;
	
	while (t--) {  // Loop for each test case
	    int x, y;  // x: number of days, y: number of tablets
	    cin >> x >> y;
	    
	    // Calculate total tablets needed (3 tablets per day)
	    x *= 3;
	    
	    // Check if Chef has enough tablets
	    if (x > y) {
	        cout << "no\n";  // Not enough tablets
	    } else {
	        cout << "yes\n"; // Enough tablets
	    }
	}
	
    return 0;
}
