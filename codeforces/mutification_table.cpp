#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, x;
    cin >> n >> x;

    int ans = 0;
    for (int i = 1; i <= n; i++) {
        if (x % i == 0) {
            if (x / i <= n) ans++;
        }
    }
    cout << ans;
    return 0;
}
