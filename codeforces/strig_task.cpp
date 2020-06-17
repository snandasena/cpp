#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

const set<char> vols = {'A', 'a', 'O', 'o', 'Y', 'y', 'U', 'u', 'i', 'I', 'e', 'E'};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    vector<char> ans;

    for (int i = 0; i < s.length(); i++) {
        if (vols.count(s[i]) ==0) {
            ans.push_back('.');
            char c = (char) tolower(s[i]);
            ans.push_back(c);
        }
    }

    for (char c: ans) {
        cout << c;
    }

    return 0;

}