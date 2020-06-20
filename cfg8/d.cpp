#include <bits/stdc++.h>

using namespace std;
using ld = long double;
using ll = long long;

const ll N = 1048576;
ll arr[N];
ll vals[N];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    for (ll i = 0; i < t; i++) {
        cin >> arr[i];
    }
    if (t == 1) cout << arr[0] * arr[0];
    else {
        ll id = 0;
        for (ll i = 0; i < t; i++) {
            ll x = arr[i];
            for (ll j = 0; j < t; j++) {
                if (i != j) {
                    ll y = arr[j];

                    ll s = arr[i] & arr[j];
                    ll l = arr[i] | arr[j];
                    vals[id] = max(s, l);
                    id++;
                }
            }
        }

        ll sum = 0;
        for (ll i = 0; i < id; i++) {
            sum += vals[i] * vals[i];
        }
        cout << sum;
    }
    return 0;
}