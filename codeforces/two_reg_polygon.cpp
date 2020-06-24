#include <bits/stdc++.h>

using namespace std;
using ld = long double;
using ll = unsigned long long;
int d[256];
string s;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        if (n % m == 0) cout << "YES\n";
        else cout << "NO\n";

    }
    return 0;
}