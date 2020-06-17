#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void test_case(ll n, ll k) {
    n = n + 1;
    ll a = n / 2;

    if (a <= k) {
        cout << 2 * a - 1;
    } else {
        cout << 2 * a;
    }

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n, x;
    cin >> n >> x;

    ll l;
    if (n % 2 != 0) {
        l = n / 2 + 1;
    } else {
        l = n / 2;
    }

    if (n % 2 != 0 && x == l) {
        cout << n;
        return 0;
    } else if (n % 2 == 0 && x == l) {
        cout << 2 * (x - 1) + 1;
        return 0;
    } else if (n % 2 == 0 && x < l) {
        cout << 2 * (x - 1) + 1;
        return 0;
    } else if (n % 2 == 0 && x > l) {
        cout << 2 * (x - l);
        return 0;
    } else if (n % 2 != 0 && x < l) {
        cout << 2 * (x - 1) + 1;
        return 0;
    } else {
        cout << 2 * (x - l);
        return 0;
    }

}
