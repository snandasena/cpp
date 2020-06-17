#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

void sieve_eratosthenes(ll n) {

    vector<char> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = true;

    for (ll i = 2; i <= n; i++) {
        if (is_prime[i] && i * i <= n) {
            for (ll j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }

    printf("%d", is_prime[n]);

}
ll  gcd(ll a , ll b)
{
    while(b)
    {
        a %=b;
        swap(a, b);
    }

    return a;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll x;
    scanf("%lld", &x);
    sieve_eratosthenes(x);
    printf("\n");
    return 0;
}
