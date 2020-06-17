#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin >> n;
    vector<ll> nums;
    while (n--) {
        ll x;
        cin >> x;
        nums.push_back(x);
    }

    sort(nums.begin(), nums.end());
    for (ll i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }

    return 0;
}
