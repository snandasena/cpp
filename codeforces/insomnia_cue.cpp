#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll arr[100000];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

    for (ll i = k; i <= d; i += k) {
        arr[i] = 1;
    }

    for (ll i = l; i <= d; i += l) {
        arr[i] = 1;
    }

    for (ll i = m; i <= d; i += m) {
        arr[i] = 1;
    }


    for (ll i = n; i <= d; i += n) {
        arr[i] = 1;
    }
    ll cnt = 0;
    for (ll i = 1; i <= d; i++) {
        if (arr[i] == 1) cnt++;
    }

    cout << cnt;

    return 0;
}


