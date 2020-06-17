#include <bits/stdc++.h>

using namespace std;
typedef long long ll;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin >> n;

    for (int i = 4; i <= n; i++) {
        ll x = i;
        int lucky = 1;
        while (x) {
            if (x % 10 != 4 && x % 10 != 7) {
                lucky--;
                break;
            }
            x /= 10;
        }
        if (lucky && n % i == 0) {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
    return 0;
}