#include <bits/stdc++.h>
#include <map>

using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n, m;
    cin >> n >> m;
    ll ans = 0;
    ll last = 0;
    for (int i = 0; i < m; i++) {
        ll x;
        cin >> x;
        if (i == 0) {
            ans = x - 1;
        } else if (last > x) {
            ans += (n - last) + x;
        } else if (last < x) {
            ans += x - last;
        }
        last = x;
    }
    cout << ans;
    return 0;
}
