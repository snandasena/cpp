#include <bits/stdc++.h>

using namespace std;
using ld = long double;
using ll = unsigned long long;

#define end "\n"

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t, n, x;
    cin >> t;
    while (t--) {
        vector<int> even, odd;
        cin >> n;
        for (int i = 1; i <= 2 * n; i++) {
            cin >> x;
            if (x % 2 == 0) even.push_back(i);
            else odd.push_back(i);
        }

        vector<pair<int, int >> ans;
        for (int i = 0; i + 1 < odd.size(); i += 2)
            ans.emplace_back(odd[i], odd[i + 1]);

        for (int i = 0; i + 1 < even.size(); i += 2)
            ans.emplace_back(even[i], even[i + 1]);

        for (int i = 0; i < n - 1; i++)
            cout << ans[i].first << " " << ans[i].second << end;

    }

    return 0;
}
