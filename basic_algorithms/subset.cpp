#include <bits/stdc++.h>

using namespace std;

int main() {

    int n = 100;

    printf("%d \n", 1 << n);


    for (int i = 0; i < 16; i++) {
        printf("%d  ", i & 16);
    }
    printf("\n");

    for (int b = 0; b < (1 << n); b++) {
        for (int i = 0; i < n; i++) {
            printf("%d  ", b & (1 << n));
        }
    }

};