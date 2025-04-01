// Include all standard C++ libraries for input/output and other utilities
#include <bits/stdc++.h>
// Use the standard namespace to avoid prefixing std:: before standard library functions
using namespace std;

// Main function - entry point of the program
int main() {
	// Declare variables: l (length), h (height), b (breadth), s (side of cube)
	int l, h, b, s;
	// Read dimensions of cuboid (l,h,b) and cube (s) from input
	cin >> l >> h >> b >> s;

	// Calculate volume of cube (s³)
	int cube_volume = s * s * s;
	// Calculate volume of cuboid (l × b × h)
	int cuboid_volume = l * b * h;
	// Compare volumes to determine which is larger
	if (cube_volume == cuboid_volume) {
		// Output "equal" if volumes are the same
		cout << "equal\n";
	} else if (cube_volume > cuboid_volume) {
		// Output "cube" if cube's volume is larger
		cout << "cube\n";
	} else {
		// Output "cuboid" if cuboid's volume is larger
		cout << "cuboid\n";
	}
	// Return 0 to indicate successful program execution
	return 0;
}
