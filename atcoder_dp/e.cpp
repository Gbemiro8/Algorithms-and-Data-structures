#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
int main()
{
	/* similar to the previous question but higher constraints
	 * W <= 10^9 n <= 100, v <= 10^3, s <= W
	 * approach
	 * for a particular value find the minimum weight required to make the value and check if it is smaller than W.
	 */
	ll n,W; cin >> n >> W;
	vector<ll> s(n+1), v(n+1);
	for(int i = 1; i < n+1; i++) cin >> s[i] >> v[i];
	
	const ll mx = (ll)1e5+1;
	ll ans = 0;
	vector<vector<ll>> dp(mx, vector<ll>(n+1));
	for(int i = 0; i < mx; i++){
		for(int j = 0; j <= n; j++) dp[i][j] = INT_MAX;
	}
	dp[0][0] = 0;
	for(ll i = 0; i < mx; i++){
		for(int j = 1; j <= n; j++){
			ll x = INT_MAX;
			if(i >= v[j]) x = dp[i-v[j]][j-1]+s[j];
			dp[i][j] = min(x, dp[i][j-1]);
			
			if(dp[i][j] <= W) ans = i;
		}
	}
	cout << ans;
}
