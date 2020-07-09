#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n; cin >> n;
	int arr[n+1]; arr[0] = 0;
	for(int i = 1; i <= n; i++) cin >> arr[i];
	for(int i = 2; i <=n; i++) arr[i] ^= arr[i-1];
	long long ans = 0;
	const int mx = (int)3e7+1;
	//vector<vector<int>> dp(n+1, vector<int>(mx));
	map<pair<int,int>,int> m;
	//for(int i = 1; i <= n; i++) dp[i][0] = 1;
	for(int i = 0; i <= n; i++){
		int tmp = arr[i];
		//ans += dp[i][tmp];
		ans += m[{i,tmp}];
		for(int j = i; j <= n; j+= 2){
			//dp[j][tmp]++;
			m[{j,tmp}]++;
		}
	}
	cout << ans;
}
