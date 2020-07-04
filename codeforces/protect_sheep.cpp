#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

char grid[502][502];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int r, c;
    cin >> r >> c;
    for (int i = 1; i <= r; i++) {
        cin >> grid[i]+1;
    }

    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= c; j++) {
            if (grid[i][j] == 'W') {
                if (grid[i + 1][j] == 'S' || grid[i - 1][j] == 'S' || grid[i][j - 1] == 'S' || grid[i][j + 1] == 'S') {
                    cout << "No";
                    return 0;
                }
            }
        }
    }

    cout << "Yes\n";

    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= c; j++) {
            if (grid[i][j] == '.') cout << "D";
            else cout << grid[i][j];
        }
        cout << "\n";
    }


    return 0;
}
