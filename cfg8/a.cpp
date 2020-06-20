#include <bits/stdc++.h>

using namespace std;
using ld = long double;
using ll = long long;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int64_t a, b, n;
        cin >> a >> b >> n;
        int ans = 0;
        while (max(a, b) <= n) {
            if (a > b) swap(a, b);

            a += b;
            ans++;
        }

        cout << ans << "\n";
    }

    return 0;
}