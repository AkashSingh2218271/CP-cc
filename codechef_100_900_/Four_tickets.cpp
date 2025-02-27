#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int p;
        cin >> p;
        
        if ((4 * p) <= 1000) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }

    return 0;
}