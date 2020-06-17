#include <bits/stdc++.h>

using namespace std;

const int n = 4;
int c = 0;
int column[4] = {0};
int diag1[8] = {0};
int diag2[8] = {0};

void search(int y, int board[n][n]) {
    if (y == n) {
        c++;
        return;
    }

    for (int x = 0; x < n; x++) {
        if (column[x] || diag1[x + y] || diag2[x - y + n - 1]) {
            continue;
        }

        column[x] = diag1[x + y] = diag2[x - y + n - 1] = 1;
        board[x][y] = 1;
        search(y + 1, board);
        column[x] = diag1[x + y] = diag2[x - y + n - 1] = 0;
        board[x][y] = 0;
    }
}


int main() {
    int board[n][n] = {{0, 0, 0, 0},
                       {0, 0, 0, 0},
                       {0, 0, 0, 0},
                       {0, 0, 0, 0}};

    search(0, board);
    printf("%d", c);
    printf("\n");

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", board[i][j]);
        }

        printf("\n");
    }

    return 0;
}