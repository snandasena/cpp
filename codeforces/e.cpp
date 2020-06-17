#include<bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    string res;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != '+') {
            if (res.empty()) {
                res = s[i];
            } else {
                res = res + "+" + s[i];
            }
        }
    }

    cout << res << "\n";

    return 0;
}