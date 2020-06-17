#include<bits/stdc++.h>

using namespace std;

int findUnionCount(vector<int> arr1, vector<int> arr2) {
    sort(arr1.begin(), arr1.end());

    sort(arr2.begin(), arr2.end());

    int n = arr1.size();
    int m = arr2.size();
    int k = max(n, m);
    int count = 0;
    int j = 0;
    for (int i = 0; i < k; i++) {
        if (k == n) {
            if (arr1[i] == arr2[j]) {
                count++;
                j++;
            } else if (arr1[i] > arr2[j]) {
                j++;
            }
        } else {
            if (arr2[i] == arr1[j]) {
                count++;
                j++;
            } else if (arr2[i] > arr1[j]) {
                j++;
            }
        }
    }
    return count;
}


int main() {
    vector<int> v1 = {50, 2, 8, 9, 4};
    vector<int> v2 = {3, 2, 9, 50   };

    printf("%d\n", findUnionCount(v1, v2));
    return 0;

}
