#include <bits/stdc++.h>

using namespace std;

void printNumSolveCount(vector<vector<int>> arr) {

    int count = 0;
    for (auto x: arr) {
        int s = x[0] + x[1] + x[2];
        if (s >= 2) {
            count++;
        }
    }

    printf("%d", count);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    scanf("%d", &n);

    vector<vector<int>> v;
    int a, b, c;
    for (int i = 0; i < n; i++) {
        scanf("%d %d %d", &a, &b, &c);
        vector<int> in = {a, b, c};
        v.push_back(in);

    }

    printNumSolveCount(v);

    return 0;
}