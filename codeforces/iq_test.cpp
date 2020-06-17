#include <bits/stdc++.h>
#include <map>

using namespace std;
typedef long long ll;
int arr[101];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int i = 0;
    int lc = 0;
    int tc = 0;
    while (n--) {
        int k;
        cin >> k;
        i++;
        if (k % 2 == 1) {
            lc++;
            arr[i] = 1;
        } else {
            tc++;
            arr[i] = 0;
        }
    }

    if (lc > tc) {
        for (int j = 1; j <= 100; j++) {
            if (arr[j] != 1) {
                cout << j;
                return 0;
            }
        }
    } else {
        for (int j = 1; j <= 100; j++) {
            if (arr[j] != 0) {
                cout << j;
                return 0;
            }
        }
    }
    return 0;
}
