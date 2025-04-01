// Include all standard C++ libraries for input/output and other utilities
#include <bits/stdc++.h>
// Use the standard namespace to avoid prefixing std:: before standard library functions
using namespace std;

// Main function - entry point of the program
int main() {
    // Declare variable aqi to store the Air Quality Index value
    int aqi;
    // Read the AQI value from standard input
    cin >> aqi;
    
    // Check if AQI is below 100 (indicating good air quality)
    if (aqi < 100) {
        // Output "yes" if air quality is good
        cout << "yes\n";
    } else {
        // Output "no" if air quality is poor
        cout << "no\n";
    }
    
    // Return 0 to indicate successful program execution
    return 0;
}
