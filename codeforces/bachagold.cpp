#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n;
    cin >> n;
    cout << n / 2 << "\n";
    if (n % 2 == 1) {
        cout << "3 ";
        n -= 3;
    }

    while (n > 0) {
        n -= 2;
        cout << "2 ";
    }

    return 0;
}
