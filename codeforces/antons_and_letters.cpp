#include <bits/stdc++.h>

using namespace std;
typedef long long ll;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    getline(cin, str);
    int s = 'a';
    int h = 'z';
    set<char> ch;
    for (int c : str) {
        if (c >= s && c <= h) {
            ch.insert(c);
        }
    }

    cout << ch.size();

    return 0;
}