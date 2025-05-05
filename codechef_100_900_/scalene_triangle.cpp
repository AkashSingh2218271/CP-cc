#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        
        if (a == b || b == c || a == c) {
            cout << "no\n";
        } else {
            cout << "yes\n";
        }
    }
	
    return 0;
}
