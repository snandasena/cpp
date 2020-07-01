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
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (auto &i: a) cin >> i;

        vector<int> b(n);
        for (auto &i : b) cin >> i;

        sort(a.begin(), a.end());
        sort(b.rbegin(), b.rend());

        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (i < k) ans += max(a[i], b[i]);
            else ans += a[i];
        }

        cout << ans << "\n";
    }

    return 0;
}
