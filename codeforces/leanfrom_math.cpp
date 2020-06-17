#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    scanf("%d", &n);
    if (n % 2 == 0) printf("%d %d", 4, n - 4);
    else printf("%d %d", 9, n - 9);
    return 0;
}
