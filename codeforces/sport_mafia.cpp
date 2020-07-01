#include <bits/stdc++.h>

using namespace std;
using ld = long double;
using ll = unsigned long long;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll n, k;
    cin >> n >> k;
    for (ll i = 0; i < n; i++) {
        if ((i * (i + 1) / 2) - k == n - i) {
            cout << n - i;
            return 0;
        }
    }

    cout << 0;
    return 0;

}
