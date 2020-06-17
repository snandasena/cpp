#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin >> n;

    ll cnt = 0;
    ll last = 0;
    ll maxc = 0;
    while (n--) {
        ll x;
        cin >> x;
        if (last <= x) {
            last = x;
            cnt++;
        } else {
            maxc = max(cnt, maxc);
            last = x;
            cnt = 1;
        }
    }

    if (maxc <= cnt) {
        maxc = cnt;
    }
    cout << maxc;
    return 0;

}
