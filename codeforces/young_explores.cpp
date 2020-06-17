#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<int> nums;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            nums.push_back(x);
        }

        sort(nums.begin(), nums.end());
        int ans = 0;
        int count = 0;

        for (auto i : nums) {
            count++;
            if (i == count) {
                ans++;
                count = 0;
            }
        }

        cout << ans << "\n";

    }

    return 0;

}