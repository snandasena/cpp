#include <bits/stdc++.h>

using namespace std;
typedef long long ll;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    while (n--) {
        ll a, b;
        cin >> a >> b;
        ll ans = 0;
        if (a % b == 0) {
            cout << ans;
        } else if (a > b) {
            ll r = a % b;
            cout << (b - r);
        } else {
            cout << (b - a);
        }

        cout << "\n";
    }

    return 0;
}