#include<bits/stdc++.h>

using namespace std;


int main()
{
	int n; cin >> n;
	int a[n],b[n],c[n];
	for(int i = 0;i < n; i++){
		cin >> a[i] >> b[i] >> c[i];
	}
	int dp[n+1][3];
	for(int i = 0; i < 3; i++) dp[0][i] = 0;
	for(int i = 1; i <= n; i++){
		dp[i][0] = max(dp[i-1][1], dp[i-1][2])+a[i-1];
		dp[i][1] = max(dp[i-1][0], dp[i-1][2])+b[i-1];
		dp[i][2] = max(dp[i-1][0], dp[i-1][1])+c[i-1];
	}
	int ans = 0;
	for(int x : dp[n]) ans = max(ans, x);
	cout << ans;
}
