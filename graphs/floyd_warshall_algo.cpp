#include <bits/stdc++.h>

using namespace std;

const int N = 5;
int dist[N + 1][N + 1];
int adj[N + 1][N + 1];

void floydWarshall() {
    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= N; ++j) {
            if (i == j) dist[i][j] = 0;
            else if (adj[i][j]) dist[i][j] = adj[i][j];
            else dist[i][j] = INFINITY;
        }
    }

    for (int k = 1; k <= N; ++k) {
        for (int i = 1; i <= N; ++i) {
            for (int j = 1; j <= N; ++j) {
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }
}

int main() {

    adj[1][1] = 0;
    adj[1][2] = 5;
    adj[1][3] = 0;
    adj[1][4] = 9;
    adj[1][5] = 1;

    adj[2][1] = 5;
    adj[2][2] = 0;
    adj[2][3] = 2;
    adj[2][3] = 0;
    adj[2][5] = 0;

    adj[3][1] = 0;
    adj[3][2] = 2;
    adj[3][3] = 0;
    adj[3][4] = 7;
    adj[3][5] = 0;

    adj[4][1] = 9;
    adj[4][2] = 0;
    adj[4][3] = 7;
    adj[4][4] = 0;
    adj[4][5] = 2;

    adj[5][1] = 1;
    adj[5][2] = 0;
    adj[5][3] = 0;
    adj[5][4] = 2;
    adj[5][5] = 0;


    floydWarshall();
    cout << dist[1][3];


    return 0;
}