#include <bits/stdc++.h>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int steps = 0;
    if (n <= 5) {
        cout << 1;
        return 0;
    } else {
        steps = n / 5;
        if (steps * 5 != n) {
            steps++;
        }
        cout << steps;
    }

    return 0;
}