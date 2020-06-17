#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll pre = 12;
    ll ans = 0;
    ll n;
    cin >> n;
    while (n--) {
        ll x;
        cin >> x;
        if (pre == 12) {
            pre = x;
            ans++;
        } else if (pre != x) {
            pre = x;
            ans++;
        }
    }

    cout << ans;

    return 0;

}
