#include<bits/stdc++.h>

using namespace std;


int main()
{
	int n,m;
	cin >> n >>m;
	vector<int> adj[n];
	for(int i = 0; i < m; i++){
		int x,y;
		cin >> x >> y;
		adj[--x].push_back(--y);
	}
	int vis[n]; memset(vis, 0, sizeof(vis));
	int d[n]; memset(d, 0, sizeof(d));
	int ans = 0;
	for(int i = 0; i < n; i++){
		if(vis[i]) continue;
		queue<int> q;
		d[i] = 0;
		vis[i] = 1;
		q.push(i);
		while(!q.empty()){
			int s = q.front(); q.pop();
			for(int u : adj[s]){
				//if(vis[u]) continue;
				vis[u] = 1;
				d[u] = d[s]+1;
				ans = max(ans, d[u]);
				q.push(u);
			}
		}
	}
	cout << ans;
}
