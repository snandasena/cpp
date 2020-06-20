#include <bits/stdc++.h>

using namespace std;
using ld = long double;
using ll = long long;

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
        int res = 0;
        for (int i = 0; i < n;) {
            int j = i + 1;
            for (; j < n & s[j] != '1'; j++);

            int left = s[i] == '1' ? k : 0;
            int right = j < n && s[j] == '1' ? k : 0;

            int len = j - i;
            if (left == k) len--;

            len -= left + right;
            if (len > 0) res += (len + k) / (k + 1);

            i = j;
        }

        cout << res << "\n";
    }

    return 0;
}