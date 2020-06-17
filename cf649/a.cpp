#include <bits/stdc++.h>

using namespace std;
typedef long long ll;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    while (n--) {
        int a, k;
        cin >> a >> k;
        int ans = 0;
        int mx = 0;
        int temp = 0;
        bool ans_exits = false;
        while (a--) {
            int x;
            cin >> x;
            temp += x;
            ans++;
            if (temp % k != 0 && temp / k > 1) {
                mx = max(ans, mx);
                temp = 0;
                ans = 0;
                ans_exits = true;
            } else if (temp % k == 0) {
                temp = x;
                ans--;
                mx = max(ans, mx);
                ans = 1;
                ans_exits = true;
            }
        }

        cout << ans_exits << " " << ans;

        cout << "\n";
    }

    return 0;
}