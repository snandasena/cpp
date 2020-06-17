#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        for (int i = 0; i < s.length() - 1; i += 2) {
            cout << s[i];
        }
        cout << s[s.length() - 1];
        cout << "\n";
    }

    return 0;
}