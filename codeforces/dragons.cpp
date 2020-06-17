#include <bits/stdc++.h>
#include <map>

using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<pair<int, int>> vals;
    ll s, n;
    cin >> s >> n;
    for (ll i = 0; i < n; i++) {
        ll x, y;
        cin >> x >> y;
        vals.emplace_back(x, y);
    }

    sort(vals.begin(), vals.end());

    for (auto x: vals) {
        if (s > x.first) {
            s += x.second;
        } else {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}
