#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll arr[n];
        ll pre;
        bool bt = false;
        cin >> pre;
        arr[0] = pre;
        for (int i = 1; i < n; i++) {
            ll x;
            cin >> x;
            if (pre < x) {
                pre = x;
            } else {
                bt = true;
            }

            arr[i] = x;
        }
        if (!bt) {
            cout << 0;
        } else {
            cout << 2;
        }
        cout << "\n";
    }
    return 0;
}