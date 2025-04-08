#include <bits/stdc++.h>
using namespace std;

/*
Problem: Email Reminders
- N = Total number of participants on Chef's platform
- U = Number of participants who opted out of email reminders
- We need to find how many participants should receive contest emails
- Solution: Simply subtract U from N to get the number of participants who should receive emails
*/

int main() {
    int n, u;  // n = total participants, u = opted out participants
    cin >> n >> u;
    
    // Calculate and print number of participants who should receive emails
    cout << n - u << endl;
    
    return 0;
}
