#include<bits/stdc++.h>

using namespace std;

// 1 1 2 3 5 
typedef long long ll;

ll test_func(ll n) // n == 100
{
    if (n == 0 || n == 1) return 1;
	else{
		return test_func(n-2)+test_func(n-1);
	}
    

}

ll test_opt(ll n) {
    ll dp[n];
    dp[0] = 1;
    dp[1] = 1;
    for (ll i = 2; i <= n ; i++) {
        dp[i] = dp[i - 1] + dp[i-2];
    }

    return dp[n];
}

// 20365011074sajith@sajith

// -2^32 - 2^32 -1

int main() {

    cout << test_opt(50) << "\n";
    cout << test_func(50);
    return 0;
}












