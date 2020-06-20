#include <bits/stdc++.h>

using namespace std;
using ld = long double;
using ll = long long;

#define  fastio()  ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

void solve() {
    int n;
    cin >> n;
    int e = 0, o = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x % 2 != i % 2) {
            if (i % 2 == 0) {
                e++;
            } else {
                o++;
            }
        }
    }

    if (e != o) cout << -1 << "\n";
    else cout << e << "\n";
}

int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}