// Include all standard C++ libraries for input/output and other utilities
#include <bits/stdc++.h>
// Use the standard namespace to avoid prefixing std:: before standard library functions
using namespace std;

// Main function - entry point of the program
int main() {
    // Declare variable N to store the number of visited neighborhoods
    int N;
    // Read the number of visited neighborhoods from input
    cin >> N;
    
    // Define constant for total number of neighborhoods in the city
    const int total_neighborhoods = 100;
    // Calculate remaining unvisited neighborhoods
    int remaining = total_neighborhoods - N;
    // Output the number of remaining neighborhoods
    cout << remaining << endl;
    
    // Return 0 to indicate successful program execution
    return 0;
}
