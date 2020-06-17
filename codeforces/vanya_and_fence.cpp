#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, h, a;
    cin >> n >> h;

    int ans = 0;
    while (n != 0) {
        cin >> a;
        if (a > h) {
            ans += 2;
        } else {
            ans++;
        }

        n--;
    }

    cout << ans;

    return 0;

}