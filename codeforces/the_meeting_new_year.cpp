#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int x, y, z;
    cin >> x >> y >> z;
    cout << max(max(abs(x - y), abs(x - z)), abs(z - y));
    return 0;
}
