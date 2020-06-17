#include <bits/stdc++.h>

using namespace std;

int main() {

    vector<int> v = {2, 1, 5, 6, 7, 8, 9, 123};

    make_heap(v.begin(), v.end());

    printf("%d", v.back());

    return 0;
}