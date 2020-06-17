#include<bits/stdc++.h>

using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    string s;

    cin >> n >> s;

    char prev = 0;
    int min = 0;
    for (char c : s) {
        if (prev == 0) {
            prev = c;
        } else {
            if (prev == c) {
                min++;
            } else {
                prev = c;
            }
        }
    }

    cout << min;

    return 0;
}