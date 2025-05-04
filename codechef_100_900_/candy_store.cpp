#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        
        int sum = 0;
        if (y >= x) {
            int diff = y - x;
            cout << x + diff * 2 << endl;
        } else {
            cout << y << endl;
        }
    }
	
    return 0;
}
