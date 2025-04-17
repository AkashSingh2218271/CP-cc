#include <bits/stdc++.h> // Includes all standard C++ libraries
using namespace std;     // Use the standard namespace

int main() {
    int t;
    cin >> t; // Read the number of test cases

    while (t--) { // Loop through each test case
        int n, k;
        cin >> n >> k; // Read total number of questions (n) and Alice's score (k)

        // Since Bob marks the opposite of Alice for each question:
        // He gets a question right only when Alice gets it wrong.
        // So Bob's score is the number of questions Alice got wrong: (n - k)
        cout << n - k << endl; // Output Bob's score
    }

    return 0; // Indicate successful program termination
}
