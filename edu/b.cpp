#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

bool sieve_eratosthenes(ll n) {
    vector<char> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = true;

    for (ll i = 2; i <= n; i++) {
        if (is_prime[i] && i * i <= n) {
            for (ll j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }

    return is_prime[n];

}

ll gcd(ll a, ll b) {
    while (b) {
        a %= b;
        swap(a, b);
    }

    return a;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    vector<int> v1;
    vector<int> v2;


    ll n;
    cin >> n;
    while (n--) {
        ll x;
        cin >> x;

        if (x % 2 == 0) {

            bool dw = false;
            ll l = -1;
            for (ll d = 2; d < x; d++) {
                if (x % d == 0 && gcd(2 + d, x) == 1) {
                    l = d;
                    dw = true;
                    break;
                }
            }

            if (dw) {
                v1.push_back(2);
                v2.push_back(l);

            } else {
                v1.push_back(-1);
                v2.push_back(-1);
            }

        } else {
            bool dw = false;
            ll l = -1;
            for (ll d = 2; d < x; d++) {
                if (x % d == 0 && gcd(3 + d, x) == 1) {
                    dw = true;
                    l = d;
                    break;
                }
            }
            if (dw) {
                v1.push_back(3);
                v2.push_back(l);

            } else {
                v1.push_back(-1);
                v2.push_back(-1);
            }

        }
    }
    for (int i : v1) {
        cout << i << " ";
    }
    cout << "\n";
    for (int i : v2) {
        cout << i << " ";
    }
    return 0;
}