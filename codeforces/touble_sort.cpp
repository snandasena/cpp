#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int last = -1;
        int c = 1;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (last == -1) last = x;
            else if (last <= x) {
                c++;
            }
        }


        last = -1;
        int bc = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (last != x)bc++;
            last = x;
        }

        if (c == n) {
            cout << "Yes\n";
            continue;
        }

        if (bc == 1) cout << "No\n";
        else cout << "Yes\n";

    }

    return 0;
}