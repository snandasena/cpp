#include <bits/stdc++.h>

using namespace std;
typedef long long ll;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    while (n--) {
        int x;
        cin >> x;
        if (x == 1) {
            cout << -1;
        } else {
            int arr[x];
            arr[0] = 2;
            for (int i = 1; i < x; i++) {
                arr[i] = 3;
            }
            for (int i = 0; i < x; i++) {
                cout << arr[i];
            }
        }
        cout << "\n";
    }

    return 0;
}