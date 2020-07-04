#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
int main()
{
	ll n,W; cin >> n >> W;
	vector<ll> s(n+1), v(n+1);
	for(int i = 1; i <= n; i++) cin >> s[i] >> v[i];

	vector<vector<ll>> dp(n+1, vector<ll>(W+1));

	for(int i = 1; i <= n; i++){
		for(int j = 0; j <= W; j++){
			ll x = 0, y = 0;
			x = dp[i-1][j];
			if(j >= s[i]) y = dp[i-1][j-s[i]]+v[i];
			dp[i][j] = max(x,y);
		}
	}
	cout << dp[n][W];
}
