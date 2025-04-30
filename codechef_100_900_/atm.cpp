#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    float y;
    cin >> x >> y;
    
    float ans = (x % 5 == 0 && x + 0.50 <= y) ? y - x - 0.50 : y;
    
    cout << fixed << setprecision(2) << ans << endl;
    
    return 0;
}
