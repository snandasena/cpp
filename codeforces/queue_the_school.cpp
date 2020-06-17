#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b;
    string s;

    cin>>a>>b;
    cin>>s;

    while(b != 0)
    {
        for(int i=0; i<a; i++)
        {
            if(i < a-1 && s[i] == 'B' &&  s[i+1] =='G')
            {
                s[i+1] = 'B';
                s[i] = 'G';
                    
            }
        }

        b--;
    }   

    cout<<s;
    return 0;
}

