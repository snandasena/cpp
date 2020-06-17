#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n, m;
    cin >> n >> m;
    vector<ll> nums;
    while (m--) {
        ll x;
        cin >> x;
        nums.push_back(x);
    }

    sort(nums.begin(), nums.end());

    ll ans = INFINITY;
    for (ll i = 0; i <= nums.size() - n; i++) {
        ans = min(ans, (nums[i + n - 1] - nums[i]));
    }

    cout << ans;
    return 0;

}
