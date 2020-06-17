#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int num ;
    scanf("%d", &num);
    int clz = 0;
    int ctz = 0;
    int pop = 0;
    int parity = 0;

    pop = __builtin_popcount(num);
    printf("popcount num[%d] : %d\n", num,pop);
    parity = __builtin_parity(num);
    printf("parity num[%d] : %d\n", num,parity);
    clz = __builtin_clz(num);
    printf("clz num[%d] : %d\n", num, clz);
    ctz = __builtin_ctz(num);
    printf("ctz num[%d] : %d\n", num, ctz);

    cout<<"\n";
    return 0;
}
