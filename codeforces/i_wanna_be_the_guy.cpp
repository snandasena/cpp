#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int vals[101];

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int l;
    cin >> l;

    int x;
    cin >> x;
    while (x--) {
        int a;
        cin >> a;
        vals[a] = a;
    }

    cin >> x;
    while (x--) {
        int a;
        cin >> a;
        vals[a] = a;
    }
    for (int i = 1; i <= l; i++) {
        if (i != vals[i]) {
            cout << "Oh, my keyboard!";
            return 0;
        }
    }
    cout << "I become the guy.";

    return 0;
}
