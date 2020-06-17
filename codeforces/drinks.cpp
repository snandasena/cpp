#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n;
    cin >> n;
    ll t = n;
    double fact = 0;
    while (n--) {
        double x;
        cin >> x;
        if (x != 0 && fact == 0) {
            fact = x / 100;
        } else {
            fact = fact + (x / 100);
        }
    }

    cout << (fact / t) * 100.0;


    return 0;
}


