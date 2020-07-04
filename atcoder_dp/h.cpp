#include<bits/stdc++.h>

using namespace std;


int main()
{
	int n,m;
	cin >> n >> m;
	vector<string> arr(n);
	for(int i = 0; i < n; i++) cin >> arr[i];
	int mod = (int)1e9+7;
	vector<vector<int>> dp(n, vector<int>(m));
	dp[0][0] = 1;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(i == 0 && j == 0) continue;
			if(arr[i][j] == '#') continue;
			int x = 0, y = 0;
			if(i > 0) x = dp[i-1][j];
			if(j > 0) y = dp[i][j-1];
			dp[i][j] = x%mod+y%mod;
			dp[i][j] %= mod;
		}
	}
	cout << dp[n-1][m-1];
}
