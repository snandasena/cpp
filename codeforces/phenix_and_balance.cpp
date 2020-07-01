#include <bits/stdc++.h>

using namespace std;
using ld = long double;
using ll = unsigned long long;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t, k;
    cin >> k;

    while (k--) {
        cin >> t;
        int l = 0;
        int s = 0;
        for (int i = 1; i <= t; i++) {
            if (i == t) {
                l += (1 << i);
            } else if (i < t / 2) {
                l += (1 << i);
            } else {
                s += (1 << i);
            }
        }

        cout << l - s << "\n";

    }

    return 0;
}
