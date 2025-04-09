#include <bits/stdc++.h>
using namespace std;

/*
Problem: Worth of a Video
- A video has 24 frames per second
- Each frame is worth 1000 words
- Given duration S seconds, calculate total words
- Formula: Total words = S * 24 * 1000
*/

int main() {
	// Read number of test cases
	int t;
	cin >> t;
	
	// Process each test case
	while (t--) {
		// Read duration of video in seconds
		int s;
		cin >> s;
		
		// Calculate and print total words:
		// s * 24 (frames per second) * 1000 (words per frame)
		cout << s * 24 * 1000 << endl;
	}
	
	return 0;
}
