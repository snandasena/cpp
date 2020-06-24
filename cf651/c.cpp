#include <bits/stdc++.h>

using namespace std;
using ld = long double;
using ll = unsigned long long;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;

    while (t--) {
        ll x;
        cin >> x;
        ll i = x;
        ll k = 0;
        for (; i > 1;) {
            if (i % 3 != 0) {
                i--;
            } else {
                i /= 3;
            }
            k++;
        }

        if (k % 2 == 0) {
            cout << "FastestFinger\n";
        } else {
            cout << "Ashishgup\n";

        }
    }
    return 0;
}