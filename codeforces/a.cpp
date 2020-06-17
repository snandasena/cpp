#include<bits/stdc++.h>

using namespace std;

void findNextEligibleUsers(vector<int> arr, int n, int k) {

    if (n == 1 && arr[0] == 0) {
        printf("%d", 0);
        return;
    }
    if (arr[0] == 0 && arr[k] == 0) {
        printf("%d", 0);
        return;
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (i < k - 1 && arr[i] != 0) {
            count++;
        } else if (i >= k - 1 && arr[i] != 0 && arr[k - 1] == arr[i]) {
            count++;
        } else {
            break;
        }
    }

    printf("%d", count);

}

int main() {

    int n, k, a;
    scanf("%d %d", &n, &k);


    vector<int> input;
    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        input.push_back(a);
    }

    findNextEligibleUsers(input, n, k);

}
