#include <bits/stdc++.h>
#include <map>

using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    unordered_map<string, int> keys;
    ll n;
    cin >> n;
    while (n--) {
        string x;
        cin >> x;
        int i = keys[x]++;
        if (!i) {
            cout << "OK\n";
        } else {
            cout << x << i << "\n";
        }
    }
    return 0;
}

