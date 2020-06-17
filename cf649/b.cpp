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
        while (a--) {
            int x;
            cin >> x;
            temp += x;
            if (temp < k) {
                ans++;
            } else if (temp == k) {
                mx = max(ans, mx);
                temp = x;
                ans = 1;
            } else {
                if (temp % k == 0) {
                    mx = max(ans, mx);
                    temp = x;
                    ans = 1;
                } else {
                    mx = max(ans, mx);
                    ans++;
                }
            }
        }


        ans = max(ans, mx);
        if (ans == 1) {
            cout << -1;
        } else {
            cout << ans;
        }
        cout << "\n";
    }

    return 0;
}