#include<bits/stdc++.h>

using namespace std;


int main()
{
	int n; cin >>n;
	int arr[n];
	for(int i = 0; i < n; i++){
		int x; cin >> x;
		if(x < 0) arr[i] = -1;
		else arr[i] = 1;
	}
	long long dp[n][2];
	if(arr[0] < 0){
		dp[0][0] = 1;
		dp[0][1] = 0;
	}
	else{
		dp[0][0] = 0;
		dp[0][1] = 1;
	}
	for(int i = 1; i < n; i++){
		if(arr[i] < 0){
			dp[i][0] = dp[i-1][1]+1;
			dp[i][1] = dp[i-1][0];
		} else{
			dp[i][0] = dp[i-1][0];
			dp[i][1] = 1+dp[i-1][1];
		}
	}
	long long neg = 0, pos = 0;
	for(int i = 0; i < n; i++){
		neg += dp[i][0]; pos += dp[i][1];
	}
	cout << neg << " " << pos;
}
