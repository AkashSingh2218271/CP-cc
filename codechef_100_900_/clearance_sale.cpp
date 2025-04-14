#include <bits/stdc++.h>
using namespace std;

/*
Problem: Clearance Sale
- Store has a special offer: buy 2 t-shirts, get 1 free
- Chef bought X t-shirts (X is even)
- Need to calculate total t-shirts received including free ones
- Formula: Total = Paid t-shirts + Free t-shirts
- Free t-shirts = Paid t-shirts / 2
*/

int main() {
	// Read number of t-shirts Chef paid for
	int x;
	cin >> x;
	
	// Calculate and print total t-shirts:
	// x = paid t-shirts
	// x/2 = free t-shirts (since for every 2 bought, get 1 free)
	// Total = paid + free = x + x/2
	cout << x + x / 2 << endl;
	
	return 0;
}
