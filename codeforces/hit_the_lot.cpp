#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll n;
    cin >> n;
    ll ans = 0;

    ans += n / 100;
    n = n % 100;
    ans += n / 20;
    n = n % 20;
    ans += n / 10;
    n = n % 10;
    ans += n / 5;
    ans += n % 5;
    cout << ans;

    return 0;
}
