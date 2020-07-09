#include<bits/stdc++.h>

using namespace std;


int main()
{
	int n,a,b,c;
	cin >> n >> a >> b >> c;
	vector<int> dp(n+1);
	dp[0] = 0;
	for(int i = 1; i <= n; i++) dp[i] = INT_MIN;
	for(int i = 1; i <= n; i++){
		for(int j : {a,b,c}){
			if(i >= j) dp[i] = max(dp[i], dp[i-j]+1);
		}
	}
	cout << dp[n];
}
