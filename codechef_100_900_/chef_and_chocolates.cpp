#include <bits/stdc++.h>  // Includes all standard libraries
using namespace std;

int main() {
    int t;
    cin >> t;  // Read the number of test cases

    while (t--) {  // Loop through each test case
        int x, y, z;
        cin >> x >> y >> z;  // Read the number of 5 rupee coins (x), 10 rupee coins (y), and cost of one chocolate (z)

        int sum = 0;  // Initialize total money Chef has

        sum += (x * 5) + (y * 10);  // Calculate total money by adding value of all coins

        cout << sum / z << endl;  // Print the maximum number of chocolates Chef can buy
    }

    return 0;  // Indicate successful program termination
}
