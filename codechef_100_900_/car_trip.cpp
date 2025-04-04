/*
Problem: Car Trip
Chef rented a car for a day.
- Cost of the car is Rs 10 per km
- Minimum charge is for 300 kms even if car runs less than 300 kms
- If car ran X kms, determine the cost Chef needs to pay

Input:
- t: Number of test cases
- x: Distance travelled in kms

Output:
- Total cost to be paid (Rs 10 per km, minimum 3000 Rs)
*/

#include <bits/stdc++.h>  // Includes all standard C++ libraries
using namespace std;

int main() {
	int t;  // Number of test cases
	cin >> t;
	
	while (t--) {  // Loop for each test case
	    int x;  // Distance travelled in kilometers
	    cin >> x;
	    
	    if (x > 300) {
	        // If distance > 300 km, charge for actual distance
	        cout << x * 10 << endl;
	    } else {
	        // If distance <= 300 km, charge for minimum 300 km
	        cout << 300 * 10 << endl;
	    }
	}
	
	return 0;
}
