#include<bits/stdc++.h>

using namespace std;
const int mx = (int)2e5+5;
vector<int> adj[mx];
int vis[mx];
vector<int> comp;
void dfs(int cur){
	if(vis[cur]) return;
	comp.push_back(cur);
	vis[cur] = 1;
	for(int x : adj[cur]){
		dfs(x);
	}
}
int main()
{
	int n,m;
	cin >> n >> m;
	vector<int> deg(n);
	for(int i = 0; i < m; i++){
		int x, y;
		cin >> x >> y;
		adj[--x].push_back(--y);
		adj[y].push_back(x);
		deg[x]++; deg[y]++;
	}
	int ans = 0;
	for(int i =0; i < n; i++){
		if(!vis[i]){
			comp.clear();
			dfs(i);
			bool valid = 1;
			for(auto x : comp) valid &= deg[x] == 2;
			if(valid) ans++;
		}
	}
	cout << ans;
}
