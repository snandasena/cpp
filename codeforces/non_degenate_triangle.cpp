#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll ans = 0;

    for (ll i = max(a + b, c + 1); i <= b + c; i++) {
        ans += (min(b, i - b) - max(a, i - c) + 1) * (min(d, i - 1) - c + 1);
    }
    cout << ans;

    return 0;

}