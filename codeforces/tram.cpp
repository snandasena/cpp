#include <bits/stdc++.h>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, a, b;
    cin >> n;
    int max = 0;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        if (i == 0) {
            max = b - a;
            ans = max;
        } else {
            max = b + (max - a);
            if (max > ans) {
                ans = max;
            }
        }
    }

    cout << ans;

    return 0;
}