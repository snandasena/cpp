#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n;
    cin >> n;
    if (n > 0) {
        cout << n;
    } else {
        ll a = n / 10;
        ll b = (n / 100 * 10) + (n % 10);
        cout << max(a, b);
    }

    return 0;
}
