#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        unsigned int n;
        int x;
        cin >> n;
        vector<int> v(n + 1);
        for (int i = 0; i < n; i++) {
            cin >> x;
            v[x]++;
        }
        int mx = *max_element(v.begin(), v.end());
        int diff = static_cast<int>(n + 1 - count(v.begin(), v.end(), 0));
        cout << max(min(mx - 1, diff), min(mx, diff - 1)) << "\n";

    }

    return 0;
}
