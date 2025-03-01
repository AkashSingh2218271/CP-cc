#include <bits/stdc++.h>
using namespace std;

int main() {
	int l, h, b, s;
    cin >> l >> h >> b >> s;

    int cube_volume = s * s * s;
    int cuboid_volume = l * b * h;
    if (cube_volume == cuboid_volume) {
        cout << "equal\n";
    } else if (cube_volume > cuboid_volume) {
        cout << "cube\n";
    } else {
        cout << "cuboid\n";
    }
    return 0;
}
