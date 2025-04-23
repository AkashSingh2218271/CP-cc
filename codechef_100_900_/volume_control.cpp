#include <iostream> // Include the input/output stream library
using namespace std; // Use the standard namespace

int main()
{
    int t; // Declare variable to store the number of test cases
    cin >> t; // Read the number of test cases

    while (t--) // Loop over all test cases
    {
        int x, y; // Declare variables to store the current volume (x) and desired volume (y)
        cin >> x >> y; // Read values of x and y

        // Calculate and output the absolute difference between x and y,
        // which represents the minimum number of button presses needed
        cout << abs(x - y) << endl;
    }

    return 0; // End of the program
}
