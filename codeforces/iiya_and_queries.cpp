#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

int dp[100010];
char S[100010];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int m;
    cin >> S + 1 >> m;
    size_t n = strlen(S + 1);

    for (int i = 1; i <= n; i++) {
        dp[i] = dp[i - 1];
        if (S[i] == S[i - 1]) {
            dp[i]++;
        }
    }

    int l, r;

    while (m--) {
        cin >> l >> r;
        int ans = dp[r] - dp[l - 1];
        if (S[l] == S[l - 1]) ans--;
        cout << ans << "\n";
    }
    return 0;
}
