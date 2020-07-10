#include<bits/stdc++.h>

using namespace std;


int main()
{
	int n; cin >> n;
	map<long long,long long> m;
	for(int i = 1; i <= n; i++){
		long long x; cin >> x;
		m[x]++;
	}
	const int mx = (int)1e5+5;
	vector<long long> dp(mx);
	dp[1] = m[1];
	long long ans = 0;
	for(long long i = 2; i <= (long long)1e5+5; i++){
		dp[i] = max(dp[i-1], dp[i-2]+m[i]*i);
		ans = max(ans, dp[i]);
	}
	cout << ans;
}
