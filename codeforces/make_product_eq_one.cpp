#include <bits/stdc++.h>

using namespace std;
using ld = long double;
using ll = unsigned long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll n;
    cin >> n;
    ll mn, zo, sum;
    mn = zo = sum = 0;
    int x;
    for (ll i = 0; i < n; i++) {
        cin >> x;

        if (x < 0) {
            sum += (-1 - x);
            mn++;
        } else if (x > 0) {
            sum += (x - 1);
        } else {
            zo++;
        }
    }

    if (zo > 0) {
        sum += zo;
    } else if (mn % 2 != 0) {
        sum += 2;
    }
    cout << sum;
    return 0;
}