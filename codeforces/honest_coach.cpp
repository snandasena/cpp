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
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &i : a) cin >> i;
        sort(a.begin(), a.end());

        int ans = INFINITY;
        for (int i = 0; i < n - 1; i++) {
            ans = min(ans, a[i + 1] - a[i]);
        }

        cout << ans << "\n";

    }

    return 0;
}
