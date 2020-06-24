#include <bits/stdc++.h>

using namespace std;
using ld = long double;
using ll = unsigned long long;
#define end "\n"


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t, a;
    cin >> t;
    while (t--) {
        cin >> a;
        vector<int> v;
        for (int i = a, j = 1; i >= 1; i /= 10) {
            if (i % 10 != 0) {
                v.push_back((i % 10) * j);
            }
            j *= 10;
        }

        cout << v.size() << end;
        for (int i : v) {
            cout << i << " ";
        }
        cout << end;

    }

    return 0;
}
