#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

int russian(int a, int b) {
    int x = a;
    int y = b;
    int z = 0;
    while (x > 0) {
        if (x % 2 == 1) z += y;
        y <<= 1;
        x >>= 1;
    }

    return z;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cout << russian(24, 8) << " "<< 24 * 8;

//    for (int i = 1; i < 10; i++) cout << (i << 1) << "\n";

    return 0;
}
