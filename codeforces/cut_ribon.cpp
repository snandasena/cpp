#include <bits/stdc++.h>

using namespace std;
using ld = long double;
using ll = unsigned long long;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, a, b, c;
    cin >> n >> a >> b >> c;
    int dp[n + 1];
    dp[0] = 0;
    for (int i = 1; i <= n; i++) {
        int maxi = -INFINITY;
        if (i - a >= 0) maxi = max(maxi, dp[i - a] + 1);
        if (i - b >= 0) maxi = max(maxi, dp[i - b] + 1);
        if (i - c >= 0) maxi = max(maxi, dp[i - c] + 1);
        dp[i] = maxi;
    }
    cout << dp[n];
    return 0;
}
