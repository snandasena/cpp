#include <bits/stdc++.h>
#include <map>

using namespace std;
typedef long long ll;

ll arr[1000];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, l;
    cin >> n >> l;
    ll i = 0;

    ll mx = 0;
    while (i != n) {
        ll x;
        cin >> x;
        arr[i] = x;
        i++;
    }
    sort(arr, arr + n);
    for (i = 0; i < n; i++) {
        if (i >= 1) {
            mx = max(abs(arr[i] - arr[i - 1]), mx);
        }
    }

    ll x = 0;
    if (arr[0] != 0) x = arr[0];

    ll y = 0;
    if (arr[n - 1] != l) y = l - arr[n - 1];

    ll mxy = max(x, y);

    double ans = max(mxy * 1.0, mx / 2.0);
    printf("%.9lf", ans);

    return 0;
}
