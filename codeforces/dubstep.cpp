#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    ll i = 0;
    vector<char> words;
    int flag = 1;
    while (i != s.length()) {
        if (i < s.length() - 2 && s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B') {
            i += 3;
            if (!flag && i != s.length()) {
                cout << " ";
                flag = 1;
            }
        } else {
            cout << s[i];
            i++;
            flag = 0;
        }
    }

    return 0;
}
