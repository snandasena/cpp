#include<bits/stdc++.h>

using namespace std;

const int N=5;
vector<int> g[N];
vector<bool> visited;

void dfs(int v)
{
	if(visited[v])
	{
		return;
	}
	
	visited[v] = true;
	
	for(auto &u: g[v]){
		dfs(u);
	}

}
