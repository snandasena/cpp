#include <bits/stdc++.h>
#include <map>

using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int i = 0;
    set<ll> vals;
    while (i != 4) {
        ll x;
        cin >> x;
        vals.insert(x);
        i++;
    }

    cout << 4 - vals.size();
    return 0;
}
