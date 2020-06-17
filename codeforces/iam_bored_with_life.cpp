#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll a, b;
    cin >> a >> b;
    ll mn = min(a, b);
    ll dp[mn];
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;

    for (ll i = 3; i <= mn; i++) {
        dp[i] = dp[i - 1] * i;
    }

    cout << dp[mn];

    return 0;
}
