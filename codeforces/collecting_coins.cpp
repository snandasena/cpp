#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    ll a, b, c, n;
    cin >> t;
    while (t--) {
        cin >> a >> b >> c >> n;
        ll mx = max(max(a, b), c);
        if ((a + b + c + n) % 3 == 0 && ((a + b + c + n) / 3) >= mx) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }


    return 0;
}
