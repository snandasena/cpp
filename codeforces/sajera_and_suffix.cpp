#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

int dp[100010];
int S[100010];
bool used[100010];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        cin >> S[i];
    }

    for (int i = n; i >= 1; i--) {
        if (used[S[i]]) {
            dp[i] = dp[i + 1];
        } else {
            used[S[i]] = true;
            dp[i] = dp[i + 1] + 1;
        }
    }

    int l;
    for (int i = 1; i <= m; i++) {
        cin >> l;
        cout << dp[l] << "\n";
    }
    return 0;
}
