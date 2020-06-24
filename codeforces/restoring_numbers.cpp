#include <bits/stdc++.h>

using namespace std;
using ld = long double;
using ll = unsigned long long;
#define end "\n"

bool is_prime(ll x) {
    for (ll d = 2; d * d <= x; d++) {
        if (x % d == 0) return false;
    }
    return true;
}

ll arr[4];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
    sort(arr, arr + 4);

    cout << arr[3] - arr[2] << " " << arr[3] - arr[1] << " " << arr[3] - arr[0];

    return 0;
}
