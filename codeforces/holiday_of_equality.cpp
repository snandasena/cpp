#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);
    int mx = 0;
    for (int &i : v) {
        cin >> i;
        mx = max(i, mx);
    }
    int ans = 0;
    for (int i : v) {
        ans += mx - i;
    }
    cout << ans;
    return 0;
}
