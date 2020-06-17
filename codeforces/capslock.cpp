#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    vector<char> str;
    ll al = 0;
    ll lc = 0;
    for (char i : s) {
        if (isupper(i)) {
            al++;
        } else {
            lc++;
        }
    }

    if (al == s.length()) {
        for (char x: s) {
            cout << (char) tolower(x);
        }
        return 0;
    } else if (islower(s[0]) && lc == 1) {
        cout << (char) toupper(s[0]);
        for (int i = 1; i < s.length(); i++) {
            cout << (char) tolower(s[i]);
        }

        return 0;
    } else {
        cout << s;
        return 0;
    }

}
