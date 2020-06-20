#include <bits/stdc++.h>

using namespace std;
using ld = long double;
using ll = unsigned long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t, n, m, x, y;
    char c;
    cin >> t;
    while (t--) {
        cin >> n >> m >> x >> y;
        y = min(y, x * 2);
        int ans = 0;
        while (n--) {
            string s;
            cin >> s;
            for (int j = 0; j < m; j++) {
                if (s[j] == '.') {
                    if (j + 1 < m && s[j + 1] == '.') {
                        s[j + 1] = '*';
                        ans += y;
                    } else {
                        ans += x;
                    }
                }
            }
        }
        cout << ans << "\n";
    }

    return 0;
}