#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        ll a, b;
        cin >> a >> b;
        if (a == 0 || b == 0) {
            printf("%d\n", 0);
        } else {
            ll mn = min(a, b);
            ll ans = (a + b) / 3;
            printf("%lld\n", min(mn, ans));
        }
    }

    return 0;
}