/*
Problem: Ticket Fine
On a certain train, Chef-the ticket collector, collects a fine of Rs. X if a passenger is travelling without a ticket. 
It is known that a passenger carries either a single ticket or no ticket.
P passengers are travelling and they have a total of Q tickets. 
Help Chef calculate the total fine collected.

Input:
- X: Fine amount for travelling without ticket
- P: Total number of passengers
- Q: Total number of tickets available

Output:
- Total fine collected
*/

#include <bits/stdc++.h>  // Includes all standard C++ libraries
using namespace std;

int main() {
	int t;  // Number of test cases
	cin >> t;
	
	while (t--) {  // Loop for each test case
	    int x, p, q;  // x: fine amount, p: total passengers, q: total tickets
	    cin >> x >> p >> q;
	    
	    // Calculate total fine
	    // (p - q) gives number of passengers without tickets
	    // Multiply by x to get total fine
	    int ans = x * (p - q);
	    cout << ans << endl;
	}
	
	return 0;
}
