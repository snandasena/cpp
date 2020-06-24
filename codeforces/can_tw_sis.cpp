#include <bits/stdc++.h>

using namespace std;
using ld = long double;
using ll = unsigned long long;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        ll x;
        cin >> x;
        if (x % 2 != 0) {
            cout << x / 2;
        } else {
            cout << x / 2 - 1;
        }
        cout << "\n";
    }

    return 0;
}