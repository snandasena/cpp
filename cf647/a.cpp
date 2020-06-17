#include <bits/stdc++.h>

using namespace std;
typedef long long ll;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    while (n--) {
        ll s1, s2;
        cin >> s1 >> s2;
        ll y = max(s1, s2);
        ll x = min(s1, s2);
        double a = (y * 1.0) / x;

        ll r = 1;
        int i = 0;
        ll ans = 0;
        while (a != r) {
            r <<= 1;
            i++;
            if (r > a) {
                ans = -1;
                break;
            }
        }
        if (ans == -1) {
            cout << -1 << "\n";
        } else if (i % 3 == 0) {
            ans = i / 3;
            cout << ans << "\n";
        } else {
            ans = (i / 3) + 1;
            cout << ans << "\n";
        }

    }

    return 0;
}

