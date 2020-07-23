#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
	int n; cin >> n;
	ll arr[n+1];
	map<ll,int> m;
	for(int i = 1; i <= n; i++){
		cin >> arr[i];
		m[arr[i]] = i;
	}
	vector<int> vis(n+1);
	map<int,int> face;
	for(int i = 1; i <= n; i++){
		if(vis[i]) continue;
		queue<int> q;
		q.push(i);
		while(!q.empty()){
			int s = q.front(); q.pop();
			if(vis[s]) continue;
			vis[s] = 1;
			ll val = arr[s];
			if(m[val*2]){
				face[s] = m[val*2];
				q.push(m[val*2]);
			}else if(val%3 == 0 && m[val/3]){
				face[s] = m[val/3];
				q.push(m[val/3]);
			}
		}
	}
	int root;
	map<int,int> bad;
	for(auto it : face) bad[it.second] = 1;
	for(int i = 1; i <= n; i++){
		if(bad[i]) continue;
		root = i;
	}
	while(root){
		cout << arr[root] << " ";
		root = face[root];
	}
}
