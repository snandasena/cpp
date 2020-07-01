#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t;
    cin >> t;
    vector<ll> v(t);

    for (ll &i: v) cin >> i;
    sort(v.begin(), v.end());
    ll n;
    cin >> n;
    while (n--) {
        ll x;
        cin >> x;
        cout << upper_bound(v.begin(), v.end(), x) - v.begin() << "\n";
    }

    return 0;
}
