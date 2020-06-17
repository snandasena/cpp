#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll gcd(ll a , ll b)
{
    if(!a ||  !b)
        return a | b;
    unsigned shift = __builtin_ctz(a|b);
    a >>= __builtin_ctz(b);
    do{
    	b>>= __builtin_ctz(b);
    	if(a > b)
    		swap(a,b);
    	
    	b -=a;
    }while(b);
    
    return a<<shift;

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    ll x,y;
    scanf("%lld %lld", &x, &y);
    printf("%lld\n", gcd(x, y));

    cout<<"\n";
    return 0;
}
