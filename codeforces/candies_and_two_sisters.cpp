#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int ans[4] = {6, 8, 4, 2};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll n;
    cin >> n;
    if (n == 0) {
        cout << 1;
    } else {
        cout << ans[n % 4];
    }
    return 0;
}