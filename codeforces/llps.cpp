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
    cin >> s;
    for (int i = 0; i < s.length(); i++)
        d[s[i]]++;

    for (int i = 255; i > 0; i--)
        if (d[i]) {
            for (int j = 0; j < d[i]; j++)
                cout << (char) i;
            break;
        };

    return 0;
}