#include <bits/stdc++.h>

using namespace std;
using ld = long double;
using ll = unsigned long long;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        if (a == b) cout << 0 << "\n";
        else if ((a > b) && (a - b) % 2 == 0) cout << 1 << "\n";
        else if ((a < b) && (b - a) % 2 == 1) cout << 1 << "\n";
        else cout << 2 << "\n";
    }

    return 0;
}
