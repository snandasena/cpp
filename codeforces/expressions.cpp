#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll a, b, c;
    cin >> a >> b >> c;

    if (a != 1 && b != 1 && c != 1) {
        cout << a * b * c;
        return 0;
    }

    if (a + b + c == 3) {
        cout << 3;
        return 0;
    } else if (a + b == 2) {
        if (c == 1) {
            cout << a + b + c;
            return 0;
        } else {
            cout << (a + b) * c;
            return 0;
        }
    } else if (b + c == 2) {
        if (a == 1) {
            cout << a + b + c;
            return 0;
        } else {
            cout << a * (b + b);
            return 0;
        }
    } else if (a + c == 2) {
        cout << a + b + c;
        return 0;
    } else if (a == 1) {
        if ((a + b) * c >= a + (b * c)) {
            cout << (a + b) * c;
            return 0;
        } else {
            cout << a + (b * c);
        }

    } else if (b == 1) {
        if ((a + b) * c >= a * (b + c)) {
            cout << (a + b) * c;
            return 0;
        } else {
            cout << a * (b + c);
            return 0;
        }
    } else if (c == 1) {
        if (a * (b + c) >= (a * b) + c) {
            cout << a * (b + c);
            return 0;
        } else {
            cout << (a * b) + c;
            return 0;
        }
    } else {
        cout << a * b * c;
        return 0;
    }

}
