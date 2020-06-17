#include<bits/stdc++.h>

using namespace std;

void generatePermutations(int n) {
    vector<int> permutation;

    for (int i = 0; i < n; i++) {
        permutation.push_back(i);
    }

    do {
        for (int x: permutation) {
            printf("%d ", x);
        }
        printf("\n");
    } while (next_permutation(permutation.begin(), permutation.end()));

}

int main() {

    generatePermutations(3);

    return 0;
}