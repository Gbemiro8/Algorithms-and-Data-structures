#include<bits/stdc++.h>

using namespace std;


int main()
{
	int n; cin >> n;
	vector<int> arr(n+1);
	for(int i = 1; i <= n; i++) cin >> arr[i];
	int dp[n+1][3];
	for(int i = 0; i <= n; i++){
		for(int j = 0; j < 3; j++){
			dp[i][j] = 150;
		}
	}
	for(int i = 0; i < 3; i++) dp[0][i] = 0;
	for(int i = 1; i <= n; i++){
		if(arr[i] == 0){
			for(int j = 0; j < 3; j++){
				dp[i][0] = min(dp[i][0], dp[i-1][j]+1);
			}
		}
		else if(arr[i] == 1){
			for(int j = 0; j < 3; j++){
				if(j == 1) continue;
				dp[i][1] = min(dp[i][1], dp[i-1][j]);
			}
			for(int j = 0; j < 3; j++){
				dp[i][0] = min(dp[i][0], dp[i-1][j]+1);
			}
		}
		else if(arr[i] == 2){
			for(int j = 0; j < 3; j++){
				if(j == 2) continue;
				dp[i][2] = min(dp[i][2], dp[i-1][j]);
			}
			for(int j = 0; j < 3; j++){
				dp[i][0] = min(dp[i][0], dp[i-1][j]+1);
			}
		}
		else if(arr[i] == 3){
			for(int j = 0; j < 3; j++){
				if(j == 1) continue;
				dp[i][1] = min(dp[i][1], dp[i-1][j]);
			}
			for(int j = 0; j < 3; j++){
				if(j == 2) continue;
				dp[i][2] = min(dp[i][2], dp[i-1][j]);
			}
			for(int j = 0; j < 3; j++){
				dp[i][0] = min(dp[i][0], dp[i-1][j]+1);
			}
		}
	}
	int ans = 150;
	for(int x : dp[n]) ans = min(ans, x);
	cout << ans;
}
