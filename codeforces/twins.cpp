#include <bits/stdc++.h>

using namespace std;
typedef long long ll;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n;
    cin >> n;
    vector<ll> coins;
    while (n--) {
        ll c;
        cin >> c;
        coins.push_back(c);
    }

    sort(coins.begin(), coins.end());

    ll l = 0;
    ll s = 0;
    ll i = 0;
    ll j = 0;
    while (i + j != coins.size()) {
        if (l == 0) {
            l += coins[coins.size() - 1 - i];
            i++;
        } else if (s + coins[j] >= l) {
            l += coins[coins.size() - 1 - i];
            i++;

        } else {
            s += coins[j];
            j++;
        }
    }

    cout << i;
    return 0;
}
