#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n, m, a;
    cin >> n >> m >> a;

    ll l = n / a;
    ll w = m / a;

    if (n % a != 0) l++;
    if (m % a != 0) w++;

    cout << l * w;
    return 0;

}