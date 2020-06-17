#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll  gcd(ll a , ll b)
{
    while(b)
    {
        a %=b;
        swap(a, b);
    }

    return a;

}

int main()
{
    
    ll a, b;
    cin>>a>>b;
    cout<<gcd(a,b);
    
    cout<<"\n";
    return 0;
}
