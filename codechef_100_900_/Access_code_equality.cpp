#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    string code = "WECNITK";    
    if (code == s) {
        cout << "Welcome to Web Club!\n";
    } else {
        cout << "Access denied\n";
    }
    
    return 0;
}
