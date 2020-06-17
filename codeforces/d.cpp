#include <bits/stdc++.h>

using namespace std;

int main() {

    string a, b;
    cin >> a >> b;

    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);

    if (string(a) < b) {
        printf("%d", -1);
    } else if (string(a) > b) {
        printf("%d", 1);
    } else {
        printf("%d", 0);
    }

    return 0;
}