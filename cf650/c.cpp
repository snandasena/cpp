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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int ans = 0;
        int zc = 0;
        int oc = 0;
        for (char i : s) {
            if (i == '0') {
                zc++;
            } else {
                oc++;
            }
        }

        if (zc == n) {
            if (zc == k) {
                ans = 1;
            } else {
                if (n % k != 0) {
                    ans = n / k;
                } else {
                    ans = (n / k) - 1;
                }
            }

        } else {
            int c = 0;
            char pre = 'x';
            for (int i = 0; i < n; i++) {
                if (s[i] == '0') {
                    if (pre == 'x') {
                        pre = '0';
                        c++;
                    } else if (c < k) {
                        pre = '0';
                        c++;
                    } else if (c == k) {
                        pre = '0';
                        ans++;
                        c = 0;
                    }
                } else {
                    pre = 'x';
                    c = 0;
                }
            }
        }
        cout << ans << "\n";
    }

    return 0;
}