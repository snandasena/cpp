#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s = "bonjac";
    cin >> s;
    int c = s[0];
    if (c >= 97 && c <= 122) {
        c -= 32;
    }
    s[0] = char(c);
    cout << s;

    return 0;
}