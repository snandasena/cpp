#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


pair<ll, ll> fib(ll n)
{
    if(n== 0) 
        return {0 , 1};

    auto p = fib(n>>1);
    ll c = p.first * ( 2 * p.second - p.first );
    ll d = p.first * p.first + p.second * p.second;
   
    if( n & 1 )
       return {d, c+d};

    else
       return {c, d};
    
}

int main()
{
    ll n;
    scanf("%lld" ,&n);
    cout<<fib(n).first<<"\n";
    
    return 0;
}
