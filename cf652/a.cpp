#include <bits/stdc++.h>

using namespace std;
using ld = long double;
using ll = unsigned long long;
#define end "\n"


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    ll n;
    cin >> t;
    while (t--) {
        cin >> n;
        if (n % 2 != 0) cout << "NO" << end;
        else {
            if (n % 4 == 0) {
                cout << "YES" << end;
            } else {
                cout << "NO" << end;
            }
        }
    }

    return 0;
}
