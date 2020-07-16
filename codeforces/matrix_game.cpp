#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int zc = 0;
        set<int> r, c;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int x;
                cin >> x;
                if (x == 1) r.insert(i), c.insert(j);
            }
        }

        int mn = (int) min(n - r.size(), m - c.size());
        if (mn % 2 == 0) cout << "Vivek\n";
        else cout << "Ashish\n";
    }

    return 0;
}