#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ld = long double;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t, a, b;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        int side = min(max(2 * a, b), max(2 * b, a));
        cout << side * side << "\n";
    }

    cout << "\n";
    return 0;
}
