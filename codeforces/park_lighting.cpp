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
        int n, m;
        cin >> n >> m;
        int ans = n * m;
        if (ans % 2 == 0) cout << ans / 2 << "\n";
        else cout << ans / 2 + 1 << "\n";
    }

    return 0;
}
