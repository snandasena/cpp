#include <bits/stdc++.h>

using namespace std;

bool A[10][10];

/**
 * Adjacency matrix
 * i/j: 1   2   3   4
 *
 * 1    0   1   0   1
 *
 * 2    1   0   1   0
 *
 * 3    0   1   0   1
 *
 * 4    1   0   1   0
 *
 */

void initialize() {
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            A[i][j] = false;
        }
    }
}

int main() {
    int x, y, nodes, edges;
    initialize();

    cin >> nodes;
    cin >> edges;

    for (int i = 0; i < edges; ++i) {
        cin >> x >> y;
        A[x][y] = true;
    }

    if (A[3][4]) {

    }

    return 0;
}