#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
int main()
{
	int n; cin >> n;
	ll ans = 0;
	map<int,ll> m;
	for(int i = 1; i <= n; i++){
		int x; cin >> x;
		m[x-i] += x;
		ans = max(ans, m[x-i]);
	}
	cout << ans;
}
