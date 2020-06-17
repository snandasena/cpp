#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n;
    cin >> n;
    ll ans = 0;

    ll oc = 0;
    ll tc = 0;
    ll cc = 0;
    vector<ll> nums;
    while (n--) {
        ll x;
        cin >> x;
        if (x == 4) {
            ans++;
        } else {
            nums.push_back(x);
        }
    }
    sort(nums.begin(), nums.end(), greater<>());

    for (ll x: nums) {
        if (x == 3) {
            cc++;
        } else if (x == 2) {
            tc++;
            if (tc == 2) {
                ans++;
                tc = 0;
            }
        } else {
            if (cc > 0) {
                cc--;
                ans++;
            } else {
                oc++;
                if (tc > 0 && oc == 2) {
                    tc--;
                    oc = 0;
                    ans++;
                } else if (oc == 4) {
                    ans++;
                    oc = 0;
                }

            }
        }
    }

    ans = ans + cc;
    if (tc != 0 || oc != 0) {
        ans++;
    }

    cout << ans;
    return 0;
}
