#include <bits/stdc++.h>

using namespace std;
typedef long long ll;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;

    auto len = (int) s.length();

    if (len <= 4) {
        cout << "NO";
        return 0;
    }

    stack<char> hello;

    int lc = 0;
    for (char c : s) {
        if (c == 'h' && hello.empty()) {
            hello.push(c);
        } else if (c == 'e' && !hello.empty() && hello.top() == 'h') {
            hello.push(c);
        } else if (c == 'l' && !hello.empty() && lc <= 1 && (hello.top() == 'e' || hello.top() == 'l')) {
            hello.push(c);
            lc++;
        } else if (c == 'o' && !hello.empty() && lc == 2 && hello.top() == 'l') {
            hello.push(c);
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";

    return 0;
}