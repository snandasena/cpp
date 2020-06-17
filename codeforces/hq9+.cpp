#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

set<char> vals = {'H', 'Q', '9'};

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);
	string s;
	cin >> s;

	for(char c: s)
	{
		if(vals.count(c) != 0)
		{
			cout<<"YES";
			return 0;
		}
	}	
	
	cout<<"NO";
    return 0;
}
